
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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */



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
typedef union YYSTYPE
{


  int   id;
  char* val;



} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


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


#include "sys_defs.h"
#include "zend_language_parser.h"

#define YYDEBUG 1
 
extern int yylex();
int yyerror(char *e);




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
#define YYLAST   5356

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  166
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  195
/* YYNRULES -- Number of rules.  */
#define YYNRULES  504
/* YYNRULES -- Number of states.  */
#define YYNSTATES  964

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
     346,   354,   361,   363,   366,   368,   371,   372,   375,   377,
     378,   381,   382,   385,   387,   391,   392,   395,   397,   400,
     402,   407,   409,   414,   416,   421,   425,   431,   435,   440,
     445,   451,   452,   453,   460,   461,   467,   469,   471,   473,
     478,   479,   480,   488,   489,   490,   499,   500,   503,   504,
     508,   510,   511,   514,   518,   524,   529,   534,   540,   548,
     555,   556,   558,   560,   562,   564,   566,   568,   570,   572,
     574,   576,   578,   579,   581,   583,   586,   590,   594,   599,
     603,   605,   607,   610,   615,   619,   625,   627,   631,   634,
     635,   636,   641,   644,   646,   647,   657,   661,   663,   667,
     669,   673,   674,   676,   678,   681,   684,   687,   691,   693,
     697,   699,   701,   705,   710,   714,   715,   717,   719,   723,
     725,   727,   728,   730,   732,   735,   737,   739,   741,   743,
     745,   747,   751,   757,   759,   763,   769,   774,   778,   780,
     781,   783,   784,   789,   791,   792,   800,   804,   809,   810,
     818,   819,   824,   827,   831,   835,   839,   843,   847,   851,
     855,   859,   863,   867,   871,   874,   877,   880,   883,   884,
     889,   890,   895,   896,   901,   902,   907,   911,   915,   919,
     923,   927,   931,   935,   939,   943,   947,   951,   955,   958,
     961,   964,   967,   971,   975,   979,   983,   987,   991,   995,
     999,  1003,  1007,  1008,  1009,  1017,  1018,  1024,  1026,  1029,
    1032,  1035,  1038,  1041,  1044,  1047,  1050,  1053,  1056,  1057,
    1061,  1063,  1068,  1072,  1075,  1076,  1087,  1088,  1100,  1102,
    1103,  1108,  1112,  1117,  1119,  1122,  1123,  1129,  1130,  1138,
    1139,  1146,  1147,  1155,  1156,  1164,  1165,  1173,  1174,  1182,
    1183,  1189,  1191,  1193,  1197,  1200,  1202,  1206,  1209,  1211,
    1213,  1214,  1215,  1222,  1224,  1227,  1228,  1231,  1232,  1235,
    1239,  1240,  1242,  1244,  1245,  1249,  1251,  1253,  1255,  1257,
    1259,  1261,  1263,  1265,  1267,  1269,  1273,  1276,  1278,  1280,
    1284,  1287,  1290,  1293,  1298,  1300,  1304,  1306,  1308,  1310,
    1314,  1317,  1319,  1323,  1327,  1328,  1331,  1332,  1334,  1340,
    1344,  1348,  1350,  1352,  1354,  1356,  1358,  1360,  1361,  1362,
    1370,  1372,  1375,  1376,  1377,  1382,  1387,  1392,  1393,  1398,
    1400,  1402,  1403,  1405,  1408,  1412,  1416,  1418,  1423,  1424,
    1430,  1432,  1434,  1436,  1438,  1441,  1443,  1448,  1453,  1455,
    1457,  1462,  1463,  1465,  1467,  1468,  1471,  1476,  1481,  1483,
    1485,  1489,  1491,  1494,  1498,  1500,  1502,  1503,  1509,  1510,
    1511,  1514,  1520,  1524,  1528,  1530,  1537,  1542,  1547,  1550,
    1553,  1556,  1558,  1561,  1563,  1564,  1570,  1574,  1578,  1585,
    1589,  1591,  1593,  1595,  1600,  1605,  1608,  1611,  1616,  1619,
    1622,  1624,  1625,  1630,  1634
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
     170,    92,    73,    -1,   176,     8,    73,    13,   313,    -1,
     101,    73,    13,   313,    -1,    -1,   177,   178,   179,    -1,
      -1,   180,    -1,   211,    -1,   212,    -1,   119,   157,   158,
     159,    -1,   181,    -1,    73,    26,    -1,   160,   177,   161,
      -1,    -1,    -1,    67,   157,   319,   158,   182,   180,   183,
     234,   238,    -1,    -1,    -1,    67,   157,   319,   158,    26,
     184,   177,   185,   236,   239,    70,   159,    -1,    -1,    -1,
      84,   157,   186,   319,   158,   187,   233,    -1,    -1,    -1,
      83,   188,   180,    84,   157,   189,   319,   158,   159,    -1,
      -1,    -1,    -1,    86,   157,   272,   159,   190,   272,   159,
     191,   272,   158,   192,   224,    -1,    -1,    93,   157,   319,
     158,   193,   228,    -1,    97,   159,    -1,    97,   319,   159,
      -1,    98,   159,    -1,    98,   319,   159,    -1,   102,   159,
      -1,   102,   275,   159,    -1,   102,   323,   159,    -1,   108,
     245,   159,    -1,   114,   247,   159,    -1,    82,   271,   159,
      -1,    77,    -1,   319,   159,    -1,   116,   157,   209,   158,
     159,    -1,    -1,    -1,    88,   157,   323,    92,   194,   223,
     222,   158,   195,   225,    -1,    -1,    -1,    88,   157,   275,
      92,   196,   323,   222,   158,   197,   225,    -1,    -1,    90,
     198,   157,   227,   158,   226,    -1,   159,    -1,    -1,    -1,
      -1,    -1,    -1,   103,   199,   160,   177,   161,   104,   157,
     200,   302,   201,    75,   158,   202,   160,   177,   161,   203,
     204,    -1,   105,   319,   159,    -1,    99,    73,   159,    -1,
     205,    -1,    -1,   206,    -1,   205,   206,    -1,    -1,    -1,
     104,   157,   302,   207,    75,   158,   208,   160,   177,   161,
      -1,   210,    -1,   209,     8,   210,    -1,   323,    -1,   214,
      -1,   215,    -1,    -1,    31,    -1,   289,   213,    73,   157,
     240,   158,   160,   177,   161,    -1,   216,    73,   217,   220,
     160,   248,   161,    -1,   218,    73,   219,   160,   248,   161,
      -1,   120,    -1,   113,   120,    -1,   121,    -1,   112,   120,
      -1,    -1,   123,   302,    -1,   122,    -1,    -1,   123,   221,
      -1,    -1,   124,   221,    -1,   302,    -1,   221,     8,   302,
      -1,    -1,   126,   223,    -1,   323,    -1,    31,   323,    -1,
     180,    -1,    26,   177,    87,   159,    -1,   180,    -1,    26,
     177,    89,   159,    -1,   180,    -1,    26,   177,    91,   159,
      -1,    73,    13,   313,    -1,   227,     8,    73,    13,   313,
      -1,   160,   229,   161,    -1,   160,   159,   229,   161,    -1,
      26,   229,    94,   159,    -1,    26,   159,   229,    94,   159,
      -1,    -1,    -1,   229,    95,   319,   232,   230,   177,    -1,
      -1,   229,    96,   232,   231,   177,    -1,    26,    -1,   159,
      -1,   180,    -1,    26,   177,    85,   159,    -1,    -1,    -1,
     234,    68,   157,   319,   158,   235,   180,    -1,    -1,    -1,
     236,    68,   157,   319,   158,    26,   237,   177,    -1,    -1,
      69,   180,    -1,    -1,    69,    26,   177,    -1,   241,    -1,
      -1,   242,    75,    -1,   242,    31,    75,    -1,   242,    31,
      75,    13,   313,    -1,   242,    75,    13,   313,    -1,   241,
       8,   242,    75,    -1,   241,     8,   242,    31,    75,    -1,
     241,     8,   242,    31,    75,    13,   313,    -1,   241,     8,
     242,    75,    13,   313,    -1,    -1,   128,    -1,   129,    -1,
     130,    -1,   131,    -1,   132,    -1,   133,    -1,   134,    -1,
     135,    -1,   136,    -1,   302,    -1,   244,    -1,    -1,   275,
      -1,   323,    -1,    31,   321,    -1,   244,     8,   275,    -1,
     244,     8,   323,    -1,   244,     8,    31,   321,    -1,   245,
       8,   246,    -1,   246,    -1,    75,    -1,   162,   320,    -1,
     162,   160,   319,   161,    -1,   247,     8,    75,    -1,   247,
       8,    75,    13,   313,    -1,    75,    -1,    75,    13,   313,
      -1,   248,   249,    -1,    -1,    -1,   265,   250,   269,   159,
      -1,   270,   159,    -1,   252,    -1,    -1,   266,   289,   213,
      73,   251,   157,   240,   158,   264,    -1,   106,   253,   254,
      -1,   302,    -1,   253,     8,   302,    -1,   159,    -1,   160,
     255,   161,    -1,    -1,   256,    -1,   257,    -1,   256,   257,
      -1,   258,   159,    -1,   262,   159,    -1,   261,   107,   259,
      -1,   302,    -1,   259,     8,   302,    -1,    73,    -1,   261,
      -1,   302,   152,    73,    -1,   260,    92,   263,    73,    -1,
     260,    92,   268,    -1,    -1,   268,    -1,   159,    -1,   160,
     177,   161,    -1,   267,    -1,   115,    -1,    -1,   267,    -1,
     268,    -1,   267,   268,    -1,   109,    -1,   110,    -1,   111,
      -1,   114,    -1,   113,    -1,   112,    -1,   269,     8,    75,
      -1,   269,     8,    75,    13,   313,    -1,    75,    -1,    75,
      13,   313,    -1,   270,     8,    73,    13,   313,    -1,   101,
      73,    13,   313,    -1,   271,     8,   319,    -1,   319,    -1,
      -1,   273,    -1,    -1,   273,     8,   274,   319,    -1,   319,
      -1,    -1,   127,   157,   276,   348,   158,    13,   319,    -1,
     323,    13,   319,    -1,   323,    13,    31,   323,    -1,    -1,
     323,    13,    31,    65,   303,   277,   311,    -1,    -1,    65,
     303,   278,   311,    -1,    64,   319,    -1,   323,    24,   319,
      -1,   323,    23,   319,    -1,   323,    22,   319,    -1,   323,
      21,   319,    -1,   323,    20,   319,    -1,   323,    19,   319,
      -1,   323,    18,   319,    -1,   323,    17,   319,    -1,   323,
      16,   319,    -1,   323,    15,   319,    -1,   323,    14,   319,
      -1,   322,    62,    -1,    62,   322,    -1,   322,    61,    -1,
      61,   322,    -1,    -1,   319,    27,   279,   319,    -1,    -1,
     319,    28,   280,   319,    -1,    -1,   319,     9,   281,   319,
      -1,    -1,   319,    11,   282,   319,    -1,   319,    10,   319,
      -1,   319,    29,   319,    -1,   319,    31,   319,    -1,   319,
      30,   319,    -1,   319,    44,   319,    -1,   319,    42,   319,
      -1,   319,    43,   319,    -1,   319,    45,   319,    -1,   319,
      46,   319,    -1,   319,    47,   319,    -1,   319,    41,   319,
      -1,   319,    40,   319,    -1,    42,   319,    -1,    43,   319,
      -1,    48,   319,    -1,    50,   319,    -1,   319,    33,   319,
      -1,   319,    32,   319,    -1,   319,    35,   319,    -1,   319,
      34,   319,    -1,   319,    36,   319,    -1,   319,    39,   319,
      -1,   319,    37,   319,    -1,   319,    38,   319,    -1,   319,
      49,   303,    -1,   157,   319,   158,    -1,    -1,    -1,   319,
      25,   283,   319,    26,   284,   319,    -1,    -1,   319,    25,
      26,   285,   319,    -1,   357,    -1,    60,   319,    -1,    57,
     319,    -1,    56,   319,    -1,    55,   319,    -1,    54,   319,
      -1,    53,   319,    -1,    58,   319,    -1,    59,   319,    -1,
      52,   319,    -1,    66,   309,    -1,    -1,    51,   286,   319,
      -1,   315,    -1,   128,   157,   351,   158,    -1,   163,   310,
     163,    -1,    12,   319,    -1,    -1,   289,   213,   157,   287,
     240,   158,   290,   160,   177,   161,    -1,    -1,   114,   289,
     213,   157,   288,   240,   158,   290,   160,   177,   161,    -1,
     100,    -1,    -1,   106,   157,   291,   158,    -1,   291,     8,
      75,    -1,   291,     8,    31,    75,    -1,    75,    -1,    31,
      75,    -1,    -1,   170,   157,   293,   243,   158,    -1,    -1,
     153,   156,   170,   157,   294,   243,   158,    -1,    -1,   156,
     170,   157,   295,   243,   158,    -1,    -1,   301,   152,    73,
     157,   296,   243,   158,    -1,    -1,   301,   152,   333,   157,
     297,   243,   158,    -1,    -1,   335,   152,    73,   157,   298,
     243,   158,    -1,    -1,   335,   152,   333,   157,   299,   243,
     158,    -1,    -1,   333,   157,   300,   243,   158,    -1,   114,
      -1,   170,    -1,   153,   156,   170,    -1,   156,   170,    -1,
     170,    -1,   153,   156,   170,    -1,   156,   170,    -1,   301,
      -1,   304,    -1,    -1,    -1,   339,   125,   305,   343,   306,
     307,    -1,   339,    -1,   307,   308,    -1,    -1,   125,   343,
      -1,    -1,   157,   158,    -1,   157,   319,   158,    -1,    -1,
      80,    -1,   353,    -1,    -1,   157,   243,   158,    -1,    71,
      -1,    72,    -1,    81,    -1,   140,    -1,   141,    -1,   155,
      -1,   137,    -1,   138,    -1,   139,    -1,   154,    -1,   148,
      80,   149,    -1,   148,   149,    -1,   312,    -1,   170,    -1,
     153,   156,   170,    -1,   156,   170,    -1,    42,   313,    -1,
      43,   313,    -1,   128,   157,   316,   158,    -1,   314,    -1,
     301,   152,    73,    -1,    74,    -1,   360,    -1,   170,    -1,
     153,   156,   170,    -1,   156,   170,    -1,   312,    -1,   164,
     353,   164,    -1,   148,   353,   149,    -1,    -1,   318,   317,
      -1,    -1,     8,    -1,   318,     8,   313,   126,   313,    -1,
     318,     8,   313,    -1,   313,   126,   313,    -1,   313,    -1,
     320,    -1,   275,    -1,   323,    -1,   323,    -1,   323,    -1,
      -1,    -1,   338,   125,   324,   343,   325,   332,   326,    -1,
     338,    -1,   326,   327,    -1,    -1,    -1,   125,   343,   328,
     332,    -1,   329,    63,   342,   165,    -1,   330,    63,   342,
     165,    -1,    -1,   157,   331,   243,   158,    -1,   330,    -1,
     329,    -1,    -1,   340,    -1,   347,   340,    -1,   301,   152,
     333,    -1,   335,   152,   333,    -1,   340,    -1,   336,    63,
     342,   165,    -1,    -1,   292,   337,    63,   342,   165,    -1,
     339,    -1,   336,    -1,   292,    -1,   340,    -1,   347,   340,
      -1,   334,    -1,   340,    63,   342,   165,    -1,   340,   160,
     319,   161,    -1,   341,    -1,    75,    -1,   162,   160,   319,
     161,    -1,    -1,   319,    -1,   345,    -1,    -1,   333,   344,
      -1,   345,    63,   342,   165,    -1,   345,   160,   319,   161,
      -1,   346,    -1,    73,    -1,   160,   319,   161,    -1,   162,
      -1,   347,   162,    -1,   348,     8,   349,    -1,   349,    -1,
     323,    -1,    -1,   127,   157,   350,   348,   158,    -1,    -1,
      -1,   352,   317,    -1,   352,     8,   319,   126,   319,    -1,
     352,     8,   319,    -1,   319,   126,   319,    -1,   319,    -1,
     352,     8,   319,   126,    31,   321,    -1,   352,     8,    31,
     321,    -1,   319,   126,    31,   321,    -1,    31,   321,    -1,
     353,   354,    -1,   353,    80,    -1,   354,    -1,    80,   354,
      -1,    75,    -1,    -1,    75,    63,   355,   356,   165,    -1,
      75,   125,    73,    -1,   150,   319,   161,    -1,   150,    74,
      63,   319,   165,   161,    -1,   151,   323,   161,    -1,    73,
      -1,    76,    -1,    75,    -1,   117,   157,   358,   158,    -1,
     118,   157,   323,   158,    -1,     7,   319,    -1,     6,   319,
      -1,     5,   157,   319,   158,    -1,     4,   319,    -1,     3,
     319,    -1,   323,    -1,    -1,   358,     8,   359,   323,    -1,
     301,   152,    73,    -1,   335,   152,    73,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   162,   162,   166,   166,   167,   171,   172,   176,   177,
     178,   179,   180,   181,   181,   183,   183,   185,   186,   190,
     191,   195,   196,   197,   198,   202,   203,   207,   207,   208,
     213,   214,   215,   216,   221,   222,   226,   227,   227,   227,
     228,   228,   228,   229,   229,   229,   230,   230,   230,   231,
     231,   231,   231,   232,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   247,   248,
     246,   251,   252,   250,   254,   254,   255,   256,   257,   258,
     259,   260,   256,   262,   263,   268,   269,   273,   274,   279,
     279,   279,   284,   285,   289,   293,   297,   302,   303,   308,
     314,   320,   330,   331,   332,   333,   337,   338,   342,   345,
     347,   350,   352,   356,   357,   361,   362,   367,   368,   372,
     373,   378,   379,   384,   385,   390,   391,   396,   397,   398,
     399,   404,   405,   405,   406,   406,   411,   412,   417,   418,
     423,   425,   425,   429,   431,   431,   435,   437,   441,   443,
     448,   449,   454,   455,   456,   457,   458,   459,   460,   461,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   481,   482,   487,   488,   489,   490,   491,   492,   496,
     497,   502,   503,   504,   509,   510,   511,   512,   518,   519,
     524,   524,   525,   526,   527,   527,   532,   536,   537,   541,
     542,   545,   547,   551,   552,   556,   557,   561,   565,   566,
     570,   571,   575,   579,   580,   584,   585,   589,   590,   594,
     595,   599,   600,   604,   605,   609,   610,   611,   612,   613,
     614,   618,   619,   620,   621,   625,   626,   630,   631,   636,
     637,   641,   641,   642,   646,   646,   647,   648,   649,   649,
     650,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   666,   667,   667,
     668,   668,   669,   669,   670,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   697,   700,   700,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   713,   713,
     714,   715,   716,   717,   718,   718,   720,   720,   725,   728,
     730,   734,   735,   736,   737,   741,   741,   744,   744,   747,
     747,   750,   750,   753,   753,   756,   756,   759,   759,   762,
     762,   768,   769,   770,   771,   775,   776,   777,   783,   784,
     789,   790,   789,   792,   797,   798,   803,   807,   808,   809,
     813,   814,   815,   820,   821,   826,   827,   828,   829,   830,
     831,   832,   833,   834,   835,   836,   837,   842,   843,   844,
     845,   846,   847,   848,   849,   853,   857,   858,   859,   860,
     861,   862,   863,   864,   869,   870,   873,   875,   879,   880,
     881,   882,   886,   887,   892,   897,   901,   905,   906,   905,
     908,   912,   913,   918,   918,   922,   923,   927,   927,   933,
     934,   935,   939,   940,   944,   945,   950,   954,   955,   955,
     960,   961,   962,   967,   968,   969,   973,   974,   975,   980,
     981,   985,   986,   991,   992,   992,   996,   997,   998,  1002,
    1003,  1007,  1008,  1012,  1013,  1018,  1019,  1019,  1020,  1025,
    1026,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,  1041,
    1042,  1043,  1044,  1050,  1051,  1051,  1052,  1053,  1054,  1055,
    1060,  1061,  1062,  1067,  1068,  1069,  1070,  1071,  1072,  1073,
    1077,  1078,  1078,  1082,  1083
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
  "unticked_function_declaration_statement",
  "unticked_class_declaration_statement", "class_entry_type",
  "extends_from", "interface_entry", "interface_extends_list",
  "implements_list", "interface_list", "foreach_optional_arg",
  "foreach_variable", "for_statement", "foreach_statement",
  "declare_statement", "declare_list", "switch_case_list", "case_list",
  "$@29", "$@30", "case_separator", "while_statement", "elseif_list",
  "$@31", "new_elseif_list", "$@32", "else_single", "new_else_single",
  "parameter_list", "non_empty_parameter_list", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "$@33", "$@34",
  "trait_use_statement", "trait_list", "trait_adaptations",
  "trait_adaptation_list", "non_empty_trait_adaptation_list",
  "trait_adaptation_statement", "trait_precedence", "trait_reference_list",
  "trait_method_reference", "trait_method_reference_fully_qualified",
  "trait_alias", "trait_modifiers", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr", "$@35",
  "expr_without_variable", "$@36", "$@37", "$@38", "$@39", "$@40", "$@41",
  "$@42", "$@43", "$@44", "$@45", "$@46", "$@47", "$@48", "function",
  "lexical_vars", "lexical_var_list", "function_call", "$@49", "$@50",
  "$@51", "$@52", "$@53", "$@54", "$@55", "$@56", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "$@57", "$@58",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@59", "$@60",
  "variable_properties", "variable_property", "$@61",
  "array_method_dereference", "method", "$@62", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
  "array_function_dereference", "$@63",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "$@64", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "$@65", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "$@66",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "$@67", "class_constant", 0
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
     208,   206,   209,   209,   210,   211,   212,   213,   213,   214,
     215,   215,   216,   216,   216,   216,   217,   217,   218,   219,
     219,   220,   220,   221,   221,   222,   222,   223,   223,   224,
     224,   225,   225,   226,   226,   227,   227,   228,   228,   228,
     228,   229,   230,   229,   231,   229,   232,   232,   233,   233,
     234,   235,   234,   236,   237,   236,   238,   238,   239,   239,
     240,   240,   241,   241,   241,   241,   241,   241,   241,   241,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   243,   243,   244,   244,   244,   244,   244,   244,   245,
     245,   246,   246,   246,   247,   247,   247,   247,   248,   248,
     250,   249,   249,   249,   251,   249,   252,   253,   253,   254,
     254,   255,   255,   256,   256,   257,   257,   258,   259,   259,
     260,   260,   261,   262,   262,   263,   263,   264,   264,   265,
     265,   266,   266,   267,   267,   268,   268,   268,   268,   268,
     268,   269,   269,   269,   269,   270,   270,   271,   271,   272,
     272,   274,   273,   273,   276,   275,   275,   275,   277,   275,
     278,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   279,   275,
     280,   275,   281,   275,   282,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   283,   284,   275,   285,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   286,   275,
     275,   275,   275,   275,   287,   275,   288,   275,   289,   290,
     290,   291,   291,   291,   291,   293,   292,   294,   292,   295,
     292,   296,   292,   297,   292,   298,   292,   299,   292,   300,
     292,   301,   301,   301,   301,   302,   302,   302,   303,   303,
     305,   306,   304,   304,   307,   307,   308,   309,   309,   309,
     310,   310,   310,   311,   311,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   313,   313,   313,
     313,   313,   313,   313,   313,   314,   315,   315,   315,   315,
     315,   315,   315,   315,   316,   316,   317,   317,   318,   318,
     318,   318,   319,   319,   320,   321,   322,   324,   325,   323,
     323,   326,   326,   328,   327,   329,   329,   331,   330,   332,
     332,   332,   333,   333,   334,   334,   335,   336,   337,   336,
     338,   338,   338,   339,   339,   339,   340,   340,   340,   341,
     341,   342,   342,   343,   344,   343,   345,   345,   345,   346,
     346,   347,   347,   348,   348,   349,   350,   349,   349,   351,
     351,   352,   352,   352,   352,   352,   352,   352,   352,   353,
     353,   353,   353,   354,   355,   354,   354,   354,   354,   354,
     356,   356,   356,   357,   357,   357,   357,   357,   357,   357,
     358,   359,   358,   360,   360
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
       0,    10,     1,     3,     1,     1,     1,     0,     1,     9,
       7,     6,     1,     2,     1,     2,     0,     2,     1,     0,
       2,     0,     2,     1,     3,     0,     2,     1,     2,     1,
       4,     1,     4,     1,     4,     3,     5,     3,     4,     4,
       5,     0,     0,     6,     0,     5,     1,     1,     1,     4,
       0,     0,     7,     0,     0,     8,     0,     2,     0,     3,
       1,     0,     2,     3,     5,     4,     4,     5,     7,     6,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     2,     3,     3,     4,     3,
       1,     1,     2,     4,     3,     5,     1,     3,     2,     0,
       0,     4,     2,     1,     0,     9,     3,     1,     3,     1,
       3,     0,     1,     1,     2,     2,     2,     3,     1,     3,
       1,     1,     3,     4,     3,     0,     1,     1,     3,     1,
       1,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     3,     5,     1,     3,     5,     4,     3,     1,     0,
       1,     0,     4,     1,     0,     7,     3,     4,     0,     7,
       0,     4,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     0,     4,
       0,     4,     0,     4,     0,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     0,     0,     7,     0,     5,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     0,     3,
       1,     4,     3,     2,     0,    10,     0,    11,     1,     0,
       4,     3,     4,     1,     2,     0,     5,     0,     7,     0,
       6,     0,     7,     0,     7,     0,     7,     0,     7,     0,
       5,     1,     1,     3,     2,     1,     3,     2,     1,     1,
       0,     0,     6,     1,     2,     0,     2,     0,     2,     3,
       0,     1,     1,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     1,     1,     3,
       2,     2,     2,     4,     1,     3,     1,     1,     1,     3,
       2,     1,     3,     3,     0,     2,     0,     1,     5,     3,
       3,     1,     1,     1,     1,     1,     1,     0,     0,     7,
       1,     2,     0,     0,     4,     4,     4,     0,     4,     1,
       1,     0,     1,     2,     3,     3,     1,     4,     0,     5,
       1,     1,     1,     1,     2,     1,     4,     4,     1,     1,
       4,     0,     1,     1,     0,     2,     4,     4,     1,     1,
       3,     1,     2,     3,     1,     1,     0,     5,     0,     0,
       2,     5,     3,     3,     1,     6,     4,     4,     2,     2,
       2,     1,     2,     1,     0,     5,     3,     3,     6,     3,
       1,     1,     1,     4,     4,     2,     2,     4,     2,     2,
       1,     0,     4,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   318,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   367,
       0,   375,   376,     6,   396,   449,    65,   377,     0,    46,
       0,     0,     0,    74,     0,     0,     0,     0,   328,     0,
       0,    77,     0,     0,     0,     0,     0,   351,     0,     0,
       0,     0,   102,   104,   108,     0,     0,   381,   382,   383,
     378,   379,     0,     0,   384,   380,     0,     0,    76,    29,
     461,   370,     0,   398,     4,     0,     8,    34,     9,    10,
      95,    96,     0,     0,   413,    97,   442,     0,   401,   320,
       0,   412,     0,   414,     0,   445,     0,   441,   420,   440,
     443,   448,     0,   307,   397,     6,   351,     0,    97,   499,
     498,     0,   496,   495,   323,   288,   289,   290,   291,     0,
     316,   313,   312,   311,   310,   309,   314,   315,   308,   351,
       0,     0,   352,     0,   267,   416,     0,   265,   252,     0,
       0,   352,   358,   250,   359,     0,   363,   443,     0,     0,
     317,     0,    35,     0,   238,     0,    43,   239,     0,     0,
       0,    55,     0,    57,     0,     0,     0,    59,   413,     0,
     414,     0,     0,     0,    21,     0,    20,   181,     0,     0,
     180,   105,   103,   186,     0,    97,     0,     0,     0,     0,
     244,   469,   483,     0,   386,     0,     0,     0,   481,     0,
      15,     0,   400,     0,    27,     0,   371,     0,   372,     0,
       0,     0,   335,     0,    18,   106,   109,    98,     0,     0,
       0,   272,     0,   274,   302,   268,   270,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,   266,   264,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   349,     0,   451,   417,   451,     0,   462,   444,
       0,     0,   319,     0,   354,     0,     0,     0,   354,     0,
     373,     0,   360,   444,   368,     0,     0,     0,    64,     0,
       0,     0,   240,   243,   413,   414,     0,     0,    56,    58,
      84,     0,    60,    61,    29,    83,    23,     0,     0,    17,
       0,   182,   414,     0,    62,     0,     0,    63,     0,     0,
      92,    94,   500,     0,     0,     0,   468,     0,   474,     0,
     406,   484,     0,   385,   482,   396,     0,     0,   480,   403,
     479,   399,     5,    12,    13,   339,   301,    36,     0,     0,
     322,   402,     7,   172,     0,     0,   111,     0,     0,     0,
     324,   451,   503,   434,   432,     0,     0,   276,     0,   305,
       0,     0,     0,   277,   279,   278,   293,   292,   295,   294,
     296,   298,   299,   297,   287,   286,   281,   282,   280,   283,
     284,   285,   300,     0,   246,   263,   262,   261,   260,   259,
     258,   257,   256,   255,   254,   253,   172,   504,   435,   452,
       0,     0,     0,     0,   497,   353,     0,     0,   353,   434,
     172,   251,   435,     0,   369,    37,   237,     0,     0,    49,
     241,    71,    68,     0,     0,    53,     0,     0,     0,     0,
       0,     0,   388,     0,   387,    26,   394,    27,     0,    22,
      19,     0,   179,   187,   184,   326,     0,     0,   501,   493,
     494,    11,     0,   465,     0,   464,   478,   415,     0,   321,
     407,   470,     0,   486,     0,   487,   489,   337,     3,     5,
     172,     0,    28,    30,    31,    32,   450,     0,     0,   171,
     413,   414,     0,     0,     0,   355,   107,     0,     0,   110,
     113,   189,   160,   160,     0,   341,   343,   433,   273,   275,
       0,     0,   269,   271,     0,   247,     0,   345,   347,   437,
     459,     0,   454,   418,   453,   458,   446,   447,     0,   361,
      40,     0,    47,    44,   239,     0,     0,     0,     0,     0,
       0,     0,   391,   392,   404,     0,     0,   390,     0,     0,
      24,   183,     0,   160,    93,    67,     0,   466,   468,     0,
       0,   473,     0,   472,   490,   492,   491,     0,     0,   172,
      16,     3,     0,     0,   175,   336,     0,    25,     0,   357,
     112,   189,     0,   221,   161,   162,   163,   164,   165,   166,
     167,   168,   169,     0,   150,     0,   170,     0,   439,   172,
     172,   306,   303,   248,   350,   172,   172,     0,   455,   431,
     451,     0,   374,   365,    29,    38,     0,     0,     0,   242,
     115,     0,   115,   117,   125,     0,    29,   123,    75,   131,
     131,    54,   411,     0,   406,   389,   395,     0,   185,     0,
     502,   468,   463,     0,   477,   476,     0,   485,     0,     0,
      14,   340,     0,     0,   413,   414,   356,   221,   114,     0,
       0,   225,   226,   227,   230,   229,   228,   220,   101,   188,
     193,   190,     0,   219,   223,     0,     0,   160,     0,   152,
     329,     0,     0,     0,   373,     0,     0,   460,   427,   430,
     429,   422,     0,     0,   362,    27,   140,     0,    29,   138,
      45,    50,     0,     0,   118,     0,     0,    27,   131,     0,
     131,     0,     0,   393,   407,   405,    78,   329,     0,   245,
       0,   471,   488,   338,    33,   178,   100,     0,     0,   197,
       0,    97,   224,     0,   192,    29,     0,   153,     0,     0,
       0,   342,   344,   304,   249,   346,   348,   172,   451,   451,
     419,   456,   457,     0,   364,   143,   146,     0,    27,   239,
     116,    72,    69,   126,     0,     0,     0,     0,     0,     0,
     127,   410,   409,     0,     0,   467,   475,     0,     0,   199,
     201,   196,   233,     0,     0,     0,    27,     0,   156,     0,
     155,     0,    29,     0,     0,     0,     0,   421,   366,   148,
       0,     0,    39,    48,     0,     0,     0,     0,   124,     0,
     129,     0,   136,   137,   134,   128,     0,    79,    29,   236,
     198,     6,     0,   202,   203,     0,     0,   211,     0,     0,
       0,     0,   191,   194,     0,    99,   157,     0,   154,     0,
     333,     0,    27,   428,   425,   426,   423,     0,     0,     0,
       0,   147,   139,    51,    29,   121,    73,    70,   130,   132,
      29,   408,     0,    27,   200,   204,   205,   215,     0,   206,
       0,   234,   231,     0,   235,     0,   159,   334,     0,   330,
     325,   431,     0,    29,     0,     0,     0,    27,    29,    27,
       0,   327,     0,   214,   207,   208,   212,     0,   160,   158,
       0,   331,   424,     0,    27,    42,   141,    29,   119,    52,
       0,    27,    80,   213,     0,   232,     0,   332,     0,     0,
      27,   122,     0,   209,     0,   144,   142,     0,    29,   217,
      29,   195,    29,   120,    27,    27,    27,    81,   218,    86,
       0,    82,    85,    87,     0,    88,    89,     0,     0,    90,
       0,    29,    27,    91
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    83,    84,   489,   352,   185,   186,
      85,   214,   358,   492,   865,    87,   541,   706,   624,   765,
     300,   627,   165,   626,   544,   769,   896,   551,   547,   817,
     546,   816,   169,   181,   783,   872,   932,   949,   951,   952,
     953,   957,   960,   329,   330,    88,    89,   228,    90,    91,
      92,   366,    93,   368,   508,   509,   713,   632,   919,   866,
     638,   444,   641,   719,   898,   870,   824,   710,   766,   929,
     809,   942,   812,   859,   603,   604,   605,   498,   499,   189,
     190,   194,   593,   679,   740,   883,   680,   738,   791,   832,
     833,   834,   835,   904,   836,   837,   838,   902,   941,   681,
     682,   683,   684,   793,   685,   163,   301,   302,   545,    94,
     336,   694,   290,   381,   382,   376,   378,   380,   693,   520,
     129,   513,   563,   118,   750,   851,    96,   363,   579,   490,
     609,   610,   615,   616,   416,    97,   606,   153,   154,   433,
     623,   704,   764,   160,   217,   431,    98,   455,   456,    99,
     643,   481,   644,   179,   101,   476,   102,   103,   421,   619,
     760,   807,   891,   699,   700,   757,   701,   104,   105,   106,
     107,   229,   108,   109,   110,   111,   420,   533,   618,   534,
     535,   112,   474,   475,   651,   339,   340,   207,   208,   482,
     577,   113,   333,   566,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -667
