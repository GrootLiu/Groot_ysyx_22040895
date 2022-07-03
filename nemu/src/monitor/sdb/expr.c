#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

#include <assert.h>
// #include <stack.c>

#include <stdio.h>
#include <malloc.h>

#define STACK_INT_SIZE 100
#define STACKINCREMENT 10
#define SElemType char

typedef struct
{
  /* stack base address */
  SElemType *base;
  /* stack top address */
  SElemType *top;
  int stacksize;
} SqStack;

bool InitStack(SqStack *S);
char GetTop(SqStack S);
bool Push(SqStack *S, SElemType e);
bool Pop(SqStack *S);
bool IsEmpty(SqStack S);

/*
 * token_type is an integer,
 * we must ensure the integers corresponding to different types of token are not the same
 * the begining of tokens' number is 256
 * LP: Left parenthesis
 * RP: Right parenthsis
 */
enum
{
  TK_NOTYPE = 256,
  TK_EQ,
  TK_LP,
  TK_RP,
  TK_NUM
  // TK_PLUS, TK_SUB, TK_MULT, TK_DIV,

  /* TODO: Add more token types */

};

/**
 * @description: in the framework code,
 *               a rule is a 2-tuple consisting of a regular expression and a token type
 *               rule = regex + token
 * @return {*}
 * @use:
 */
static struct rule
{
  const char *regex;
  int token_type;
} rules[] = {

    /* TODO: Add more rules.
     * Pay attention to the precedence level of different rules.
     */

    {" +", TK_NOTYPE}, // spaces
    {"\\(", TK_LP},    // Left parenthesis
    {"\\)", TK_RP},    // Right parenthesis
    {"\\+", '+'},      // plus
    {"\\-", '-'},      // substraction
    {"\\*", '*'},      // multiplication
    {"\\/", '/'},      // division
    {"==", TK_EQ},     // equal
    {"[0-9]+", TK_NUM} // number

};

/* for holding those operators that may be primary operators */
struct op_pos
{
  char op;
  int pos;
};

/* NR_REGEX indicates the number of rules */
#define NR_REGEX ARRLEN(rules)

