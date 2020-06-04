%{
  #include <stdlib.h>
  #include <stdio.h>

  #define DELIM "[DELIM]"
  #define END_OP "[END_OP]"

//__START__ RESERVED LANG IDENTIFIER

  #define TYPE "[TYPE]"
  #define __TYPE_INT 0
  #define __TYPE_FLOAT 1
  #define __TYPE_BOOL 2
  #define TYPE_VOID "[TYPE_VOID]"
  #define FUN_MAIN "[FUN_MAIN]"
  #define INST "[INST]"
  #define __INST_RETURN 0
  #define __INST_PRINT 1
  #define __INST_PRINTLN 2
  #define INST_IF "[INST_IF]"
  #define INST_ELSE "[INST_ELSE]"
  #define INST_WHILE "[INST_WHILE]"
  #define INST_FOR "[INST_FOR]"

//__END__ RESERVED LANG IDENTIFIER

  #define OP_NUM "[OP_NUM]"
  #define __OP_PLUS 0
  #define __OP_MINUS 1
  #define __OP_DIVI 2
  #define __OP_MULT 3
  #define OP_SET "[OP_SET]"

  #define CP_NUM "[CP_NUM]"
  #define __CP_EQUAL 0
  #define __CP_GREATEREQ 1
  #define __CP_LESSEQ 2
  #define __CP_DIFF 3
  #define __CP_GREATER 4
  #define __CP_LESS 5

  #define OPE_PAREN "[OPE_PAREN]"
  #define CLO_PAREN "[CLO_PAREN]"
  #define OPE_BRACKET "[OPE_BRACKET]"
  #define CLO_BRACKET "[CLO_BRACKET]"

  #define INDENT "[INDENT]"

  #define BOOL_TYPE "[BOOL_TYPE]"
  #define __BOOL_TYPE_FALSE 0
  #define __BOOL_TYPE_TRUE 1

  #define INDENT "[INDENT]"

  #define STR_TYPE "[STR_TYPE]"
  #define FLOAT_TYPE "[FLOAT_TYPE]"
  #define INT_TYPE "[INT_TYPE]"

  #define STR_LEN_MAX 1023

  int yylex();

  int main(void) {
    int ret;
    while (!(ret = yylex()));
    if (ret == 1) {
      printf("\n\t_________ALRIGHT__________\n");
      return EXIT_SUCCESS;
    } else {
        printf("\n\t________!ERRORS!__________\n");
      return EXIT_FAILURE;
    }
  }
%}
%%
\n                                  { printf("\n"); }
"/*"                                { char c;
                                      int i = 0;
                                      while (i != 2 && (c = input()) != '\0') {
                                        if (c == '\\') {
                                          if (i == -1) {
                                            i = 0;
                                          } else {
                                            i = -1;
                                          }
                                        } else if (i >=0 && c == '*') {
                                          i = 1;
                                        } else if (i == 1 && c == '/') {
                                          i = 2;
                                        } else {
                                          i = 0;
                                        }
                                      }
                                      if (c == '\0') {
                                        return -1;
                                      }
                                      printf("[LONG_COMMENT]");
                                      return 0; }
"//"                                { char c;
                                      int i = 0;
                                      while (i != 1 && (c = input()) != '\0') {
                                        if (c == '\\') {
                                          i = -1;
                                        } else if (i >= 0 && c == '\n') {
                                          i = 1;
                                        } else {
                                          i = 0;
                                        }
                                      }
                                      printf("[SHORT_COMMENT]");
                                      return 0;
                                    }
(\40|\n|\t)*                        { printf(DELIM); return 0; }
\;                                  { printf(END_OP); return 0; }
"int"|"float"|"bool"                 { printf(TYPE); return 0; }
"void"                              { printf(TYPE_VOID); return 0; }
"main"                              { printf(FUN_MAIN); return 0; }
"print"|"println"|"return"          { printf(INST); ; return 0; }
"if"                                { printf(INST_IF); return 0; }
"else"                              { printf(INST_ELSE); return 0; }
"while"                             { printf(INST_WHILE); return 0; }
"for"                               { printf(INST_FOR); return 0; }
\+|\-|\/|\*                         { printf(OP_NUM); return 0; }
\=                                  { printf(OP_SET); return 0; }
"=="|">="|"<="|"!="|\>|\<           { printf(CP_NUM); return 0; }
\(                                  { printf(OPE_PAREN); return 0; }
\)                                  { printf(CLO_PAREN); return 0; }
\{                                  { printf(OPE_BRACKET); return 0; }
\}                                  { printf(CLO_BRACKET); return 0; }
[a-zA-Z_][a-zA-Z0-9_]*              { printf(INDENT); return 0; }
"\""                                { char str[STR_LEN_MAX];
                                      int i = 0;
                                      int index = 0;
                                      char c;
                                      while (i != 1 && (c = input()) != '\0') {
                                        if (!(c >= MIN_CHAR && c < MAW_CHAR)) {
                                          return -1;
                                        }
                                        if (c == '\\') {
                                          if (i == -1) {
                                            str[index] = c;
                                            ++index;
                                            i = 0;
                                          } else {
                                            i = -1;
                                          }
                                        } else if (i >= 0 && c == '\"') {
                                          i = 1;
                                        } else {
                                          str[index] = c;
                                          ++index;
                                          i = 0;
                                        }
                                      }
                                      if (c == '\0') {
                                        return -1;
                                      }
                                      printf("[STR_TYPE:\"%s\"]", str);
                                      return 0;
                                    }
[0-9]*\.[0-9]*                      { printf(FLOAT_TYPE); return 0; }
[0-9]+                              { printf(INT_TYPE); return 0; }


.                                   { printf("ERROR : %c", yytext[0]); return 0; }
<<EOF>>                             { printf("END!"); return 1; }
%%
