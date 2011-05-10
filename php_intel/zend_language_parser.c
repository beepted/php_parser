
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */


/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2011 Zend Technologies Ltd. (http://www.zend.com) |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Authors: Andi Gutmans <andi@zend.com>                                |
   |          Zeev Suraski <zeev@zend.com>                                |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

/*
 * LALR shift/reduce conflicts and how they are resolved:
 *
 * - 2 shift/reduce conflicts due to the dangling elseif/else ambiguity. Solved by shift.
 *
 */

/*
#define YYERROR_VERBOSE
#define YYSTYPE znode
#ifdef ZTS
# define YYPARSE_PARAM tsrm_ls
# define YYLEX_PARAM tsrm_ls
#endif
*/

#include "sys_defs.h"

#define YYSTYPE char

int yylex(char *s);
int yyerror(char *e);




/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LOGICAL_OR = 263,
     T_LOGICAL_XOR = 264,
     T_LOGICAL_AND = 265,
     T_PRINT = 266,
     T_SR_EQUAL = 267,
     T_SL_EQUAL = 268,
     T_XOR_EQUAL = 269,
     T_OR_EQUAL = 270,
     T_AND_EQUAL = 271,
     T_MOD_EQUAL = 272,
     T_CONCAT_EQUAL = 273,
     T_DIV_EQUAL = 274,
     T_MUL_EQUAL = 275,
     T_MINUS_EQUAL = 276,
     T_PLUS_EQUAL = 277,
     T_BOOLEAN_OR = 278,
     T_BOOLEAN_AND = 279,
     T_IS_NOT_IDENTICAL = 280,
     T_IS_IDENTICAL = 281,
     T_IS_NOT_EQUAL = 282,
     T_IS_EQUAL = 283,
     T_IS_GREATER_OR_EQUAL = 284,
     T_IS_SMALLER_OR_EQUAL = 285,
     T_SR = 286,
     T_SL = 287,
     T_INSTANCEOF = 288,
     T_UNSET_CAST = 289,
     T_BOOL_CAST = 290,
     T_OBJECT_CAST = 291,
     T_ARRAY_CAST = 292,
     T_STRING_CAST = 293,
     T_DOUBLE_CAST = 294,
     T_SCALAR_CAST = 295,
     T_NUMERIC_CAST = 296,
     T_INT_CAST = 297,
     T_DEC = 298,
     T_INC = 299,
     T_CLONE = 300,
     T_NEW = 301,
     T_EXIT = 302,
     T_IF = 303,
     T_ELSEIF = 304,
     T_ELSE = 305,
     T_ENDIF = 306,
     T_LNUMBER = 307,
     T_DNUMBER = 308,
     T_STRING = 309,
     T_STRING_VARNAME = 310,
     T_VARIABLE = 311,
     T_NUM_STRING = 312,
     T_INLINE_HTML = 313,
     T_CHARACTER = 314,
     T_BAD_CHARACTER = 315,
     T_ENCAPSED_AND_WHITESPACE = 316,
     T_CONSTANT_ENCAPSED_STRING = 317,
     T_ECHO = 318,
     T_DO = 319,
     T_WHILE = 320,
     T_ENDWHILE = 321,
     T_FOR = 322,
     T_ENDFOR = 323,
     T_FOREACH = 324,
     T_ENDFOREACH = 325,
     T_DECLARE = 326,
     T_ENDDECLARE = 327,
     T_AS = 328,
     T_SWITCH = 329,
     T_ENDSWITCH = 330,
     T_CASE = 331,
     T_DEFAULT = 332,
     T_BREAK = 333,
     T_CONTINUE = 334,
     T_GOTO = 335,
     T_FUNCTION = 336,
     T_CONST = 337,
     T_RETURN = 338,
     T_TRY = 339,
     T_CATCH = 340,
     T_THROW = 341,
     T_USE = 342,
     T_INSTEADOF = 343,
     T_GLOBAL = 344,
     T_PUBLIC = 345,
     T_PROTECTED = 346,
     T_PRIVATE = 347,
     T_FINAL = 348,
     T_ABSTRACT = 349,
     T_STATIC = 350,
     T_VAR = 351,
     T_UNSET = 352,
     T_ISSET = 353,
     T_EMPTY = 354,
     T_HALT_COMPILER = 355,
     T_CLASS = 356,
     T_TRAIT = 357,
     T_INTERFACE = 358,
     T_EXTENDS = 359,
     T_IMPLEMENTS = 360,
     T_OBJECT_OPERATOR = 361,
     T_DOUBLE_ARROW = 362,
     T_LIST = 363,
     T_ARRAY = 364,
     T_BOOL_HINT = 365,
     T_STRING_HINT = 366,
     T_INT_HINT = 367,
     T_DOUBLE_HINT = 368,
     T_RESOURCE_HINT = 369,
     T_OBJECT_HINT = 370,
     T_SCALAR_HINT = 371,
     T_NUMERIC_HINT = 372,
     T_CLASS_C = 373,
     T_METHOD_C = 374,
     T_FUNC_C = 375,
     T_LINE = 376,
     T_FILE = 377,
     T_COMMENT = 378,
     T_DOC_COMMENT = 379,
     T_OPEN_TAG = 380,
     T_OPEN_TAG_WITH_ECHO = 381,
     T_CLOSE_TAG = 382,
     T_WHITESPACE = 383,
     T_START_HEREDOC = 384,
     T_END_HEREDOC = 385,
     T_DOLLAR_OPEN_CURLY_BRACES = 386,
     T_CURLY_OPEN = 387,
     T_PAAMAYIM_NEKUDOTAYIM = 388,
     T_NAMESPACE = 389,
     T_NS_C = 390,
     T_DIR = 391,
     T_NS_SEPARATOR = 392
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5249

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  166
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  198
/* YYNRULES -- Number of rules.  */
#define YYNRULES  507
/* YYNRULES -- Number of states.  */
#define YYNSTATES  967

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   392

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,   164,     2,   162,    47,    31,     2,
     157,   158,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   159,
      36,    13,    37,    25,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,   165,    30,     2,   163,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   160,    29,   161,    50,     2,     2,     2,
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
       5,     6,     7,     9,    10,    11,    12,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    27,    28,
      32,    33,    34,    35,    38,    39,    40,    41,    49,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,    10,    11,    13,    17,    19,
      21,    23,    28,    32,    33,    40,    41,    47,    51,    54,
      58,    60,    62,    66,    69,    74,    80,    85,    86,    90,
      91,    93,    95,    97,   102,   104,   107,   111,   112,   113,
     123,   124,   125,   138,   139,   140,   148,   149,   150,   160,
     161,   162,   163,   176,   177,   184,   187,   191,   194,   198,
     201,   205,   209,   213,   217,   221,   223,   226,   232,   233,
     234,   245,   246,   247,   258,   259,   266,   268,   269,   270,
     271,   272,   273,   292,   296,   300,   302,   303,   305,   308,
     309,   310,   321,   323,   327,   329,   331,   333,   334,   336,
     337,   348,   349,   358,   359,   367,   369,   372,   374,   377,
     378,   381,   383,   384,   387,   388,   391,   393,   397,   398,
     401,   403,   406,   408,   413,   415,   420,   422,   427,   431,
     437,   441,   446,   451,   457,   458,   459,   466,   467,   473,
     475,   477,   479,   484,   485,   486,   494,   495,   496,   505,
     506,   509,   510,   514,   516,   517,   520,   524,   530,   535,
     540,   546,   554,   561,   562,   564,   566,   568,   570,   572,
     574,   576,   578,   580,   582,   584,   585,   587,   589,   592,
     596,   600,   605,   609,   611,   613,   616,   621,   625,   631,
     633,   637,   640,   641,   642,   647,   650,   652,   653,   663,
     667,   669,   673,   675,   679,   680,   682,   684,   687,   690,
     693,   697,   699,   703,   705,   707,   711,   716,   720,   721,
     723,   725,   729,   731,   733,   734,   736,   738,   741,   743,
     745,   747,   749,   751,   753,   757,   763,   765,   769,   775,
     780,   784,   786,   787,   789,   790,   795,   797,   798,   806,
     810,   815,   816,   824,   825,   830,   833,   837,   841,   845,
     849,   853,   857,   861,   865,   869,   873,   877,   880,   883,
     886,   889,   890,   895,   896,   901,   902,   907,   908,   913,
     917,   921,   925,   929,   933,   937,   941,   945,   949,   953,
     957,   961,   964,   967,   970,   973,   977,   981,   985,   989,
     993,   997,  1001,  1005,  1009,  1013,  1014,  1015,  1023,  1024,
    1030,  1032,  1035,  1038,  1041,  1044,  1047,  1050,  1053,  1056,
    1059,  1062,  1063,  1067,  1069,  1074,  1078,  1081,  1082,  1093,
    1094,  1106,  1108,  1109,  1114,  1118,  1123,  1125,  1128,  1129,
    1135,  1136,  1144,  1145,  1152,  1153,  1161,  1162,  1170,  1171,
    1179,  1180,  1188,  1189,  1195,  1197,  1199,  1203,  1206,  1208,
    1212,  1215,  1217,  1219,  1220,  1221,  1228,  1230,  1233,  1234,
    1237,  1238,  1241,  1245,  1246,  1248,  1250,  1251,  1255,  1257,
    1259,  1261,  1263,  1265,  1267,  1269,  1271,  1273,  1275,  1279,
    1282,  1284,  1286,  1290,  1293,  1296,  1299,  1304,  1306,  1310,
    1312,  1314,  1316,  1320,  1323,  1325,  1329,  1333,  1334,  1337,
    1338,  1340,  1346,  1350,  1354,  1356,  1358,  1360,  1362,  1364,
    1366,  1367,  1368,  1376,  1378,  1381,  1382,  1383,  1388,  1393,
    1398,  1399,  1404,  1406,  1408,  1409,  1411,  1414,  1418,  1422,
    1424,  1429,  1430,  1436,  1438,  1440,  1442,  1444,  1447,  1449,
    1454,  1459,  1461,  1463,  1468,  1469,  1471,  1473,  1474,  1477,
    1482,  1487,  1489,  1491,  1495,  1497,  1500,  1504,  1506,  1508,
    1509,  1515,  1516,  1517,  1520,  1526,  1530,  1534,  1536,  1543,
    1548,  1553,  1556,  1559,  1562,  1564,  1567,  1569,  1570,  1576,
    1580,  1584,  1591,  1595,  1597,  1599,  1601,  1606,  1611,  1614,
    1617,  1622,  1625,  1628,  1630,  1631,  1636,  1640
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     167,     0,    -1,   168,    -1,    -1,   168,   169,   171,    -1,
      -1,    73,    -1,   170,   156,    73,    -1,   180,    -1,   211,
      -1,   212,    -1,   119,   157,   158,   159,    -1,   153,   170,
     159,    -1,    -1,   153,   170,   160,   172,   168,   161,    -1,
      -1,   153,   160,   173,   168,   161,    -1,   106,   174,   159,
      -1,   176,   159,    -1,   174,     8,   175,    -1,   175,    -1,
     170,    -1,   170,    92,    73,    -1,   156,   170,    -1,   156,
     170,    92,    73,    -1,   176,     8,    73,    13,   316,    -1,
     101,    73,    13,   316,    -1,    -1,   177,   178,   179,    -1,
      -1,   180,    -1,   211,    -1,   212,    -1,   119,   157,   158,
     159,    -1,   181,    -1,    73,    26,    -1,   160,   177,   161,
      -1,    -1,    -1,    67,   157,   322,   158,   182,   180,   183,
     237,   241,    -1,    -1,    -1,    67,   157,   322,   158,    26,
     184,   177,   185,   239,   242,    70,   159,    -1,    -1,    -1,
      84,   157,   186,   322,   158,   187,   236,    -1,    -1,    -1,
      83,   188,   180,    84,   157,   189,   322,   158,   159,    -1,
      -1,    -1,    -1,    86,   157,   275,   159,   190,   275,   159,
     191,   275,   158,   192,   227,    -1,    -1,    93,   157,   322,
     158,   193,   231,    -1,    97,   159,    -1,    97,   322,   159,
      -1,    98,   159,    -1,    98,   322,   159,    -1,   102,   159,
      -1,   102,   278,   159,    -1,   102,   326,   159,    -1,   108,
     248,   159,    -1,   114,   250,   159,    -1,    82,   274,   159,
      -1,    77,    -1,   322,   159,    -1,   116,   157,   209,   158,
     159,    -1,    -1,    -1,    88,   157,   326,    92,   194,   226,
     225,   158,   195,   228,    -1,    -1,    -1,    88,   157,   278,
      92,   196,   326,   225,   158,   197,   228,    -1,    -1,    90,
     198,   157,   230,   158,   229,    -1,   159,    -1,    -1,    -1,
      -1,    -1,    -1,   103,   199,   160,   177,   161,   104,   157,
     200,   305,   201,    75,   158,   202,   160,   177,   161,   203,
     204,    -1,   105,   322,   159,    -1,    99,    73,   159,    -1,
     205,    -1,    -1,   206,    -1,   205,   206,    -1,    -1,    -1,
     104,   157,   305,   207,    75,   158,   208,   160,   177,   161,
      -1,   210,    -1,   209,     8,   210,    -1,   326,    -1,   214,
      -1,   216,    -1,    -1,    31,    -1,    -1,   292,   213,    73,
     215,   157,   243,   158,   160,   177,   161,    -1,    -1,   219,
      73,   220,   217,   223,   160,   251,   161,    -1,    -1,   221,
      73,   218,   222,   160,   251,   161,    -1,   120,    -1,   113,
     120,    -1,   121,    -1,   112,   120,    -1,    -1,   123,   305,
      -1,   122,    -1,    -1,   123,   224,    -1,    -1,   124,   224,
      -1,   305,    -1,   224,     8,   305,    -1,    -1,   126,   226,
      -1,   326,    -1,    31,   326,    -1,   180,    -1,    26,   177,
      87,   159,    -1,   180,    -1,    26,   177,    89,   159,    -1,
     180,    -1,    26,   177,    91,   159,    -1,    73,    13,   316,
      -1,   230,     8,    73,    13,   316,    -1,   160,   232,   161,
      -1,   160,   159,   232,   161,    -1,    26,   232,    94,   159,
      -1,    26,   159,   232,    94,   159,    -1,    -1,    -1,   232,
      95,   322,   235,   233,   177,    -1,    -1,   232,    96,   235,
     234,   177,    -1,    26,    -1,   159,    -1,   180,    -1,    26,
     177,    85,   159,    -1,    -1,    -1,   237,    68,   157,   322,
     158,   238,   180,    -1,    -1,    -1,   239,    68,   157,   322,
     158,    26,   240,   177,    -1,    -1,    69,   180,    -1,    -1,
      69,    26,   177,    -1,   244,    -1,    -1,   245,    75,    -1,
     245,    31,    75,    -1,   245,    31,    75,    13,   316,    -1,
     245,    75,    13,   316,    -1,   244,     8,   245,    75,    -1,
     244,     8,   245,    31,    75,    -1,   244,     8,   245,    31,
      75,    13,   316,    -1,   244,     8,   245,    75,    13,   316,
      -1,    -1,   128,    -1,   129,    -1,   130,    -1,   131,    -1,
     132,    -1,   133,    -1,   134,    -1,   135,    -1,   136,    -1,
     305,    -1,   247,    -1,    -1,   278,    -1,   326,    -1,    31,
     324,    -1,   247,     8,   278,    -1,   247,     8,   326,    -1,
     247,     8,    31,   324,    -1,   248,     8,   249,    -1,   249,
      -1,    75,    -1,   162,   323,    -1,   162,   160,   322,   161,
      -1,   250,     8,    75,    -1,   250,     8,    75,    13,   316,
      -1,    75,    -1,    75,    13,   316,    -1,   251,   252,    -1,
      -1,    -1,   268,   253,   272,   159,    -1,   273,   159,    -1,
     255,    -1,    -1,   269,   292,   213,    73,   254,   157,   243,
     158,   267,    -1,   106,   256,   257,    -1,   305,    -1,   256,
       8,   305,    -1,   159,    -1,   160,   258,   161,    -1,    -1,
     259,    -1,   260,    -1,   259,   260,    -1,   261,   159,    -1,
     265,   159,    -1,   264,   107,   262,    -1,   305,    -1,   262,
       8,   305,    -1,    73,    -1,   264,    -1,   305,   152,    73,
      -1,   263,    92,   266,    73,    -1,   263,    92,   271,    -1,
      -1,   271,    -1,   159,    -1,   160,   177,   161,    -1,   270,
      -1,   115,    -1,    -1,   270,    -1,   271,    -1,   270,   271,
      -1,   109,    -1,   110,    -1,   111,    -1,   114,    -1,   113,
      -1,   112,    -1,   272,     8,    75,    -1,   272,     8,    75,
      13,   316,    -1,    75,    -1,    75,    13,   316,    -1,   273,
       8,    73,    13,   316,    -1,   101,    73,    13,   316,    -1,
     274,     8,   322,    -1,   322,    -1,    -1,   276,    -1,    -1,
     276,     8,   277,   322,    -1,   322,    -1,    -1,   127,   157,
     279,   351,   158,    13,   322,    -1,   326,    13,   322,    -1,
     326,    13,    31,   326,    -1,    -1,   326,    13,    31,    65,
     306,   280,   314,    -1,    -1,    65,   306,   281,   314,    -1,
      64,   322,    -1,   326,    24,   322,    -1,   326,    23,   322,
      -1,   326,    22,   322,    -1,   326,    21,   322,    -1,   326,
      20,   322,    -1,   326,    19,   322,    -1,   326,    18,   322,
      -1,   326,    17,   322,    -1,   326,    16,   322,    -1,   326,
      15,   322,    -1,   326,    14,   322,    -1,   325,    62,    -1,
      62,   325,    -1,   325,    61,    -1,    61,   325,    -1,    -1,
     322,    27,   282,   322,    -1,    -1,   322,    28,   283,   322,
      -1,    -1,   322,     9,   284,   322,    -1,    -1,   322,    11,
     285,   322,    -1,   322,    10,   322,    -1,   322,    29,   322,
      -1,   322,    31,   322,    -1,   322,    30,   322,    -1,   322,
      44,   322,    -1,   322,    42,   322,    -1,   322,    43,   322,
      -1,   322,    45,   322,    -1,   322,    46,   322,    -1,   322,
      47,   322,    -1,   322,    41,   322,    -1,   322,    40,   322,
      -1,    42,   322,    -1,    43,   322,    -1,    48,   322,    -1,
      50,   322,    -1,   322,    33,   322,    -1,   322,    32,   322,
      -1,   322,    35,   322,    -1,   322,    34,   322,    -1,   322,
      36,   322,    -1,   322,    39,   322,    -1,   322,    37,   322,
      -1,   322,    38,   322,    -1,   322,    49,   306,    -1,   157,
     322,   158,    -1,    -1,    -1,   322,    25,   286,   322,    26,
     287,   322,    -1,    -1,   322,    25,    26,   288,   322,    -1,
     360,    -1,    60,   322,    -1,    57,   322,    -1,    56,   322,
      -1,    55,   322,    -1,    54,   322,    -1,    53,   322,    -1,
      58,   322,    -1,    59,   322,    -1,    52,   322,    -1,    66,
     312,    -1,    -1,    51,   289,   322,    -1,   318,    -1,   128,
     157,   354,   158,    -1,   163,   313,   163,    -1,    12,   322,
      -1,    -1,   292,   213,   157,   290,   243,   158,   293,   160,
     177,   161,    -1,    -1,   114,   292,   213,   157,   291,   243,
     158,   293,   160,   177,   161,    -1,   100,    -1,    -1,   106,
     157,   294,   158,    -1,   294,     8,    75,    -1,   294,     8,
      31,    75,    -1,    75,    -1,    31,    75,    -1,    -1,   170,
     157,   296,   246,   158,    -1,    -1,   153,   156,   170,   157,
     297,   246,   158,    -1,    -1,   156,   170,   157,   298,   246,
     158,    -1,    -1,   304,   152,    73,   157,   299,   246,   158,
      -1,    -1,   304,   152,   336,   157,   300,   246,   158,    -1,
      -1,   338,   152,    73,   157,   301,   246,   158,    -1,    -1,
     338,   152,   336,   157,   302,   246,   158,    -1,    -1,   336,
     157,   303,   246,   158,    -1,   114,    -1,   170,    -1,   153,
     156,   170,    -1,   156,   170,    -1,   170,    -1,   153,   156,
     170,    -1,   156,   170,    -1,   304,    -1,   307,    -1,    -1,
      -1,   342,   125,   308,   346,   309,   310,    -1,   342,    -1,
     310,   311,    -1,    -1,   125,   346,    -1,    -1,   157,   158,
      -1,   157,   322,   158,    -1,    -1,    80,    -1,   356,    -1,
      -1,   157,   246,   158,    -1,    71,    -1,    72,    -1,    81,
      -1,   140,    -1,   141,    -1,   155,    -1,   137,    -1,   138,
      -1,   139,    -1,   154,    -1,   148,    80,   149,    -1,   148,
     149,    -1,   315,    -1,   170,    -1,   153,   156,   170,    -1,
     156,   170,    -1,    42,   316,    -1,    43,   316,    -1,   128,
     157,   319,   158,    -1,   317,    -1,   304,   152,    73,    -1,
      74,    -1,   363,    -1,   170,    -1,   153,   156,   170,    -1,
     156,   170,    -1,   315,    -1,   164,   356,   164,    -1,   148,
     356,   149,    -1,    -1,   321,   320,    -1,    -1,     8,    -1,
     321,     8,   316,   126,   316,    -1,   321,     8,   316,    -1,
     316,   126,   316,    -1,   316,    -1,   323,    -1,   278,    -1,
     326,    -1,   326,    -1,   326,    -1,    -1,    -1,   341,   125,
     327,   346,   328,   335,   329,    -1,   341,    -1,   329,   330,
      -1,    -1,    -1,   125,   346,   331,   335,    -1,   332,    63,
     345,   165,    -1,   333,    63,   345,   165,    -1,    -1,   157,
     334,   246,   158,    -1,   333,    -1,   332,    -1,    -1,   343,
      -1,   350,   343,    -1,   304,   152,   336,    -1,   338,   152,
     336,    -1,   343,    -1,   339,    63,   345,   165,    -1,    -1,
     295,   340,    63,   345,   165,    -1,   342,    -1,   339,    -1,
     295,    -1,   343,    -1,   350,   343,    -1,   337,    -1,   343,
      63,   345,   165,    -1,   343,   160,   322,   161,    -1,   344,
      -1,    75,    -1,   162,   160,   322,   161,    -1,    -1,   322,
      -1,   348,    -1,    -1,   336,   347,    -1,   348,    63,   345,
     165,    -1,   348,   160,   322,   161,    -1,   349,    -1,    73,
      -1,   160,   322,   161,    -1,   162,    -1,   350,   162,    -1,
     351,     8,   352,    -1,   352,    -1,   326,    -1,    -1,   127,
     157,   353,   351,   158,    -1,    -1,    -1,   355,   320,    -1,
     355,     8,   322,   126,   322,    -1,   355,     8,   322,    -1,
     322,   126,   322,    -1,   322,    -1,   355,     8,   322,   126,
      31,   324,    -1,   355,     8,    31,   324,    -1,   322,   126,
      31,   324,    -1,    31,   324,    -1,   356,   357,    -1,   356,
      80,    -1,   357,    -1,    80,   357,    -1,    75,    -1,    -1,
      75,    63,   358,   359,   165,    -1,    75,   125,    73,    -1,
     150,   322,   161,    -1,   150,    74,    63,   322,   165,   161,
      -1,   151,   326,   161,    -1,    73,    -1,    76,    -1,    75,
      -1,   117,   157,   361,   158,    -1,   118,   157,   326,   158,
      -1,     7,   322,    -1,     6,   322,    -1,     5,   157,   322,
     158,    -1,     4,   322,    -1,     3,   322,    -1,   326,    -1,
      -1,   361,     8,   362,   326,    -1,   304,   152,    73,    -1,
     338,   152,    73,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   164,   164,   168,   168,   169,   173,   174,   178,   179,
     180,   181,   182,   183,   183,   185,   185,   187,   188,   192,
     193,   197,   198,   199,   200,   204,   205,   209,   209,   210,
     215,   216,   217,   218,   223,   224,   228,   229,   229,   229,
     230,   230,   230,   231,   231,   231,   232,   232,   232,   233,
     233,   233,   233,   234,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   249,   250,
     248,   253,   254,   252,   256,   256,   257,   258,   259,   260,
     261,   262,   258,   264,   265,   270,   271,   275,   276,   281,
     281,   281,   286,   287,   291,   295,   299,   304,   305,   310,
     310,   316,   315,   322,   321,   331,   332,   333,   334,   338,
     339,   343,   346,   348,   351,   353,   357,   358,   362,   363,
     368,   369,   373,   374,   379,   380,   385,   386,   391,   392,
     397,   398,   399,   400,   405,   406,   406,   407,   407,   412,
     413,   418,   419,   424,   426,   426,   430,   432,   432,   436,
     438,   442,   444,   449,   450,   455,   456,   457,   458,   459,
     460,   461,   462,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   482,   483,   488,   489,   490,   491,
     492,   493,   497,   498,   503,   504,   505,   510,   511,   512,
     513,   519,   520,   525,   525,   526,   527,   528,   528,   533,
     537,   538,   542,   543,   546,   548,   552,   553,   557,   558,
     562,   566,   567,   571,   572,   576,   580,   581,   585,   586,
     590,   591,   595,   596,   600,   601,   605,   606,   610,   611,
     612,   613,   614,   615,   619,   620,   621,   622,   626,   627,
     631,   632,   637,   638,   642,   642,   643,   647,   647,   648,
     649,   650,   650,   651,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,   666,
     667,   668,   668,   669,   669,   670,   670,   671,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
     683,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,   698,   699,   698,   701,   701,
     703,   704,   705,   706,   707,   708,   709,   710,   711,   712,
     713,   714,   714,   715,   716,   717,   718,   719,   719,   721,
     721,   726,   729,   731,   735,   736,   737,   738,   742,   742,
     745,   745,   748,   748,   751,   751,   754,   754,   757,   757,
     760,   760,   763,   763,   769,   770,   771,   772,   776,   777,
     778,   784,   785,   790,   791,   790,   793,   798,   799,   804,
     808,   809,   810,   814,   815,   816,   821,   822,   827,   828,
     829,   830,   831,   832,   833,   834,   835,   836,   837,   838,
     843,   844,   845,   846,   847,   848,   849,   850,   854,   858,
     859,   860,   861,   862,   863,   864,   865,   870,   871,   874,
     876,   880,   881,   882,   883,   887,   888,   893,   898,   902,
     906,   907,   906,   909,   913,   914,   919,   919,   923,   924,
     928,   928,   934,   935,   936,   940,   941,   945,   946,   951,
     955,   956,   956,   961,   962,   963,   968,   969,   970,   974,
     975,   976,   981,   982,   986,   987,   992,   993,   993,   997,
     998,   999,  1003,  1004,  1008,  1009,  1013,  1014,  1019,  1020,
    1020,  1021,  1026,  1027,  1031,  1032,  1033,  1034,  1035,  1036,
    1037,  1038,  1042,  1043,  1044,  1045,  1051,  1052,  1052,  1053,
    1054,  1055,  1056,  1061,  1062,  1063,  1068,  1069,  1070,  1071,
    1072,  1073,  1074,  1078,  1079,  1079,  1083,  1084
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_REQUIRE_ONCE", "T_REQUIRE", "T_EVAL",
  "T_INCLUDE_ONCE", "T_INCLUDE", "','", "T_LOGICAL_OR", "T_LOGICAL_XOR",
  "T_LOGICAL_AND", "T_PRINT", "'='", "T_SR_EQUAL", "T_SL_EQUAL",
  "T_XOR_EQUAL", "T_OR_EQUAL", "T_AND_EQUAL", "T_MOD_EQUAL",
  "T_CONCAT_EQUAL", "T_DIV_EQUAL", "T_MUL_EQUAL", "T_MINUS_EQUAL",
  "T_PLUS_EQUAL", "'?'", "':'", "T_BOOLEAN_OR", "T_BOOLEAN_AND", "'|'",
  "'^'", "'&'", "T_IS_NOT_IDENTICAL", "T_IS_IDENTICAL", "T_IS_NOT_EQUAL",
  "T_IS_EQUAL", "'<'", "'>'", "T_IS_GREATER_OR_EQUAL",
  "T_IS_SMALLER_OR_EQUAL", "T_SR", "T_SL", "'+'", "'-'", "'.'", "'*'",
  "'/'", "'%'", "'!'", "T_INSTANCEOF", "'~'", "'@'", "T_UNSET_CAST",
  "T_BOOL_CAST", "T_OBJECT_CAST", "T_ARRAY_CAST", "T_STRING_CAST",
  "T_DOUBLE_CAST", "T_SCALAR_CAST", "T_NUMERIC_CAST", "T_INT_CAST",
  "T_DEC", "T_INC", "'['", "T_CLONE", "T_NEW", "T_EXIT", "T_IF",
  "T_ELSEIF", "T_ELSE", "T_ENDIF", "T_LNUMBER", "T_DNUMBER", "T_STRING",
  "T_STRING_VARNAME", "T_VARIABLE", "T_NUM_STRING", "T_INLINE_HTML",
  "T_CHARACTER", "T_BAD_CHARACTER", "T_ENCAPSED_AND_WHITESPACE",
  "T_CONSTANT_ENCAPSED_STRING", "T_ECHO", "T_DO", "T_WHILE", "T_ENDWHILE",
  "T_FOR", "T_ENDFOR", "T_FOREACH", "T_ENDFOREACH", "T_DECLARE",
  "T_ENDDECLARE", "T_AS", "T_SWITCH", "T_ENDSWITCH", "T_CASE", "T_DEFAULT",
  "T_BREAK", "T_CONTINUE", "T_GOTO", "T_FUNCTION", "T_CONST", "T_RETURN",
  "T_TRY", "T_CATCH", "T_THROW", "T_USE", "T_INSTEADOF", "T_GLOBAL",
  "T_PUBLIC", "T_PROTECTED", "T_PRIVATE", "T_FINAL", "T_ABSTRACT",
  "T_STATIC", "T_VAR", "T_UNSET", "T_ISSET", "T_EMPTY", "T_HALT_COMPILER",
  "T_CLASS", "T_TRAIT", "T_INTERFACE", "T_EXTENDS", "T_IMPLEMENTS",
  "T_OBJECT_OPERATOR", "T_DOUBLE_ARROW", "T_LIST", "T_ARRAY",
  "T_BOOL_HINT", "T_STRING_HINT", "T_INT_HINT", "T_DOUBLE_HINT",
  "T_RESOURCE_HINT", "T_OBJECT_HINT", "T_SCALAR_HINT", "T_NUMERIC_HINT",
  "T_CLASS_C", "T_METHOD_C", "T_FUNC_C", "T_LINE", "T_FILE", "T_COMMENT",
  "T_DOC_COMMENT", "T_OPEN_TAG", "T_OPEN_TAG_WITH_ECHO", "T_CLOSE_TAG",
  "T_WHITESPACE", "T_START_HEREDOC", "T_END_HEREDOC",
  "T_DOLLAR_OPEN_CURLY_BRACES", "T_CURLY_OPEN", "T_PAAMAYIM_NEKUDOTAYIM",
  "T_NAMESPACE", "T_NS_C", "T_DIR", "T_NS_SEPARATOR", "'('", "')'", "';'",
  "'{'", "'}'", "'$'", "'`'", "'\"'", "']'", "$accept", "start",
  "top_statement_list", "$@1", "namespace_name", "top_statement", "$@2",
  "$@3", "use_declarations", "use_declaration", "constant_declaration",
  "inner_statement_list", "$@4", "inner_statement", "statement",
  "unticked_statement", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11",
  "$@12", "$@13", "$@14", "$@15", "$@16", "$@17", "$@18", "$@19", "$@20",
  "$@21", "$@22", "$@23", "$@24", "$@25", "$@26", "additional_catches",
  "non_empty_additional_catches", "additional_catch", "$@27", "$@28",
  "unset_variables", "unset_variable", "function_declaration_statement",
  "class_declaration_statement", "is_reference",
  "unticked_function_declaration_statement", "$@29",
  "unticked_class_declaration_statement", "$@30", "$@31",
  "class_entry_type", "extends_from", "interface_entry",
  "interface_extends_list", "implements_list", "interface_list",
  "foreach_optional_arg", "foreach_variable", "for_statement",
  "foreach_statement", "declare_statement", "declare_list",
  "switch_case_list", "case_list", "$@32", "$@33", "case_separator",
  "while_statement", "elseif_list", "$@34", "new_elseif_list", "$@35",
  "else_single", "new_else_single", "parameter_list",
  "non_empty_parameter_list", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "$@36", "$@37",
  "trait_use_statement", "trait_list", "trait_adaptations",
  "trait_adaptation_list", "non_empty_trait_adaptation_list",
  "trait_adaptation_statement", "trait_precedence", "trait_reference_list",
  "trait_method_reference", "trait_method_reference_fully_qualified",
  "trait_alias", "trait_modifiers", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr", "$@38",
  "expr_without_variable", "$@39", "$@40", "$@41", "$@42", "$@43", "$@44",
  "$@45", "$@46", "$@47", "$@48", "$@49", "$@50", "$@51", "function",
  "lexical_vars", "lexical_var_list", "function_call", "$@52", "$@53",
  "$@54", "$@55", "$@56", "$@57", "$@58", "$@59", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "$@60", "$@61",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@62", "$@63",
  "variable_properties", "variable_property", "$@64",
  "array_method_dereference", "method", "$@65", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
  "array_function_dereference", "$@66",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "$@67", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "$@68", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "$@69",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "$@70", "class_constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,    61,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,    63,    58,   278,   279,   124,
      94,    38,   280,   281,   282,   283,    60,    62,   284,   285,
     286,   287,    43,    45,    46,    42,    47,    37,    33,   288,
     126,    64,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,    91,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,    40,    41,    59,
     123,   125,    36,    96,    34,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   166,   167,   169,   168,   168,   170,   170,   171,   171,
     171,   171,   171,   172,   171,   173,   171,   171,   171,   174,
     174,   175,   175,   175,   175,   176,   176,   178,   177,   177,
     179,   179,   179,   179,   180,   180,   181,   182,   183,   181,
     184,   185,   181,   186,   187,   181,   188,   189,   181,   190,
     191,   192,   181,   193,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   194,   195,
     181,   196,   197,   181,   198,   181,   181,   199,   200,   201,
     202,   203,   181,   181,   181,   204,   204,   205,   205,   207,
     208,   206,   209,   209,   210,   211,   212,   213,   213,   215,
     214,   217,   216,   218,   216,   219,   219,   219,   219,   220,
     220,   221,   222,   222,   223,   223,   224,   224,   225,   225,
     226,   226,   227,   227,   228,   228,   229,   229,   230,   230,
     231,   231,   231,   231,   232,   233,   232,   234,   232,   235,
     235,   236,   236,   237,   238,   237,   239,   240,   239,   241,
     241,   242,   242,   243,   243,   244,   244,   244,   244,   244,
     244,   244,   244,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   246,   246,   247,   247,   247,   247,
     247,   247,   248,   248,   249,   249,   249,   250,   250,   250,
     250,   251,   251,   253,   252,   252,   252,   254,   252,   255,
     256,   256,   257,   257,   258,   258,   259,   259,   260,   260,
     261,   262,   262,   263,   263,   264,   265,   265,   266,   266,
     267,   267,   268,   268,   269,   269,   270,   270,   271,   271,
     271,   271,   271,   271,   272,   272,   272,   272,   273,   273,
     274,   274,   275,   275,   277,   276,   276,   279,   278,   278,
     278,   280,   278,   281,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   282,   278,   283,   278,   284,   278,   285,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   286,   287,   278,   288,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   289,   278,   278,   278,   278,   278,   290,   278,   291,
     278,   292,   293,   293,   294,   294,   294,   294,   296,   295,
     297,   295,   298,   295,   299,   295,   300,   295,   301,   295,
     302,   295,   303,   295,   304,   304,   304,   304,   305,   305,
     305,   306,   306,   308,   309,   307,   307,   310,   310,   311,
     312,   312,   312,   313,   313,   313,   314,   314,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     316,   316,   316,   316,   316,   316,   316,   316,   317,   318,
     318,   318,   318,   318,   318,   318,   318,   319,   319,   320,
     320,   321,   321,   321,   321,   322,   322,   323,   324,   325,
     327,   328,   326,   326,   329,   329,   331,   330,   332,   332,
     334,   333,   335,   335,   335,   336,   336,   337,   337,   338,
     339,   340,   339,   341,   341,   341,   342,   342,   342,   343,
     343,   343,   344,   344,   345,   345,   346,   347,   346,   348,
     348,   348,   349,   349,   350,   350,   351,   351,   352,   353,
     352,   352,   354,   354,   355,   355,   355,   355,   355,   355,
     355,   355,   356,   356,   356,   356,   357,   358,   357,   357,
     357,   357,   357,   359,   359,   359,   360,   360,   360,   360,
     360,   360,   360,   361,   362,   361,   363,   363
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     1,     3,     1,     1,
       1,     4,     3,     0,     6,     0,     5,     3,     2,     3,
       1,     1,     3,     2,     4,     5,     4,     0,     3,     0,
       1,     1,     1,     4,     1,     2,     3,     0,     0,     9,
       0,     0,    12,     0,     0,     7,     0,     0,     9,     0,
       0,     0,    12,     0,     6,     2,     3,     2,     3,     2,
       3,     3,     3,     3,     3,     1,     2,     5,     0,     0,
      10,     0,     0,    10,     0,     6,     1,     0,     0,     0,
       0,     0,    18,     3,     3,     1,     0,     1,     2,     0,
       0,    10,     1,     3,     1,     1,     1,     0,     1,     0,
      10,     0,     8,     0,     7,     1,     2,     1,     2,     0,
       2,     1,     0,     2,     0,     2,     1,     3,     0,     2,
       1,     2,     1,     4,     1,     4,     1,     4,     3,     5,
       3,     4,     4,     5,     0,     0,     6,     0,     5,     1,
       1,     1,     4,     0,     0,     7,     0,     0,     8,     0,
       2,     0,     3,     1,     0,     2,     3,     5,     4,     4,
       5,     7,     6,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     2,     3,
       3,     4,     3,     1,     1,     2,     4,     3,     5,     1,
       3,     2,     0,     0,     4,     2,     1,     0,     9,     3,
       1,     3,     1,     3,     0,     1,     1,     2,     2,     2,
       3,     1,     3,     1,     1,     3,     4,     3,     0,     1,
       1,     3,     1,     1,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     3,     5,     1,     3,     5,     4,
       3,     1,     0,     1,     0,     4,     1,     0,     7,     3,
       4,     0,     7,     0,     4,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     0,     4,     0,     4,     0,     4,     0,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     0,     0,     7,     0,     5,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     0,     3,     1,     4,     3,     2,     0,    10,     0,
      11,     1,     0,     4,     3,     4,     1,     2,     0,     5,
       0,     7,     0,     6,     0,     7,     0,     7,     0,     7,
       0,     7,     0,     5,     1,     1,     3,     2,     1,     3,
       2,     1,     1,     0,     0,     6,     1,     2,     0,     2,
       0,     2,     3,     0,     1,     1,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     1,     3,     2,     2,     2,     4,     1,     3,     1,
       1,     1,     3,     2,     1,     3,     3,     0,     2,     0,
       1,     5,     3,     3,     1,     1,     1,     1,     1,     1,
       0,     0,     7,     1,     2,     0,     0,     4,     4,     4,
       0,     4,     1,     1,     0,     1,     2,     3,     3,     1,
       4,     0,     5,     1,     1,     1,     1,     2,     1,     4,
       4,     1,     1,     4,     0,     1,     1,     0,     2,     4,
       4,     1,     1,     3,     1,     2,     3,     1,     1,     0,
       5,     0,     0,     2,     5,     3,     3,     1,     6,     4,
       4,     2,     2,     2,     1,     2,     1,     0,     5,     3,
       3,     6,     3,     1,     1,     1,     4,     4,     2,     2,
       4,     2,     2,     1,     0,     4,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   321,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   370,
       0,   378,   379,     6,   399,   452,    65,   380,     0,    46,
       0,     0,     0,    74,     0,     0,     0,     0,   331,     0,
       0,    77,     0,     0,     0,     0,     0,   354,     0,     0,
       0,     0,   105,   107,   111,     0,     0,   384,   385,   386,
     381,   382,     0,     0,   387,   383,     0,     0,    76,    29,
     464,   373,     0,   401,     4,     0,     8,    34,     9,    10,
      95,    96,     0,     0,   416,    97,   445,     0,   404,   323,
       0,   415,     0,   417,     0,   448,     0,   444,   423,   443,
     446,   451,     0,   310,   400,     6,   354,     0,    97,   502,
     501,     0,   499,   498,   326,   291,   292,   293,   294,     0,
     319,   316,   315,   314,   313,   312,   317,   318,   311,   354,
       0,     0,   355,     0,   270,   419,     0,   268,   255,     0,
       0,   355,   361,   253,   362,     0,   366,   446,     0,     0,
     320,     0,    35,     0,   241,     0,    43,   242,     0,     0,
       0,    55,     0,    57,     0,     0,     0,    59,   416,     0,
     417,     0,     0,     0,    21,     0,    20,   184,     0,     0,
     183,   108,   106,   189,     0,    97,     0,     0,     0,     0,
     247,   472,   486,     0,   389,     0,     0,     0,   484,     0,
      15,     0,   403,     0,    27,     0,   374,     0,   375,     0,
       0,     0,   338,     0,    18,   109,   103,    98,     0,     0,
       0,   275,     0,   277,   305,   271,   273,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,   269,   267,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   352,     0,   454,   420,   454,     0,   465,   447,
       0,     0,   322,     0,   357,     0,     0,     0,   357,     0,
     376,     0,   363,   447,   371,     0,     0,     0,    64,     0,
       0,     0,   243,   246,   416,   417,     0,     0,    56,    58,
      84,     0,    60,    61,    29,    83,    23,     0,     0,    17,
       0,   185,   417,     0,    62,     0,     0,    63,     0,     0,
      92,    94,   503,     0,     0,     0,   471,     0,   477,     0,
     409,   487,     0,   388,   485,   399,     0,     0,   483,   406,
     482,   402,     5,    12,    13,   342,   304,    36,     0,     0,
     325,   405,     7,   175,     0,     0,   101,   112,    99,   327,
     454,   506,   437,   435,     0,     0,   279,     0,   308,     0,
       0,     0,   280,   282,   281,   296,   295,   298,   297,   299,
     301,   302,   300,   290,   289,   284,   285,   283,   286,   287,
     288,   303,     0,   249,   266,   265,   264,   263,   262,   261,
     260,   259,   258,   257,   256,   175,   507,   438,   455,     0,
       0,     0,     0,   500,   356,     0,     0,   356,   437,   175,
     254,   438,     0,   372,    37,   240,     0,     0,    49,   244,
      71,    68,     0,     0,    53,     0,     0,     0,     0,     0,
       0,   391,     0,   390,    26,   397,    27,     0,    22,    19,
       0,   182,   190,   187,   329,     0,     0,   504,   496,   497,
      11,     0,   468,     0,   467,   481,   418,     0,   324,   410,
     473,     0,   489,     0,   490,   492,   340,     3,     5,   175,
       0,    28,    30,    31,    32,   453,     0,     0,   174,   416,
     417,     0,     0,     0,   358,   110,   114,     0,     0,     0,
     163,     0,   344,   346,   436,   276,   278,     0,     0,   272,
     274,     0,   250,     0,   348,   350,   440,   462,     0,   457,
     421,   456,   461,   449,   450,     0,   364,    40,     0,    47,
      44,   242,     0,     0,     0,     0,     0,     0,     0,   394,
     395,   407,     0,     0,   393,     0,     0,    24,   186,     0,
     163,    93,    67,     0,   469,   471,     0,     0,   476,     0,
     475,   493,   495,   494,     0,     0,   175,    16,     3,     0,
       0,   178,   339,     0,    25,     0,   360,     0,     0,   113,
     116,   192,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,     0,   153,     0,   173,   442,   175,   175,   309,
     306,   251,   353,   175,   175,     0,   458,   434,   454,     0,
     377,   368,    29,    38,     0,     0,     0,   245,   118,     0,
     118,   120,   128,     0,    29,   126,    75,   134,   134,    54,
     414,     0,   409,   392,   398,     0,   188,     0,   505,   471,
     466,     0,   480,   479,     0,   488,     0,     0,    14,   343,
       0,     0,   416,   417,   359,   115,   192,     0,   224,     0,
     332,   163,     0,   155,     0,     0,     0,   376,     0,     0,
     463,   430,   433,   432,   425,     0,     0,   365,    27,   143,
       0,    29,   141,    45,    50,     0,     0,   121,     0,     0,
      27,   134,     0,   134,     0,     0,   396,   410,   408,    78,
     332,     0,   248,     0,   474,   491,   341,    33,   181,   224,
     117,     0,     0,   228,   229,   230,   233,   232,   231,   223,
     104,   191,   196,   193,     0,   222,   226,     0,     0,     0,
       0,     0,   156,     0,   345,   347,   307,   252,   349,   351,
     175,   454,   454,   422,   459,   460,     0,   367,   146,   149,
       0,    27,   242,   119,    72,    69,   129,     0,     0,     0,
       0,     0,     0,   130,   413,   412,     0,     0,   470,   478,
     102,     0,     0,   200,     0,    97,   227,     0,   195,    29,
       0,    29,     0,   159,     0,   158,     0,     0,     0,     0,
     424,   369,   151,     0,     0,    39,    48,     0,     0,     0,
       0,   127,     0,   132,     0,   139,   140,   137,   131,     0,
      79,    29,     0,     0,   202,   204,   199,   236,     0,     0,
       0,    27,     0,   336,     0,    27,   160,     0,   157,   431,
     428,   429,   426,     0,     0,     0,     0,   150,   142,    51,
      29,   124,    73,    70,   133,   135,    29,   411,     0,    27,
     239,   201,     6,     0,   205,   206,     0,     0,   214,     0,
       0,     0,     0,   194,   197,     0,   100,   337,     0,   333,
     328,     0,   162,   434,     0,    29,     0,     0,     0,    27,
      29,    27,     0,   330,   203,   207,   208,   218,     0,   209,
       0,   237,   234,     0,   238,     0,   334,   161,   427,     0,
      27,    42,   144,    29,   122,    52,     0,    27,    80,     0,
     217,   210,   211,   215,     0,   163,   335,     0,     0,    27,
     125,     0,   216,     0,   235,     0,   147,   145,     0,    29,
     212,     0,    29,   123,    27,   220,    29,   198,    27,    81,
      27,    86,   221,     0,    82,    85,    87,     0,    88,    89,
       0,     0,    90,     0,    29,    27,    91
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    83,    84,   488,   352,   185,   186,
      85,   214,   358,   491,   851,    87,   538,   689,   622,   758,
     300,   625,   165,   624,   541,   762,   888,   548,   544,   810,
     543,   809,   169,   181,   776,   858,   931,   951,   954,   955,
     956,   960,   963,   329,   330,    88,    89,   228,    90,   509,
      91,   506,   367,    92,   366,    93,   508,   588,   589,   696,
     630,   915,   852,   636,   443,   639,   702,   890,   856,   817,
     693,   759,   928,   802,   942,   805,   845,   602,   603,   604,
     497,   498,   189,   190,   194,   668,   731,   784,   903,   732,
     782,   826,   863,   864,   865,   866,   921,   867,   868,   869,
     919,   947,   733,   734,   735,   736,   828,   737,   163,   301,
     302,   542,    94,   336,   677,   290,   380,   381,   375,   377,
     379,   676,   517,   129,   510,   560,   118,   740,   834,    96,
     363,   576,   489,   607,   608,   613,   614,   415,    97,   605,
     153,   154,   432,   621,   687,   757,   160,   217,   430,    98,
     454,   455,    99,   641,   480,   642,   179,   101,   475,   102,
     103,   420,   617,   753,   800,   883,   682,   683,   750,   684,
     104,   105,   106,   107,   229,   108,   109,   110,   111,   419,
     530,   616,   531,   532,   112,   473,   474,   649,   339,   340,
     207,   208,   481,   574,   113,   333,   563,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -722
static const yytype_int16 yypact[] =
{
    -722,    50,    70,  -722,  1576,  3846,  3846,   -71,  3846,  3846,
    3846,  3846,  3846,  3846,  3846,  -722,  3846,  3846,  3846,  3846,
    3846,  3846,  3846,  3846,  3846,   126,   126,  3846,   255,   -60,
     -50,  -722,  -722,   102,  -722,  -722,  -722,  -722,  3846,  -722,
      68,    71,    76,  -722,    78,  2549,  2667,   106,  -722,   122,
    2785,  -722,  3846,    21,    36,    86,   119,   -11,    91,    93,
      97,   130,  -722,  -722,  -722,   135,   153,  -722,  -722,  -722,
    -722,  -722,   147,    51,  -722,  -722,   186,  3846,  -722,  -722,
     121,   252,   272,   100,  -722,    10,  -722,  -722,  -722,  -722,
    -722,  -722,   278,   280,  -722,   258,   263,   193,  -722,  -722,
    4281,  -722,   206,  1201,   199,  -722,   208,   319,   233,  -722,
     -31,  -722,    43,  -722,  -722,  -722,   264,   236,   258,  5055,
    5055,  3846,  5055,  5055,  5155,  -722,  -722,   352,  -722,  3846,
    -722,  -722,  -722,  -722,  -722,  -722,  -722,  -722,  -722,  -722,
     248,   186,   223,   261,  -722,  -722,   266,  -722,  -722,   268,
     186,   285,   308,  -722,  -722,   310,   339,    52,    43,  2903,
    -722,  3846,  -722,    11,  5055,  2410,  -722,  3846,  3846,   309,
    3846,  -722,  4322,  -722,  4373,   325,   460,  -722,   331,  5055,
     413,   317,  4414,   186,   -33,    15,  -722,  -722,   188,    16,
    -722,  -722,  -722,   484,    19,   258,   126,   126,   126,   347,
    -722,  3021,   139,   216,  -722,  3963,   126,   224,  -722,   186,
    -722,   124,   118,  4455,   346,  3846,   238,   362,   318,   238,
     144,   458,  -722,   464,  -722,   410,  -722,  -722,   -15,   478,
      -2,  -722,  3846,  -722,   520,  -722,  -722,  3846,  3846,  3846,
    3846,  3846,  3846,  3846,  3846,  3846,  3846,  3846,  3846,  3846,
    3846,  3846,  3846,  3846,  3846,  3846,   255,  -722,  -722,  -722,
    3139,  3846,  3846,  3846,  3846,  3846,  3846,  3846,  3846,  3846,
    3846,  3846,  -722,    61,  3846,  -722,  3846,  3846,   121,   -43,
     390,  4506,  -722,   186,   253,    64,   169,   186,   285,    56,
     392,    56,  -722,   -30,  -722,  4547,  4589,  3846,  -722,   466,
    3846,   402,   543,  5055,   471,  1001,   491,  4638,  -722,  -722,
    -722,  4881,  -722,  -722,  -722,  -722,   -29,   493,    21,  -722,
    3846,  -722,  -722,    36,  -722,  4881,   494,  -722,   411,    22,
    -722,  -722,  -722,    29,   416,   414,   228,   126,  4853,   419,
     568,  -722,   506,  -722,  -722,   517,  1314,   420,  -722,  -722,
    -722,   336,  -722,  -722,  -722,  -722,  -722,  -722,  1715,  1374,
    -722,  -722,  -722,  3257,   569,     9,  -722,   462,  -722,  -722,
    3846,   429,   430,   -30,    43,  3846,  5132,  3846,  -722,  3846,
    3846,  3846,  2601,  2719,  2835,  2953,  2953,  2953,  2953,   997,
     997,   997,   997,    59,    59,   453,   453,   453,   352,   352,
     352,  -722,   -21,  5155,  5155,  5155,  5155,  5155,  5155,  5155,
    5155,  5155,  5155,  5155,  5155,  3257,   431,   434,  5055,   432,
     176,   436,  1460,  -722,   282,   429,   431,   285,  -722,  3257,
    -722,  -722,   176,  -722,   570,  5055,   437,  4679,  -722,  -722,
    -722,  -722,   582,    30,  -722,  4881,  4881,   442,   -37,   446,
     186,   -99,   455,  -722,  -722,  -722,   447,   538,  -722,  -722,
    4103,  -722,  -722,   600,  -722,   126,   456,  -722,  -722,  -722,
    -722,   463,  -722,    31,  -722,  -722,  -722,  3375,  -722,  3493,
    -722,   295,  -722,  3846,  -722,  -722,  -722,   461,  -722,  3257,
     468,  -722,  -722,  -722,  -722,  -722,   126,   459,   611,    32,
     132,  4881,   467,   186,   285,  -722,   505,     9,   470,   474,
     314,   472,  -722,  -722,   -30,  5095,  5155,  3846,  5014,  5200,
    1507,   255,  -722,   475,  -722,  -722,  -722,  -722,  3846,  -722,
    -722,   -17,  -722,  -722,  -722,   477,  -722,  -722,  2410,  -722,
    -722,  3846,  3846,   126,    47,  4881,   559,  1854,    -1,  -722,
    -722,  4881,   489,   186,   -76,   566,   536,  -722,  -722,  4881,
     314,  -722,  -722,   126,  -722,   228,   628,   126,  5055,   126,
    4902,  -722,  -722,  -722,   479,  1073,  3257,  -722,   482,   490,
     492,  -722,  -722,  3611,  -722,   186,   285,     9,   485,   639,
    -722,  -722,   314,  -722,  -722,  -722,  -722,  -722,  -722,  -722,
    -722,  -722,   495,   641,    24,  -722,  -722,  3257,  3257,  5178,
    -722,  -722,  -722,  3257,  3257,  4144,  -722,   499,  3846,  3846,
    -722,  -722,  -722,  -722,  3846,  1993,   501,  5055,   525,   126,
     525,  -722,  -722,   645,  -722,  -722,  -722,   503,   504,  -722,
     540,   509,   656,   -65,  -722,   511,  -722,   513,  -722,   228,
    -722,  3846,  -722,  -722,  3729,  -722,   512,   514,  -722,  -722,
     516,   126,    33,   301,   285,   639,  -722,     9,   580,   518,
     571,   685,   608,   671,   527,   529,  3846,   392,   542,   544,
    -722,  -722,   633,   640,  -722,   539,  4185,   581,   384,  -722,
    4721,  -722,  -722,  -722,  -722,    47,   547,  -722,   549,  4881,
     618,  -722,   415,  -722,   211,  4881,  -722,  4881,  -722,  -722,
     571,    34,  5155,   126,  5055,  -722,  -722,  -722,  -722,   753,
    -722,   638,     9,  -722,  -722,  -722,  -722,  -722,  -722,  -722,
    -722,  -722,  -722,  -722,   264,   774,  -722,    26,   552,   556,
     554,    25,   726,  4881,  -722,  -722,  5178,  -722,  -722,  -722,
    3257,  3846,  3846,   617,  -722,  -722,   176,  -722,  -722,   389,
     586,   661,  3846,  -722,  -722,  -722,  -722,   591,   421,   594,
    3846,     5,   360,  -722,  -722,   629,     9,   599,  -722,  -722,
    -722,   741,     8,  -722,   686,   258,  -722,   687,  -722,  -722,
      35,  -722,   691,   755,  4881,  -722,   612,   606,   610,   176,
    -722,  -722,   418,   616,  2410,  -722,  -722,   619,   625,  2132,
    2132,  -722,   626,  -722,  4240,  -722,  -722,  -722,  -722,  4881,
    -722,  -722,  4881,     9,  -722,    60,  -722,   763,    27,   704,
     771,   630,   712,  -722,    39,   631,   776,  4881,  -722,  -722,
    -722,  -722,  -722,   636,   769,   729,  3846,  -722,  -722,  -722,
    -722,  -722,  -722,  -722,  -722,  -722,  -722,  -722,   721,   643,
    -722,  -722,   709,   646,    60,  -722,   647,   710,   701,   651,
     659,  4881,   747,  -722,  -722,  4881,  -722,  -722,    38,  -722,
    -722,  4881,  -722,   499,  3846,  -722,   664,  4770,  2271,   735,
    -722,   300,   667,  -722,  -722,  -722,  -722,   444,     9,  -722,
     754,  -722,   813,   672,  -722,   756,  -722,  -722,  -722,  4811,
     758,  -722,  -722,  -722,  -722,  -722,   675,   320,  -722,   757,
     762,   828,  -722,  -722,  4881,   314,  -722,   811,  2410,   761,
    -722,   682,  -722,     9,  -722,   693,  -722,  -722,   684,  -722,
    -722,   335,  -722,  -722,   683,  -722,  -722,  -722,   454,  -722,
     688,   748,  -722,   698,  -722,   748,  -722,     9,  -722,  -722,
     770,   699,  -722,   700,  -722,   697,  -722
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -722,  -722,  -331,  -722,   -25,  -722,  -722,  -722,  -722,   551,
    -722,  -285,  -722,  -722,     1,  -722,  -722,  -722,  -722,  -722,
    -722,  -722,  -722,  -722,  -722,  -722,  -722,  -722,  -722,  -722,
    -722,  -722,  -722,  -722,  -722,  -722,  -722,  -722,  -722,  -722,
     -84,  -722,  -722,  -722,   412,   521,   522,  -116,  -722,  -722,
    -722,  -722,  -722,  -722,  -722,  -722,  -722,  -722,   288,   260,
     187,  -722,    81,  -722,  -722,  -722,  -304,  -722,  -722,    79,
    -722,  -722,  -722,  -722,  -722,  -722,  -722,  -547,  -722,   221,
    -393,  -722,  -722,   572,  -722,   230,  -722,  -722,  -722,  -722,
    -722,  -722,  -722,  -722,    37,  -722,  -722,  -722,  -722,  -722,
    -722,  -722,  -722,  -722,  -722,  -721,  -722,  -722,  -722,  -530,
    -722,  -722,   -24,  -722,  -722,  -722,  -722,  -722,  -722,  -722,
    -722,  -722,  -722,  -722,  -722,  -722,     3,   184,  -722,  -722,
    -722,  -722,  -722,  -722,  -722,  -722,  -722,  -722,   739,  -124,
    -244,  -722,  -722,  -722,  -722,  -722,  -722,  -722,   220,  -216,
     302,  -722,  -722,  -722,   256,  -722,   711,   714,  -479,   487,
     584,  -722,  -722,  -722,  -722,  -722,  -722,  -722,  -722,    20,
    -224,  -722,    49,  -722,  -722,  -722,   -18,   -20,  -722,  -272,
    -423,  -722,  -722,  -722,   -13,   257,   340,  -722,  -722,  -722,
     448,  -135,  -722,  -722,  -722,  -722,  -722,  -722
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -442
static const yytype_int16 yytable[] =
{
     142,   142,   280,   151,   421,    86,   372,    95,   157,   536,
     156,   626,   401,   647,   786,   158,   823,   581,   223,   297,
     276,   487,   523,   318,   323,   637,   178,   326,   184,   456,
     465,   815,   276,   276,   787,   872,   535,   467,   546,   565,
    -176,  -179,   565,   552,   521,   669,   618,   878,   211,   417,
       3,   212,   115,  -355,    35,   672,   792,   221,   368,   317,
     195,   372,   417,   457,   193,   428,   832,   431,   344,   905,
      -2,   371,   350,    35,   146,   146,  -357,   155,   629,   328,
     221,   344,   115,   350,   344,   350,   121,  -356,   652,    48,
     653,   221,   279,   139,   115,   453,   579,   159,   511,   673,
     793,   250,   251,   252,   253,   254,   255,   161,   256,   453,
     833,   187,   204,   906,  -436,   276,   284,   277,    35,   195,
     115,  -439,    35,   221,   115,   288,  -435,   221,   162,   277,
     277,    35,   140,   862,   416,   141,    35,   425,   293,    35,
    -177,    80,   369,   619,   304,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   578,   316,   638,
      80,   139,   502,   142,   816,   503,   299,   824,   825,   224,
     298,   142,   142,   142,   319,   324,   920,   183,   327,   175,
     466,   142,   718,   657,   351,   788,   873,   468,   547,   566,
    -176,  -179,   778,  -419,  -419,   176,   529,   879,   188,   115,
     140,    35,   341,   141,  -439,   278,   191,   209,   529,    80,
     373,   210,   277,   502,   674,   675,   503,   374,    80,   202,
     678,   679,   202,    80,   348,   166,    80,   203,   167,   453,
     453,   151,   808,   168,   779,   170,   157,   146,   156,   192,
     139,   505,   426,   158,    35,   146,   146,   146,   196,   527,
     197,    35,  -355,   373,   198,   146,   221,   222,   424,   115,
     374,   115,   427,    35,   342,   373,   373,   258,   259,   373,
    -357,   373,   374,   374,   221,   355,   374,   611,   374,   140,
     221,   215,   141,   353,   354,   453,   451,   199,    80,   227,
    -177,   202,   200,   184,   205,   206,   204,   205,   206,   202,
     451,   115,   139,    35,   348,   155,   770,   771,   361,  -180,
     201,   142,   142,   202,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,  -441,   202,   115,   453,
      35,    80,   216,   801,   704,   453,   528,   688,    80,   499,
     504,   140,   139,   453,   141,   230,   685,   202,   320,   700,
      80,   225,   219,   226,   514,   471,   272,   796,   275,   492,
     273,    95,  -419,  -419,    48,   343,   205,   206,   571,   139,
     572,   573,   773,   349,   205,   206,   842,   142,   935,   221,
     222,   140,   274,   590,   141,   146,   146,   115,   205,   206,
      80,   499,   209,   202,  -138,  -138,  -138,   768,   348,   772,
     373,   256,   205,   206,   283,   499,   761,   374,   149,   221,
     355,   150,   373,   285,  -136,  -136,  -136,    80,   286,   374,
     451,   451,   205,   206,   287,   554,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   221,   486,
     142,   221,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   146,   -41,   -41,   -41,   770,   771,   803,   804,  -180,
     289,  -138,   291,   590,   292,   499,   306,   502,   205,   206,
     503,   142,  -154,   311,  -419,  -419,   451,   314,   586,   797,
     798,  -136,   504,   453,   310,   504,   843,   844,  -356,   453,
     312,   453,   221,   486,   945,   946,   151,   325,   253,   254,
     255,   157,   256,   156,   831,   335,   835,   357,   158,   769,
     770,   771,   144,   147,   146,   812,   770,   771,   142,   142,
     451,   818,  -148,  -148,  -148,   360,   451,   453,   643,   218,
     220,   362,   529,   365,   451,   504,   859,   364,   142,   623,
     142,   370,   142,   720,   142,   146,   378,   369,   635,   429,
     436,   439,   499,   723,   724,   725,   726,   727,   728,   662,
     664,   438,   504,   440,   442,   889,   458,   504,   464,   463,
     155,   891,   313,   470,   469,   529,   479,   478,   453,   482,
     483,   485,   501,   499,   499,   507,   512,   513,   524,   499,
     499,   525,   146,   146,   539,   545,   537,   526,   783,   551,
     910,   533,   553,   453,   142,   917,   453,   555,   556,   145,
     145,   557,   146,   559,   146,   562,   146,   582,   146,   583,
     564,   453,   577,   585,   142,   580,   692,   462,   929,   587,
     591,   592,   633,   612,   180,   620,   142,   606,   343,   644,
     645,   651,   504,   658,   655,   666,   504,   667,   659,   671,
     660,   695,   820,   670,   944,   453,   681,   948,   699,   453,
     694,   950,   701,   703,   707,   453,   705,   706,   709,   829,
     142,   710,   716,   715,   451,   717,   738,   739,   146,   965,
     451,   721,   451,   742,   743,   744,   722,   745,   142,   723,
     724,   725,   726,   727,   728,   729,   751,   504,   146,   861,
     748,   870,   749,   752,   754,   764,   756,   765,   453,   767,
     146,   781,   789,   790,   791,   100,   119,   120,   451,   122,
     123,   124,   125,   126,   127,   128,   499,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   373,   785,   148,   794,
     870,   730,   799,   374,   146,   806,   807,   549,   550,   164,
     811,   504,   305,   813,   822,   819,   172,   174,   115,   821,
     830,   827,   146,   182,   143,   143,   836,   152,   837,   451,
     839,   840,   322,   846,   922,   841,   871,   874,   848,   373,
     331,   332,   334,   849,   875,   854,   374,   877,   213,   881,
     347,   876,   880,   884,   451,   885,   892,   451,   504,   886,
     504,  -213,   897,   584,   893,   847,   896,   894,   898,   940,
     899,   900,   451,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   902,   911,   916,   918,   924,   923,  -152,   925,
     932,   926,   281,   959,   930,  -219,   933,   936,   502,   504,
     282,   503,   939,   943,   949,   961,   451,   632,   938,   952,
     451,   941,   953,   640,   721,   957,   451,   962,   966,   722,
     964,   646,   723,   724,   725,   726,   727,   728,   729,   459,
     295,   958,   296,   504,  -225,   665,   100,   561,   303,   493,
     494,   307,   763,   723,   724,   725,   726,   727,   728,   914,
     698,   853,   741,   855,   777,   461,   719,   747,   708,   451,
     504,   895,   321,   908,     0,   650,   711,     0,   504,     0,
       0,     0,   338,     0,   780,     0,   346,     0,     0,     0,
     472,   476,     0,     0,     0,     0,   359,   143,     0,   937,
       0,     0,   504,     0,     0,   143,   143,   143,     0,     0,
       0,     0,     0,   376,     0,   143,     0,   500,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,     0,     0,     0,
       0,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,     0,     0,   418,   522,   418,   422,     0,
       0,     0,     0,     0,     0,   152,     0,     0,     0,   500,
       0,   766,     0,     0,     0,     0,     0,   774,   435,   775,
       0,   437,     0,   500,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,     0,     0,     0,     0,
       0,   460,     0,  -442,  -442,  -442,  -442,   248,   249,   250,
     251,   252,   253,   254,   255,   795,   256,     0,     0,   331,
     452,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -419,  -419,   452,     0,     0,     0,     0,   100,
       0,     0,     0,   500,     0,   143,   143,     0,     0,     0,
     476,   418,   231,   232,   233,     0,   515,     0,   516,     0,
     518,   519,   520,   441,     0,     0,   838,     0,   234,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   857,   256,     0,   860,     0,     0,   628,   631,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   882,
       0,   143,     0,     0,     0,     0,     0,   648,     0,   472,
       0,   476,     0,   476,     0,     0,     0,     0,     0,     0,
     500,     0,     0,     0,     0,     0,     0,   663,     0,     0,
       0,     0,     0,   901,     0,     0,     0,   904,     0,     0,
       0,     0,     0,   907,   452,   452,     0,     0,   568,     0,
     570,   500,   500,     0,   575,     0,     0,   500,   500,     0,
       0,     0,     0,     0,   143,     0,     0,     0,     0,     0,
       0,     0,     0,   697,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   934,     0,   609,     0,
       0,     0,     0,   472,     0,   143,     0,     0,   656,   615,
     452,     0,     0,     0,     0,   476,     0,     0,     0,   100,
       0,     0,   303,   627,     0,     0,     0,     0,   100,     0,
     152,     0,  -419,  -419,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   631,
       0,     0,   143,   143,   452,     0,     0,     0,     0,     0,
     452,     0,     0,     0,     0,     0,     0,   476,   452,     0,
       0,     0,   143,     0,   143,     0,   143,     0,   143,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   231,   232,   233,     0,     0,     0,   418,
     686,     0,     0,     0,   500,   690,   100,     0,     0,   234,
       0,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   712,   256,     0,   714,     0,     0,   143,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   231,   232,   233,     0,   746,   143,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   234,
     143,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,     0,   256,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,   452,     0,
       0,     0,     0,     0,   452,     0,   452,     0,     0,     0,
       0,     0,   143,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   418,   418,     0,     0,     0,     0,     0,   231,
     232,   233,     0,   303,     0,   484,     0,     0,     0,     0,
       0,   814,   452,     0,     0,   234,     0,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,     0,   256,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
     100,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   452,     0,   495,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,     0,   256,   887,   452,     0,
       0,   452,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   452,     0,     0,     5,
       6,     7,     8,     9,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,     0,   909,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     452,     0,     0,     0,   452,     0,     0,     0,    11,    12,
     452,   534,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   100,
      27,    28,    29,    30,     0,     0,     0,    31,    32,    33,
      34,    35,     0,    36,     0,     0,     0,    37,    38,    39,
      40,     0,    41,   452,    42,     0,    43,     0,     0,    44,
       0,     0,     0,    45,    46,    47,    48,    49,    50,    51,
       0,    52,    53,     0,    54,     0,     0,     0,    55,    56,
      57,     0,    58,    59,    60,    61,    62,    63,    64,     0,
       0,     0,     0,    65,    66,     0,     0,     0,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,     5,     6,
       7,     8,     9,     0,    72,     0,     0,    10,     0,    73,
      74,    75,    76,    77,     0,    78,    79,     0,    80,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
      28,    29,    30,     0,     0,     0,    31,    32,    33,    34,
      35,     0,    36,     0,     0,     0,    37,    38,    39,    40,
       0,    41,     0,    42,     0,    43,     0,     0,    44,     0,
       0,     0,    45,    46,    47,    48,     0,    50,    51,     0,
      52,     0,     0,    54,     0,     0,     0,    55,    56,    57,
       0,    58,    59,    60,   490,    62,    63,    64,     0,     0,
       0,     0,    65,    66,     0,     0,     0,     0,     0,     0,
       0,     0,    67,    68,    69,    70,    71,     5,     6,     7,
       8,     9,     0,    72,     0,     0,    10,     0,   117,    74,
      75,    76,    77,     0,    78,    79,     0,    80,    81,    82,
     634,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    27,    28,
      29,    30,     0,     0,     0,    31,    32,    33,    34,    35,
       0,    36,     0,     0,     0,    37,    38,    39,    40,     0,
      41,     0,    42,     0,    43,     0,     0,    44,     0,     0,
       0,    45,    46,    47,    48,     0,    50,    51,     0,    52,
       0,     0,    54,     0,     0,     0,     0,     0,    57,     0,
      58,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,     0,     0,     0,     0,     0,     0,
       0,    67,    68,    69,    70,    71,     5,     6,     7,     8,
       9,     0,    72,     0,     0,    10,     0,   117,    74,    75,
      76,    77,     0,    78,    79,     0,    80,    81,    82,   691,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,    28,    29,
      30,     0,     0,     0,    31,    32,    33,    34,    35,     0,
      36,     0,     0,     0,    37,    38,    39,    40,     0,    41,
       0,    42,     0,    43,     0,     0,    44,     0,     0,     0,
      45,    46,    47,    48,     0,    50,    51,     0,    52,     0,
       0,    54,     0,     0,     0,     0,     0,    57,     0,    58,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,     0,     0,     0,     0,     0,     0,     0,
      67,    68,    69,    70,    71,     5,     6,     7,     8,     9,
       0,    72,     0,     0,    10,     0,   117,    74,    75,    76,
      77,     0,    78,    79,     0,    80,    81,    82,   850,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,    29,    30,
       0,     0,     0,    31,    32,    33,    34,    35,     0,    36,
       0,     0,     0,    37,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,     0,    50,    51,     0,    52,     0,     0,
      54,     0,     0,     0,     0,     0,    57,     0,    58,    59,
      60,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,     5,     6,     7,     8,     9,     0,
      72,     0,     0,    10,     0,   117,    74,    75,    76,    77,
       0,    78,    79,     0,    80,    81,    82,   913,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,    28,    29,    30,     0,
       0,     0,    31,    32,    33,    34,    35,     0,    36,     0,
       0,     0,    37,    38,    39,    40,     0,    41,     0,    42,
       0,    43,     0,     0,    44,     0,     0,     0,    45,    46,
      47,    48,     0,    50,    51,     0,    52,     0,     0,    54,
       0,     0,     0,     0,     0,    57,     0,    58,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,     0,     0,     0,     0,     0,     0,    67,    68,
      69,    70,    71,     5,     6,     7,     8,     9,     0,    72,
       0,     0,    10,     0,   117,    74,    75,    76,    77,     0,
      78,    79,     0,    80,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,    29,    30,     0,     0,
       0,    31,    32,    33,    34,    35,     0,    36,     0,     0,
       0,    37,    38,    39,    40,     0,    41,     0,    42,     0,
      43,     0,     0,    44,     0,     0,     0,    45,    46,    47,
      48,     0,    50,    51,     0,    52,     0,     0,    54,     0,
       0,     0,     0,     0,    57,     0,    58,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
       0,     0,     0,     0,     0,     0,     0,    67,    68,    69,
      70,    71,     5,     6,     7,     8,     9,     0,    72,     0,
       0,    10,     0,   117,    74,    75,    76,    77,     0,    78,
      79,     0,    80,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,    28,    29,     0,     0,     0,     0,
      31,    32,   115,    34,    35,     0,     0,     0,     0,     0,
      37,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,    48,
     256,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   116,     0,     0,    59,    60,     0,     0,
       5,     6,     7,     8,     9,     0,    65,    66,     0,    10,
       0,     0,     0,     0,     0,     0,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,    72,     0,     0,
       0,     0,   117,    74,    75,    76,    77,     0,   171,    11,
      12,    80,    81,    82,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     115,    34,    35,     0,     0,     0,     0,     0,    37,     0,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,    48,   256,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   116,     0,     0,    59,    60,     0,     0,     5,     6,
       7,     8,     9,     0,    65,    66,     0,    10,     0,     0,
       0,     0,     0,     0,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,    72,     0,     0,     0,     0,
     117,    74,    75,    76,    77,     0,   173,    11,    12,    80,
      81,    82,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   115,    34,
      35,     0,     0,     0,     0,     0,    37,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,     0,   256,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
       0,     0,    59,    60,     0,     0,     5,     6,     7,     8,
       9,     0,    65,    66,     0,    10,     0,     0,     0,     0,
       0,     0,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,     0,    72,     0,     0,     0,     0,   117,    74,
      75,    76,    77,     0,   177,    11,    12,    80,    81,    82,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,    28,    29,
       0,     0,     0,     0,    31,    32,   115,    34,    35,     0,
       0,     0,     0,     0,    37,  -442,  -442,  -442,  -442,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,     0,   256,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   116,     0,     0,
      59,    60,     0,     0,     5,     6,     7,     8,     9,     0,
      65,    66,     0,    10,     0,     0,     0,     0,     0,     0,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
       0,    72,   337,     0,     0,     0,   117,    74,    75,    76,
      77,   294,     0,    11,    12,    80,    81,    82,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,    28,    29,     0,     0,
       0,     0,    31,    32,   115,    34,    35,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   116,     0,     0,    59,    60,
       0,     0,     5,     6,     7,     8,     9,     0,    65,    66,
       0,    10,     0,     0,     0,     0,     0,     0,    67,    68,
      69,    70,    71,     0,     0,     0,     0,     0,     0,    72,
     402,     0,     0,     0,   117,    74,    75,    76,    77,     0,
       0,    11,    12,    80,    81,    82,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,    28,    29,     0,     0,     0,     0,
      31,    32,   115,    34,    35,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   116,     0,     0,    59,    60,     0,     0,
       5,     6,     7,     8,     9,     0,    65,    66,     0,    10,
       0,     0,     0,     0,     0,     0,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,    72,   496,     0,
       0,     0,   117,    74,    75,    76,    77,     0,     0,    11,
      12,    80,    81,    82,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     115,    34,    35,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   116,     0,     0,    59,    60,     0,     0,     5,     6,
       7,     8,     9,     0,    65,    66,     0,    10,     0,     0,
       0,     0,     0,     0,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,    72,   567,     0,     0,     0,
     117,    74,    75,    76,    77,     0,     0,    11,    12,    80,
      81,    82,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   115,    34,
      35,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
       0,     0,    59,    60,     0,     0,     5,     6,     7,     8,
       9,     0,    65,    66,     0,    10,     0,     0,     0,     0,
       0,     0,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,     0,    72,   569,     0,     0,     0,   117,    74,
      75,    76,    77,     0,     0,    11,    12,    80,    81,    82,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,    28,    29,
       0,     0,     0,     0,    31,    32,   115,    34,    35,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   116,     0,     0,
      59,    60,     0,     0,     5,     6,     7,     8,     9,     0,
      65,    66,     0,    10,     0,     0,     0,     0,     0,     0,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
       0,    72,   661,     0,     0,     0,   117,    74,    75,    76,
      77,     0,     0,    11,    12,    80,    81,    82,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,    28,    29,     0,     0,
       0,     0,    31,    32,   115,    34,    35,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   116,     0,     0,    59,    60,
       0,     0,     5,     6,     7,     8,     9,     0,    65,    66,
       0,    10,     0,     0,     0,     0,     0,     0,    67,    68,
      69,    70,    71,     0,     0,     0,     0,     0,     0,    72,
     713,     0,     0,     0,   117,    74,    75,    76,    77,     0,
       0,    11,    12,    80,    81,    82,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,    28,    29,     0,     0,     0,     0,
      31,    32,   115,    34,    35,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   116,     0,     0,    59,    60,     0,     5,
       6,     7,     8,     9,     0,     0,    65,    66,    10,     0,
       0,     0,     0,     0,     0,     0,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,    72,     0,     0,
       0,     0,   117,    74,    75,    76,    77,     0,    11,    12,
       0,    80,    81,    82,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,    28,    29,     0,     0,     0,     0,    31,    32,   115,
      34,    35,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     116,     0,     0,    59,    60,     0,     5,     6,     7,     8,
       9,     0,     0,    65,    66,    10,     0,     0,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,     0,    72,     0,     0,     0,     0,   117,
      74,    75,    76,    77,     0,    11,    12,     0,    80,    81,
      82,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,    28,    29,
       0,     0,     0,     0,    31,    32,   115,   345,    35,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   116,     0,     0,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,     0,     0,     0,     0,     0,     0,     0,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
       0,    72,   231,   232,   233,     0,   117,    74,    75,    76,
      77,     0,     0,     0,     0,    80,    81,    82,   234,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,     0,   256,   231,   232,   233,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   234,
       0,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,     0,   256,   231,   232,   233,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     234,     0,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,     0,   256,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   231,
     232,   233,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   558,   234,   815,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,     0,   256,
     231,   232,   233,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   680,   234,     0,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,     0,
     256,   231,   232,   233,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   755,   234,     0,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
       0,   256,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   231,   232,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   234,   816,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,     0,   256,   231,   232,   233,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   234,
     257,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,     0,   256,   231,   232,   233,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     234,   308,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,     0,   256,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   231,   232,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   234,   309,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,     0,   256,   231,   232,   233,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   234,   315,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,     0,   256,     0,   231,   232,
     233,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   356,   234,     0,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,     0,   256,     0,
       0,     0,     0,     0,     0,     0,     0,   231,   232,   233,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   234,   423,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,     0,   256,   231,   232,
     233,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   234,   433,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,     0,   256,     0,
     231,   232,   233,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   234,   434,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,     0,
     256,     0,     0,     0,     0,     0,     0,     0,     0,   231,
     232,   233,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   234,   444,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,     0,   256,
     231,   232,   233,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   234,   540,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,     0,
     256,     0,   231,   232,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   234,   760,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,     0,   256,     0,     0,     0,     0,     0,     0,     0,
       0,   231,   232,   233,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   445,   446,     0,     0,   234,   912,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
       0,   256,    31,    32,   115,     0,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,     0,     0,   927,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   477,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   447,
       0,     0,     0,     0,     0,     0,     0,     0,    67,    68,
      69,    70,    71,   231,   232,   233,     0,     0,   654,   448,
       0,     0,     0,     0,   449,    74,    75,   450,     0,   234,
     610,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,     0,   256,   231,   232,   233,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     234,     0,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,     0,   256,   232,   233,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     234,     0,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   233,   256,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   234,     0,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     234,   256,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,     0,   256,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,     0,   256,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,     0,   256
};

static const yytype_int16 yycheck[] =
{
      25,    26,   118,    28,   276,     4,   230,     4,    28,   432,
      28,   541,   256,   560,   735,    28,     8,   496,     8,     8,
      63,   352,   415,     8,     8,    26,    50,     8,    53,   314,
       8,    26,    63,    63,     8,     8,   429,     8,     8,     8,
       8,     8,     8,    80,    65,   592,    63,     8,    73,   273,
       0,    76,    73,   152,    75,    31,    31,   156,    73,    92,
      57,   285,   286,    92,    75,   289,    31,   291,   203,    31,
       0,    73,   207,    75,    25,    26,   152,    28,    31,   195,
     156,   216,    73,   218,   219,   220,   157,   152,   567,   100,
     569,   156,   112,   114,    73,   311,   489,   157,   370,    75,
      75,    42,    43,    44,    45,    46,    47,   157,    49,   325,
      75,    75,   149,    75,   157,    63,   141,   160,    75,   116,
      73,   152,    75,   156,    73,   150,   157,   156,    26,   160,
     160,    75,   153,    73,    73,   156,    75,    73,   158,    75,
       8,   162,   157,   160,   168,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   488,   183,   160,
     162,   114,   153,   188,   159,   156,   165,   159,   160,   159,
     159,   196,   197,   198,   159,   159,   897,   156,   159,    73,
     158,   206,   661,   576,   209,   159,   159,   158,   158,   158,
     158,   158,   158,    61,    62,    73,   420,   158,   162,    73,
     153,    75,    63,   156,   152,   162,   120,   156,   432,   162,
     230,   160,   160,   153,   607,   608,   156,   230,   162,    75,
     613,   614,    75,   162,    80,   157,   162,    80,   157,   445,
     446,   256,   762,   157,   713,   157,   256,   188,   256,   120,
     114,   365,    73,   256,    75,   196,   197,   198,   157,    73,
     157,    75,   152,   273,   157,   206,   156,   157,   283,    73,
     273,    73,   287,    75,   125,   285,   286,    61,    62,   289,
     152,   291,   285,   286,   156,   157,   289,   521,   291,   153,
     156,   160,   156,   159,   160,   501,   311,   157,   162,    31,
     158,    75,   157,   318,   150,   151,   149,   150,   151,    75,
     325,    73,   114,    75,    80,   256,    95,    96,   164,     8,
     157,   336,   337,    75,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    63,    75,    73,   545,
      75,   162,    80,   756,   638,   551,   160,   622,   162,   363,
     365,   153,   114,   559,   156,   152,   618,    75,   160,   634,
     162,    73,    80,    73,   374,   127,   157,   750,   125,   358,
     152,   358,    61,    62,   100,   149,   150,   151,    73,   114,
      75,    76,   161,   149,   150,   151,   799,   402,   925,   156,
     157,   153,    63,   507,   156,   336,   337,    73,   150,   151,
     162,   415,   156,    75,    94,    95,    96,   701,    80,   703,
     420,    49,   150,   151,   156,   429,   691,   420,   153,   156,
     157,   156,   432,   152,    94,    95,    96,   162,   152,   432,
     445,   446,   150,   151,   156,   450,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   156,   157,
     465,   156,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   402,    68,    69,    70,    95,    96,    68,    69,   158,
     152,   161,   152,   587,   125,   489,   157,   153,   150,   151,
     156,   496,   158,    13,    61,    62,   501,   160,   503,   751,
     752,   161,   507,   699,   159,   510,    68,    69,   152,   705,
     159,   707,   156,   157,   159,   160,   521,    13,    45,    46,
      47,   521,    49,   521,   789,   158,   791,   161,   521,    94,
      95,    96,    25,    26,   465,    94,    95,    96,   543,   544,
     545,   161,    68,    69,    70,   163,   551,   743,   553,    81,
      82,    73,   756,   123,   559,   560,   821,    73,   563,   538,
     565,    63,   567,   667,   569,   496,    26,   157,   547,   157,
      84,     8,   576,   109,   110,   111,   112,   113,   114,   583,
     585,   159,   587,    92,    73,   850,    73,   592,   157,    75,
     521,   856,   159,   159,   158,   799,     8,   158,   794,    73,
      63,   161,    13,   607,   608,   123,   157,   157,   157,   613,
     614,   157,   543,   544,   157,    13,    26,   165,   722,   157,
     885,   165,   156,   819,   629,   890,   822,   152,   161,    25,
      26,    73,   563,    13,   565,   159,   567,   158,   569,     8,
     157,   837,   161,   156,   649,   157,   625,   325,   913,   124,
     160,   157,    73,   158,    50,   158,   661,   165,   149,    73,
     104,    13,   667,   161,   165,   160,   671,     8,   158,     8,
     158,   126,   776,   158,   939,   871,   157,   942,    13,   875,
     159,   946,   159,   159,     8,   881,   126,   158,   157,   785,
     695,   158,   158,   161,   699,   159,   158,   106,   629,   964,
     705,   101,   707,    75,    13,   158,   106,   158,   713,   109,
     110,   111,   112,   113,   114,   115,    63,   722,   649,   823,
     158,   825,   158,    63,   165,   158,   125,   158,   924,    91,
     661,    73,   160,   157,   160,     4,     5,     6,   743,     8,
       9,    10,    11,    12,    13,    14,   750,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   756,   734,    27,    13,
     864,   161,   125,   756,   695,   159,    85,   445,   446,    38,
     159,   776,   168,   159,    13,   126,    45,    46,    73,   160,
      73,    75,   713,    52,    25,    26,    75,    28,    13,   794,
     158,   165,   188,   157,   898,   165,    13,    73,   159,   799,
     196,   197,   198,   158,    13,   159,   799,    75,    77,    13,
     206,   161,   161,   157,   819,    26,    75,   822,   823,    70,
     825,    92,    92,   501,   161,   804,   159,   161,   107,   933,
     159,   152,   837,   128,   129,   130,   131,   132,   133,   134,
     135,   136,    75,   159,    89,   158,    13,    73,    70,   157,
      73,    75,   121,   957,   159,    73,     8,    26,   153,   864,
     129,   156,   160,   159,   161,    75,   871,   545,    87,   161,
     875,   158,   104,   551,   101,   157,   881,   158,   161,   106,
     160,   559,   109,   110,   111,   112,   113,   114,   115,   318,
     159,   955,   161,   898,   100,   587,   165,   465,   167,   358,
     358,   170,   695,   109,   110,   111,   112,   113,   114,   888,
     630,   810,   671,   814,   710,   323,   666,   677,   642,   924,
     925,   864,   188,   883,    -1,   565,   649,    -1,   933,    -1,
      -1,    -1,   201,    -1,   161,    -1,   205,    -1,    -1,    -1,
     336,   337,    -1,    -1,    -1,    -1,   215,   188,    -1,   928,
      -1,    -1,   957,    -1,    -1,   196,   197,   198,    -1,    -1,
      -1,    -1,    -1,   232,    -1,   206,    -1,   363,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,    -1,    -1,    -1,
      -1,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,    -1,    -1,   274,   402,   276,   277,    -1,
      -1,    -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,   415,
      -1,   699,    -1,    -1,    -1,    -1,    -1,   705,   297,   707,
      -1,   300,    -1,   429,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,   320,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   743,    49,    -1,    -1,   465,
     311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,   325,    -1,    -1,    -1,    -1,   358,
      -1,    -1,    -1,   489,    -1,   336,   337,    -1,    -1,    -1,
     496,   370,     9,    10,    11,    -1,   375,    -1,   377,    -1,
     379,   380,   381,    92,    -1,    -1,   794,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,   819,    49,    -1,   822,    -1,    -1,   543,   544,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   837,
      -1,   402,    -1,    -1,    -1,    -1,    -1,   563,    -1,   565,
      -1,   567,    -1,   569,    -1,    -1,    -1,    -1,    -1,    -1,
     576,    -1,    -1,    -1,    -1,    -1,    -1,   583,    -1,    -1,
      -1,    -1,    -1,   871,    -1,    -1,    -1,   875,    -1,    -1,
      -1,    -1,    -1,   881,   445,   446,    -1,    -1,   477,    -1,
     479,   607,   608,    -1,   483,    -1,    -1,   613,   614,    -1,
      -1,    -1,    -1,    -1,   465,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   629,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   924,    -1,   517,    -1,
      -1,    -1,    -1,   649,    -1,   496,    -1,    -1,   165,   528,
     501,    -1,    -1,    -1,    -1,   661,    -1,    -1,    -1,   538,
      -1,    -1,   541,   542,    -1,    -1,    -1,    -1,   547,    -1,
     521,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   695,
      -1,    -1,   543,   544,   545,    -1,    -1,    -1,    -1,    -1,
     551,    -1,    -1,    -1,    -1,    -1,    -1,   713,   559,    -1,
      -1,    -1,   563,    -1,   565,    -1,   567,    -1,   569,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,   618,
     619,    -1,    -1,    -1,   750,   624,   625,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,   651,    49,    -1,   654,    -1,    -1,   629,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    10,    11,    -1,   676,   649,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     661,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   695,    -1,    -1,    -1,   699,    -1,
      -1,    -1,    -1,    -1,   705,    -1,   707,    -1,    -1,    -1,
      -1,    -1,   713,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   751,   752,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,   762,    -1,   161,    -1,    -1,    -1,    -1,
      -1,   770,   743,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,   804,    -1,    -1,    -1,    -1,
     809,   810,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   794,    -1,   161,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,   846,   819,    -1,
      -1,   822,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   837,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,   884,    -1,    -1,    -1,   888,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     871,    -1,    -1,    -1,   875,    -1,    -1,    -1,    42,    43,
     881,   161,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,   928,
      64,    65,    66,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    -1,    77,    -1,    -1,    -1,    81,    82,    83,
      84,    -1,    86,   924,    88,    -1,    90,    -1,    -1,    93,
      -1,    -1,    -1,    97,    98,    99,   100,   101,   102,   103,
      -1,   105,   106,    -1,   108,    -1,    -1,    -1,   112,   113,
     114,    -1,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,   138,   139,   140,   141,     3,     4,
       5,     6,     7,    -1,   148,    -1,    -1,    12,    -1,   153,
     154,   155,   156,   157,    -1,   159,   160,    -1,   162,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    66,    67,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    -1,    77,    -1,    -1,    -1,    81,    82,    83,    84,
      -1,    86,    -1,    88,    -1,    90,    -1,    -1,    93,    -1,
      -1,    -1,    97,    98,    99,   100,    -1,   102,   103,    -1,
     105,    -1,    -1,   108,    -1,    -1,    -1,   112,   113,   114,
      -1,   116,   117,   118,   119,   120,   121,   122,    -1,    -1,
      -1,    -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   137,   138,   139,   140,   141,     3,     4,     5,
       6,     7,    -1,   148,    -1,    -1,    12,    -1,   153,   154,
     155,   156,   157,    -1,   159,   160,    -1,   162,   163,   164,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      -1,    77,    -1,    -1,    -1,    81,    82,    83,    84,    -1,
      86,    -1,    88,    -1,    90,    -1,    -1,    93,    -1,    -1,
      -1,    97,    98,    99,   100,    -1,   102,   103,    -1,   105,
      -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,   114,    -1,
     116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,   138,   139,   140,   141,     3,     4,     5,     6,
       7,    -1,   148,    -1,    -1,    12,    -1,   153,   154,   155,
     156,   157,    -1,   159,   160,    -1,   162,   163,   164,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      67,    -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,
      77,    -1,    -1,    -1,    81,    82,    83,    84,    -1,    86,
      -1,    88,    -1,    90,    -1,    -1,    93,    -1,    -1,    -1,
      97,    98,    99,   100,    -1,   102,   103,    -1,   105,    -1,
      -1,   108,    -1,    -1,    -1,    -1,    -1,   114,    -1,   116,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     137,   138,   139,   140,   141,     3,     4,     5,     6,     7,
      -1,   148,    -1,    -1,    12,    -1,   153,   154,   155,   156,
     157,    -1,   159,   160,    -1,   162,   163,   164,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    77,
      -1,    -1,    -1,    81,    82,    83,    84,    -1,    86,    -1,
      88,    -1,    90,    -1,    -1,    93,    -1,    -1,    -1,    97,
      98,    99,   100,    -1,   102,   103,    -1,   105,    -1,    -1,
     108,    -1,    -1,    -1,    -1,    -1,   114,    -1,   116,   117,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
     138,   139,   140,   141,     3,     4,     5,     6,     7,    -1,
     148,    -1,    -1,    12,    -1,   153,   154,   155,   156,   157,
      -1,   159,   160,    -1,   162,   163,   164,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    -1,    77,    -1,
      -1,    -1,    81,    82,    83,    84,    -1,    86,    -1,    88,
      -1,    90,    -1,    -1,    93,    -1,    -1,    -1,    97,    98,
      99,   100,    -1,   102,   103,    -1,   105,    -1,    -1,   108,
      -1,    -1,    -1,    -1,    -1,   114,    -1,   116,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,
     139,   140,   141,     3,     4,     5,     6,     7,    -1,   148,
      -1,    -1,    12,    -1,   153,   154,   155,   156,   157,    -1,
     159,   160,    -1,   162,   163,   164,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    66,    67,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    -1,    77,    -1,    -1,
      -1,    81,    82,    83,    84,    -1,    86,    -1,    88,    -1,
      90,    -1,    -1,    93,    -1,    -1,    -1,    97,    98,    99,
     100,    -1,   102,   103,    -1,   105,    -1,    -1,   108,    -1,
      -1,    -1,    -1,    -1,   114,    -1,   116,   117,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,
     140,   141,     3,     4,     5,     6,     7,    -1,   148,    -1,
      -1,    12,    -1,   153,   154,   155,   156,   157,    -1,   159,
     160,    -1,   162,   163,   164,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      81,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,   100,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   117,   118,    -1,    -1,
       3,     4,     5,     6,     7,    -1,   127,   128,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,   140,
     141,    -1,    -1,    -1,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,   153,   154,   155,   156,   157,    -1,   159,    42,
      43,   162,   163,   164,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    66,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,   100,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,    -1,    -1,   117,   118,    -1,    -1,     3,     4,
       5,     6,     7,    -1,   127,   128,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,   137,   138,   139,   140,   141,    -1,
      -1,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,
     153,   154,   155,   156,   157,    -1,   159,    42,    43,   162,
     163,   164,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    66,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    81,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
      -1,    -1,   117,   118,    -1,    -1,     3,     4,     5,     6,
       7,    -1,   127,   128,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,   137,   138,   139,   140,   141,    -1,    -1,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,   153,   154,
     155,   156,   157,    -1,   159,    42,    43,   162,   163,   164,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    81,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,
     117,   118,    -1,    -1,     3,     4,     5,     6,     7,    -1,
     127,   128,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
     137,   138,   139,   140,   141,    -1,    -1,    -1,    -1,    -1,
      -1,   148,    31,    -1,    -1,    -1,   153,   154,   155,   156,
     157,   158,    -1,    42,    43,   162,   163,   164,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,   118,
      -1,    -1,     3,     4,     5,     6,     7,    -1,   127,   128,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,
     139,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,
      31,    -1,    -1,    -1,   153,   154,   155,   156,   157,    -1,
      -1,    42,    43,   162,   163,   164,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   117,   118,    -1,    -1,
       3,     4,     5,     6,     7,    -1,   127,   128,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,   140,
     141,    -1,    -1,    -1,    -1,    -1,    -1,   148,    31,    -1,
      -1,    -1,   153,   154,   155,   156,   157,    -1,    -1,    42,
      43,   162,   163,   164,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    66,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,    -1,    -1,   117,   118,    -1,    -1,     3,     4,
       5,     6,     7,    -1,   127,   128,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,   137,   138,   139,   140,   141,    -1,
      -1,    -1,    -1,    -1,    -1,   148,    31,    -1,    -1,    -1,
     153,   154,   155,   156,   157,    -1,    -1,    42,    43,   162,
     163,   164,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    66,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
      -1,    -1,   117,   118,    -1,    -1,     3,     4,     5,     6,
       7,    -1,   127,   128,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,   137,   138,   139,   140,   141,    -1,    -1,    -1,
      -1,    -1,    -1,   148,    31,    -1,    -1,    -1,   153,   154,
     155,   156,   157,    -1,    -1,    42,    43,   162,   163,   164,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,
     117,   118,    -1,    -1,     3,     4,     5,     6,     7,    -1,
     127,   128,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
     137,   138,   139,   140,   141,    -1,    -1,    -1,    -1,    -1,
      -1,   148,    31,    -1,    -1,    -1,   153,   154,   155,   156,
     157,    -1,    -1,    42,    43,   162,   163,   164,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,   118,
      -1,    -1,     3,     4,     5,     6,     7,    -1,   127,   128,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,
     139,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,
      31,    -1,    -1,    -1,   153,   154,   155,   156,   157,    -1,
      -1,    42,    43,   162,   163,   164,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   117,   118,    -1,     3,
       4,     5,     6,     7,    -1,    -1,   127,   128,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,   140,
     141,    -1,    -1,    -1,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,   153,   154,   155,   156,   157,    -1,    42,    43,
      -1,   162,   163,   164,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    -1,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,    -1,    -1,   117,   118,    -1,     3,     4,     5,     6,
       7,    -1,    -1,   127,   128,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,   138,   139,   140,   141,    -1,    -1,
      -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,   153,
     154,   155,   156,   157,    -1,    42,    43,    -1,   162,   163,
     164,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     137,   138,   139,   140,   141,    -1,    -1,    -1,    -1,    -1,
      -1,   148,     9,    10,    11,    -1,   153,   154,   155,   156,
     157,    -1,    -1,    -1,    -1,   162,   163,   164,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   161,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   161,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   161,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   159,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     159,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   159,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   159,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   159,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   158,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   158,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   158,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   158,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   158,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   158,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    25,   158,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,
     139,   140,   141,     9,    10,    11,    -1,    -1,   126,   148,
      -1,    -1,    -1,    -1,   153,   154,   155,   156,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    11,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      25,    49,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   167,   168,     0,   169,     3,     4,     5,     6,     7,
      12,    42,    43,    48,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    64,    65,    66,
      67,    71,    72,    73,    74,    75,    77,    81,    82,    83,
      84,    86,    88,    90,    93,    97,    98,    99,   100,   101,
     102,   103,   105,   106,   108,   112,   113,   114,   116,   117,
     118,   119,   120,   121,   122,   127,   128,   137,   138,   139,
     140,   141,   148,   153,   154,   155,   156,   157,   159,   160,
     162,   163,   164,   170,   171,   176,   180,   181,   211,   212,
     214,   216,   219,   221,   278,   292,   295,   304,   315,   318,
     322,   323,   325,   326,   336,   337,   338,   339,   341,   342,
     343,   344,   350,   360,   363,    73,   114,   153,   292,   322,
     322,   157,   322,   322,   322,   322,   322,   322,   322,   289,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   114,
     153,   156,   170,   304,   325,   326,   338,   325,   322,   153,
     156,   170,   304,   306,   307,   338,   342,   343,   350,   157,
     312,   157,    26,   274,   322,   188,   157,   157,   157,   198,
     157,   159,   322,   159,   322,    73,    73,   159,   278,   322,
     326,   199,   322,   156,   170,   174,   175,    75,   162,   248,
     249,   120,   120,    75,   250,   292,   157,   157,   157,   157,
     157,   157,    75,    80,   149,   150,   151,   356,   357,   156,
     160,   170,   170,   322,   177,   160,    80,   313,   356,    80,
     356,   156,   157,     8,   159,    73,    73,    31,   213,   340,
     152,     9,    10,    11,    25,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    49,   159,    61,    62,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   157,   152,    63,   125,    63,   160,   162,   343,
     213,   322,   322,   156,   170,   152,   152,   156,   170,   152,
     281,   152,   125,   343,   158,   322,   322,     8,   159,   180,
     186,   275,   276,   322,   278,   326,   157,   322,   159,   159,
     159,    13,   159,   159,   160,   159,   170,    92,     8,   159,
     160,   323,   326,     8,   159,    13,     8,   159,   213,   209,
     210,   326,   326,   361,   326,   158,   279,    31,   322,   354,
     355,    63,   125,   149,   357,    74,   322,   326,    80,   149,
     357,   170,   173,   159,   160,   157,   158,   161,   178,   322,
     163,   164,    73,   296,    73,   123,   220,   218,    73,   157,
      63,    73,   336,   343,   350,   284,   322,   285,    26,   286,
     282,   283,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   306,    31,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   303,    73,   336,   322,   345,
     327,   345,   322,   158,   170,    73,    73,   170,   336,   157,
     314,   336,   308,   158,   158,   322,    84,   322,   159,     8,
      92,    92,    73,   230,   158,    42,    43,   128,   148,   153,
     156,   170,   304,   315,   316,   317,   177,    92,    73,   175,
     322,   249,   316,    75,   157,     8,   158,     8,   158,   158,
     159,   127,   326,   351,   352,   324,   326,   126,   158,     8,
     320,   358,    73,    63,   161,   161,   157,   168,   172,   298,
     119,   179,   180,   211,   212,   161,    31,   246,   247,   278,
     326,    13,   153,   156,   170,   305,   217,   123,   222,   215,
     290,   345,   157,   157,   343,   322,   322,   288,   322,   322,
     322,    65,   326,   246,   157,   157,   165,    73,   160,   336,
     346,   348,   349,   165,   161,   246,   346,    26,   182,   157,
     158,   190,   277,   196,   194,    13,     8,   158,   193,   316,
     316,   157,    80,   156,   170,   152,   161,    73,   161,    13,
     291,   210,   159,   362,   157,     8,   158,    31,   322,    31,
     322,    73,    75,    76,   359,   322,   297,   161,   168,   246,
     157,   324,   158,     8,   316,   156,   170,   124,   223,   224,
     305,   160,   157,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   243,   244,   245,   305,   165,   299,   300,   322,
      26,   306,   158,   301,   302,   322,   347,   328,    63,   160,
     158,   309,   184,   180,   189,   187,   275,   322,   326,    31,
     226,   326,   316,    73,    26,   180,   229,    26,   160,   231,
     316,   319,   321,   170,    73,   104,   316,   243,   326,   353,
     352,    13,   324,   324,   126,   165,   165,   246,   161,   158,
     158,    31,   278,   326,   170,   224,   160,     8,   251,   243,
     158,     8,    31,    75,   246,   246,   287,   280,   246,   246,
     161,   157,   332,   333,   335,   345,   322,   310,   177,   183,
     322,    26,   180,   236,   159,   126,   225,   326,   225,    13,
     177,   159,   232,   159,   232,   126,   158,     8,   320,   157,
     158,   351,   322,    31,   322,   161,   158,   159,   324,   251,
     305,   101,   106,   109,   110,   111,   112,   113,   114,   115,
     161,   252,   255,   268,   269,   270,   271,   273,   158,   106,
     293,   245,    75,    13,   158,   158,   322,   314,   158,   158,
     334,    63,    63,   329,   165,   161,   125,   311,   185,   237,
     158,   177,   191,   226,   158,   158,   316,    91,   232,    94,
      95,    96,   232,   161,   316,   316,   200,   293,   158,   324,
     161,    73,   256,   305,   253,   292,   271,     8,   159,   160,
     157,   160,    31,    75,    13,   316,   246,   345,   345,   125,
     330,   346,   239,    68,    69,   241,   159,    85,   275,   197,
     195,   159,    94,   159,   322,    26,   159,   235,   161,   126,
     305,   160,    13,     8,   159,   160,   257,    75,   272,   213,
      73,   177,    31,    75,   294,   177,    75,    13,   316,   158,
     165,   165,   346,    68,    69,   242,   157,   180,   159,   158,
      26,   180,   228,   228,   159,   235,   234,   316,   201,   177,
     316,   305,    73,   258,   259,   260,   261,   263,   264,   265,
     305,    13,     8,   159,    73,    13,   161,    75,     8,   158,
     161,    13,   316,   331,   157,    26,    70,   322,   192,   177,
     233,   177,    75,   161,   161,   260,   159,    92,   107,   159,
     152,   316,    75,   254,   316,    31,    75,   316,   335,   322,
     177,   159,   158,    26,   180,   227,    89,   177,   158,   266,
     271,   262,   305,    73,    13,   157,    75,   158,   238,   177,
     159,   202,    73,     8,   316,   243,    26,   180,    87,   160,
     305,   158,   240,   159,   177,   159,   160,   267,   177,   161,
     177,   203,   161,   104,   204,   205,   206,   157,   206,   305,
     207,    75,   158,   208,   160,   177,   161
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

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

    { ;}
    break;

  case 3:

    {;}
    break;

  case 4:

    { ;}
    break;

  case 6:

    { ;}
    break;

  case 7:

    { ;}
    break;

  case 8:

    { ;}
    break;

  case 9:

    { ;}
    break;

  case 10:

    { ;}
    break;

  case 11:

    { ;}
    break;

  case 12:

    { ;}
    break;

  case 13:

    { ;}
    break;

  case 14:

    { ;}
    break;

  case 15:

    { ;}
    break;

  case 16:

    { ;}
    break;

  case 17:

    { ;}
    break;

  case 18:

    { ;}
    break;

  case 21:

    {;}
    break;

  case 22:

    {;}
    break;

  case 23:

    {;}
    break;

  case 24:

    {;}
    break;

  case 25:

    {;}
    break;

  case 26:

    {;}
    break;

  case 27:

    {;}
    break;

  case 28:

    { ;}
    break;

  case 33:

    {;}
    break;

  case 34:

    {;}
    break;

  case 35:

    {;}
    break;

  case 37:

    {;}
    break;

  case 38:

    {;}
    break;

  case 39:

    { ;}
    break;

  case 40:

    { ;}
    break;

  case 41:

    { ;}
    break;

  case 42:

    { ;}
    break;

  case 43:

    { ;}
    break;

  case 44:

    { ;}
    break;

  case 45:

    { ;}
    break;

  case 46:

    { ;}
    break;

  case 47:

    { ;}
    break;

  case 48:

    { ;}
    break;

  case 49:

    { ;}
    break;

  case 50:

    {;}
    break;

  case 51:

    {;}
    break;

  case 52:

    { ;}
    break;

  case 53:

    { ;}
    break;

  case 54:

    {;}
    break;

  case 55:

    { ;}
    break;

  case 56:

    { ;}
    break;

  case 57:

    { ;}
    break;

  case 58:

    { ;}
    break;

  case 59:

    { ;}
    break;

  case 60:

    { ;}
    break;

  case 61:

    {;}
    break;

  case 65:

    { ;}
    break;

  case 66:

    { ;}
    break;

  case 68:

    {;}
    break;

  case 69:

    {;}
    break;

  case 70:

    {;}
    break;

  case 71:

    {;}
    break;

  case 72:

    {;}
    break;

  case 73:

    {;}
    break;

  case 74:

    {;}
    break;

  case 75:

    {;}
    break;

  case 77:

    {;}
    break;

  case 78:

    {;}
    break;

  case 79:

    {;}
    break;

  case 80:

    {;}
    break;

  case 81:

    {;}
    break;

  case 82:

    {;}
    break;

  case 83:

    {;}
    break;

  case 84:

    {;}
    break;

  case 85:

    {;}
    break;

  case 86:

    {;}
    break;

  case 87:

    {;}
    break;

  case 88:

    {;}
    break;

  case 89:

    {;}
    break;

  case 90:

    {;}
    break;

  case 91:

    {;}
    break;

  case 94:

    {;}
    break;

  case 95:

    {;}
    break;

  case 96:

    {;}
    break;

  case 97:

    {;}
    break;

  case 98:

    {;}
    break;

  case 99:

    {;}
    break;

  case 100:

    {;}
    break;

  case 101:

    {;}
    break;

  case 102:

    {printf("class decl\n");;}
    break;

  case 103:

    {;}
    break;

  case 104:

    {;}
    break;

  case 105:

    {printf("class entry type\n");;}
    break;

  case 106:

    {;}
    break;

  case 107:

    {;}
    break;

  case 108:

    {;}
    break;

  case 109:

    {;}
    break;

  case 110:

    {;}
    break;

  case 111:

    {;}
    break;

  case 116:

    {;}
    break;

  case 117:

    {;}
    break;

  case 118:

    {;}
    break;

  case 119:

    {;}
    break;

  case 120:

    {;}
    break;

  case 121:

    {;}
    break;

  case 128:

    {;}
    break;

  case 129:

    {;}
    break;

  case 130:

    {;}
    break;

  case 131:

    {;}
    break;

  case 132:

    {;}
    break;

  case 133:

    {;}
    break;

  case 134:

    {;}
    break;

  case 135:

    {;}
    break;

  case 136:

    {;}
    break;

  case 137:

    {;}
    break;

  case 138:

    {;}
    break;

  case 144:

    {;}
    break;

  case 145:

    {;}
    break;

  case 147:

    {;}
    break;

  case 148:

    {;}
    break;

  case 155:

    {;}
    break;

  case 156:

    {;}
    break;

  case 157:

    {;}
    break;

  case 158:

    {;}
    break;

  case 159:

    {;}
    break;

  case 160:

    {;}
    break;

  case 161:

    {;}
    break;

  case 162:

    {;}
    break;

  case 163:

    {;}
    break;

  case 164:

    {;}
    break;

  case 165:

    {;}
    break;

  case 166:

    {;}
    break;

  case 167:

    {;}
    break;

  case 168:

    {;}
    break;

  case 169:

    {;}
    break;

  case 170:

    {;}
    break;

  case 171:

    {;}
    break;

  case 172:

    {;}
    break;

  case 173:

    {;}
    break;

  case 174:

    {;}
    break;

  case 175:

    {;}
    break;

  case 176:

    {;}
    break;

  case 177:

    {;}
    break;

  case 178:

    {;}
    break;

  case 179:

    {;}
    break;

  case 180:

    {;}
    break;

  case 181:

    {;}
    break;

  case 182:

    {;}
    break;

  case 183:

    {;}
    break;

  case 184:

    {;}
    break;

  case 185:

    {;}
    break;

  case 186:

    {;}
    break;

  case 187:

    {;}
    break;

  case 188:

    {;}
    break;

  case 189:

    {;}
    break;

  case 190:

    {;}
    break;

  case 193:

    {;}
    break;

  case 197:

    {;}
    break;

  case 198:

    {;}
    break;

  case 200:

    {;}
    break;

  case 201:

    {;}
    break;

  case 208:

    {;}
    break;

  case 209:

    {;}
    break;

  case 210:

    {;}
    break;

  case 211:

    {;}
    break;

  case 212:

    {;}
    break;

  case 213:

    {;}
    break;

  case 214:

    {;}
    break;

  case 215:

    {;}
    break;

  case 216:

    {;}
    break;

  case 217:

    {;}
    break;

  case 218:

    {;}
    break;

  case 219:

    {;}
    break;

  case 220:

    {;}
    break;

  case 221:

    { ;}
    break;

  case 222:

    {;}
    break;

  case 223:

    {;}
    break;

  case 224:

    {;}
    break;

  case 225:

    { ;}
    break;

  case 226:

    {;}
    break;

  case 227:

    {;}
    break;

  case 228:

    {;}
    break;

  case 229:

    {;}
    break;

  case 230:

    {;}
    break;

  case 231:

    {;}
    break;

  case 232:

    {;}
    break;

  case 233:

    {;}
    break;

  case 234:

    {;}
    break;

  case 235:

    {;}
    break;

  case 236:

    {;}
    break;

  case 237:

    {;}
    break;

  case 238:

    {;}
    break;

  case 239:

    {;}
    break;

  case 240:

    {;}
    break;

  case 241:

    {;}
    break;

  case 242:

    {;}
    break;

  case 243:

    {;}
    break;

  case 244:

    {;}
    break;

  case 245:

    {;}
    break;

  case 246:

    {;}
    break;

  case 247:

    {;}
    break;

  case 248:

    {;}
    break;

  case 249:

    {;}
    break;

  case 250:

    {;}
    break;

  case 251:

    {;}
    break;

  case 252:

    {;}
    break;

  case 253:

    {;}
    break;

  case 254:

    { ;}
    break;

  case 255:

    {;}
    break;

  case 256:

    {;}
    break;

  case 257:

    {;}
    break;

  case 258:

    {;}
    break;

  case 259:

    {;}
    break;

  case 260:

    {;}
    break;

  case 261:

    {;}
    break;

  case 262:

    {;}
    break;

  case 263:

    {;}
    break;

  case 264:

    {;}
    break;

  case 265:

    {;}
    break;

  case 266:

    {;}
    break;

  case 267:

    {;}
    break;

  case 268:

    {;}
    break;

  case 269:

    {;}
    break;

  case 270:

    {;}
    break;

  case 271:

    {;}
    break;

  case 272:

    {;}
    break;

  case 273:

    {;}
    break;

  case 274:

    {;}
    break;

  case 275:

    {;}
    break;

  case 276:

    {;}
    break;

  case 277:

    {;}
    break;

  case 278:

    {;}
    break;

  case 279:

    {;}
    break;

  case 280:

    {;}
    break;

  case 281:

    {;}
    break;

  case 282:

    {;}
    break;

  case 283:

    {;}
    break;

  case 284:

    {;}
    break;

  case 285:

    {;}
    break;

  case 286:

    {;}
    break;

  case 287:

    {;}
    break;

  case 288:

    {;}
    break;

  case 289:

    {;}
    break;

  case 290:

    {;}
    break;

  case 291:

    {  ;}
    break;

  case 292:

    {  ;}
    break;

  case 293:

    {;}
    break;

  case 294:

    {;}
    break;

  case 295:

    {;}
    break;

  case 296:

    {;}
    break;

  case 297:

    {;}
    break;

  case 298:

    {;}
    break;

  case 299:

    {;}
    break;

  case 300:

    {;}
    break;

  case 301:

    {;}
    break;

  case 302:

    {;}
    break;

  case 303:

    {;}
    break;

  case 304:

    {;}
    break;

  case 305:

    {;}
    break;

  case 306:

    {;}
    break;

  case 307:

    {;}
    break;

  case 308:

    {;}
    break;

  case 309:

    {;}
    break;

  case 310:

    {;}
    break;

  case 311:

    {;}
    break;

  case 312:

    {;}
    break;

  case 313:

    {;}
    break;

  case 314:

    {;}
    break;

  case 315:

    {;}
    break;

  case 316:

    {;}
    break;

  case 317:

    {;}
    break;

  case 318:

    {;}
    break;

  case 319:

    {;}
    break;

  case 320:

    {;}
    break;

  case 321:

    {;}
    break;

  case 322:

    {;}
    break;

  case 323:

    {;}
    break;

  case 324:

    {;}
    break;

  case 325:

    {;}
    break;

  case 326:

    {;}
    break;

  case 327:

    {;}
    break;

  case 328:

    {;}
    break;

  case 329:

    {;}
    break;

  case 330:

    {;}
    break;

  case 331:

    {;}
    break;

  case 334:

    {;}
    break;

  case 335:

    {;}
    break;

  case 336:

    {;}
    break;

  case 337:

    {;}
    break;

  case 338:

    {;}
    break;

  case 339:

    {;}
    break;

  case 340:

    {;}
    break;

  case 341:

    {;}
    break;

  case 342:

    {;}
    break;

  case 343:

    {;}
    break;

  case 344:

    {;}
    break;

  case 345:

    { ;}
    break;

  case 346:

    {;}
    break;

  case 347:

    { ;}
    break;

  case 348:

    {;}
    break;

  case 349:

    { ;}
    break;

  case 350:

    {;}
    break;

  case 351:

    { ;}
    break;

  case 352:

    {;}
    break;

  case 353:

    { ;}
    break;

  case 354:

    { ;}
    break;

  case 355:

    {;}
    break;

  case 356:

    {;}
    break;

  case 357:

    {;}
    break;

  case 358:

    {;}
    break;

  case 359:

    {;}
    break;

  case 360:

    {;}
    break;

  case 361:

    {;}
    break;

  case 362:

    {;}
    break;

  case 363:

    {;}
    break;

  case 364:

    {;}
    break;

  case 365:

    {;}
    break;

  case 366:

    {;}
    break;

  case 369:

    {;}
    break;

  case 370:

    {;}
    break;

  case 371:

    {;}
    break;

  case 372:

    {;}
    break;

  case 373:

    {;}
    break;

  case 374:

    {;}
    break;

  case 375:

    {;}
    break;

  case 376:

    {;}
    break;

  case 377:

    {;}
    break;

  case 378:

    {;}
    break;

  case 379:

    {;}
    break;

  case 380:

    {;}
    break;

  case 381:

    {;}
    break;

  case 382:

    {;}
    break;

  case 383:

    {;}
    break;

  case 384:

    {;}
    break;

  case 385:

    {;}
    break;

  case 386:

    {;}
    break;

  case 387:

    {;}
    break;

  case 388:

    {;}
    break;

  case 389:

    {;}
    break;

  case 390:

    {;}
    break;

  case 391:

    {;}
    break;

  case 392:

    {;}
    break;

  case 393:

    {;}
    break;

  case 394:

    {;}
    break;

  case 395:

    {;}
    break;

  case 396:

    {;}
    break;

  case 397:

    {;}
    break;

  case 398:

    {;}
    break;

  case 399:

    {;}
    break;

  case 400:

    {;}
    break;

  case 401:

    {;}
    break;

  case 402:

    {;}
    break;

  case 403:

    {;}
    break;

  case 404:

    {;}
    break;

  case 405:

    {;}
    break;

  case 406:

    {;}
    break;

  case 407:

    {;}
    break;

  case 408:

    {;}
    break;

  case 411:

    {;}
    break;

  case 412:

    {;}
    break;

  case 413:

    {;}
    break;

  case 414:

    {;}
    break;

  case 415:

    {;}
    break;

  case 416:

    {;}
    break;

  case 417:

    {;}
    break;

  case 418:

    {  ;}
    break;

  case 419:

    {  ;}
    break;

  case 420:

    {;}
    break;

  case 421:

    {;}
    break;

  case 422:

    {;}
    break;

  case 423:

    {;}
    break;

  case 424:

    {;}
    break;

  case 425:

    {;}
    break;

  case 426:

    {;}
    break;

  case 427:

    {;}
    break;

  case 428:

    {;}
    break;

  case 429:

    {;}
    break;

  case 430:

    {;}
    break;

  case 431:

    {;}
    break;

  case 432:

    {;}
    break;

  case 433:

    {;}
    break;

  case 434:

    {;}
    break;

  case 435:

    {;}
    break;

  case 436:

    {;}
    break;

  case 437:

    {;}
    break;

  case 438:

    {;}
    break;

  case 439:

    {;}
    break;

  case 440:

    {;}
    break;

  case 441:

    {;}
    break;

  case 442:

    {;}
    break;

  case 443:

    {;}
    break;

  case 444:

    {;}
    break;

  case 445:

    {;}
    break;

  case 446:

    {;}
    break;

  case 447:

    {;}
    break;

  case 448:

    {;}
    break;

  case 449:

    {;}
    break;

  case 450:

    {;}
    break;

  case 451:

    {;}
    break;

  case 452:

    {;}
    break;

  case 453:

    {;}
    break;

  case 454:

    {;}
    break;

  case 455:

    {;}
    break;

  case 456:

    {;}
    break;

  case 457:

    {;}
    break;

  case 458:

    { ;}
    break;

  case 459:

    {;}
    break;

  case 460:

    {;}
    break;

  case 461:

    { ;}
    break;

  case 462:

    {;}
    break;

  case 463:

    {;}
    break;

  case 464:

    {;}
    break;

  case 465:

    {;}
    break;

  case 468:

    {;}
    break;

  case 469:

    {;}
    break;

  case 470:

    {;}
    break;

  case 471:

    {;}
    break;

  case 472:

    {;}
    break;

  case 473:

    {;}
    break;

  case 474:

    {;}
    break;

  case 475:

    {;}
    break;

  case 476:

    {;}
    break;

  case 477:

    {;}
    break;

  case 478:

    {;}
    break;

  case 479:

    {;}
    break;

  case 480:

    {;}
    break;

  case 481:

    {;}
    break;

  case 482:

    {;}
    break;

  case 483:

    {;}
    break;

  case 484:

    {;}
    break;

  case 485:

    {;}
    break;

  case 486:

    {;}
    break;

  case 487:

    {;}
    break;

  case 488:

    {;}
    break;

  case 489:

    {;}
    break;

  case 490:

    {;}
    break;

  case 491:

    {;}
    break;

  case 492:

    {;}
    break;

  case 493:

    {;}
    break;

  case 494:

    {;}
    break;

  case 495:

    {;}
    break;

  case 496:

    {;}
    break;

  case 497:

    {;}
    break;

  case 498:

    {;}
    break;

  case 499:

    {;}
    break;

  case 500:

    {;}
    break;

  case 501:

    {;}
    break;

  case 502:

    {;}
    break;

  case 503:

    {;}
    break;

  case 504:

    {;}
    break;

  case 505:

    {;}
    break;

  case 506:

    {;}
    break;

  case 507:

    {;}
    break;



      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}





/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */
int yylex(char *s)
{
  getchar();
  return T_CLASS;
}
int yyerror(char *e)
{
  return 0;
}