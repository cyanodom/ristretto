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
  YYSYMBOL_B_TEXT = 30,                    /* B_TEXT  */
  YYSYMBOL_B_ROOT_CODE_BLOCK = 31,         /* B_ROOT_CODE_BLOCK  */
  YYSYMBOL_B_ANYWAY_ROOT = 32,             /* B_ANYWAY_ROOT  */
  YYSYMBOL_B_INSTANCIATION = 33,           /* B_INSTANCIATION  */
  YYSYMBOL_B_CHANGE_VALUE = 34,            /* B_CHANGE_VALUE  */
  YYSYMBOL_B_INSTRUCTION = 35,             /* B_INSTRUCTION  */
  YYSYMBOL_B_CODE_BLOCK = 36,              /* B_CODE_BLOCK  */
  YYSYMBOL_B_ANYWAY = 37,                  /* B_ANYWAY  */
  YYSYMBOL_B_CONDITION = 38,               /* B_CONDITION  */
  YYSYMBOL_B_BLOCK_FOR = 39,               /* B_BLOCK_FOR  */
  YYSYMBOL_B_BLOCK_IF = 40,                /* B_BLOCK_IF  */
  YYSYMBOL_B_BLOCK_WHILE = 41,             /* B_BLOCK_WHILE  */
  YYSYMBOL_B_OPERATION = 42,               /* B_OPERATION  */
  YYSYMBOL_B_RVALUE = 43,                  /* B_RVALUE  */
  YYSYMBOL_B_FUNCTION = 44,                /* B_FUNCTION  */
  YYSYMBOL_B_DEF_FUN = 45,                 /* B_DEF_FUN  */
  YYSYMBOL_B_DEF_FUN_ARGS = 46,            /* B_DEF_FUN_ARGS  */
  YYSYMBOL_B_DEF_FUN_ARGS_HERE = 47,       /* B_DEF_FUN_ARGS_HERE  */
  YYSYMBOL_B_DEF_FUN_MAIN = 48,            /* B_DEF_FUN_MAIN  */
  YYSYMBOL_B_FUN_ARGS = 49,                /* B_FUN_ARGS  */
  YYSYMBOL_B_CP_NUM = 50,                  /* B_CP_NUM  */
  YYSYMBOL_B_OPE_BRACKET = 51,             /* B_OPE_BRACKET  */
  YYSYMBOL_B_CLO_BRACKET = 52,             /* B_CLO_BRACKET  */
  YYSYMBOL_B_INST_IF = 53,                 /* B_INST_IF  */
  YYSYMBOL_B_INST_ELSE = 54,               /* B_INST_ELSE  */
  YYSYMBOL_B_INST_WHILE = 55,              /* B_INST_WHILE  */
  YYSYMBOL_B_INST_FOR = 56,                /* B_INST_FOR  */
  YYSYMBOL_B_END_OP = 57,                  /* B_END_OP  */
  YYSYMBOL_B_INST = 58,                    /* B_INST  */
  YYSYMBOL_B_COMMA = 59,                   /* B_COMMA  */
  YYSYMBOL_B_OPE_PAREN = 60,               /* B_OPE_PAREN  */
  YYSYMBOL_B_CLO_PAREN = 61,               /* B_CLO_PAREN  */
  YYSYMBOL_B_OPERATOR_SET = 62,            /* B_OPERATOR_SET  */
  YYSYMBOL_B_IDENT = 63,                   /* B_IDENT  */
  YYSYMBOL_B_TYPE_VOID = 64,               /* B_TYPE_VOID  */
  YYSYMBOL_B_TYPE = 65,                    /* B_TYPE  */
  YYSYMBOL_B_DELIM = 66                    /* B_DELIM  */
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
#define YYLAST   150

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  28
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  148

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
       0,    60,    60,    62,    63,    64,    66,    67,    69,    70,
      72,    74,    76,    78,    79,    81,    82,    83,    84,    85,
      86,    88,    89,    91,    95,    97,   101,   104,   105,   106,
     108,   109,   111,   113,   115,   118,   119,   121,   122,   124,
     127,   128,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   149,
     149,   149
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
  "COMMA", "$accept", "B_FULL_TEXT", "B_TEXT", "B_ROOT_CODE_BLOCK",
  "B_ANYWAY_ROOT", "B_INSTANCIATION", "B_CHANGE_VALUE", "B_INSTRUCTION",
  "B_CODE_BLOCK", "B_ANYWAY", "B_CONDITION", "B_BLOCK_FOR", "B_BLOCK_IF",
  "B_BLOCK_WHILE", "B_OPERATION", "B_RVALUE", "B_FUNCTION", "B_DEF_FUN",
  "B_DEF_FUN_ARGS", "B_DEF_FUN_ARGS_HERE", "B_DEF_FUN_MAIN", "B_FUN_ARGS",
  "B_CP_NUM", "B_OPE_BRACKET", "B_CLO_BRACKET", "B_INST_IF", "B_INST_ELSE",
  "B_INST_WHILE", "B_INST_FOR", "B_END_OP", "B_INST", "B_COMMA",
  "B_OPE_PAREN", "B_CLO_PAREN", "B_OPERATOR_SET", "B_IDENT", "B_TYPE_VOID",
  "B_TYPE", "B_DELIM", YY_NULLPTR
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

