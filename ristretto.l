%{
  #include <stdlib.h>
  #include <stdio.h>
  #include <stdbool.h>

  #include "common.h"
  #include "ristretto.tab.h"

  //ERROR STR :
  #define STR_MULTILINE_NOT_ENDED                                               \
    ERROR("SYNTAX ERROR : Un commentaire multi-ligne n'est pas fini !")
  #define STR_STR_NOT_ENDED                                                     \
    ERROR("SYNTAX ERROR : Une chaine de caractères n'est pas finie !")
  #define STR_INVALID_CHAR                                                      \
    ERROR("SYNTAX ERROR : Une chaine de caractères possède un caractère non \
      reconnu !")
  #define STR_INVALID_WORD                                                      \
    ERROR("SYNTAX ERROR : Un mot ne correspond à aucune syntaxe valable !")

  extern void yyerror(const char *);

%}
%%
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
                                        yyerror(STR_MULTILINE_NOT_ENDED);
                                      }
                                    return LONG_COMMENT; }
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
                                      return SHORT_COMMENT; }
(\40|\n|\t)*                        { return DELIM; }
\;                                  { return END_OP; }
"int"|"float"|"bool"                 { if (strcmp(yytext, "int") == 0) {
                                        yylval.type_type = TYPE_INT;
                                      } else if (strcmp(yytext, "float") == 0) {
                                        yylval.type_type = TYPE_FLOAT;
                                      } else {
                                        yylval.type_type = TYPE_BOOL;
                                      }
                                      return TYPE; }
"void"                              { return TYPE_VOID; }
"main"                              { return FUN_MAIN; }
"print"|"println"|"return"          { return INST; ; }
"if"                                { return INST_IF; }
"else"                              { return INST_ELSE; }
"while"                             { return INST_WHILE; }
"for"                               { return INST_FOR; }
\+|\-|\/|\*                         { return OP_NUM; }
\=                                  { return OP_SET; }
"=="|">="|"<="|"!="|\>|\<           { return CP_NUM; }
\(                                  { return OPE_PAREN; }
\)                                  { return CLO_PAREN; }
\{                                  { return OPE_BRACKET; }
\}                                  { return CLO_BRACKET; }
[a-zA-Z_][a-zA-Z0-9_]*              { return IDENT; }
"\""                                { char *str = malloc(STR_LEN_MAX + 1);
                                      int i = 0;
                                      int index = 0;
                                      char c;
                                      while (i != 1 && (c = input()) != '\0') {
                                        if (!(c >= MIN_CHAR && c < MAX_CHAR)) {
                                          yyerror(STR_INVALID_CHAR);
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
                                        yyerror(STR_STR_NOT_ENDED);
                                      }
                                      yylval.s_val = str;
                                      return STR_TYPE;
                                    }
[0-9]+\.[0-9]+                      { return FLOAT_TYPE; }
[0-9]+                              { return INT_TYPE; }
","                                 { return COMMA; }


.                                   { yyerror(STR_INVALID_WORD); }
%%
