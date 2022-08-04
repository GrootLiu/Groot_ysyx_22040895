/*
 * @Author: Groot
 * @Date: 2022-07-30 10:42:13
 * @LastEditTime: 2022-08-03 15:43:36
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/nemu/src/monitor/ftrace.c
 * 版权声明
 */
/*
 * @Author: Groot
 * @Date: 2022-07-07 22:24:03
 * @LastEditTime: 2022-07-29 22:43:44
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/test.c
 * 版权声明
 */
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <string.h>
#include <assert.h>
typedef struct Symtab_info
{
  Elf64_Addr strtab_offset;
  Elf64_Addr symtab_offset;
  Elf64_Addr symtab_size;
  char filename[128];
} Symtab_info;

Symtab_info symtab_info;

Symtab_info *parse_elf(char *filename, Symtab_info *symtab_info)
{
  FILE *fp = fopen(filename, "r");
  if (fp == NULL)
  {
    printf("Elf file open error!\n");
  }
  strcpy(symtab_info->filename, filename);
  Elf64_Ehdr elf_head;
  if (fread(&elf_head, sizeof(Elf64_Ehdr), 1, fp) == 0)
  {
    printf("Read elf file error!\n");
  }
  if (elf_head.e_ident[0] != 0x7F || elf_head.e_ident[1] != 'E' || elf_head.e_ident[2] != 'L' || elf_head.e_ident[3] != 'F')
  {
    printf("The file is not elf file!\n");
  }

  Elf64_Shdr *shdr = (Elf64_Shdr *)malloc(sizeof(Elf64_Shdr) * elf_head.e_shnum);
  if (shdr == NULL)
  {
    printf("Section header malloc failed!\n");
  }
  if (fseek(fp, elf_head.e_shoff, SEEK_SET) != 0)
  {
    printf("Section header fseek error!\n");
  }
  if (fread(shdr, sizeof(Elf64_Shdr) * elf_head.e_shnum, 1, fp) == 0)
  {
    printf("Read section error!\n");
  }
  rewind(fp);
  if (fseek(fp, shdr[elf_head.e_shstrndx].sh_offset, SEEK_SET) != 0)
  {
    printf("Section header string table fseek error!\n");
  }
  char shstrtab[shdr[elf_head.e_shstrndx].sh_size];
  if (fread(shstrtab, shdr[elf_head.e_shstrndx].sh_size, 1, fp) == 0)
  {
    printf("Read section string table error!\n");
  }

  for (int shnum = 0; shnum < elf_head.e_shnum; shnum++)
  {
    char *temp = shstrtab;
    temp = temp + shdr[shnum].sh_name;
    if (memcmp(temp, ".symtab", 7) == 0)
    {
      symtab_info->symtab_offset = shdr[shnum].sh_addr + shdr[shnum].sh_offset;
      symtab_info->symtab_size = shdr[shnum].sh_size;
    }
    if (memcmp(temp, ".strtab", 7) == 0)
    {
      symtab_info->strtab_offset = shdr[shnum].sh_addr + shdr[shnum].sh_offset;
    }
  }
  free(shdr);
  fclose(fp);
  shdr = NULL;
  fp = NULL;
  return symtab_info;
}

char *find_func(char *func_name, long int pc)
{
  FILE *fp = fopen(symtab_info.filename, "r");
  fseek(fp, symtab_info.symtab_offset, SEEK_SET);
  for (int i = 0; i < symtab_info.symtab_size / sizeof(Elf64_Sym); i++)
  {
    Elf64_Sym *sym = (Elf64_Sym *)malloc(sizeof(Elf64_Sym));
    assert(fread(sym, sizeof(Elf64_Sym), 1, fp));
    if (ELF64_ST_TYPE(sym->st_info) == STT_FUNC)
    {
      if (pc >= sym->st_value && pc < sym->st_value + sym->st_size)
      {
        int i;
        for (i=0;; i++)
        {
          char *c = (char *)malloc(sizeof(char));
          fseek(fp, symtab_info.strtab_offset + sym->st_name + i, SEEK_SET);
          if (fread(c, sizeof(char), 1, fp) == 0)
          {
            printf("Read symbol table error!\n");
          }
          if (*c == 0x00)
          {
            break;
          }
          func_name[i] = *c;
        }
        func_name[i] = '\0';
      }
    }
    free(sym);
  }
  fclose(fp);
  fp = NULL;
  return func_name;
}

int init_elf(char *filename)
{
  parse_elf(filename, &symtab_info);
  return 0;
}
