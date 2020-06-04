%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <stdbool.h>

  #include "bytecode_class.h"
  #include "common.h"

  extern int yylex();
  extern int yyparse();

  void yyerror(const char *s);
  void whatisThisType(int type);
%}

%union {
  int type_type;
  int inst_type;
  int oper_num_type;
  int cp_num_type;
  int i_val;
  int b_val;
  float f_val;
  char *s_val;
  char *indent_name;
}

%token DELIM
%token END_OP
%token  <type_type> TYPE
%token TYPE_VOID
%token FUN_MAIN
%token <inst_type> INST
%token INST_IF
%token INST_ELSE
%token INST_WHILE
%token INST_FOR
%token <oper_num_type> OP_NUM
%token OP_SET
%token <cp_num_type> CP_NUM
%token OPE_PAREN
%token CLO_PAREN
%token OPE_BRACKET
%token CLO_BRACKET
%token <b_val> BOOL_TYPE
%token <indent_name> IDENT
%token <s_val> STR_TYPE
%token <f_val> FLOAT_TYPE
%token <i_val> INT_TYPE
%token LONG_COMMENT
%token SHORT_COMMENT
%token COMMA


%type <type_type> B_TYPE

%left OP_NUM
%%

B_FULL_TEXT : B_D TEXT;

TEXT : B_DEF_ROOT TEXT | %empty;

B_DEF_ROOT : B_TYPE IDENT B_TO_DEF_FUN_OR_VAR
    | B_TYPE_VOID B_TO_DEF_FUN_BUT_VOID_PAREN;

B_TO_DEF_FUN_OR_VAR : B_D B_DEF_VAR_BUT_TYPE_B_D
    | B_OPE_PAREN B_DEF_FUN_BUT_TYPE_PAREN;

B_TO_DEF_FUN_BUT_VOID_PAREN : IDENT B_OPE_PAREN B_LIST_DEF_ARGS_FUN B_CLO_PAREN
    B_OPE_BRACKET B_INSIDE_A_FUNCTION_VOID B_CLO_BRACKET
    | FUN_MAIN B_OPE_PAREN B_TYPE_VOID B_CLO_PAREN B_OPE_BRACKET
    B_INSIDE_A_FUNCTION_VOID B_CLO_BRACKET;

B_DEF_FUN_BUT_TYPE_PAREN : B_LIST_DEF_ARGS_FUN B_CLO_PAREN B_OPE_BRACKET
    B_INSIDE_A_FUNCTION B_CLO_BRACKET;

B_DEF_VAR_BUT_TYPE_B_D : B_OPERATOR_SET B_RVALUE B_END_OP;

B_LIST_DEF_ARGS_FUN : B_TYPE_VOID | B_TYPE B_IDENT B_LIST_REST_ARGS_FUN;

B_LIST_REST_ARGS_FUN : B_COMMA B_TYPE B_IDENT B_LIST_REST_ARGS_FUN | %empty;

B_INSIDE_A_FUNCTION_VOID : B_BLOCK_CODE;

B_INSIDE_A_FUNCTION : B_BLOCK_CODE;

B_BLOCK_CODE : B_PART_BLOCK B_BLOCK_CODE | %empty;

B_PART_BLOCK : B_TYPE B_IDENT B_DEF_VAR_BUT_IDENT
    | B_IDENT B_SET_VAR
    | B_INST_FOR B_FOR_LOOP
    | B_INST_IF B_IF_BLOCK
    | B_INST_WHILE B_WHILE_LOOP
    | B_INST_LINE;

B_INST_LINE : B_INST B_RVALUE B_END_OP;

B_DEF_VAR_BUT_IDENT : B_OPERATOR_SET B_RVALUE B_END_OP;

B_SET_VAR : B_OPERATOR_SET B_RVALUE B_END_OP;

B_FOR_LOOP : B_OPE_PAREN B_TYPE B_IDENT B_OPERATOR_SET B_RVALUE B_END_OP
    B_CONDITION B_END_OP IDENT B_SET_VAR B_CLO_PAREN B_OPE_BRACKET
    B_BLOCK_CODE B_CLO_BRACKET;

B_IF_BLOCK : B_OPE_PAREN B_CONDITION B_CLO_PAREN B_OPE_BRACKET
    B_BLOCK_CODE B_CLO_BRACKET B_POTENTIAL_ELSE;

B_POTENTIAL_ELSE : B_INST_ELSE B_OPE_BRACKET B_BLOCK_CODE B_CLO_BRACKET
    | %empty;

B_WHILE_LOOP : B_OPE_PAREN B_CONDITION B_CLO_PAREN B_OPE_BRACKET
    B_BLOCK_CODE B_CLO_BRACKET;

B_CONDITION : B_RVALUE B_REST_COND;

B_REST_COND : B_CP_NUM B_RVALUE | %empty;

B_RVALUE : B_RVALUE OP_NUM B_D B_RVALUE
    | B_OPE_PAREN B_RVALUE B_CLO_PAREN
    | B_FUN_VALUE
    | B_VAR_VALUE
    | B_VALUE;

B_FUN_VALUE : IDENT B_OPE_PAREN B_FUN_PAREN_CONTENT B_CLO_PAREN;

B_FUN_PAREN_CONTENT : %empty | B_FUN_PAREN_CONTENT_NOT_EMPTY;

B_FUN_PAREN_CONTENT_NOT_EMPTY : B_RVALUE B_COMMA B_FUN_PAREN_CONTENT_NOT_EMPTY
    | B_RVALUE;

B_VAR_VALUE : B_IDENT;

B_VALUE : B_FLOAT_TYPE | B_INT_TYPE;

//Because I've done wrong ... I remove remaining comments here :
B_CP_NUM : CP_NUM B_D {  };
B_OPE_BRACKET : OPE_BRACKET B_D {  };
B_CLO_BRACKET : CLO_BRACKET B_D {  };
B_INST_IF : INST_IF B_D {  };
B_INST_ELSE : INST_ELSE B_D {  };
B_INST_WHILE : INST_WHILE B_D {  };
B_INST_FOR : INST_FOR B_D {  };
B_END_OP : END_OP B_D {  };
B_INST : INST B_D {  };
B_COMMA : COMMA B_D {  };
B_OPE_PAREN : OPE_PAREN B_D {  };
B_CLO_PAREN : CLO_PAREN B_D {  };
B_OPERATOR_SET : OP_SET B_D {  };
B_IDENT : IDENT B_D {  };
B_TYPE_VOID : TYPE_VOID B_D {  };
B_FLOAT_TYPE : FLOAT_TYPE B_D {  };
B_INT_TYPE : INT_TYPE B_D {  };
B_TYPE : TYPE B_D { $$ = $1; };
B_D : DELIM B_D | %empty | SHORT_COMMENT | LONG_COMMENT;

%%

int main(void) {
  yyparse();
  return EXIT_SUCCESS;
}

void yyerror(const char *s) {

  exit(EXIT_FAILURE);
}

void whatisThisType(int type) {
  if (type == INT_TYPE) {

  } else if (type == FLOAT_TYPE) {

  } else {

  }
}
