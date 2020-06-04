/* A Bison parser, made by GNU Bison 3.6.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_RISTRETTO_TAB_H_INCLUDED
# define YY_YY_RISTRETTO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    DELIM = 258,                   /* DELIM  */
    END_OP = 259,                  /* END_OP  */
    TYPE = 260,                    /* TYPE  */
    TYPE_VOID = 261,               /* TYPE_VOID  */
    FUN_MAIN = 262,                /* FUN_MAIN  */
    INST = 263,                    /* INST  */
    INST_IF = 264,                 /* INST_IF  */
    INST_ELSE = 265,               /* INST_ELSE  */
    INST_WHILE = 266,              /* INST_WHILE  */
    INST_FOR = 267,                /* INST_FOR  */
    OP_NUM = 268,                  /* OP_NUM  */
    OP_SET = 269,                  /* OP_SET  */
    CP_NUM = 270,                  /* CP_NUM  */
    OPE_PAREN = 271,               /* OPE_PAREN  */
    CLO_PAREN = 272,               /* CLO_PAREN  */
    OPE_BRACKET = 273,             /* OPE_BRACKET  */
    CLO_BRACKET = 274,             /* CLO_BRACKET  */
    BOOL_TYPE = 275,               /* BOOL_TYPE  */
    IDENT = 276,                   /* IDENT  */
    STR_TYPE = 277,                /* STR_TYPE  */
    FLOAT_TYPE = 278,              /* FLOAT_TYPE  */
    INT_TYPE = 279,                /* INT_TYPE  */
    LONG_COMMENT = 280,            /* LONG_COMMENT  */
    SHORT_COMMENT = 281,           /* SHORT_COMMENT  */
    COMMA = 282                    /* COMMA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "ristretto.y"

  int type_type;
  int inst_type;
  int oper_num_type;
  int cp_num_type;
  int i_val;
  int b_val;
  float f_val;
  char *s_val;
  char *indent_name;

#line 103 "ristretto.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_RISTRETTO_TAB_H_INCLUDED  */
