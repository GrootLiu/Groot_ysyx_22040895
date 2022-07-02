#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

#include <cpu/decode.h>
#include <memory/vaddr.h>

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
/**
 * @description: return a string for parsing
 * @return {string:line_read}
 * @use: 
 */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

/**
 * @description: process c command
 * @param {char} *args
 * @return {0}
 * @use: continue the execution of the program
 */
static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}

/**
 * @description: process q comand
 * @param {char} *args
 * @return {-1}
 * @use: exit 
 */
static int cmd_q(char *args) {
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args);

static int cmd_info(char *args);

static int cmd_scan(char *args);

// 还不懂
static struct {
  const char *name;
  const char *description;
  /* the following statement is a function pointer,
     points a function which name is 'char *'
   */
  int (*handler) (char *);
}cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },

  /* TODO: Add more commands */
  { "si", "si [N]: Let the program step through N instructions and pause execution. When N is not given, it defaults to 1", cmd_si},
  { "info", "Print register status or Print monitor point information", cmd_info},
  { "x", "x N EXPR: Calculate the value of the expression EXPR, use the result as the starting meemory address, then output consecutive N 4-bytes in hexadecimal form", cmd_scan}
};

// 我猜ARRLEN返回cmd_table的长度
#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  /* 
   *the first attribute of func(strtok) is NULL because it isn't the first call of strtok
   *the second attibute of func(strtok) is 'space' because the parsing string shoud be delimted by 'space'
  */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

static int cmd_si(char *args)
{
  char *arg = strtok(NULL, " ");
  int N = atoi(arg);
  if (arg == NULL)
    /* no N was given */
  {
    N = 1;
  }
  else
  {
    cpu_exec(N);
  }  
  return 0;
}

static int cmd_info(char *args)
{
  char *arg = strtok(NULL, " ");
  if (strcmp(arg, "r") == 0)
  {
    isa_reg_display();
  }
  else if (strcmp(arg, "w") == 0)
  {
    /* code */
  } 
  return 0;
}

static int cmd_scan(char *args)
{
  char *arg1 = strtok(NULL, " ");
  char * arg2 = strtok(NULL, " ");
  if (arg1 == NULL || arg2 == NULL)
  {
    return -1;
  }
  int N = atoi(arg1);
  
  vaddr_t addr = atoi(arg2);
  vaddr_read(addr, N);

  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

/**
 * @description: main fuction
 * @return {*}
 * @use: 
 */
void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  /*  if the str obtaineed in the following for loop is not empty, 
   *  the loop will always be excuted 
  */
  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);
    // printf("%s\n,")

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    /* cal each cmd_x function from here */
    int i;
    for (i = 0; i < NR_CMD; i ++) {
      /*if s1 and s2 are equal, excute the following if */
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        /* if the return number less than 0,
         * the for loop will be stopped
         */
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
