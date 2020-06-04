/* A Bison parser, made by GNU Bison 3.6.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.6.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "ristretto.y"

  #include <stdio.h>
  #include <stdlib.h>
  #include <stdbool.h>

  #include "bytecode_class.h"
  #include "common.h"

  extern int yylex();
  extern int yyparse();

  void yyerror(const char *s);
  void whatisThisType(int type);

#line 86 "ristretto.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 175 "ristretto.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_RISTRETTO_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DELIM = 3,                      /* DELIM  */
  YYSYMBOL_END_OP = 4,                     /* END_OP  */
  YYSYMBOL_TYPE = 5,                       /* TYPE  */
  YYSYMBOL_TYPE_VOID = 6,                  /* TYPE_VOID  */
  YYSYMBOL_FUN_MAIN = 7,                   /* FUN_MAIN  */
  YYSYMBOL_INST = 8,                       /* INST  */
  YYSYMBOL_INST_IF = 9,                    /* INST_IF  */
  YYSYMBOL_INST_ELSE = 10,                 /* INST_ELSE  */
  YYSYMBOL_INST_WHILE = 11,                /* INST_WHILE  */
  YYSYMBOL_INST_FOR = 12,                  /* INST_FOR  */
  YYSYMBOL_OP_NUM = 13,                    /* OP_NUM  */
  YYSYMBOL_OP_SET = 14,                    /* OP_SET  */
  YYSYMBOL_CP_NUM = 15,                    /* CP_NUM  */
  YYSYMBOL_OPE_PAREN = 16,                 /* OPE_PAREN  */
  YYSYMBOL_CLO_PAREN = 17,                 /* CLO_PAREN  */
  YYSYMBOL_OPE_BRACKET = 18,               /* OPE_BRACKET  */
  YYSYMBOL_CLO_BRACKET = 19,               /* CLO_BRACKET  */
  YYSYMBOL_BOOL_TYPE = 20,                 /* BOOL_TYPE  */
  YYSYMBOL_IDENT = 21,                     /* IDENT  */
  YYSYMBOL_STR_TYPE = 22,                  /* STR_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 23,                /* FLOAT_TYPE  */
  YYSYMBOL_INT_TYPE = 24,                  /* INT_TYPE  */
  YYSYMBOL_LONG_COMMENT = 25,              /* LONG_COMMENT  */
  YYSYMBOL_SHORT_COMMENT = 26,             /* SHORT_COMMENT  */
  YYSYMBOL_COMMA = 27,                     /* COMMA  */
  YYSYMBOL_YYACCEPT = 28,                  /* $accept  */
  YYSYMBOL_B_FULL_TEXT = 29,               /* B_FULL_TEXT  */
  YYSYMBOL_TEXT = 30,                      /* TEXT  */
  YYSYMBOL_B_DEF_ROOT = 31,                /* B_DEF_ROOT  */
  YYSYMBOL_B_TO_DEF_FUN_OR_VAR = 32,       /* B_TO_DEF_FUN_OR_VAR  */
  YYSYMBOL_B_TO_DEF_FUN_BUT_VOID_PAREN = 33, /* B_TO_DEF_FUN_BUT_VOID_PAREN  */
  YYSYMBOL_B_DEF_FUN_BUT_TYPE_PAREN = 34,  /* B_DEF_FUN_BUT_TYPE_PAREN  */
  YYSYMBOL_B_DEF_VAR_BUT_TYPE_B_D = 35,    /* B_DEF_VAR_BUT_TYPE_B_D  */
  YYSYMBOL_B_LIST_DEF_ARGS_FUN = 36,       /* B_LIST_DEF_ARGS_FUN  */
  YYSYMBOL_B_LIST_REST_ARGS_FUN = 37,      /* B_LIST_REST_ARGS_FUN  */
  YYSYMBOL_B_INSIDE_A_FUNCTION_VOID = 38,  /* B_INSIDE_A_FUNCTION_VOID  */
  YYSYMBOL_B_INSIDE_A_FUNCTION = 39,       /* B_INSIDE_A_FUNCTION  */
  YYSYMBOL_B_BLOCK_CODE = 40,              /* B_BLOCK_CODE  */
  YYSYMBOL_B_PART_BLOCK = 41,              /* B_PART_BLOCK  */
  YYSYMBOL_B_INST_LINE = 42,               /* B_INST_LINE  */
  YYSYMBOL_B_DEF_VAR_BUT_IDENT = 43,       /* B_DEF_VAR_BUT_IDENT  */
  YYSYMBOL_B_SET_VAR = 44,                 /* B_SET_VAR  */
  YYSYMBOL_B_FOR_LOOP = 45,                /* B_FOR_LOOP  */
  YYSYMBOL_B_IF_BLOCK = 46,                /* B_IF_BLOCK  */
  YYSYMBOL_B_POTENTIAL_ELSE = 47,          /* B_POTENTIAL_ELSE  */
  YYSYMBOL_B_WHILE_LOOP = 48,              /* B_WHILE_LOOP  */
  YYSYMBOL_B_CONDITION = 49,               /* B_CONDITION  */
  YYSYMBOL_B_REST_COND = 50,               /* B_REST_COND  */
  YYSYMBOL_B_RVALUE = 51,                  /* B_RVALUE  */
  YYSYMBOL_B_FUN_VALUE = 52,               /* B_FUN_VALUE  */
  YYSYMBOL_B_FUN_PAREN_CONTENT = 53,       /* B_FUN_PAREN_CONTENT  */
  YYSYMBOL_B_FUN_PAREN_CONTENT_NOT_EMPTY = 54, /* B_FUN_PAREN_CONTENT_NOT_EMPTY  */
  YYSYMBOL_B_VAR_VALUE = 55,               /* B_VAR_VALUE  */
  YYSYMBOL_B_VALUE = 56,                   /* B_VALUE  */
  YYSYMBOL_B_CP_NUM = 57,                  /* B_CP_NUM  */
  YYSYMBOL_B_OPE_BRACKET = 58,             /* B_OPE_BRACKET  */
  YYSYMBOL_B_CLO_BRACKET = 59,             /* B_CLO_BRACKET  */
  YYSYMBOL_B_INST_IF = 60,                 /* B_INST_IF  */
  YYSYMBOL_B_INST_ELSE = 61,               /* B_INST_ELSE  */
  YYSYMBOL_B_INST_WHILE = 62,              /* B_INST_WHILE  */
  YYSYMBOL_B_INST_FOR = 63,                /* B_INST_FOR  */
  YYSYMBOL_B_END_OP = 64,                  /* B_END_OP  */
  YYSYMBOL_B_INST = 65,                    /* B_INST  */
  YYSYMBOL_B_COMMA = 66,                   /* B_COMMA  */
  YYSYMBOL_B_OPE_PAREN = 67,               /* B_OPE_PAREN  */
  YYSYMBOL_B_CLO_PAREN = 68,               /* B_CLO_PAREN  */
  YYSYMBOL_B_OPERATOR_SET = 69,            /* B_OPERATOR_SET  */
  YYSYMBOL_B_IDENT = 70,                   /* B_IDENT  */
  YYSYMBOL_B_TYPE_VOID = 71,               /* B_TYPE_VOID  */
  YYSYMBOL_B_FLOAT_TYPE = 72,              /* B_FLOAT_TYPE  */
  YYSYMBOL_B_INT_TYPE = 73,                /* B_INT_TYPE  */
  YYSYMBOL_B_TYPE = 74,                    /* B_TYPE  */
  YYSYMBOL_B_D = 75                        /* B_D  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   173

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  28
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  166

#define YYMAXUTOK   282


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27
};

#if YYDEBUG
  /* YYRLINEYYN -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    60,    60,    62,    62,    64,    65,    67,    68,    70,
      72,    75,    78,    80,    80,    82,    82,    84,    86,    88,
      88,    90,    91,    92,    93,    94,    95,    97,    99,   101,
     103,   107,   110,   111,   113,   116,   118,   118,   120,   121,
     122,   123,   124,   126,   128,   128,   130,   131,   133,   135,
     135,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     156,   156,   156
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "DELIM", "END_OP",
  "TYPE", "TYPE_VOID", "FUN_MAIN", "INST", "INST_IF", "INST_ELSE",
  "INST_WHILE", "INST_FOR", "OP_NUM", "OP_SET", "CP_NUM", "OPE_PAREN",
  "CLO_PAREN", "OPE_BRACKET", "CLO_BRACKET", "BOOL_TYPE", "IDENT",
  "STR_TYPE", "FLOAT_TYPE", "INT_TYPE", "LONG_COMMENT", "SHORT_COMMENT",
  "COMMA", "$accept", "B_FULL_TEXT", "TEXT", "B_DEF_ROOT",
  "B_TO_DEF_FUN_OR_VAR", "B_TO_DEF_FUN_BUT_VOID_PAREN",
  "B_DEF_FUN_BUT_TYPE_PAREN", "B_DEF_VAR_BUT_TYPE_B_D",
  "B_LIST_DEF_ARGS_FUN", "B_LIST_REST_ARGS_FUN",
  "B_INSIDE_A_FUNCTION_VOID", "B_INSIDE_A_FUNCTION", "B_BLOCK_CODE",
  "B_PART_BLOCK", "B_INST_LINE", "B_DEF_VAR_BUT_IDENT", "B_SET_VAR",
  "B_FOR_LOOP", "B_IF_BLOCK", "B_POTENTIAL_ELSE", "B_WHILE_LOOP",
  "B_CONDITION", "B_REST_COND", "B_RVALUE", "B_FUN_VALUE",
  "B_FUN_PAREN_CONTENT", "B_FUN_PAREN_CONTENT_NOT_EMPTY", "B_VAR_VALUE",
  "B_VALUE", "B_CP_NUM", "B_OPE_BRACKET", "B_CLO_BRACKET", "B_INST_IF",
  "B_INST_ELSE", "B_INST_WHILE", "B_INST_FOR", "B_END_OP", "B_INST",
  "B_COMMA", "B_OPE_PAREN", "B_CLO_PAREN", "B_OPERATOR_SET", "B_IDENT",
  "B_TYPE_VOID", "B_FLOAT_TYPE", "B_INT_TYPE", "B_TYPE", "B_D", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282
};
#endif

#define YYPACT_NINF (-103)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACTSTATE-NUM -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,    13,  -103,  -103,     3,    19,  -103,  -103,    13,    13,
    -103,    19,    11,    -6,  -103,  -103,  -103,    12,    12,  -103,
      61,    13,    29,    19,  -103,    19,    30,  -103,    38,    38,
    -103,    41,  -103,    38,    13,  -103,    68,    13,    39,    39,
      13,    49,    39,  -103,    61,    13,    13,     9,  -103,  -103,
    -103,    68,  -103,  -103,  -103,  -103,    13,   135,   135,  -103,
      13,  -103,    60,   135,    68,  -103,  -103,    13,    13,  -103,
      36,  -103,    13,    13,    13,    13,    47,  -103,   135,  -103,
      12,    12,    12,    68,    30,    41,    47,  -103,    41,    47,
    -103,     6,    38,  -103,  -103,    68,  -103,  -103,  -103,  -103,
    -103,    13,  -103,  -103,  -103,    68,  -103,    68,  -103,    60,
       9,  -103,    68,    30,  -103,    49,  -103,    68,  -103,  -103,
    -103,    38,    37,    38,    41,  -103,     9,  -103,    68,  -103,
    -103,    39,    13,  -103,    68,    39,    30,  -103,     9,   135,
    -103,    66,   135,    68,  -103,    47,    47,     9,    73,  -103,
      68,    13,  -103,    39,    86,  -103,   135,    75,    47,    30,
    -103,    38,    39,   135,    47,  -103
};

  /* YYDEFACTSTATE-NUM -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      70,    70,    72,    71,     0,     4,    69,     1,    70,    70,
       2,     4,     0,     0,    68,    65,     3,     0,     0,     6,
      70,    70,     0,     0,     5,     0,     0,    61,     0,     0,
      13,     0,     8,     0,    70,     7,     0,    70,     0,     0,
      70,    16,     0,    63,    70,    70,    70,     0,    40,    41,
      42,     0,    48,    49,    50,    62,    70,    20,    20,    64,
      70,    14,     0,    20,    44,    66,    67,    70,    70,    12,
       0,    52,    70,    70,    70,    70,     0,    17,    20,    26,
       0,     0,     0,     0,     0,     0,     0,    60,     0,     0,
      18,    47,     0,    45,    58,     0,    39,    59,    54,    56,
      57,    70,    10,    19,    24,     0,    25,     0,    23,     0,
       0,    22,     0,     0,     9,    16,    11,     0,    43,    38,
      53,     0,    37,     0,     0,    27,     0,    21,     0,    15,
      46,     0,    70,    35,     0,     0,     0,    29,     0,    20,
      51,    36,    20,     0,    28,     0,     0,     0,    33,    34,
       0,    70,    31,     0,     0,    55,    20,     0,     0,     0,
      32,     0,     0,    20,     0,    30
};

  /* YYPGOTONTERM-NUM.  */