#define YYPACT_NINF (-101)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACTSTATE-NUM -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,     8,  -101,  -101,     4,    14,  -101,  -101,     8,     8,
      25,  -101,    45,     7,    48,  -101,     7,    54,    63,  -101,
    -101,     8,    24,  -101,  -101,     8,  -101,  -101,    25,    23,
      75,  -101,    73,  -101,  -101,    74,  -101,    45,    24,  -101,
       8,    60,     8,    79,     8,    76,    73,    73,  -101,    23,
      98,  -101,  -101,    60,  -101,  -101,     8,   129,     8,   109,
      79,    79,    60,     8,    66,  -101,     8,     8,     8,     8,
      25,    48,    48,   100,   129,  -101,  -101,  -101,    48,    25,
      25,    25,    60,    74,  -101,  -101,   129,   129,    18,    73,
      60,  -101,  -101,  -101,  -101,  -101,  -101,  -101,     8,  -101,
    -101,  -101,    60,    60,   109,    98,   100,   100,    60,  -101,
    -101,  -101,    73,    47,    73,    48,  -101,  -101,  -101,    79,
       8,    60,    79,    60,   129,  -101,    98,   129,    48,   100,
     100,    74,   112,  -101,    73,    75,     8,    79,    79,    60,
    -101,   129,   129,    98,   100,   100,  -101,  -101
};

  /* YYDEFACTSTATE-NUM -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      59,    59,    61,    60,     0,     0,    58,     1,    59,    59,
       0,     2,     0,     7,     0,     9,     5,     0,     0,    57,
      56,    59,     0,     3,     6,    59,     8,     4,     0,    59,
       0,    52,     0,    35,    36,     0,    49,     0,     0,    55,
      59,     0,    59,     0,    59,    38,     0,     0,    54,    59,
      10,    29,    31,     0,    30,    53,    59,    14,    59,     0,
       0,     0,     0,    59,     0,    43,    59,    59,    59,    59,
       0,     0,     0,     0,    14,    15,    17,    16,     0,     0,
       0,     0,     0,     0,    51,    37,    14,    14,    41,     0,
       0,    28,    50,    45,    47,    48,    19,    18,    59,    34,
      13,    20,     0,     0,     0,    12,     0,     0,     0,    32,
      27,    44,     0,    21,     0,     0,    39,    33,    40,     0,
      59,     0,     0,     0,    14,    42,    22,    14,     0,     0,
       0,     0,    24,    26,     0,     0,    59,     0,     0,     0,
      46,    14,    14,    11,     0,     0,    25,    23
};

  /* YYPGOTONTERM-NUM.  */
