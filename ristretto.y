%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <stdbool.h>
  #include <string.h>

  #include "bytecode.h"
  #include "common.h"

  extern int yylex();
  extern int yyparse();

  extern FILE *yyin, *yyout;

  void yyerror(const char *);
  void help(char *);
  void yyoutput(const char *);
  void yyoutput_bin(bin *);

  bool mainFound;
%}

%union {
  int type_type;
  int inst_type;
  int oper_num_type;
  int cp_num_type;
  int i_val;
  int b_val;
  float f_val;
  char s_val[STR_LEN_MAX];
  char ident_name[STR_LEN_MAX];
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
%token <ident_name> IDENT
%token <s_val> STR_TYPE
%token <f_val> FLOAT_TYPE
%token <i_val> INT_TYPE
%token LONG_COMMENT
%token SHORT_COMMENT
%token COMMA


%type <cp_num_type> B_CP_NUM
%type <inst_type> B_INST
%type <ident_name> B_IDENT
%type <f_val> B_FLOAT_TYPE
%type <i_val> B_INT_TYPE
%type <s_val> B_STR_TYPE
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

B_PART_BLOCK_RESTRICT :  B_TYPE B_IDENT B_DEF_VAR_BUT_IDENT
    | B_IDENT B_SET_VAR
    | B_INST_LINE;

B_INST_LINE : B_INST B_INST_LINE_NEXT;

B_INST_LINE_NEXT : B_STR_TYPE B_END_OP | B_RVALUE B_END_OP;

B_DEF_VAR_BUT_IDENT : B_OPERATOR_SET B_RVALUE B_END_OP;

B_SET_VAR : B_OPERATOR_SET B_RVALUE B_END_OP;

B_FOR_LOOP : B_OPE_PAREN B_TYPE B_IDENT B_OPERATOR_SET B_RVALUE B_END_OP
    B_CONDITION B_END_OP IDENT B_SET_VAR B_CLO_PAREN B_FOR_LOOP_MODE;

B_FOR_LOOP_MODE : B_FOR_LOOP_CLASSIC | B_FOR_LOOP_SINGLE;

B_FOR_LOOP_CLASSIC : B_OPE_BRACKET B_BLOCK_CODE B_CLO_BRACKET;

B_FOR_LOOP_SINGLE : B_PART_BLOCK_RESTRICT;

B_IF_BLOCK : B_OPE_PAREN B_CONDITION B_CLO_PAREN B_IF_MODE;

B_IF_MODE : B_IF_MODE_CLASSIC | B_IF_MODE_SINGLE;

B_IF_MODE_CLASSIC : B_OPE_BRACKET B_BLOCK_CODE B_CLO_BRACKET B_POTENTIAL_ELSE;

B_IF_MODE_SINGLE : B_PART_BLOCK_RESTRICT B_POTENTIAL_ELSE_SINGLE;

B_POTENTIAL_ELSE_SINGLE : B_INST_ELSE B_PART_BLOCK_RESTRICT | %empty;

B_POTENTIAL_ELSE : B_INST_ELSE B_OPE_BRACKET B_BLOCK_CODE B_CLO_BRACKET
    | %empty;

B_WHILE_LOOP : B_OPE_PAREN B_CONDITION B_CLO_PAREN B_WHILE_MODE;

B_WHILE_MODE : B_WHILE_CLASSIC | B_WHILE_SINGLE;

B_WHILE_CLASSIC : B_OPE_BRACKET B_BLOCK_CODE B_CLO_BRACKET;

B_WHILE_SINGLE : B_PART_BLOCK_RESTRICT;

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
B_CP_NUM : CP_NUM B_D { $$ = $1; };
B_OPE_BRACKET : OPE_BRACKET B_D;
B_CLO_BRACKET : CLO_BRACKET B_D;
B_INST_IF : INST_IF B_D;
B_INST_ELSE : INST_ELSE B_D;
B_INST_WHILE : INST_WHILE B_D;
B_INST_FOR : INST_FOR B_D;
B_END_OP : END_OP B_D;
B_INST : INST B_D { $$ = $1; };
B_COMMA : COMMA B_D;
B_OPE_PAREN : OPE_PAREN B_D;
B_CLO_PAREN : CLO_PAREN B_D;
B_OPERATOR_SET : OP_SET B_D;
B_IDENT : IDENT B_D { strcmp($$, $1); };
B_TYPE_VOID : TYPE_VOID B_D;
B_FLOAT_TYPE : FLOAT_TYPE B_D { $$ = $1; };
B_INT_TYPE : INT_TYPE B_D { $$ = $1; };
B_STR_TYPE : STR_TYPE { strcpy($$, $1); };
B_TYPE : TYPE B_D { $$ = $1; };
B_D : B_D_D B_D | %empty;
B_D_D : DELIM | SHORT_COMMENT | LONG_COMMENT;
%%

void genBase(const char *sourceName) {
  printf("sourceName : %s\n", sourceName);
  size_t len = strlen(sourceName);
  char sourceNameJava[len + 5];
  strcpy(sourceNameJava, sourceName);
  sourceNameJava[len] = '.';
  sourceNameJava[len + 1] = 'j';
  sourceNameJava[len + 2] = 'a';
  sourceNameJava[len + 3] = 'v';
  sourceNameJava[len + 4] = 'a';
  sourceNameJava[len + 5] = '\0';
  printf("sourceName.java : %s\n", sourceNameJava);

  printf("\n");

  //gen some constant informations :
  bin *b_temp;

  unsigned char cafebabe[4];
  cafebabe[0] = 0xCA;
  cafebabe[1] = 0xFE;
  cafebabe[2] = 0xBA;
  cafebabe[3] = 0xBE;
  b_temp = bin_create(cafebabe, 4);
  yyoutput_bin(b_temp);
  bin_dispose(b_temp);

  unsigned char minor[2];
  minor[0] = 0x00;
  minor[1] = 0x00;
  b_temp = bin_create(minor, 2);
  yyoutput_bin(b_temp);
  bin_dispose(b_temp);

  unsigned char major[2];
  major[0] = 0x00;
  major[1] = 0x34;
  b_temp = bin_create(major, 2);
  yyoutput_bin(b_temp);
  bin_dispose(b_temp);

  unsigned char nbEntryPlusOneContentPool[2];
  nbEntryPlusOneContentPool[0] = 0x00;
  nbEntryPlusOneContentPool[1] = 18;
  b_temp = bin_create(nbEntryPlusOneContentPool, 2);
  yyoutput_bin(b_temp);
  bin_dispose(b_temp);

  //#1
  b_temp = createUtf8_info("<init>");
  yyoutput_bin(b_temp);
  bin_dispose(b_temp);
  //#2
  b_temp = createUtf8_info("()V");
  yyoutput_bin(b_temp);
  bin_dispose(b_temp);
  //#3
  b_temp = createUtf8_info("java/lang/Object");
  yyoutput_bin(b_temp);
  bin_dispose(b_temp);
  //#4
  b_temp = createUtf8_info("<clinit>");
  yyoutput_bin(b_temp);
  bin_dispose(b_temp);
  //#5
  b_temp = createUtf8_info("main");
  yyoutput_bin(b_temp);
  bin_dispose(b_temp);
  //#6
  b_temp = createUtf8_info("LineNumberTable");
  yyoutput_bin(b_temp);
  bin_dispose(b_temp);
  //#7
  b_temp = createUtf8_info("StackMapTable");
  yyoutput_bin(b_temp);
  bin_dispose(b_temp);
  //#8
  b_temp = createUtf8_info("SourceFile");
  yyoutput_bin(b_temp);
  bin_dispose(b_temp);
  //#9
  b_temp = createUtf8_info(sourceName);
  yyoutput_bin(b_temp);
  bin_dispose(b_temp);
  //#10
  b_temp = createUtf8_info(sourceNameJava);
  yyoutput_bin(b_temp);
  bin_dispose(b_temp);
  //#11
  b_temp = createUtf8_info("Code");
  yyoutput_bin(b_temp);
  bin_dispose(b_temp);
  //#12
  b_temp = createUtf8_info("([/java/lang/Sttring;)V");
  yyoutput_bin(b_temp);
  bin_dispose(b_temp);
  //#13
  b_temp = createClass_info(3);
  yyoutput_bin(b_temp);
  bin_dispose(b_temp);
  //#14
  b_temp = createClass_info(9);
  yyoutput_bin(b_temp);
  bin_dispose(b_temp);
  //#15
  b_temp = createNameAndType_info(1, 2);
  yyoutput_bin(b_temp);
  bin_dispose(b_temp);
  //#16
  b_temp = createNameAndType_info(5, 12);
  yyoutput_bin(b_temp);
  bin_dispose(b_temp);
  //#17
  b_temp = createMethodref_info(13, 15);
  yyoutput_bin(b_temp);
  bin_dispose(b_temp);
  //#18
  b_temp = createMethodref_info(14, 16);
  yyoutput_bin(b_temp);
  bin_dispose(b_temp);
}

int main(int argc, char **argv) {
  mainFound = true;
  FILE *out = NULL;
  FILE *in = NULL;
  int argvNameOfFile = 0;
  for (int i = 1; i < argc; ++i) {
    if (strcmp(argv[i], "-h") == 0) {
      help(argv[0]);
    }
    if (strcmp(argv[i], "-o") == 0) {
      if (argc + 1 == i) {
        fprintf(stderr, "***Erreur : revoir la ligne de commande !***\n");
        return EXIT_FAILURE;
      }
      out = fopen(argv[i + 1], "w");
      if (out == NULL) {
        fprintf(stderr, "***Impossible d'ouvrir le fichier en écriture***\n");
        return EXIT_FAILURE;
      }
      if (yyout != NULL) {
        fclose(yyout);
      }
      yyout = out;
    }
    if (strcmp(argv[i], "-i") == 0) {
      if (argc + 1 == i) {
        fprintf(stderr, "***Erreur : revoir la ligne de commande !***\n");
        return EXIT_FAILURE;
      }
      in = fopen(argv[i + 1], "r");
      if (in == NULL) {
        fprintf(stderr, "***Impossible d'ouvrir le fichier en lecture***\n");
        return EXIT_FAILURE;
      }
      if (yyin != NULL) {
        fclose(yyout);
      }
      yyin = in;
      argvNameOfFile = i + 1;
    }
  }

  //comptue name of file
  size_t len = strlen(argv[argvNameOfFile]);
  size_t idStart = len - 1;
  size_t idEnd = len - 1;
  while (argv[argvNameOfFile][idStart] != '/'
      && argv[argvNameOfFile][idStart] != '\\' && idStart > 0)
    --idStart;
  while (argv[argvNameOfFile][idEnd] != '.' && idEnd > 0)
    --idEnd;
  if (idEnd == 0) {
    idEnd = len - 1;
  }
  len = idEnd - idStart;
  char sourceName[len + 1];
  for (size_t i = idStart; i < len; ++i) {
    sourceName[i] = argv[argvNameOfFile][i + idStart];
  }
  sourceName[len] = '\0';

  genBase(sourceName);

  yyparse();

  if (!mainFound) {
    yyerror("la méthode main n'as pas été trouvé !");
  }
  if (in != NULL) {
    fclose(in);
  }
  if (out != NULL) {
    fclose(out);
  }

  return EXIT_SUCCESS;
}

void yyerror(const char *s) {
  fprintf(stderr, "\n***%s***\n", s);
  exit(EXIT_FAILURE);
}

void yyoutput(const char *s) {
  fprintf(yyout, "%s", s);
}

void yyoutput_bin(bin *b) {
  printf("wrote a %zu sized binOject\n", bin_getSize(b));
  fwrite(bin_getObject(b), bin_getSize(b), 1, yyout);
}

void help(char *s) {
  fprintf(stdout,
    "Uttilisation : %s [-i fichier_entrée.ris] [-o fichier_sortie.class]\n\n"
    "\t\t-i\tfichier_entrée.ris\t\t   Remplace ce fichier en entrée du programme \
    au lieu de l'entrée standart\n"
    "\t\t-o\tfichier_sortie.class\t\t   Remplace la sortie standart par le \
    fichier spécifié\n"
    "\t\t-h\t\t\t\t\t  Affiches cette aide\n", s);

  exit(EXIT_SUCCESS);
}
