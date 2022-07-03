#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

#include <assert.h>
#include </stack.c>
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
    {"==", TK_EQ},     // equal
    {"[0-9]+", TK_NUM} // number

};

/* NR_REGEX indicates the number of rules */
#define NR_REGEX ARRLEN(rules)

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
   * now we init the p and q, give them 0 and 1, respectively
   *
   */
  int p = 0, q = 1;

  return 0;
}

int eval(int start, int end)
{
  if (start > end)
  {
    /* Bad expression */
    return -1;
  }
  else if (start == end)
  {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
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
  }
  return 0;
}

bool check_parentheses(start, end)
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