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

B_FULL_TEXT : B_DELIM B_TEXT {  };

B_TEXT : B_ROOT_CODE_BLOCK B_DEF_FUN_MAIN {  }
    | B_DEF_FUN_MAIN B_ROOT_CODE_BLOCK {  }
    | B_DEF_FUN_MAIN {  };

B_ROOT_CODE_BLOCK : B_ANYWAY_ROOT B_ROOT_CODE_BLOCK {  }
    | B_ANYWAY_ROOT {  };

B_ANYWAY_ROOT : B_INSTANCIATION B_END_OP {  }
    | B_DEF_FUN {  };

B_INSTANCIATION : B_TYPE B_IDENT B_OPERATOR_SET B_OPERATION {  };

B_CHANGE_VALUE : B_IDENT B_OPERATOR_SET B_OPERATION {  };

B_INSTRUCTION : B_INST B_OPERATION {  }; //verifier types

B_CODE_BLOCK : B_ANYWAY B_CODE_BLOCK {  }
    | %empty  {  };

B_ANYWAY : B_BLOCK_FOR {  }
    | B_BLOCK_WHILE {  }
    | B_BLOCK_IF {  }
    | B_INSTRUCTION B_END_OP {  }
    | B_INSTANCIATION B_END_OP {  }
    | B_FUNCTION B_END_OP  {  };

B_CONDITION : B_OPERATION {  }
    | B_OPERATION B_CP_NUM B_OPERATION {  };

B_BLOCK_FOR : B_INST_FOR B_OPE_PAREN B_INSTANCIATION B_END_OP B_CONDITION
    B_END_OP B_CHANGE_VALUE B_CLO_PAREN B_OPE_BRACKET
    B_CODE_BLOCK B_CLO_BRACKET {  };

B_BLOCK_IF : B_INST_IF B_OPE_PAREN B_CONDITION B_CLO_PAREN
    B_OPE_BRACKET B_CODE_BLOCK B_CLO_BRACKET {  }
    | B_INST_IF B_OPE_PAREN B_CONDITION B_CLO_PAREN
    B_OPE_BRACKET B_CODE_BLOCK B_CLO_BRACKET
    B_INST_ELSE B_OPE_BRACKET B_CODE_BLOCK B_CLO_BRACKET {  };

B_BLOCK_WHILE : B_INST_WHILE B_OPE_PAREN B_CONDITION B_CLO_PAREN B_OPE_BRACKET
    B_CODE_BLOCK B_CLO_BRACKET {  };

B_OPERATION : B_OPERATION OP_NUM B_DELIM B_OPERATION {  }    //TODO verifier types
    | B_OPE_PAREN B_OPERATION B_CLO_PAREN {  }
    | B_RVALUE {  };

B_RVALUE : B_IDENT {  }
    | B_FUNCTION {  }; //TODO tester son existance

B_FUNCTION : IDENT B_OPE_PAREN B_FUN_ARGS B_CLO_PAREN {  };

B_DEF_FUN : B_TYPE IDENT B_OPE_PAREN B_DEF_FUN_ARGS B_CLO_PAREN B_OPE_BRACKET
    B_CODE_BLOCK B_CLO_BRACKET
    |  IDENT B_OPE_PAREN B_DEF_FUN_ARGS B_CLO_PAREN B_OPE_BRACKET
      B_CODE_BLOCK B_CLO_BRACKET {  };

B_DEF_FUN_ARGS : B_DEF_FUN_ARGS_HERE {  }
    | B_TYPE_VOID {  };

B_DEF_FUN_ARGS_HERE : B_TYPE B_IDENT B_COMMA B_DEF_FUN_ARGS_HERE {  }
    | B_TYPE B_IDENT {  };

B_DEF_FUN_MAIN : B_TYPE_VOID FUN_MAIN B_OPE_PAREN B_TYPE_VOID B_CLO_PAREN B_OPE_BRACKET
    B_CODE_BLOCK B_CLO_BRACKET {  };

B_FUN_ARGS : B_OPERATION B_COMMA B_FUN_ARGS {  }
    | B_OPERATION {  };  //TODO verifier nb args et definition



//Because I've done wrong ... I remove remaining comments here :
B_CP_NUM : CP_NUM B_DELIM {  };
B_OPE_BRACKET : OPE_BRACKET B_DELIM {  };
B_CLO_BRACKET : CLO_BRACKET B_DELIM {  };
B_INST_IF : INST_IF B_DELIM {  };
B_INST_ELSE : INST_ELSE B_DELIM {  };
B_INST_WHILE : INST_WHILE B_DELIM {  };
B_INST_FOR : INST_FOR B_DELIM {  };
B_END_OP : END_OP B_DELIM {  };
B_INST : INST B_DELIM {  };
B_COMMA : COMMA B_DELIM {  };
B_OPE_PAREN : OPE_PAREN B_DELIM {  };
B_CLO_PAREN : CLO_PAREN B_DELIM {  };
B_OPERATOR_SET : OP_SET B_DELIM {  };
B_IDENT : IDENT B_DELIM {  };
B_TYPE_VOID : TYPE_VOID B_DELIM {  };
B_TYPE : TYPE B_DELIM { $$ = $1; };
B_DELIM : DELIM B_DELIM | %empty | SHORT_COMMENT | LONG_COMMENT;

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