static const yytype_int8 yypgoto[] =
{
    -101,  -101,  -101,    97,  -101,    -3,  -101,  -101,   -15,  -101,
    -100,  -101,  -101,  -101,   -35,  -101,   -50,  -101,    85,    65,
     113,    20,  -101,   -44,     1,  -101,  -101,  -101,  -101,   -28,
    -101,    41,    36,   -32,    -2,   -13,    16,    83,     0
};

  /* YYDEFGOTONTERM-NUM.  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,    11,    12,    13,    71,   134,    72,    73,    74,
     112,    75,    76,    77,   113,    51,    52,    15,    32,    33,
      16,    89,   121,    57,    99,    79,   137,    80,    81,    26,
      82,    59,    53,    43,    41,    54,    17,    83,    39
};

  /* YYTABLEYYPACT[STATE-NUM] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       5,     6,    14,   114,     7,    30,    50,    78,    19,    20,
      14,     1,     8,    14,    60,    61,    86,    87,    64,     8,
       9,    31,    45,   128,    78,    36,     1,    88,    10,     8,
       9,    63,    91,     2,     3,    10,    78,    78,    34,    21,
      48,    21,    55,    96,    97,    58,    22,   105,     2,     3,
     101,     9,    25,    46,    34,   110,    65,   109,    84,   100,
      63,    28,   120,    90,    37,    38,    92,    93,    94,    95,
      30,   106,   107,    88,    78,   124,    21,    78,   127,    63,
     119,    49,   122,    42,    29,    62,   126,   123,    18,    40,
      42,    78,    78,   141,   142,    44,    18,    56,   111,    18,
     131,   115,   138,    58,   143,    35,    62,   116,   117,   129,
      24,    63,   130,    27,     8,   102,   103,   104,   135,    98,
     125,    35,   136,    47,    85,    23,   144,   145,   118,   108,
     132,   133,     0,   139,     8,     0,   140,    66,    67,     0,
      68,    69,    35,     0,     0,   146,   147,     0,     0,     0,
      70
};

static const yytype_int16 yycheck[] =
{
       0,     1,     5,   103,     0,    18,    41,    57,     8,     9,
      13,     3,     5,    16,    46,    47,    60,    61,    53,     5,
       6,    21,    35,   123,    74,    25,     3,    62,    21,     5,
       6,    13,    64,    25,    26,    21,    86,    87,    22,    16,
      40,    16,    42,    71,    72,    27,    10,    82,    25,    26,
      78,     6,     4,    37,    38,    90,    56,    89,    58,    74,
      13,     7,    15,    63,    28,    29,    66,    67,    68,    69,
      83,    86,    87,   108,   124,   119,    16,   127,   122,    13,
     112,    21,   114,    17,    21,    49,   121,   115,     5,    14,
      17,   141,   142,   137,   138,    21,    13,    18,    98,    16,
     128,   104,   134,    27,   139,    22,    70,   106,   107,   124,
      13,    13,   127,    16,     5,    79,    80,    81,   131,    19,
     120,    38,    10,    38,    59,    12,   141,   142,   108,    88,
     129,   130,    -1,   135,     5,    -1,   136,     8,     9,    -1,
      11,    12,    59,    -1,    -1,   144,   145,    -1,    -1,    -1,
      21
};

  /* YYSTOSSTATE-NUM -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    25,    26,    29,    66,    66,     0,     5,     6,
      21,    30,    31,    32,    33,    45,    48,    64,    65,    66,
      66,    16,    60,    48,    31,     4,    57,    31,     7,    21,
      63,    66,    46,    47,    64,    65,    66,    60,    60,    66,
      14,    62,    17,    61,    21,    63,    64,    46,    66,    21,
      42,    43,    44,    60,    63,    66,    18,    51,    27,    59,
      61,    61,    60,    13,    42,    66,     8,     9,    11,    12,
      21,    33,    35,    36,    37,    39,    40,    41,    44,    53,
      55,    56,    58,    65,    66,    47,    51,    51,    42,    49,
      66,    61,    66,    66,    66,    66,    57,    57,    19,    52,
      36,    57,    60,    60,    60,    42,    36,    36,    59,    61,
      42,    66,    38,    42,    38,    33,    52,    52,    49,    61,
      15,    50,    61,    57,    51,    66,    42,    51,    38,    36,
      36,    57,    52,    52,    34,    63,    10,    54,    61,    62,
      66,    51,    51,    42,    36,    36,    52,    52
};

  /* YYR1YYN -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    28,    29,    30,    30,    30,    31,    31,    32,    32,
      33,    34,    35,    36,    36,    37,    37,    37,    37,    37,
      37,    38,    38,    39,    40,    40,    41,    42,    42,    42,
      43,    43,    44,    45,    45,    46,    46,    47,    47,    48,
      49,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    66,
      66,    66
};

  /* YYR2YYN -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     2,     1,     2,     1,
       4,     3,     2,     2,     0,     1,     1,     1,     2,     2,
       2,     1,     3,    11,     7,    11,     7,     4,     3,     1,
       1,     1,     4,     8,     7,     1,     1,     4,     2,     8,
       3,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
       1,     1
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
  case 2:
#line 60 "ristretto.y"
                             {  }
#line 1324 "ristretto.tab.c"
    break;

  case 3:
#line 62 "ristretto.y"
                                          {  }
#line 1330 "ristretto.tab.c"
    break;

  case 4:
#line 63 "ristretto.y"
                                       {  }
#line 1336 "ristretto.tab.c"
    break;

  case 5:
#line 64 "ristretto.y"
                     {  }
#line 1342 "ristretto.tab.c"
    break;

  case 6:
#line 66 "ristretto.y"
                                                    {  }
#line 1348 "ristretto.tab.c"
    break;

  case 7:
#line 67 "ristretto.y"
                    {  }
#line 1354 "ristretto.tab.c"
    break;

  case 8:
#line 69 "ristretto.y"
                                         {  }
#line 1360 "ristretto.tab.c"
    break;

  case 9:
#line 70 "ristretto.y"
                {  }
#line 1366 "ristretto.tab.c"
    break;

  case 10:
#line 72 "ristretto.y"
                                                            {  }
#line 1372 "ristretto.tab.c"
    break;

  case 11:
#line 74 "ristretto.y"
                                                    {  }
#line 1378 "ristretto.tab.c"
    break;

  case 12:
#line 76 "ristretto.y"
                                   {  }
#line 1384 "ristretto.tab.c"
    break;

  case 13:
#line 78 "ristretto.y"
                                     {  }
#line 1390 "ristretto.tab.c"
    break;

  case 14:
#line 79 "ristretto.y"
              {  }
#line 1396 "ristretto.tab.c"
    break;

  case 15:
#line 81 "ristretto.y"
                       {  }
#line 1402 "ristretto.tab.c"
    break;

  case 16:
#line 82 "ristretto.y"
                    {  }
#line 1408 "ristretto.tab.c"
    break;

  case 17:
#line 83 "ristretto.y"
                 {  }
#line 1414 "ristretto.tab.c"
    break;

  case 18:
#line 84 "ristretto.y"
                             {  }
#line 1420 "ristretto.tab.c"
    break;

  case 19:
#line 85 "ristretto.y"
                               {  }
#line 1426 "ristretto.tab.c"
    break;

  case 20:
#line 86 "ristretto.y"
                           {  }
#line 1432 "ristretto.tab.c"
    break;

  case 21:
#line 88 "ristretto.y"
                          {  }
#line 1438 "ristretto.tab.c"
    break;

  case 22:
#line 89 "ristretto.y"
                                       {  }
#line 1444 "ristretto.tab.c"
    break;

  case 23:
#line 93 "ristretto.y"
                               {  }
#line 1450 "ristretto.tab.c"
    break;

  case 24:
#line 96 "ristretto.y"
                                             {  }
#line 1456 "ristretto.tab.c"
    break;

  case 25:
#line 99 "ristretto.y"
                                                         {  }
#line 1462 "ristretto.tab.c"
    break;

  case 26:
#line 102 "ristretto.y"
                               {  }
#line 1468 "ristretto.tab.c"
    break;

  case 27:
#line 104 "ristretto.y"
                                                     {  }
#line 1474 "ristretto.tab.c"
    break;

  case 28:
#line 105 "ristretto.y"
                                          {  }
#line 1480 "ristretto.tab.c"
    break;

  case 29:
#line 106 "ristretto.y"
               {  }
#line 1486 "ristretto.tab.c"
    break;

  case 30:
#line 108 "ristretto.y"
                   {  }
#line 1492 "ristretto.tab.c"
    break;

  case 31:
#line 109 "ristretto.y"
                 {  }
#line 1498 "ristretto.tab.c"
    break;

  case 32:
#line 111 "ristretto.y"
                                                      {  }
#line 1504 "ristretto.tab.c"
    break;

  case 34:
#line 116 "ristretto.y"
                                 {  }
#line 1510 "ristretto.tab.c"
    break;

  case 35:
#line 118 "ristretto.y"
                                     {  }
#line 1516 "ristretto.tab.c"
    break;

  case 36:
#line 119 "ristretto.y"
                  {  }
#line 1522 "ristretto.tab.c"
    break;

  case 37:
#line 121 "ristretto.y"
                                                                 {  }
#line 1528 "ristretto.tab.c"
    break;

  case 38:
#line 122 "ristretto.y"
                     {  }
#line 1534 "ristretto.tab.c"
    break;

  case 39:
#line 125 "ristretto.y"
                               {  }
#line 1540 "ristretto.tab.c"
    break;

  case 40:
#line 127 "ristretto.y"
                                            {  }
#line 1546 "ristretto.tab.c"
    break;

  case 41:
#line 128 "ristretto.y"
                  {  }
#line 1552 "ristretto.tab.c"
    break;

  case 42:
#line 133 "ristretto.y"
                          {  }
#line 1558 "ristretto.tab.c"
    break;

  case 43:
#line 134 "ristretto.y"
                                    {  }
#line 1564 "ristretto.tab.c"
    break;

  case 44:
#line 135 "ristretto.y"
                                    {  }
#line 1570 "ristretto.tab.c"
    break;

  case 45:
#line 136 "ristretto.y"
                            {  }
#line 1576 "ristretto.tab.c"
    break;

  case 46:
#line 137 "ristretto.y"
                                {  }
#line 1582 "ristretto.tab.c"
    break;

  case 47:
#line 138 "ristretto.y"
                                  {  }
#line 1588 "ristretto.tab.c"
    break;

  case 48:
#line 139 "ristretto.y"
                              {  }
#line 1594 "ristretto.tab.c"
    break;

  case 49:
#line 140 "ristretto.y"
                          {  }
#line 1600 "ristretto.tab.c"
    break;

  case 50:
#line 141 "ristretto.y"
                      {  }
#line 1606 "ristretto.tab.c"
    break;

  case 51:
#line 142 "ristretto.y"
                        {  }
#line 1612 "ristretto.tab.c"
    break;

  case 52:
#line 143 "ristretto.y"
                                {  }
#line 1618 "ristretto.tab.c"
    break;

  case 53:
#line 144 "ristretto.y"
                                {  }
#line 1624 "ristretto.tab.c"
    break;

  case 54:
#line 145 "ristretto.y"
                                {  }
#line 1630 "ristretto.tab.c"
    break;

  case 55:
#line 146 "ristretto.y"
                        {  }
#line 1636 "ristretto.tab.c"
    break;

  case 56:
#line 147 "ristretto.y"
                                {  }
#line 1642 "ristretto.tab.c"
    break;

  case 57:
#line 148 "ristretto.y"
                      { (yyval.type_type) = (yyvsp[-1].type_type); }
#line 1648 "ristretto.tab.c"
    break;


#line 1652 "ristretto.tab.c"

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

#line 151 "ristretto.y"


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