static const yytype_int8 yypgoto[] =
{
    -103,  -103,    88,  -103,  -103,  -103,  -103,  -103,    80,    -9,
      55,  -103,   -61,  -103,  -103,  -103,   -45,  -103,  -103,  -103,
    -103,  -102,  -103,   -24,  -103,  -103,    -1,  -103,  -103,  -103,
     -28,    -4,  -103,  -103,  -103,  -103,   -84,  -103,    27,    91,
     -23,   -19,   -27,    98,  -103,  -103,    18,     0
};

  /* YYDEFGOTONTERM-NUM.  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,    10,    11,    24,    19,    32,    35,    29,    61,
      76,    89,    77,    78,    79,   127,   111,   108,   104,   152,
     106,   121,   133,   122,    48,    92,    93,    49,    50,   134,
      57,   102,    80,   153,    81,    82,    69,    83,    62,    51,
      38,   112,    52,    12,    53,    54,    85,    59
};

  /* YYTABLEYYPACT[STATE-NUM] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       5,     6,    90,     7,    41,   123,    39,    36,    14,    15,
      42,    58,    47,    67,    63,    20,     1,   103,    17,    68,
      26,    27,    68,    13,     8,     9,   125,    70,    21,    13,
      84,    84,    18,    60,    43,     9,    84,    55,     2,     3,
      91,    31,   137,    31,    34,    65,    66,    96,   154,    68,
      68,    84,   132,    37,   144,    37,    71,    56,   113,   110,
      87,   115,    40,   150,     1,     8,   101,    94,    95,   118,
     157,   119,    97,    98,    99,   100,    60,    21,   145,    68,
      88,   146,   114,   151,    21,   116,     2,     3,   126,    44,
      67,    45,    46,    91,   128,   158,   159,   136,   131,    16,
     135,   120,   164,   139,   138,    33,   129,   142,    22,    23,
     141,    25,    84,    86,   161,    84,   130,   143,   117,   147,
      28,    30,     0,    30,     0,   156,     0,   124,     0,    84,
       0,     0,   140,     0,   163,    64,    84,     0,   162,     0,
       8,   148,   149,    72,    73,     0,    74,    75,     0,     0,
       0,   155,     0,     0,   160,     0,    40,     0,     0,     0,
     165,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   107,   109
};

static const yytype_int16 yycheck[] =
{
       0,     1,    63,     0,    31,   107,    29,    26,     8,     9,
      33,    39,    36,     4,    42,    21,     3,    78,     7,    13,
      20,    21,    13,     5,     5,     6,   110,    51,    16,    11,
      57,    58,    21,    27,    34,     6,    63,    37,    25,    26,
      64,    23,   126,    25,    14,    45,    46,    70,   150,    13,
      13,    78,    15,    17,   138,    17,    56,    18,    85,    83,
      60,    88,    21,   147,     3,     5,    19,    67,    68,    92,
     154,    95,    72,    73,    74,    75,    27,    16,   139,    13,
      62,   142,    86,    10,    16,    89,    25,    26,   112,    21,
       4,    23,    24,   117,   113,   156,    21,   124,   121,    11,
     123,   101,   163,   131,   128,    25,   115,   135,    17,    18,
     134,    20,   139,    58,   159,   142,   117,   136,    91,   143,
      22,    23,    -1,    25,    -1,   153,    -1,   109,    -1,   156,
      -1,    -1,   132,    -1,   162,    44,   163,    -1,   161,    -1,
       5,   145,   146,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,   151,    -1,    -1,   158,    -1,    21,    -1,    -1,    -1,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82
};

  /* YYSTOSSTATE-NUM -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    25,    26,    29,    75,    75,     0,     5,     6,
      30,    31,    71,    74,    75,    75,    30,     7,    21,    33,
      21,    16,    67,    67,    32,    67,    75,    75,    71,    36,
      71,    74,    34,    36,    14,    35,    69,    17,    68,    68,
      21,    70,    68,    75,    21,    23,    24,    51,    52,    55,
      56,    67,    70,    72,    73,    75,    18,    58,    58,    75,
      27,    37,    66,    58,    67,    75,    75,     4,    13,    64,
      51,    75,     8,     9,    11,    12,    38,    40,    41,    42,
      60,    62,    63,    65,    70,    74,    38,    75,    74,    39,
      40,    51,    53,    54,    75,    75,    68,    75,    75,    75,
      75,    19,    59,    40,    46,    67,    48,    67,    45,    67,
      51,    44,    69,    70,    59,    70,    59,    66,    68,    51,
      75,    49,    51,    49,    74,    64,    51,    43,    69,    37,
      54,    68,    15,    50,    57,    68,    70,    64,    51,    58,
      75,    51,    58,    69,    64,    40,    40,    51,    59,    59,
      64,    10,    47,    61,    49,    75,    58,    64,    40,    21,
      59,    44,    68,    58,    40,    59
};

  /* YYR1YYN -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    28,    29,    30,    30,    31,    31,    32,    32,    33,
      33,    34,    35,    36,    36,    37,    37,    38,    39,    40,
      40,    41,    41,    41,    41,    41,    41,    42,    43,    44,
      45,    46,    47,    47,    48,    49,    50,    50,    51,    51,
      51,    51,    51,    52,    53,    53,    54,    54,    55,    56,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      75,    75,    75
};

  /* YYR2YYN -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     3,     2,     2,     2,     7,
       7,     5,     3,     1,     3,     4,     0,     1,     1,     2,
       0,     3,     2,     2,     2,     2,     1,     3,     3,     3,
      14,     7,     4,     0,     6,     2,     2,     0,     4,     3,
       1,     1,     1,     4,     0,     1,     3,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       0,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yystacksize = YYINITDEPTH;
  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;


  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 51:
#line 138 "ristretto.y"
                      {  }
#line 1352 "ristretto.tab.c"
    break;

  case 52:
#line 139 "ristretto.y"
                                {  }
#line 1358 "ristretto.tab.c"
    break;

  case 53:
#line 140 "ristretto.y"
                                {  }
#line 1364 "ristretto.tab.c"
    break;

  case 54:
#line 141 "ristretto.y"
                        {  }
#line 1370 "ristretto.tab.c"
    break;

  case 55:
#line 142 "ristretto.y"
                            {  }
#line 1376 "ristretto.tab.c"
    break;

  case 56:
#line 143 "ristretto.y"
                              {  }
#line 1382 "ristretto.tab.c"
    break;

  case 57:
#line 144 "ristretto.y"
                          {  }
#line 1388 "ristretto.tab.c"
    break;

  case 58:
#line 145 "ristretto.y"
                      {  }
#line 1394 "ristretto.tab.c"
    break;

  case 59:
#line 146 "ristretto.y"
                  {  }
#line 1400 "ristretto.tab.c"
    break;

  case 60:
#line 147 "ristretto.y"
                    {  }
#line 1406 "ristretto.tab.c"
    break;

  case 61:
#line 148 "ristretto.y"
                            {  }
#line 1412 "ristretto.tab.c"
    break;

  case 62:
#line 149 "ristretto.y"
                            {  }
#line 1418 "ristretto.tab.c"
    break;

  case 63:
#line 150 "ristretto.y"
                            {  }
#line 1424 "ristretto.tab.c"
    break;

  case 64:
#line 151 "ristretto.y"
                    {  }
#line 1430 "ristretto.tab.c"
    break;

  case 65:
#line 152 "ristretto.y"
                            {  }
#line 1436 "ristretto.tab.c"
    break;

  case 66:
#line 153 "ristretto.y"
                              {  }
#line 1442 "ristretto.tab.c"
    break;

  case 67:
#line 154 "ristretto.y"
                          {  }
#line 1448 "ristretto.tab.c"
    break;

  case 68:
#line 155 "ristretto.y"
                  { (yyval.type_type) = (yyvsp[-1].type_type); }
#line 1454 "ristretto.tab.c"
    break;


#line 1458 "ristretto.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 158 "ristretto.y"


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