bool check_parentheses(int start, int end);
int find_priop(int start, int end);
uint32_t eval(int start, int end);

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex()
{
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i++)
  {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    /* if parsing failed, print the failure information */
    if (ret != 0)
    {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

/* using the bollow structure record the infomation of token
 * the length of str is limited in 32, means the most number we could record is 32
 */
typedef struct token
{
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
/* nr_token indicates the number of tokens that have been identified */
static int nr_token __attribute__((used)) = 0;

/**
 * @description: used to identified the tokens of expression which will be evaluated
 * @param {char} *e
 * @return {*}
 * @use:
 */
static bool make_token(char *e)
{
  int position = 0;
  int i;
  /* using pmatch to record the Byte offset from string's start to substring's start/end. */
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0')
  {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i++)
    {
      // printf(rules[i].regex)
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0)
      {
        /* substr_start points to the address where the substring starts */
        char *substr_start = e + position;
        /* substr_start is the length of substring */
        int substr_len = pmatch.rm_eo;

        // char *substr =

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type)
        {
        case TK_NOTYPE:
          nr_token--;
        case TK_LP:
          tokens[nr_token].type = TK_LP;
        case TK_RP:
          tokens[nr_token].type = TK_RP;
        case TK_NUM:
        {
          tokens[nr_token].type = TK_NUM;
          // 这里得用动态申请内存扩充str长度
          assert(substr_len < 32);
          strcpy(tokens[nr_token].str, substr_start);
        }
        case '+':
          tokens[nr_token].type = '+';
        case '-':
          tokens[nr_token].type = '-';
        case '*':
          tokens[nr_token].type = '*';
        case '/':
          tokens[nr_token].type = '/';
        default:
          TODO();
        }
        nr_token++;
        break;
      }
    }

    if (i == NR_REGEX)
    {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

word_t expr(char *e, bool *success)
{
  if (!make_token(e))
  {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */

  TODO();
  /* p indicates the begining of the substring, q indicates the end of the substring
   * now we init the p and q, give them 0 and strlen, respectively
   */
  int p = 0, q = nr_token;
  uint32_t expression_result = eval(p,q);

  return 0;
}

uint32_t eval(int start, int end)
{
  if (start > end)
  {
    /* Bad expression */
    assert(0);
  }
  else if (start == end)
  {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
    int number = atoi(tokens[start].str);
    return number;
  }
  else if (check_parentheses(start, end) == true)
  {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(start + 1, end - 1);
  }
  else
  {
    /* We should do more things here. */
    /* analyse the main opertor*/
    // op = the position of 主运算符 in the token expression;
    int op = find_priop(start, end);
    int val1 = eval(start, op - 1);
    int val2 = eval(op + 1, end);

    /* op_type is the main operator's type
     * we should find the type of main operator and identify its type
     */
    char op_type = tokens[op].type;
    switch (op_type)
    {
    case '+':
      return val1 + val2;
    case '-':
      return val1 - val2;
    case '*':
      return val1 * val2;
    case '/':
      return val1 / val2;
    default:
      assert(0);
    }
  }
  return 0;
}

bool check_parentheses(int start, int end)
{
  SqStack s;
  InitStack(&s);
  for (int i = start; i < end; i++)
  {
    if (tokens[i].type == TK_LP)
    {
      Push(&s, '(');
    }
    else if (tokens[i].type == TK_RP)
    {
      if (GetTop(s) == '(')
      {
        Pop(&s);
      }
      else
      {
        return false;
      }
    }
    else
      continue;
  }
  if (IsEmpty(s) == true)
  {
    return true;
  }
  else
    return false;
}

int find_priop(int start, int end)
{
  int primary = -1;
  struct op_pos op_pos[32];
  int op_num = 0;
  /* use low_flog to detect if there are plus or substrction */
  int low_flag = 0;
  /* use the following for loop to select all arithmetic operators and parentheses,
   * then store them and their positions into a array
   */
  for (int i = start; i < end; i++)
  {
    switch (tokens[i].type)
    {
    /* The token of the NOT operator is not a primary operator. */
    case TK_EQ:
      continue;
    case TK_NOTYPE:
      continue;
    case TK_NUM:
      continue;
    case TK_LP:
    {
      op_pos[op_num].op = '(';
      op_pos[op_num].pos = i;
    }
    case TK_RP:
    {
      op_pos[op_num].op = ')';
      op_pos[op_num].pos = i;
    }
    case '+':
    {
      op_pos[op_num].op = '+';
      op_pos[op_num].pos = i;
      low_flag = 1;
    }
    case '-':
    {
      op_pos[op_num].op = '+';
      op_pos[op_num].pos = i;
      low_flag = 1;
    }
    case '*':
    {
      op_pos[op_num].op = '*';
      op_pos[op_num].pos = i;
    }
    case '/':
    {
      op_pos[op_num].op = '/';
      op_pos[op_num].pos = i;
    }
    }
    op_num++;
  }

  /* the following for loop will check whether the token is in parentheses,
   * if the token in parentheses, let its pos = -1
   */
  for (int i = 0; i < op_num; i++)
  {
    /* left point will scan the left side */
    int left = i;
    /* right point will scan the right side */
    int right = i;
    /* 'in' indicates if this token in parentheses */
    int in = 0;
    for (int j = 0; j < op_num && op_pos[i].op != '(' && op_pos[i].op != ')'; j++)
    {
      if (left == 0)
      /* left point reaches the left boundary */
      {
        break;
      }
      /* left pointer detected left parenthesis  */
      else if (op_pos[left].op == '(')
      {
        in = 1;
        break;
      }
      /* right pointer detected right parenthesis */
      else if (op_pos[left].op == ')')
      {
        for (int k = 0; k < op_num; k++)
        {
          if (op_pos[right].op == ')')
          {
            in = 1;
            break;
          }
          else if (op_pos[right].op == '(')
            break;
          right++;
        }
      }
      left--;
    }
    if (in == 1)
    {
      op_pos[i].pos = -1;
    }
  }

  /* The following for loop will find the operator with the lowest precedence  */
  if (low_flag == 1)
  {
    for (int i = 0; i < op_num; i++)
    {
      if (op_pos[i].op == '*' || op_pos[i].op == '/')
      {
        op_pos[i].pos = -1;
      }
    }
  }

  /* the following loop will scan the op_pos from right to left ,
   * and find the first operator which pos is not negative nor parenthesis
   */
  for (int i = op_num - 1; i >= 0; i--)
  {
    if (op_pos[i].pos != -1 && op_pos[i].op != '(' && op_pos[i].op != ')')
    {
      primary = op_pos[i].pos;
    }
  }
  return primary;
}

/* Algorithmic description of basic operations */
/* init a stack */
bool InitStack(SqStack *S)
{
  S->base = (SElemType *)malloc(STACK_INT_SIZE * sizeof(SElemType)); //开辟新的空间
  if (!S->base)
    /* if stack creation failed, return 0*/
    return 0;
  S->top = S->base;
  S->stacksize = STACK_INT_SIZE;
  return 1;
}

/* If the stack is not empty, return the top element of the stack and return true
 * otherwise return false
 */
char GetTop(SqStack S)
{
  if (S.top == S.base)
    return 0;
  return *(S.top - 1);
}

/* Insert the element as the new top element of the stack */
bool Push(SqStack *S, SElemType e)
{
  if (S->top - S->base >= S->stacksize)
  /* If the stack is full, need to add space */
  {
    S->base = (SElemType *)realloc(S->base, (S->stacksize + STACKINCREMENT) * sizeof(SElemType));
    if (!S->base)
      return 0;
    S->top = S->base + S->stacksize;
    S->stacksize += STACKINCREMENT;
  }
  *(S->top++) = e;
  return 1;
}

/* If the stack is not empty, delete the top element of the stack, return its value with e and return true,
 * otherwise return false
 */
bool Pop(SqStack *S)
{
  if (S->top == S->base)
    return 0;
  --S->top;
  return 1;
}

bool IsEmpty(SqStack S)
{
  if (S.top == S.base)
  {
    return 1;
  }
  return 0;
}