static const yytype_int16 yypact[] =
{
    -667,    69,    77,  -667,  1602,  3872,  3872,   -75,  3872,  3872,
    3872,  3872,  3872,  3872,  3872,  -667,  3872,  3872,  3872,  3872,
    3872,  3872,  3872,  3872,  3872,   275,   275,  3872,   282,   -68,
     -65,  -667,  -667,    70,  -667,  -667,  -667,  -667,  3872,  -667,
     -56,   -51,   -49,  -667,   -40,  2575,  2693,    39,  -667,    46,
    2811,  -667,  3872,     6,    -1,    40,    87,   -17,   -34,    73,
      84,    90,  -667,  -667,  -667,   109,   111,  -667,  -667,  -667,
    -667,  -667,   307,   -30,  -667,  -667,   153,  3872,  -667,  -667,
     116,   310,   325,   -58,  -667,    10,  -667,  -667,  -667,  -667,
    -667,  -667,   205,   214,  -667,   265,   247,   149,  -667,  -667,
    4442,  -667,   162,  1257,   156,  -667,   174,   270,   216,  -667,
     -42,  -667,    52,  -667,  -667,  -667,   230,   188,   265,  5163,
    5163,  3872,  5163,  5163,  5263,  -667,  -667,   297,  -667,  3872,
    -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,
     196,   153,   238,   206,  -667,  -667,   212,  -667,  -667,   223,
     153,   225,   239,  -667,  -667,   245,   276,   -32,    52,  2929,
    -667,  3872,  -667,    15,  5163,  2436,  -667,  3872,  3872,   266,
    3872,  -667,  4483,  -667,  4534,   277,   414,  -667,   284,  5163,
     352,   272,  4575,   153,   -45,    16,  -667,  -667,   142,    17,
    -667,  -667,  -667,   432,    19,   265,   275,   275,   275,   296,
    -667,  3047,     7,   157,  -667,  3989,   275,   318,  -667,   153,
    -667,   114,   268,  4616,   312,  3872,   134,   271,   335,   134,
     252,   398,  -667,   401,  -667,   355,   357,  -667,   -16,   418,
       3,  -667,  3872,  -667,   457,  -667,  -667,  3872,  3872,  3872,
    3872,  3872,  3872,  3872,  3872,  3872,  3872,  3872,  3872,  3872,
    3872,  3872,  3872,  3872,  3872,  3872,   282,  -667,  -667,  -667,
    3165,  3872,  3872,  3872,  3872,  3872,  3872,  3872,  3872,  3872,
    3872,  3872,  -667,   126,  3872,  -667,  3872,  3872,   116,   -18,
     327,  4667,  -667,   153,   261,   129,   130,   153,   225,    63,
     341,    63,  -667,   -29,  -667,  4708,  4750,  3872,  -667,   413,
    3872,   342,   492,  5163,   411,  1202,   436,  4799,  -667,  -667,
    -667,   964,  -667,  -667,  -667,  -667,   -43,   439,     6,  -667,
    3872,  -667,  -667,    -1,  -667,   964,   449,  -667,   369,    12,
    -667,  -667,  -667,    27,   370,   377,   224,   275,  5014,   388,
     531,  -667,   475,  -667,  -667,   486,  4129,   389,  -667,  -667,
    -667,   290,  -667,  -667,  -667,  -667,  -667,  -667,  1741,  4170,
    -667,  -667,  -667,  3283,   539,   104,   430,   104,   404,   408,
    -667,  3872,   416,   419,   -29,    52,  3872,  5240,  3872,  -667,
    3872,  3872,  3872,  1353,  1548,  2625,  2743,  2743,  2743,  2743,
    1138,  1138,  1138,  1138,   554,   554,   406,   406,   406,   297,
     297,   297,  -667,   -19,  5263,  5263,  5263,  5263,  5263,  5263,
    5263,  5263,  5263,  5263,  5263,  5263,  3283,   420,   422,  5163,
     403,    60,   417,  4211,  -667,   273,   416,   420,   225,  -667,
    3283,  -667,  -667,    60,  -667,   543,  5163,   424,  4840,  -667,
    -667,  -667,  -667,   557,    28,  -667,   964,   964,   427,   -28,
     431,   153,   -91,   426,  -667,  -667,  -667,   429,   515,  -667,
    -667,  4264,  -667,  -667,   589,  -667,   275,   445,  -667,  -667,
    -667,  -667,   448,  -667,    29,  -667,  -667,  -667,  3401,  -667,
    3519,  -667,   179,  -667,  3872,  -667,  -667,  -667,   446,  -667,
    3283,   453,  -667,  -667,  -667,  -667,  -667,   275,   454,   606,
      30,   132,   964,   460,   153,   225,  -667,   104,   461,   614,
    -667,  -667,   501,   501,   459,  -667,  -667,   -29,  5203,  5263,
    3872,  5116,  1308,  5307,   282,  -667,   467,  -667,  -667,  -667,
    -667,  3872,  -667,  -667,    -3,  -667,  -667,  -667,   481,  -667,
    -667,  2436,  -667,  -667,  3872,  3872,   275,   175,   964,   567,
    1880,     4,  -667,  -667,   964,   494,   153,   -85,   568,   540,
    -667,  -667,   964,   501,  -667,  -667,   275,  -667,   224,   633,
     275,  5163,   275,  5063,  -667,  -667,  -667,   482,  1505,  3283,
    -667,   487,   491,   495,  -667,  -667,  3637,  -667,   153,   225,
     614,  -667,   104,   685,  -667,  -667,  -667,  -667,  -667,  -667,
    -667,  -667,  -667,   497,   642,    22,  -667,   498,  -667,  3283,
    3283,  5286,  -667,  -667,  -667,  3283,  3283,  4305,  -667,   503,
    3872,  3872,  -667,  -667,  -667,  -667,  3872,  2019,   493,  5163,
     532,   275,   532,  -667,  -667,   648,  -667,  -667,  -667,   505,
     509,  -667,   544,   511,   663,   -72,  -667,   516,  -667,   514,
    -667,   224,  -667,  3872,  -667,  -667,  3755,  -667,   513,   517,
    -667,  -667,   518,   275,    32,   301,   225,   908,  -667,   603,
     104,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,
    -667,  -667,   230,   405,  -667,    21,   519,   859,   607,   668,
     577,   526,   527,  3872,   341,   530,   534,  -667,  -667,   626,
     627,  -667,   528,  4346,   569,   421,  -667,  4882,  -667,  -667,
    -667,  -667,   175,   537,  -667,   542,   964,   610,  -667,   400,
    -667,   100,   964,  -667,   964,  -667,  -667,   577,    33,  5263,
     275,  5163,  -667,  -667,  -667,  -667,  -667,   689,     8,  -667,
     628,   265,  -667,   631,  -667,  -667,    54,   693,   964,   550,
     548,  -667,  -667,  5286,  -667,  -667,  -667,  3283,  3872,  3872,
     584,  -667,  -667,    60,  -667,  -667,   267,   552,   630,  3872,
    -667,  -667,  -667,  -667,   578,   412,   579,  3872,    38,   186,
    -667,  -667,   613,   104,   576,  -667,  -667,   964,   104,  -667,
     127,  -667,   730,    24,   671,   732,   586,   673,   737,   964,
    -667,   158,  -667,   593,   587,   590,    60,  -667,  -667,   340,
     599,  2436,  -667,  -667,   598,   609,  2158,  2158,  -667,   602,
    -667,  4401,  -667,  -667,  -667,  -667,   964,  -667,  -667,  -667,
    -667,   672,   608,   127,  -667,   611,   676,   669,   616,   635,
     964,   703,  -667,  -667,   964,  -667,   769,   964,  -667,   713,
    -667,    34,   622,  -667,  -667,  -667,  -667,   636,   764,   733,
    3872,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,
    -667,  -667,   727,   643,  -667,  -667,  -667,   447,   104,  -667,
     734,  -667,   793,   652,  -667,   964,  -667,  -667,   190,  -667,
    -667,   503,  3872,  -667,   651,  4931,  2297,   722,  -667,   133,
     655,  -667,   741,   743,   810,  -667,  -667,   964,   501,  -667,
     745,  -667,  -667,  4972,   751,  -667,  -667,  -667,  -667,  -667,
     664,   144,  -667,  -667,   104,  -667,   666,  -667,   799,  2436,
     739,  -667,   667,  -667,   280,  -667,  -667,   674,  -667,  -667,
    -667,  -667,  -667,  -667,   670,   675,   465,  -667,  -667,   726,
     677,  -667,   726,  -667,   104,  -667,  -667,   757,   680,  -667,
     681,  -667,   679,  -667
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -667,  -667,  -330,  -667,   -25,  -667,  -667,  -667,  -667,   524,
    -667,  -275,  -667,  -667,     1,  -667,  -667,  -667,  -667,  -667,
    -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,
    -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,
    -117,  -667,  -667,  -667,   379,   485,   489,  -114,  -667,  -667,
    -667,  -667,  -667,  -667,  -667,   343,   217,   136,  -667,    35,
    -667,  -667,  -667,  -596,  -667,  -667,    36,  -667,  -667,  -667,
    -667,  -667,  -667,  -667,  -504,  -667,   164,  -397,  -667,  -667,
     533,  -667,   263,  -667,  -667,  -667,  -667,  -667,  -667,  -667,
    -667,    26,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,
    -667,  -667,  -666,  -667,  -667,  -667,  -532,  -667,  -667,   -24,
    -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,  -667,
    -667,  -667,  -667,    -2,   128,  -667,  -667,  -667,  -667,  -667,
    -667,  -667,  -667,  -667,  -667,   583,  -258,  -245,  -667,  -667,
    -667,  -667,  -667,  -667,  -667,   167,    18,   326,  -667,  -667,
    -667,   219,  -667,   708,   678,  -484,   423,   866,  -667,  -667,
    -667,  -667,  -667,  -667,  -667,  -667,   -27,  -223,  -667,    47,
    -667,  -667,  -667,   -20,   -22,  -667,  -266,  -418,  -667,  -667,
    -667,   -14,   220,   300,  -667,  -667,  -667,   381,  -116,  -667,
    -667,  -667,  -667,  -667,  -667
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -439
static const yytype_int16 yytable[] =
{
     142,   142,    95,   151,   280,    86,   157,   373,   156,   607,
     422,   402,   628,   584,   158,   539,   788,   742,   223,   526,
     466,   276,   488,   297,   318,   323,   178,   326,   184,   743,
     639,   276,   841,   538,   276,   468,   549,   568,  -173,   457,
    -176,   568,   888,   115,   721,   276,   524,   317,   211,   458,
     418,   212,   555,   688,   115,   195,    35,   369,   193,   649,
     620,  -352,   373,   418,   822,   221,   429,  -354,   432,     3,
     341,   221,   146,   146,   187,   155,   372,    -2,    35,   115,
    -353,   328,   121,    48,   221,   797,   654,   344,   655,   159,
     279,   350,   161,   582,  -352,   139,   162,   689,   221,   222,
     344,   166,   350,   344,   350,   514,   167,   506,   168,   510,
    -436,   221,   175,   221,   195,  -432,   284,   170,   277,   176,
    -436,   204,   775,   196,   779,   288,   209,    35,   277,   798,
     210,   277,   342,   530,   140,    35,   293,   141,    35,  -433,
    -174,   370,   277,    80,   304,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   621,   316,   581,
     191,   188,   183,   142,   640,    80,   299,   789,   790,   224,
     467,   142,   142,   142,   298,   319,   324,   115,   327,   735,
     744,   142,   659,   842,   351,   469,   550,   569,  -173,   849,
    -176,   785,   889,  -416,  -416,   777,   778,   823,   532,   417,
     831,    35,   426,   427,    35,    35,   631,   192,   374,   202,
     532,   903,   691,   692,   278,   115,   375,    35,   695,   696,
     531,   910,    80,   258,   259,    80,   115,  -135,  -135,  -135,
     197,   151,   202,   850,   157,   146,   156,   815,  -133,  -133,
    -133,   198,   158,   146,   146,   146,   786,   199,   115,   510,
      35,   374,   574,   146,   575,   576,   139,   503,   425,   375,
     504,   780,   428,   374,   374,   911,   200,   374,   201,   374,
     221,   375,   375,   353,   354,   375,   215,   375,   225,   613,
     503,   777,   778,   504,   205,   206,   452,   226,    80,   139,
    -174,    80,    80,   184,  -135,   140,   227,   115,   141,    35,
     452,   230,   320,   155,    80,  -133,   343,   205,   206,  -177,
    -438,   142,   142,   272,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   273,   202,   140,   454,
      48,   141,   348,   274,   668,   810,   811,    80,   139,   500,
     505,   275,   505,   454,   209,   808,   256,   825,   115,   705,
      35,   472,   283,   517,   702,   115,    95,    35,   285,   493,
     803,   717,  -416,  -416,   286,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   140,   142,   287,
     141,   221,   202,   146,   146,   202,    80,   203,   856,   139,
     216,   289,   500,   202,   221,   222,   139,   291,   348,   374,
     202,   292,   205,   206,   926,   219,   500,   375,   857,   858,
     202,   374,   739,  -416,  -416,   348,   361,   221,   355,   375,
    -354,   452,   452,   306,   221,   355,   557,   311,   140,   221,
     487,   141,   314,   768,   360,   149,   310,    80,   150,   939,
     940,   142,  -353,   312,    80,   325,   221,   487,   144,   147,
     146,   253,   254,   255,   335,   256,   204,   205,   206,  -177,
     205,   206,   218,   220,   454,   454,   500,   349,   205,   206,
     796,   362,   142,   357,   364,   205,   206,   452,   365,   589,
     367,   371,   505,   379,   370,   205,   206,   505,   505,   -41,
     -41,   -41,   804,   805,   776,   777,   778,   437,   430,   151,
     440,   439,   157,   441,   156,  -222,   819,   777,   778,   443,
     158,   313,   459,   146,   671,   672,   673,   674,   675,   676,
     454,   142,   142,   452,   464,   827,   465,   852,   470,   452,
     830,   645,   839,  -145,  -145,  -145,   471,   452,   505,   480,
     532,   142,   625,   142,   146,   142,   479,   142,   483,   484,
     486,   637,   502,   873,   507,   500,   671,   672,   673,   674,
     675,   676,   664,   666,   511,   512,   454,   505,   529,   540,
     548,   155,   454,   515,   115,   839,   516,   527,   558,   528,
     454,   542,   536,   532,   554,   500,   500,   556,   560,   897,
     559,   500,   500,   146,   146,   899,   250,   251,   252,   253,
     254,   255,   562,   256,   565,   567,   142,   580,   143,   143,
     583,   152,   585,   146,   586,   146,   588,   146,   914,   146,
     905,   591,   592,   921,   608,   614,   142,   794,   709,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   142,   622,
     635,   646,   930,   343,   647,   505,   653,   657,   660,   661,
     687,   463,   711,   662,   503,   686,   690,   504,   712,  -151,
     698,   716,   505,   944,   718,   945,   933,   946,   720,   723,
     722,   724,   727,   726,   732,   733,   737,   734,   146,   745,
     741,   748,   747,   749,   751,   752,   962,   142,   755,   758,
     759,   452,   756,   761,   763,   771,   956,   452,   146,   452,
     772,   774,   787,   792,   795,   142,   799,   801,   802,   806,
     146,   813,   100,   119,   120,   814,   122,   123,   124,   125,
     126,   127,   128,   452,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   500,   454,   148,   828,   818,   820,   826,
     454,   374,   454,   840,   843,   844,   164,   845,   846,   375,
     847,   853,   854,   172,   174,   855,   860,   862,   505,   146,
     182,   868,   452,   505,  -210,   505,   454,   863,   877,   874,
     876,   143,   552,   553,   452,   879,   878,   146,   882,   143,
     143,   143,   885,   890,   374,   213,   669,   880,   887,   143,
     893,   670,   375,   892,   671,   672,   673,   674,   675,   676,
     677,   452,   900,   894,   901,   454,   907,   906,   505,   908,
     915,   920,   861,   922,   923,   452,  -216,   454,   924,   452,
     927,  -149,   452,   931,   934,   935,   937,   938,   587,   281,
     950,   947,   958,   943,   954,   955,   948,   282,   959,   152,
     963,   961,   460,   494,   454,   564,   678,   495,   770,   715,
     590,   746,   867,   505,   667,   784,   462,   869,   454,   875,
     452,   754,   454,   725,   912,   454,   321,   295,   652,   296,
       0,   728,     0,   100,   634,   303,     0,     0,   307,     0,
     642,     0,   452,   505,     0,     0,     0,     0,   648,     0,
       0,   145,   145,     0,   453,     0,     0,   918,     0,   505,
       0,     0,     0,   454,     0,     0,     0,     0,   453,   338,
       0,     0,     0,   346,     0,     0,   180,     0,     0,   143,
     143,     0,     0,   359,     0,   454,     0,     0,     0,   505,
     936,     0,   115,     0,     0,     0,     0,     0,     0,     0,
     377,     0,     0,     0,     0,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,     0,     0,     0,     0,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
       0,     0,   419,     0,   419,   423,   143,   594,   595,   596,
     597,   598,   599,   600,   601,   602,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   436,   446,   447,   438,   669,
       0,     0,   503,     0,   670,   504,     0,   671,   672,   673,
     674,   675,   676,   677,     0,     0,     0,     0,   461,   453,
     453,     0,     0,     0,   305,    31,    32,   115,     0,     0,
       0,     0,   773,     0,     0,    37,     0,     0,   781,   143,
     782,     0,     0,     0,   322,     0,     0,     0,     0,     0,
       0,     0,   331,   332,   334,     0,   100,     0,     0,   736,
       0,     0,   347,     0,   800,     0,     0,     0,   139,   419,
     143,     0,     0,     0,   518,   453,   519,     0,   521,   522,
     523,     0,   448,     0,     0,     0,     0,     0,     0,     0,
       0,    67,    68,    69,    70,    71,     0,   152,     0,     0,
       0,     0,   449,   829,     0,     0,     0,   450,    74,    75,
     451,     0,     0,     0,     0,   848,     0,     0,     0,   143,
     143,   453,     0,     0,     0,     0,     0,   453,     0,     0,
       0,     0,     0,     0,     0,   453,     0,     0,     0,   143,
       0,   143,   871,   143,     0,   143,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   881,     0,     0,     0,
     884,     0,     0,   886,  -439,  -439,  -439,  -439,   248,   249,
     250,   251,   252,   253,   254,   255,   571,   256,   573,     0,
       0,     0,   578,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   473,   477,     0,     0,     0,     0,     0,     0,
       0,   909,     0,     0,   143,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,     0,   611,   501,
       0,     0,     0,   925,   143,     0,     0,     0,     0,   617,
       0,     0,     0,     0,     0,     0,   143,     0,     0,   100,
       0,     0,   303,   629,     0,     0,     0,     0,   100,     0,
       0,     0,     0,  -416,  -416,     0,     0,     0,     0,   525,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   501,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   442,   143,   501,     0,     0,   453,
       0,     0,     0,     0,     0,   453,     0,   453,     0,     0,
       0,     0,     0,   143,     0,     0,     0,     0,  -416,  -416,
       0,     0,     0,     0,     0,     0,     0,     0,   419,   703,
       0,   453,   331,     0,   707,   100,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   501,   256,     0,     0,
       0,   729,     0,   477,   731,     0,     0,     0,     0,     0,
     453,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   453,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   753,   256,     0,     0,     0,     0,     0,     0,   453,
       0,     0,   630,   633,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   453,     0,     0,     0,   453,     0,     0,
     453,     0,   650,     0,   473,     0,   477,     0,   477,     0,
       0,     0,     0,     0,     0,   501,     0,     0,     0,     0,
       0,     0,   665,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   419,   419,   453,     0,
       0,     0,     0,     0,     0,   501,   501,   303,     0,     0,
       0,   501,   501,     0,     0,   821,     0,     0,     0,     0,
     453,     0,     0,     0,     0,     0,     0,   714,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   231,   232,   233,   473,     0,   100,
       0,     0,     0,     0,   100,   100,     0,     0,     0,   477,
     234,     0,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,     0,   256,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   895,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   633,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   477,   256,     0,     0,
     913,     0,     0,     0,   100,     5,     6,     7,     8,     9,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,   501,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,    29,    30,
     658,     0,     0,    31,    32,    33,    34,    35,     0,    36,
       0,     0,     0,    37,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,    51,     0,    52,    53,     0,
      54,     0,     0,     0,    55,    56,    57,     0,    58,    59,
      60,    61,    62,    63,    64,     0,     0,     0,     0,    65,
      66,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,     5,     6,     7,     8,     9,     0,
      72,     0,     0,    10,     0,    73,    74,    75,    76,    77,
       0,    78,    79,     0,    80,    81,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,    28,    29,    30,     0,
       0,     0,    31,    32,    33,    34,    35,     0,    36,     0,
       0,     0,    37,    38,    39,    40,     0,    41,     0,    42,
       0,    43,     0,     0,    44,     0,     0,     0,    45,    46,
      47,    48,     0,    50,    51,     0,    52,     0,     0,    54,
       0,     0,     0,    55,    56,    57,     0,    58,    59,    60,
     491,    62,    63,    64,     0,     0,     0,     0,    65,    66,
       0,     0,     0,     0,     0,     0,     0,     0,    67,    68,
      69,    70,    71,     5,     6,     7,     8,     9,     0,    72,
       0,     0,    10,     0,   117,    74,    75,    76,    77,     0,
      78,    79,     0,    80,    81,    82,   636,     0,     0,     0,
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
      79,     0,    80,    81,    82,   708,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,    28,    29,    30,     0,     0,     0,
      31,    32,    33,    34,    35,     0,    36,     0,     0,     0,
      37,    38,    39,    40,     0,    41,     0,    42,     0,    43,
       0,     0,    44,     0,     0,     0,    45,    46,    47,    48,
       0,    50,    51,     0,    52,     0,     0,    54,     0,     0,
       0,     0,     0,    57,     0,    58,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,     0,
       0,     0,     0,     0,     0,     0,    67,    68,    69,    70,
      71,     5,     6,     7,     8,     9,     0,    72,     0,     0,
      10,     0,   117,    74,    75,    76,    77,     0,    78,    79,
       0,    80,    81,    82,   864,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,    28,    29,    30,     0,     0,     0,    31,
      32,    33,    34,    35,     0,    36,     0,     0,     0,    37,
      38,    39,    40,     0,    41,     0,    42,     0,    43,     0,
       0,    44,     0,     0,     0,    45,    46,    47,    48,     0,
      50,    51,     0,    52,     0,     0,    54,     0,     0,     0,
       0,     0,    57,     0,    58,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,     0,     0,
       0,     0,     0,     0,     0,    67,    68,    69,    70,    71,
       5,     6,     7,     8,     9,     0,    72,     0,     0,    10,
       0,   117,    74,    75,    76,    77,     0,    78,    79,     0,
      80,    81,    82,   917,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,    28,    29,    30,     0,     0,     0,    31,    32,
      33,    34,    35,     0,    36,     0,     0,     0,    37,    38,
      39,    40,     0,    41,     0,    42,     0,    43,     0,     0,
      44,     0,     0,     0,    45,    46,    47,    48,     0,    50,
      51,     0,    52,     0,     0,    54,     0,     0,     0,     0,
       0,    57,     0,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,     0,     0,     0,
       0,     0,     0,     0,    67,    68,    69,    70,    71,     5,
       6,     7,     8,     9,     0,    72,     0,     0,    10,     0,
     117,    74,    75,    76,    77,     0,    78,    79,     0,    80,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,    28,    29,    30,     0,     0,     0,    31,    32,    33,
      34,    35,     0,    36,     0,     0,     0,    37,    38,    39,
      40,     0,    41,     0,    42,     0,    43,     0,     0,    44,
       0,     0,     0,    45,    46,    47,    48,     0,    50,    51,
       0,    52,     0,     0,    54,     0,     0,     0,     0,     0,
      57,     0,    58,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,     0,     0,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,     5,     6,
       7,     8,     9,     0,    72,     0,     0,    10,     0,   117,
      74,    75,    76,    77,     0,    78,    79,     0,    80,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
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
      75,    76,    77,     0,   171,    11,    12,    80,    81,    82,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,    28,    29,
       0,     0,     0,     0,    31,    32,   115,    34,    35,     0,
       0,     0,     0,     0,    37,  -439,  -439,  -439,  -439,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,     0,   256,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   116,     0,     0,
      59,    60,     0,     0,     5,     6,     7,     8,     9,     0,
      65,    66,     0,    10,     0,     0,     0,     0,     0,     0,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
       0,    72,     0,     0,     0,     0,   117,    74,    75,    76,
      77,     0,   173,    11,    12,    80,    81,    82,     0,    13,
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
       0,     0,     0,     0,   117,    74,    75,    76,    77,     0,
     177,    11,    12,    80,    81,    82,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,    28,    29,     0,     0,     0,     0,
      31,    32,   115,    34,    35,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   116,     0,     0,    59,    60,     0,     0,
       5,     6,     7,     8,     9,     0,    65,    66,     0,    10,
       0,     0,     0,     0,     0,     0,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,    72,   337,     0,
       0,     0,   117,    74,    75,    76,    77,   294,     0,    11,
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
       0,     0,     0,     0,     0,    72,   403,     0,     0,     0,
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
       0,     0,     0,    72,   497,     0,     0,     0,   117,    74,
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
       0,    72,   570,     0,     0,     0,   117,    74,    75,    76,
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
     572,     0,     0,     0,   117,    74,    75,    76,    77,     0,
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
      71,     0,     0,     0,     0,     0,     0,    72,   663,     0,
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
       0,     0,     0,     0,     0,    72,   730,     0,     0,     0,
     117,    74,    75,    76,    77,     0,     0,    11,    12,    80,
      81,    82,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   115,    34,
      35,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
       0,     0,    59,    60,     0,     5,     6,     7,     8,     9,
       0,     0,    65,    66,    10,     0,     0,     0,     0,     0,
       0,     0,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,     0,    72,     0,     0,     0,     0,   117,    74,
      75,    76,    77,     0,    11,    12,     0,    80,    81,    82,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,    29,     0,
       0,     0,     0,    31,    32,   115,    34,    35,     0,     0,
       0,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   116,     0,     0,    59,
      60,     0,     5,     6,     7,     8,     9,     0,     0,    65,
      66,    10,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
      72,     0,     0,     0,     0,   117,    74,    75,    76,    77,
       0,    11,    12,     0,    80,    81,    82,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,    28,    29,     0,     0,     0,     0,
      31,    32,   115,   345,    35,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   116,     0,     0,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,     0,
       0,     0,     0,     0,     0,     0,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,    72,   231,   232,
     233,     0,   117,    74,    75,    76,    77,     0,     0,     0,
       0,    80,    81,    82,   234,     0,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,     0,   256,   231,
     232,   233,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   234,     0,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,     0,   256,
     231,   232,   233,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   234,     0,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,     0,
     256,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   231,   232,   233,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   234,
     485,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,     0,   256,   231,   232,   233,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     234,   496,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,     0,   256,   231,   232,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   234,   537,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,     0,   256,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     231,   232,   233,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   561,   234,   822,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,     0,
     256,   231,   232,   233,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   697,   234,     0,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
       0,   256,   231,   232,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   762,   234,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,     0,   256,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   231,   232,   233,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   234,
     823,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,     0,   256,   231,   232,   233,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     234,   257,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,     0,   256,   231,   232,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   234,   308,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,     0,   256,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   231,   232,   233,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   234,   309,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,     0,   256,   231,   232,   233,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   234,   315,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,     0,   256,     0,   231,
     232,   233,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   356,   234,     0,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,     0,   256,
       0,     0,     0,     0,     0,     0,     0,     0,   231,   232,
     233,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   234,   424,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,     0,   256,   231,
     232,   233,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   234,   434,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,     0,   256,
       0,   231,   232,   233,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   234,   435,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
       0,   256,     0,     0,     0,     0,     0,     0,     0,     0,
     231,   232,   233,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   234,   445,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,     0,
     256,   231,   232,   233,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   234,   543,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
       0,   256,     0,   231,   232,   233,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   234,
     767,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,     0,   256,     0,     0,     0,     0,     0,     0,
       0,     0,   231,   232,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   234,   916,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,     0,   256,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   231,   232,   233,     0,     0,
     928,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     478,   234,   612,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,     0,   256,     0,     0,     0,     0,
       0,     0,   231,   232,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   234,   656,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,     0,   256,   232,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   234,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   233,   256,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   234,     0,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   234,   256,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,     0,   256,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,     0,   256,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,     0,   256
};

static const yytype_int16 yycheck[] =
{
      25,    26,     4,    28,   118,     4,    28,   230,    28,   513,
     276,   256,   544,   497,    28,   433,     8,   683,     8,   416,
       8,    63,   352,     8,     8,     8,    50,     8,    53,     8,
      26,    63,     8,   430,    63,     8,     8,     8,     8,   314,
       8,     8,     8,    73,   640,    63,    65,    92,    73,    92,
     273,    76,    80,    31,    73,    57,    75,    73,    75,   563,
      63,   152,   285,   286,    26,   156,   289,   152,   291,     0,
      63,   156,    25,    26,    75,    28,    73,     0,    75,    73,
     152,   195,   157,   100,   156,    31,   570,   203,   572,   157,
     112,   207,   157,   490,   152,   114,    26,    75,   156,   157,
     216,   157,   218,   219,   220,   371,   157,   365,   157,   367,
     152,   156,    73,   156,   116,   157,   141,   157,   160,    73,
     152,   149,   718,   157,   720,   150,   156,    75,   160,    75,
     160,   160,   125,    73,   153,    75,   158,   156,    75,   157,
       8,   157,   160,   162,   168,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   160,   183,   489,
     120,   162,   156,   188,   160,   162,   165,   159,   160,   159,
     158,   196,   197,   198,   159,   159,   159,    73,   159,   663,
     159,   206,   579,   159,   209,   158,   158,   158,   158,    31,
     158,   158,   158,    61,    62,    95,    96,   159,   421,    73,
      73,    75,    73,    73,    75,    75,    31,   120,   230,    75,
     433,   877,   609,   610,   162,    73,   230,    75,   615,   616,
     160,    31,   162,    61,    62,   162,    73,    94,    95,    96,
     157,   256,    75,    75,   256,   188,   256,   769,    94,    95,
      96,   157,   256,   196,   197,   198,   730,   157,    73,   507,
      75,   273,    73,   206,    75,    76,   114,   153,   283,   273,
     156,   161,   287,   285,   286,    75,   157,   289,   157,   291,
     156,   285,   286,   159,   160,   289,   160,   291,    73,   524,
     153,    95,    96,   156,   150,   151,   311,    73,   162,   114,
     158,   162,   162,   318,   161,   153,    31,    73,   156,    75,
     325,   152,   160,   256,   162,   161,   149,   150,   151,     8,
      63,   336,   337,   157,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   152,    75,   153,   311,
     100,   156,    80,    63,   592,    68,    69,   162,   114,   363,
     365,   125,   367,   325,   156,   763,    49,   161,    73,   624,
      75,   127,   156,   375,   620,    73,   358,    75,   152,   358,
     757,   636,    61,    62,   152,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   153,   403,   156,
     156,   156,    75,   336,   337,    75,   162,    80,   806,   114,
      80,   152,   416,    75,   156,   157,   114,   152,    80,   421,
      75,   125,   150,   151,   908,    80,   430,   421,    68,    69,
      75,   433,   670,    61,    62,    80,   164,   156,   157,   433,
     152,   446,   447,   157,   156,   157,   451,    13,   153,   156,
     157,   156,   160,   708,   163,   153,   159,   162,   156,   159,
     160,   466,   152,   159,   162,    13,   156,   157,    25,    26,
     403,    45,    46,    47,   158,    49,   149,   150,   151,   158,
     150,   151,    81,    82,   446,   447,   490,   149,   150,   151,
     745,    73,   497,   161,    73,   150,   151,   502,   123,   504,
     123,    63,   507,    26,   157,   150,   151,   512,   513,    68,
      69,    70,   758,   759,    94,    95,    96,    84,   157,   524,
       8,   159,   524,    92,   524,   100,    94,    95,    96,    73,
     524,   159,    73,   466,   109,   110,   111,   112,   113,   114,
     502,   546,   547,   548,    75,   783,   157,   802,   158,   554,
     788,   556,   790,    68,    69,    70,   159,   562,   563,     8,
     763,   566,   541,   568,   497,   570,   158,   572,    73,    63,
     161,   550,    13,   828,   124,   579,   109,   110,   111,   112,
     113,   114,   586,   588,   160,   157,   548,   592,   165,    26,
      13,   524,   554,   157,    73,   833,   157,   157,   152,   157,
     562,   157,   165,   806,   157,   609,   610,   156,    73,   864,
     161,   615,   616,   546,   547,   870,    42,    43,    44,    45,
      46,    47,    13,    49,   159,   157,   631,   161,    25,    26,
     157,    28,   158,   566,     8,   568,   156,   570,   893,   572,
     878,   160,     8,   898,   165,   158,   651,   741,   627,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   663,   158,
      73,    73,   917,   149,   104,   670,    13,   165,   161,   158,
       8,   325,   159,   158,   153,   158,   158,   156,   126,   158,
     157,    13,   687,   938,   159,   940,   924,   942,   159,   158,
     126,     8,   158,   157,   161,   158,    73,   159,   631,   160,
     682,    13,    75,   106,   158,   158,   961,   712,   158,    63,
      63,   716,   158,   165,   125,   158,   954,   722,   651,   724,
     158,    91,    13,    75,    73,   730,    13,   157,   160,   125,
     663,   159,     4,     5,     6,    85,     8,     9,    10,    11,
      12,    13,    14,   748,    16,    17,    18,    19,    20,    21,
      22,    23,    24,   757,   716,    27,   160,   159,   159,   126,
     722,   763,   724,    13,    73,    13,    38,   161,    75,   763,
      13,   158,   165,    45,    46,   165,   157,   159,   783,   712,
      52,   159,   787,   788,    92,   790,   748,   158,    92,   161,
     159,   188,   446,   447,   799,   159,   107,   730,    75,   196,
     197,   198,    13,   161,   806,    77,   101,   152,    75,   206,
      26,   106,   806,   157,   109,   110,   111,   112,   113,   114,
     115,   826,    75,    70,   161,   787,    13,    73,   833,   157,
     159,    89,   811,   158,    73,   840,    73,   799,     8,   844,
      75,    70,   847,   159,   158,    26,    87,   160,   502,   121,
     104,   161,    75,   159,   157,   952,   161,   129,   158,   256,
     161,   160,   318,   358,   826,   466,   161,   358,   712,   632,
     507,   687,   817,   878,   591,   727,   323,   821,   840,   833,
     885,   694,   844,   644,   891,   847,   188,   159,   568,   161,
      -1,   651,    -1,   165,   548,   167,    -1,    -1,   170,    -1,
     554,    -1,   907,   908,    -1,    -1,    -1,    -1,   562,    -1,
      -1,    25,    26,    -1,   311,    -1,    -1,   896,    -1,   924,
      -1,    -1,    -1,   885,    -1,    -1,    -1,    -1,   325,   201,
      -1,    -1,    -1,   205,    -1,    -1,    50,    -1,    -1,   336,
     337,    -1,    -1,   215,    -1,   907,    -1,    -1,    -1,   954,
     929,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     232,    -1,    -1,    -1,    -1,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,    -1,    -1,    -1,    -1,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
      -1,    -1,   274,    -1,   276,   277,   403,   128,   129,   130,
     131,   132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   297,    42,    43,   300,   101,
      -1,    -1,   153,    -1,   106,   156,    -1,   109,   110,   111,
     112,   113,   114,   115,    -1,    -1,    -1,    -1,   320,   446,
     447,    -1,    -1,    -1,   168,    71,    72,    73,    -1,    -1,
      -1,    -1,   716,    -1,    -1,    81,    -1,    -1,   722,   466,
     724,    -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   196,   197,   198,    -1,   358,    -1,    -1,   161,
      -1,    -1,   206,    -1,   748,    -1,    -1,    -1,   114,   371,
     497,    -1,    -1,    -1,   376,   502,   378,    -1,   380,   381,
     382,    -1,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,   138,   139,   140,   141,    -1,   524,    -1,    -1,
      -1,    -1,   148,   787,    -1,    -1,    -1,   153,   154,   155,
     156,    -1,    -1,    -1,    -1,   799,    -1,    -1,    -1,   546,
     547,   548,    -1,    -1,    -1,    -1,    -1,   554,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   562,    -1,    -1,    -1,   566,
      -1,   568,   826,   570,    -1,   572,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   840,    -1,    -1,    -1,
     844,    -1,    -1,   847,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,   478,    49,   480,    -1,
      -1,    -1,   484,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   336,   337,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   885,    -1,    -1,   631,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,   520,   363,
      -1,    -1,    -1,   907,   651,    -1,    -1,    -1,    -1,   531,
      -1,    -1,    -1,    -1,    -1,    -1,   663,    -1,    -1,   541,
      -1,    -1,   544,   545,    -1,    -1,    -1,    -1,   550,    -1,
      -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,   403,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,   712,   430,    -1,    -1,   716,
      -1,    -1,    -1,    -1,    -1,   722,    -1,   724,    -1,    -1,
      -1,    -1,    -1,   730,    -1,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   620,   621,
      -1,   748,   466,    -1,   626,   627,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,   490,    49,    -1,    -1,
      -1,   653,    -1,   497,   656,    -1,    -1,    -1,    -1,    -1,
     787,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   799,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,   693,    49,    -1,    -1,    -1,    -1,    -1,    -1,   826,
      -1,    -1,   546,   547,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   840,    -1,    -1,    -1,   844,    -1,    -1,
     847,    -1,   566,    -1,   568,    -1,   570,    -1,   572,    -1,
      -1,    -1,    -1,    -1,    -1,   579,    -1,    -1,    -1,    -1,
      -1,    -1,   586,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   758,   759,   885,    -1,
      -1,    -1,    -1,    -1,    -1,   609,   610,   769,    -1,    -1,
      -1,   615,   616,    -1,    -1,   777,    -1,    -1,    -1,    -1,
     907,    -1,    -1,    -1,    -1,    -1,    -1,   631,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,   651,    -1,   811,
      -1,    -1,    -1,    -1,   816,   817,    -1,    -1,    -1,   663,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   860,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   712,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,   730,    49,    -1,    -1,
     892,    -1,    -1,    -1,   896,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   757,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   929,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    67,
     165,    -1,    -1,    71,    72,    73,    74,    75,    -1,    77,
      -1,    -1,    -1,    81,    82,    83,    84,    -1,    86,    -1,
      88,    -1,    90,    -1,    -1,    93,    -1,    -1,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,   105,   106,    -1,
     108,    -1,    -1,    -1,   112,   113,   114,    -1,   116,   117,
     118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
     138,   139,   140,   141,     3,     4,     5,     6,     7,    -1,
     148,    -1,    -1,    12,    -1,   153,   154,   155,   156,   157,
      -1,   159,   160,    -1,   162,   163,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    -1,    77,    -1,
      -1,    -1,    81,    82,    83,    84,    -1,    86,    -1,    88,
      -1,    90,    -1,    -1,    93,    -1,    -1,    -1,    97,    98,
      99,   100,    -1,   102,   103,    -1,   105,    -1,    -1,   108,
      -1,    -1,    -1,   112,   113,   114,    -1,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,    -1,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,
     139,   140,   141,     3,     4,     5,     6,     7,    -1,   148,
      -1,    -1,    12,    -1,   153,   154,   155,   156,   157,    -1,
     159,   160,    -1,   162,   163,   164,    26,    -1,    -1,    -1,
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
     160,    -1,   162,   163,   164,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      71,    72,    73,    74,    75,    -1,    77,    -1,    -1,    -1,
      81,    82,    83,    84,    -1,    86,    -1,    88,    -1,    90,
      -1,    -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,
      -1,   102,   103,    -1,   105,    -1,    -1,   108,    -1,    -1,
      -1,    -1,    -1,   114,    -1,   116,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,   140,
     141,     3,     4,     5,     6,     7,    -1,   148,    -1,    -1,
      12,    -1,   153,   154,   155,   156,   157,    -1,   159,   160,
      -1,   162,   163,   164,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    -1,    77,    -1,    -1,    -1,    81,
      82,    83,    84,    -1,    86,    -1,    88,    -1,    90,    -1,
      -1,    93,    -1,    -1,    -1,    97,    98,    99,   100,    -1,
     102,   103,    -1,   105,    -1,    -1,   108,    -1,    -1,    -1,
      -1,    -1,   114,    -1,   116,   117,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   137,   138,   139,   140,   141,
       3,     4,     5,     6,     7,    -1,   148,    -1,    -1,    12,
      -1,   153,   154,   155,   156,   157,    -1,   159,   160,    -1,
     162,   163,   164,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    66,    67,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    -1,    77,    -1,    -1,    -1,    81,    82,
      83,    84,    -1,    86,    -1,    88,    -1,    90,    -1,    -1,
      93,    -1,    -1,    -1,    97,    98,    99,   100,    -1,   102,
     103,    -1,   105,    -1,    -1,   108,    -1,    -1,    -1,    -1,
      -1,   114,    -1,   116,   117,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   137,   138,   139,   140,   141,     3,
       4,     5,     6,     7,    -1,   148,    -1,    -1,    12,    -1,
     153,   154,   155,   156,   157,    -1,   159,   160,    -1,   162,
     163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    -1,    77,    -1,    -1,    -1,    81,    82,    83,
      84,    -1,    86,    -1,    88,    -1,    90,    -1,    -1,    93,
      -1,    -1,    -1,    97,    98,    99,   100,    -1,   102,   103,
      -1,   105,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,
     114,    -1,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,   138,   139,   140,   141,     3,     4,
       5,     6,     7,    -1,   148,    -1,    -1,    12,    -1,   153,
     154,   155,   156,   157,    -1,   159,   160,    -1,   162,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
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
      -1,   148,    -1,    -1,    -1,    -1,   153,   154,   155,   156,
     157,    -1,   159,    42,    43,   162,   163,   164,    -1,    48,
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
      -1,    -1,    -1,    -1,   153,   154,   155,   156,   157,    -1,
     159,    42,    43,   162,   163,   164,    -1,    48,    -1,    50,
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
      -1,    -1,   153,   154,   155,   156,   157,   158,    -1,    42,
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
      -1,    -1,   117,   118,    -1,     3,     4,     5,     6,     7,
      -1,    -1,   127,   128,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   137,   138,   139,   140,   141,    -1,    -1,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,   153,   154,
     155,   156,   157,    -1,    42,    43,    -1,   162,   163,   164,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,
     118,    -1,     3,     4,     5,     6,     7,    -1,    -1,   127,
     128,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
     138,   139,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,
     148,    -1,    -1,    -1,    -1,   153,   154,   155,   156,   157,
      -1,    42,    43,    -1,   162,   163,   164,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   137,   138,   139,   140,
     141,    -1,    -1,    -1,    -1,    -1,    -1,   148,     9,    10,
      11,    -1,   153,   154,   155,   156,   157,    -1,    -1,    -1,
      -1,   162,   163,   164,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     161,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   161,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   161,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   161,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   161,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     159,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   159,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   159,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   159,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   159,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   158,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   158,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   158,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   158,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   158,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     158,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   158,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,
     158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     126,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   126,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    11,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    25,    49,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49
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
     214,   215,   216,   218,   275,   289,   292,   301,   312,   315,
     319,   320,   322,   323,   333,   334,   335,   336,   338,   339,
     340,   341,   347,   357,   360,    73,   114,   153,   289,   319,
     319,   157,   319,   319,   319,   319,   319,   319,   319,   286,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   114,
     153,   156,   170,   301,   322,   323,   335,   322,   319,   153,
     156,   170,   301,   303,   304,   335,   339,   340,   347,   157,
     309,   157,    26,   271,   319,   188,   157,   157,   157,   198,
     157,   159,   319,   159,   319,    73,    73,   159,   275,   319,
     323,   199,   319,   156,   170,   174,   175,    75,   162,   245,
     246,   120,   120,    75,   247,   289,   157,   157,   157,   157,
     157,   157,    75,    80,   149,   150,   151,   353,   354,   156,
     160,   170,   170,   319,   177,   160,    80,   310,   353,    80,
     353,   156,   157,     8,   159,    73,    73,    31,   213,   337,
     152,     9,    10,    11,    25,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    49,   159,    61,    62,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   157,   152,    63,   125,    63,   160,   162,   340,
     213,   319,   319,   156,   170,   152,   152,   156,   170,   152,
     278,   152,   125,   340,   158,   319,   319,     8,   159,   180,
     186,   272,   273,   319,   275,   323,   157,   319,   159,   159,
     159,    13,   159,   159,   160,   159,   170,    92,     8,   159,
     160,   320,   323,     8,   159,    13,     8,   159,   213,   209,
     210,   323,   323,   358,   323,   158,   276,    31,   319,   351,
     352,    63,   125,   149,   354,    74,   319,   323,    80,   149,
     354,   170,   173,   159,   160,   157,   158,   161,   178,   319,
     163,   164,    73,   293,    73,   123,   217,   123,   219,    73,
     157,    63,    73,   333,   340,   347,   281,   319,   282,    26,
     283,   279,   280,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   303,    31,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   300,    73,   333,   319,
     342,   324,   342,   319,   158,   170,    73,    73,   170,   333,
     157,   311,   333,   305,   158,   158,   319,    84,   319,   159,
       8,    92,    92,    73,   227,   158,    42,    43,   128,   148,
     153,   156,   170,   301,   312,   313,   314,   177,    92,    73,
     175,   319,   246,   313,    75,   157,     8,   158,     8,   158,
     158,   159,   127,   323,   348,   349,   321,   323,   126,   158,
       8,   317,   355,    73,    63,   161,   161,   157,   168,   172,
     295,   119,   179,   180,   211,   212,   161,    31,   243,   244,
     275,   323,    13,   153,   156,   170,   302,   124,   220,   221,
     302,   160,   157,   287,   342,   157,   157,   340,   319,   319,
     285,   319,   319,   319,    65,   323,   243,   157,   157,   165,
      73,   160,   333,   343,   345,   346,   165,   161,   243,   343,
      26,   182,   157,   158,   190,   274,   196,   194,    13,     8,
     158,   193,   313,   313,   157,    80,   156,   170,   152,   161,
      73,   161,    13,   288,   210,   159,   359,   157,     8,   158,
      31,   319,    31,   319,    73,    75,    76,   356,   319,   294,
     161,   168,   243,   157,   321,   158,     8,   313,   156,   170,
     221,   160,     8,   248,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   240,   241,   242,   302,   240,   165,   296,
     297,   319,    26,   303,   158,   298,   299,   319,   344,   325,
      63,   160,   158,   306,   184,   180,   189,   187,   272,   319,
     323,    31,   223,   323,   313,    73,    26,   180,   226,    26,
     160,   228,   313,   316,   318,   170,    73,   104,   313,   240,
     323,   350,   349,    13,   321,   321,   126,   165,   165,   243,
     161,   158,   158,    31,   275,   323,   170,   248,   302,   101,
     106,   109,   110,   111,   112,   113,   114,   115,   161,   249,
     252,   265,   266,   267,   268,   270,   158,     8,    31,    75,
     158,   243,   243,   284,   277,   243,   243,   161,   157,   329,
     330,   332,   342,   319,   307,   177,   183,   319,    26,   180,
     233,   159,   126,   222,   323,   222,    13,   177,   159,   229,
     159,   229,   126,   158,     8,   317,   157,   158,   348,   319,
      31,   319,   161,   158,   159,   321,   161,    73,   253,   302,
     250,   289,   268,     8,   159,   160,   242,    75,    13,   106,
     290,   158,   158,   319,   311,   158,   158,   331,    63,    63,
     326,   165,   161,   125,   308,   185,   234,   158,   177,   191,
     223,   158,   158,   313,    91,   229,    94,    95,    96,   229,
     161,   313,   313,   200,   290,   158,   321,    13,     8,   159,
     160,   254,    75,   269,   213,    73,   177,    31,    75,    13,
     313,   157,   160,   243,   342,   342,   125,   327,   343,   236,
      68,    69,   238,   159,    85,   272,   197,   195,   159,    94,
     159,   319,    26,   159,   232,   161,   126,   302,   160,   313,
     302,    73,   255,   256,   257,   258,   260,   261,   262,   302,
      13,     8,   159,    73,    13,   161,    75,    13,   313,    31,
      75,   291,   177,   158,   165,   165,   343,    68,    69,   239,
     157,   180,   159,   158,    26,   180,   225,   225,   159,   232,
     231,   313,   201,   177,   161,   257,   159,    92,   107,   159,
     152,   313,    75,   251,   313,    13,   313,    75,     8,   158,
     161,   328,   157,    26,    70,   319,   192,   177,   230,   177,
      75,   161,   263,   268,   259,   302,    73,    13,   157,   313,
      31,    75,   332,   319,   177,   159,   158,    26,   180,   224,
      89,   177,   158,    73,     8,   313,   240,    75,   158,   235,
     177,   159,   202,   302,   158,    26,   180,    87,   160,   159,
     160,   264,   237,   159,   177,   177,   177,   161,   161,   203,
     104,   204,   205,   206,   157,   206,   302,   207,    75,   158,
     208,   160,   177,   161
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
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



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

    { printf("HERE%s\n",(yyvsp[(3) - (9)].val)); ;}
    break;

  case 100:

    { printf("class:%s\n",(yyvsp[(2) - (7)].val)); ;}
    break;

  case 101:

    { printf("interface:%s\n",(yyvsp[(2) - (6)].val)); ;}
    break;

  case 102:

    {;}
    break;

  case 103:

    {;}
    break;

  case 104:

    {;}
    break;

  case 105:

    {;}
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

  case 113:

    {;}
    break;

  case 114:

    {;}
    break;

  case 115:

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

  case 125:

    {;}
    break;

  case 126:

    {;}
    break;

  case 127:

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

  case 141:

    {;}
    break;

  case 142:

    {;}
    break;

  case 144:

    {;}
    break;

  case 145:

    {;}
    break;

  case 152:

    {;}
    break;

  case 153:

    {;}
    break;

  case 154:

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

  case 190:

    {;}
    break;

  case 194:

    {;}
    break;

  case 195:

    {;}
    break;

  case 197:

    {;}
    break;

  case 198:

    {;}
    break;

  case 205:

    {;}
    break;

  case 206:

    {;}
    break;

  case 207:

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

    { ;}
    break;

  case 219:

    {;}
    break;

  case 220:

    {;}
    break;

  case 221:

    {;}
    break;

  case 222:

    { ;}
    break;

  case 223:

    {;}
    break;

  case 224:

    {;}
    break;

  case 225:

    {;}
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

    {printf("member variables:%s\n",(yyvsp[(1) - (1)].val));;}
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

    { ;}
    break;

  case 252:

    {;}
    break;

  case 253:

    {;}
    break;

  case 254:

    {;}
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

    {  ;}
    break;

  case 289:

    {  ;}
    break;

  case 290:

    {;}
    break;

  case 291:

    {;}
    break;

  case 292:

    {;}
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

  case 331:

    {;}
    break;

  case 332:

    {;}
    break;

  case 333:

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

    { ;}
    break;

  case 343:

    {;}
    break;

  case 344:

    { ;}
    break;

  case 345:

    {;}
    break;

  case 346:

    { ;}
    break;

  case 347:

    {;}
    break;

  case 348:

    { ;}
    break;

  case 349:

    {;}
    break;

  case 350:

    { ;}
    break;

  case 351:

    { ;}
    break;

  case 352:

    {;}
    break;

  case 353:

    {;}
    break;

  case 354:

    {;}
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

  case 366:

    {;}
    break;

  case 367:

    {;}
    break;

  case 368:

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

  case 408:

    {;}
    break;

  case 409:

    {;}
    break;

  case 410:

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

    {  ;}
    break;

  case 416:

    {  ;}
    break;

  case 417:

    {;}
    break;

  case 418:

    {;}
    break;

  case 419:

    {;}
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

    { ;}
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

    {;}
    break;

  case 462:

    {;}
    break;

  case 465:

    {;}
    break;

  case 466:

    {;}
    break;

  case 467:

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
int yyerror(char *e)
{
  printf(" error: %s", e);
  getchar();
  return 0;
}
