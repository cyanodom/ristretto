%{
  #include <stdlib.h>
  #include <stdio.h>
  #include <stdbool.h>

  #include "common.h"
  #include "ristretto.tab.h"

  //ERROR STR :
  #define STR_MULTILINE_NOT_ENDED                                               \
    "SYNTAX ERROR : Un commentaire multi-ligne n'est pas fini !"
  #define STR_STR_NOT_ENDED                                                     \
    "SYNTAX ERROR : Une chaine de caractères n'est pas finie !"
  #define STR_INVALID_CHAR                                                      \
    "SYNTAX ERROR : Une chaine de caractères possède un caractère non          \
    reconnu !"
  #define STR_INVALID_WORD                                                      \
    "SYNTAX ERROR : Un mot ne correspond à aucune syntaxe valable !"

  extern void yyerror(const char *);

%}
%x IN_COMMENT
%%

<INITIAL>{
"/*"                              BEGIN(IN_COMMENT);
}
<IN_COMMENT>{
"*/"                              { BEGIN(INITIAL); return LONG_COMMENT; }
[^*\n]+
"*"
\n                                yylineno++;
}

"//".*                              { return SHORT_COMMENT; }
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
"print"|"println"|"return"          { if (strcmp(yytext, "print") == 0) {
                                        yylval.inst_type = INST_PRINT;
                                      } else if (strcmp(yytext, "println")) {
                                        yylval.inst_type = INST_PRINTLN;
                                      } else {
                                        yylval.inst_type = INST_RETURN;
                                      }
                                      return INST; }
"if"                                { return INST_IF; }
"else"                              { return INST_ELSE; }
"while"                             { return INST_WHILE; }
"for"                               { return INST_FOR; }
\+|\-|\/|\*                         { switch (yytext[0]) {
                                        case '+':
                                          yylval.oper_num_type = OP_PLUS;
                                          break;
                                        case '-':
                                          yylval.oper_num_type = OP_MINUS;
                                          break;
                                        case '/':
                                          yylval.oper_num_type = OP_DIVI;
                                          break;
                                        default:
                                          yylval.oper_num_type = OP_MULT;
                                      }
                                      return OP_NUM; }
\=                                  { return OP_SET; }
"=="|">="|"<="|"!="|\>|\<           { if (strcmp("==", yytext) == 0) {
                                        yylval.cp_num_type = CP_EQUAL;
                                      } else if (strcmp(">=", yytext) == 0) {
                                        yylval.cp_num_type = CP_GREATEREQ;
                                      } else if (strcmp("<=", yytext) == 0) {
                                        yylval.cp_num_type = CP_LESSEQ;
                                      } else if (strcmp("!=", yytext) == 0) {
                                        yylval.cp_num_type = CP_DIFF;
                                      } else if (yytext[0] == '>') {
                                        yylval.cp_num_type = CP_GREATER;
                                      } else {
                                        yylval.cp_num_type = CP_LESS;
                                      }
                                      return CP_NUM; }
\(                                  { return OPE_PAREN; }
\)                                  { return CLO_PAREN; }
\{                                  { return OPE_BRACKET; }
\}                                  { return CLO_BRACKET; }
"true"|"false"                      { if (strcmp("true", yytext) == 0) {
                                        yylval.b_val = BOOL_TYPE_TRUE;
                                      } else {
                                        yylval.b_val = BOOL_TYPE_FALSE;
                                      }
                                      return BOOL_TYPE; }
[a-zA-Z_][a-zA-Z0-9_]*              { strcpy(yylval.ident_name, yytext);
                                      return IDENT; }
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
                                      strcpy(yylval.s_val, str);
                                      free(str);
                                      return STR_TYPE;
                                    }
[0-9]+\.[0-9]+                      { return FLOAT_TYPE; }
[0-9]+                              { return INT_TYPE; }
","                                 { return COMMA; }


.                                   { yyerror(STR_INVALID_WORD); }
%%
