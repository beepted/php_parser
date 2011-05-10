
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


#define YYERROR_VERBOSE
#define YYSTYPE znode
#ifdef ZTS
# define YYPARSE_PARAM tsrm_ls
# define YYLEX_PARAM tsrm_ls
#endif





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
#define YYLAST   5225

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  166
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  197
/* YYNRULES -- Number of rules.  */
#define YYNRULES  506
/* YYNRULES -- Number of states.  */
#define YYNSTATES  966

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
     337,   348,   356,   357,   365,   367,   370,   372,   375,   376,
     379,   381,   382,   385,   386,   389,   391,   395,   396,   399,
     401,   404,   406,   411,   413,   418,   420,   425,   429,   435,
     439,   444,   449,   455,   456,   457,   464,   465,   471,   473,
     475,   477,   482,   483,   484,   492,   493,   494,   503,   504,
     507,   508,   512,   514,   515,   518,   522,   528,   533,   538,
     544,   552,   559,   560,   562,   564,   566,   568,   570,   572,
     574,   576,   578,   580,   582,   583,   585,   587,   590,   594,
     598,   603,   607,   609,   611,   614,   619,   623,   629,   631,
     635,   638,   639,   640,   645,   648,   650,   651,   661,   665,
     667,   671,   673,   677,   678,   680,   682,   685,   688,   691,
     695,   697,   701,   703,   705,   709,   714,   718,   719,   721,
     723,   727,   729,   731,   732,   734,   736,   739,   741,   743,
     745,   747,   749,   751,   755,   761,   763,   767,   773,   778,
     782,   784,   785,   787,   788,   793,   795,   796,   804,   808,
     813,   814,   822,   823,   828,   831,   835,   839,   843,   847,
     851,   855,   859,   863,   867,   871,   875,   878,   881,   884,
     887,   888,   893,   894,   899,   900,   905,   906,   911,   915,
     919,   923,   927,   931,   935,   939,   943,   947,   951,   955,
     959,   962,   965,   968,   971,   975,   979,   983,   987,   991,
     995,   999,  1003,  1007,  1011,  1012,  1013,  1021,  1022,  1028,
    1030,  1033,  1036,  1039,  1042,  1045,  1048,  1051,  1054,  1057,
    1060,  1061,  1065,  1067,  1072,  1076,  1079,  1080,  1091,  1092,
    1104,  1106,  1107,  1112,  1116,  1121,  1123,  1126,  1127,  1133,
    1134,  1142,  1143,  1150,  1151,  1159,  1160,  1168,  1169,  1177,
    1178,  1186,  1187,  1193,  1195,  1197,  1201,  1204,  1206,  1210,
    1213,  1215,  1217,  1218,  1219,  1226,  1228,  1231,  1232,  1235,
    1236,  1239,  1243,  1244,  1246,  1248,  1249,  1253,  1255,  1257,
    1259,  1261,  1263,  1265,  1267,  1269,  1271,  1273,  1277,  1280,
    1282,  1284,  1288,  1291,  1294,  1297,  1302,  1304,  1308,  1310,
    1312,  1314,  1318,  1321,  1323,  1327,  1331,  1332,  1335,  1336,
    1338,  1344,  1348,  1352,  1354,  1356,  1358,  1360,  1362,  1364,
    1365,  1366,  1374,  1376,  1379,  1380,  1381,  1386,  1391,  1396,
    1397,  1402,  1404,  1406,  1407,  1409,  1412,  1416,  1420,  1422,
    1427,  1428,  1434,  1436,  1438,  1440,  1442,  1445,  1447,  1452,
    1457,  1459,  1461,  1466,  1467,  1469,  1471,  1472,  1475,  1480,
    1485,  1487,  1489,  1493,  1495,  1498,  1502,  1504,  1506,  1507,
    1513,  1514,  1515,  1518,  1524,  1528,  1532,  1534,  1541,  1546,
    1551,  1554,  1557,  1560,  1562,  1565,  1567,  1568,  1574,  1578,
    1582,  1589,  1593,  1595,  1597,  1599,  1604,  1609,  1612,  1615,
    1620,  1623,  1626,  1628,  1629,  1634,  1638
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
     170,    92,    73,    -1,   176,     8,    73,    13,   315,    -1,
     101,    73,    13,   315,    -1,    -1,   177,   178,   179,    -1,
      -1,   180,    -1,   211,    -1,   212,    -1,   119,   157,   158,
     159,    -1,   181,    -1,    73,    26,    -1,   160,   177,   161,
      -1,    -1,    -1,    67,   157,   321,   158,   182,   180,   183,
     236,   240,    -1,    -1,    -1,    67,   157,   321,   158,    26,
     184,   177,   185,   238,   241,    70,   159,    -1,    -1,    -1,
      84,   157,   186,   321,   158,   187,   235,    -1,    -1,    -1,
      83,   188,   180,    84,   157,   189,   321,   158,   159,    -1,
      -1,    -1,    -1,    86,   157,   274,   159,   190,   274,   159,
     191,   274,   158,   192,   226,    -1,    -1,    93,   157,   321,
     158,   193,   230,    -1,    97,   159,    -1,    97,   321,   159,
      -1,    98,   159,    -1,    98,   321,   159,    -1,   102,   159,
      -1,   102,   277,   159,    -1,   102,   325,   159,    -1,   108,
     247,   159,    -1,   114,   249,   159,    -1,    82,   273,   159,
      -1,    77,    -1,   321,   159,    -1,   116,   157,   209,   158,
     159,    -1,    -1,    -1,    88,   157,   325,    92,   194,   225,
     224,   158,   195,   227,    -1,    -1,    -1,    88,   157,   277,
      92,   196,   325,   224,   158,   197,   227,    -1,    -1,    90,
     198,   157,   229,   158,   228,    -1,   159,    -1,    -1,    -1,
      -1,    -1,    -1,   103,   199,   160,   177,   161,   104,   157,
     200,   304,   201,    75,   158,   202,   160,   177,   161,   203,
     204,    -1,   105,   321,   159,    -1,    99,    73,   159,    -1,
     205,    -1,    -1,   206,    -1,   205,   206,    -1,    -1,    -1,
     104,   157,   304,   207,    75,   158,   208,   160,   177,   161,
      -1,   210,    -1,   209,     8,   210,    -1,   325,    -1,   214,
      -1,   216,    -1,    -1,    31,    -1,    -1,   291,   213,    73,
     215,   157,   242,   158,   160,   177,   161,    -1,   218,    73,
     219,   222,   160,   250,   161,    -1,    -1,   220,    73,   217,
     221,   160,   250,   161,    -1,   120,    -1,   113,   120,    -1,
     121,    -1,   112,   120,    -1,    -1,   123,   304,    -1,   122,
      -1,    -1,   123,   223,    -1,    -1,   124,   223,    -1,   304,
      -1,   223,     8,   304,    -1,    -1,   126,   225,    -1,   325,
      -1,    31,   325,    -1,   180,    -1,    26,   177,    87,   159,
      -1,   180,    -1,    26,   177,    89,   159,    -1,   180,    -1,
      26,   177,    91,   159,    -1,    73,    13,   315,    -1,   229,
       8,    73,    13,   315,    -1,   160,   231,   161,    -1,   160,
     159,   231,   161,    -1,    26,   231,    94,   159,    -1,    26,
     159,   231,    94,   159,    -1,    -1,    -1,   231,    95,   321,
     234,   232,   177,    -1,    -1,   231,    96,   234,   233,   177,
      -1,    26,    -1,   159,    -1,   180,    -1,    26,   177,    85,
     159,    -1,    -1,    -1,   236,    68,   157,   321,   158,   237,
     180,    -1,    -1,    -1,   238,    68,   157,   321,   158,    26,
     239,   177,    -1,    -1,    69,   180,    -1,    -1,    69,    26,
     177,    -1,   243,    -1,    -1,   244,    75,    -1,   244,    31,
      75,    -1,   244,    31,    75,    13,   315,    -1,   244,    75,
      13,   315,    -1,   243,     8,   244,    75,    -1,   243,     8,
     244,    31,    75,    -1,   243,     8,   244,    31,    75,    13,
     315,    -1,   243,     8,   244,    75,    13,   315,    -1,    -1,
     128,    -1,   129,    -1,   130,    -1,   131,    -1,   132,    -1,
     133,    -1,   134,    -1,   135,    -1,   136,    -1,   304,    -1,
     246,    -1,    -1,   277,    -1,   325,    -1,    31,   323,    -1,
     246,     8,   277,    -1,   246,     8,   325,    -1,   246,     8,
      31,   323,    -1,   247,     8,   248,    -1,   248,    -1,    75,
      -1,   162,   322,    -1,   162,   160,   321,   161,    -1,   249,
       8,    75,    -1,   249,     8,    75,    13,   315,    -1,    75,
      -1,    75,    13,   315,    -1,   250,   251,    -1,    -1,    -1,
     267,   252,   271,   159,    -1,   272,   159,    -1,   254,    -1,
      -1,   268,   291,   213,    73,   253,   157,   242,   158,   266,
      -1,   106,   255,   256,    -1,   304,    -1,   255,     8,   304,
      -1,   159,    -1,   160,   257,   161,    -1,    -1,   258,    -1,
     259,    -1,   258,   259,    -1,   260,   159,    -1,   264,   159,
      -1,   263,   107,   261,    -1,   304,    -1,   261,     8,   304,
      -1,    73,    -1,   263,    -1,   304,   152,    73,    -1,   262,
      92,   265,    73,    -1,   262,    92,   270,    -1,    -1,   270,
      -1,   159,    -1,   160,   177,   161,    -1,   269,    -1,   115,
      -1,    -1,   269,    -1,   270,    -1,   269,   270,    -1,   109,
      -1,   110,    -1,   111,    -1,   114,    -1,   113,    -1,   112,
      -1,   271,     8,    75,    -1,   271,     8,    75,    13,   315,
      -1,    75,    -1,    75,    13,   315,    -1,   272,     8,    73,
      13,   315,    -1,   101,    73,    13,   315,    -1,   273,     8,
     321,    -1,   321,    -1,    -1,   275,    -1,    -1,   275,     8,
     276,   321,    -1,   321,    -1,    -1,   127,   157,   278,   350,
     158,    13,   321,    -1,   325,    13,   321,    -1,   325,    13,
      31,   325,    -1,    -1,   325,    13,    31,    65,   305,   279,
     313,    -1,    -1,    65,   305,   280,   313,    -1,    64,   321,
      -1,   325,    24,   321,    -1,   325,    23,   321,    -1,   325,
      22,   321,    -1,   325,    21,   321,    -1,   325,    20,   321,
      -1,   325,    19,   321,    -1,   325,    18,   321,    -1,   325,
      17,   321,    -1,   325,    16,   321,    -1,   325,    15,   321,
      -1,   325,    14,   321,    -1,   324,    62,    -1,    62,   324,
      -1,   324,    61,    -1,    61,   324,    -1,    -1,   321,    27,
     281,   321,    -1,    -1,   321,    28,   282,   321,    -1,    -1,
     321,     9,   283,   321,    -1,    -1,   321,    11,   284,   321,
      -1,   321,    10,   321,    -1,   321,    29,   321,    -1,   321,
      31,   321,    -1,   321,    30,   321,    -1,   321,    44,   321,
      -1,   321,    42,   321,    -1,   321,    43,   321,    -1,   321,
      45,   321,    -1,   321,    46,   321,    -1,   321,    47,   321,
      -1,   321,    41,   321,    -1,   321,    40,   321,    -1,    42,
     321,    -1,    43,   321,    -1,    48,   321,    -1,    50,   321,
      -1,   321,    33,   321,    -1,   321,    32,   321,    -1,   321,
      35,   321,    -1,   321,    34,   321,    -1,   321,    36,   321,
      -1,   321,    39,   321,    -1,   321,    37,   321,    -1,   321,
      38,   321,    -1,   321,    49,   305,    -1,   157,   321,   158,
      -1,    -1,    -1,   321,    25,   285,   321,    26,   286,   321,
      -1,    -1,   321,    25,    26,   287,   321,    -1,   359,    -1,
      60,   321,    -1,    57,   321,    -1,    56,   321,    -1,    55,
     321,    -1,    54,   321,    -1,    53,   321,    -1,    58,   321,
      -1,    59,   321,    -1,    52,   321,    -1,    66,   311,    -1,
      -1,    51,   288,   321,    -1,   317,    -1,   128,   157,   353,
     158,    -1,   163,   312,   163,    -1,    12,   321,    -1,    -1,
     291,   213,   157,   289,   242,   158,   292,   160,   177,   161,
      -1,    -1,   114,   291,   213,   157,   290,   242,   158,   292,
     160,   177,   161,    -1,   100,    -1,    -1,   106,   157,   293,
     158,    -1,   293,     8,    75,    -1,   293,     8,    31,    75,
      -1,    75,    -1,    31,    75,    -1,    -1,   170,   157,   295,
     245,   158,    -1,    -1,   153,   156,   170,   157,   296,   245,
     158,    -1,    -1,   156,   170,   157,   297,   245,   158,    -1,
      -1,   303,   152,    73,   157,   298,   245,   158,    -1,    -1,
     303,   152,   335,   157,   299,   245,   158,    -1,    -1,   337,
     152,    73,   157,   300,   245,   158,    -1,    -1,   337,   152,
     335,   157,   301,   245,   158,    -1,    -1,   335,   157,   302,
     245,   158,    -1,   114,    -1,   170,    -1,   153,   156,   170,
      -1,   156,   170,    -1,   170,    -1,   153,   156,   170,    -1,
     156,   170,    -1,   303,    -1,   306,    -1,    -1,    -1,   341,
     125,   307,   345,   308,   309,    -1,   341,    -1,   309,   310,
      -1,    -1,   125,   345,    -1,    -1,   157,   158,    -1,   157,
     321,   158,    -1,    -1,    80,    -1,   355,    -1,    -1,   157,
     245,   158,    -1,    71,    -1,    72,    -1,    81,    -1,   140,
      -1,   141,    -1,   155,    -1,   137,    -1,   138,    -1,   139,
      -1,   154,    -1,   148,    80,   149,    -1,   148,   149,    -1,
     314,    -1,   170,    -1,   153,   156,   170,    -1,   156,   170,
      -1,    42,   315,    -1,    43,   315,    -1,   128,   157,   318,
     158,    -1,   316,    -1,   303,   152,    73,    -1,    74,    -1,
     362,    -1,   170,    -1,   153,   156,   170,    -1,   156,   170,
      -1,   314,    -1,   164,   355,   164,    -1,   148,   355,   149,
      -1,    -1,   320,   319,    -1,    -1,     8,    -1,   320,     8,
     315,   126,   315,    -1,   320,     8,   315,    -1,   315,   126,
     315,    -1,   315,    -1,   322,    -1,   277,    -1,   325,    -1,
     325,    -1,   325,    -1,    -1,    -1,   340,   125,   326,   345,
     327,   334,   328,    -1,   340,    -1,   328,   329,    -1,    -1,
      -1,   125,   345,   330,   334,    -1,   331,    63,   344,   165,
      -1,   332,    63,   344,   165,    -1,    -1,   157,   333,   245,
     158,    -1,   332,    -1,   331,    -1,    -1,   342,    -1,   349,
     342,    -1,   303,   152,   335,    -1,   337,   152,   335,    -1,
     342,    -1,   338,    63,   344,   165,    -1,    -1,   294,   339,
      63,   344,   165,    -1,   341,    -1,   338,    -1,   294,    -1,
     342,    -1,   349,   342,    -1,   336,    -1,   342,    63,   344,
     165,    -1,   342,   160,   321,   161,    -1,   343,    -1,    75,
      -1,   162,   160,   321,   161,    -1,    -1,   321,    -1,   347,
      -1,    -1,   335,   346,    -1,   347,    63,   344,   165,    -1,
     347,   160,   321,   161,    -1,   348,    -1,    73,    -1,   160,
     321,   161,    -1,   162,    -1,   349,   162,    -1,   350,     8,
     351,    -1,   351,    -1,   325,    -1,    -1,   127,   157,   352,
     350,   158,    -1,    -1,    -1,   354,   319,    -1,   354,     8,
     321,   126,   321,    -1,   354,     8,   321,    -1,   321,   126,
     321,    -1,   321,    -1,   354,     8,   321,   126,    31,   323,
      -1,   354,     8,    31,   323,    -1,   321,   126,    31,   323,
      -1,    31,   323,    -1,   355,   356,    -1,   355,    80,    -1,
     356,    -1,    80,   356,    -1,    75,    -1,    -1,    75,    63,
     357,   358,   165,    -1,    75,   125,    73,    -1,   150,   321,
     161,    -1,   150,    74,    63,   321,   165,   161,    -1,   151,
     325,   161,    -1,    73,    -1,    76,    -1,    75,    -1,   117,
     157,   360,   158,    -1,   118,   157,   325,   158,    -1,     7,
     321,    -1,     6,   321,    -1,     5,   157,   321,   158,    -1,
       4,   321,    -1,     3,   321,    -1,   325,    -1,    -1,   360,
       8,   361,   325,    -1,   303,   152,    73,    -1,   337,   152,
      73,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   157,   157,   161,   161,   162,   166,   167,   171,   172,
     173,   174,   175,   176,   176,   178,   178,   180,   181,   185,
     186,   190,   191,   192,   193,   197,   198,   202,   202,   203,
     208,   209,   210,   211,   216,   217,   221,   222,   222,   222,
     223,   223,   223,   224,   224,   224,   225,   225,   225,   226,
     226,   226,   226,   227,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   242,   243,
     241,   246,   247,   245,   249,   249,   250,   251,   252,   253,
     254,   255,   251,   257,   258,   263,   264,   268,   269,   274,
     274,   274,   279,   280,   284,   288,   292,   297,   298,   303,
     303,   308,   314,   313,   323,   324,   325,   326,   330,   331,
     335,   338,   340,   343,   345,   349,   350,   354,   355,   360,
     361,   365,   366,   371,   372,   377,   378,   383,   384,   389,
     390,   391,   392,   397,   398,   398,   399,   399,   404,   405,
     410,   411,   416,   418,   418,   422,   424,   424,   428,   430,
     434,   436,   441,   442,   447,   448,   449,   450,   451,   452,
     453,   454,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   474,   475,   480,   481,   482,   483,   484,
     485,   489,   490,   495,   496,   497,   502,   503,   504,   505,
     511,   512,   517,   517,   518,   519,   520,   520,   525,   529,
     530,   534,   535,   538,   540,   544,   545,   549,   550,   554,
     558,   559,   563,   564,   568,   572,   573,   577,   578,   582,
     583,   587,   588,   592,   593,   597,   598,   602,   603,   604,
     605,   606,   607,   611,   612,   613,   614,   618,   619,   623,
     624,   629,   630,   634,   634,   635,   639,   639,   640,   641,
     642,   642,   643,   643,   644,   645,   646,   647,   648,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   660,   661,   661,   662,   662,   663,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   679,   680,   681,   682,   683,   684,   685,
     686,   687,   688,   689,   690,   691,   690,   693,   693,   695,
     696,   697,   698,   699,   700,   701,   702,   703,   704,   705,
     706,   706,   707,   708,   709,   710,   711,   711,   713,   713,
     718,   721,   723,   727,   728,   729,   730,   734,   734,   737,
     737,   740,   740,   743,   743,   746,   746,   749,   749,   752,
     752,   755,   755,   761,   762,   763,   764,   768,   769,   770,
     776,   777,   782,   783,   782,   785,   790,   791,   796,   800,
     801,   802,   806,   807,   808,   813,   814,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,   835,
     836,   837,   838,   839,   840,   841,   842,   846,   850,   851,
     852,   853,   854,   855,   856,   857,   862,   863,   866,   868,
     872,   873,   874,   875,   879,   880,   885,   890,   894,   898,
     899,   898,   901,   905,   906,   911,   911,   915,   916,   920,
     920,   926,   927,   928,   932,   933,   937,   938,   943,   947,
     948,   948,   953,   954,   955,   960,   961,   962,   966,   967,
     968,   973,   974,   978,   979,   984,   985,   985,   989,   990,
     991,   995,   996,  1000,  1001,  1005,  1006,  1011,  1012,  1012,
    1013,  1018,  1019,  1023,  1024,  1025,  1026,  1027,  1028,  1029,
    1030,  1034,  1035,  1036,  1037,  1043,  1044,  1044,  1045,  1046,
    1047,  1048,  1053,  1054,  1055,  1060,  1061,  1062,  1063,  1064,
    1065,  1066,  1070,  1071,  1071,  1075,  1076
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
  "unticked_class_declaration_statement", "$@30", "class_entry_type",
  "extends_from", "interface_entry", "interface_extends_list",
  "implements_list", "interface_list", "foreach_optional_arg",
  "foreach_variable", "for_statement", "foreach_statement",
  "declare_statement", "declare_list", "switch_case_list", "case_list",
  "$@31", "$@32", "case_separator", "while_statement", "elseif_list",
  "$@33", "new_elseif_list", "$@34", "else_single", "new_else_single",
  "parameter_list", "non_empty_parameter_list", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "$@35", "$@36",
  "trait_use_statement", "trait_list", "trait_adaptations",
  "trait_adaptation_list", "non_empty_trait_adaptation_list",
  "trait_adaptation_statement", "trait_precedence", "trait_reference_list",
  "trait_method_reference", "trait_method_reference_fully_qualified",
  "trait_alias", "trait_modifiers", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr", "$@37",
  "expr_without_variable", "$@38", "$@39", "$@40", "$@41", "$@42", "$@43",
  "$@44", "$@45", "$@46", "$@47", "$@48", "$@49", "$@50", "function",
  "lexical_vars", "lexical_var_list", "function_call", "$@51", "$@52",
  "$@53", "$@54", "$@55", "$@56", "$@57", "$@58", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "$@59", "$@60",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@61", "$@62",
  "variable_properties", "variable_property", "$@63",
  "array_method_dereference", "method", "$@64", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
  "array_function_dereference", "$@65",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "$@66", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "$@67", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "$@68",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "$@69", "class_constant", 0
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
     214,   216,   217,   216,   218,   218,   218,   218,   219,   219,
     220,   221,   221,   222,   222,   223,   223,   224,   224,   225,
     225,   226,   226,   227,   227,   228,   228,   229,   229,   230,
     230,   230,   230,   231,   232,   231,   233,   231,   234,   234,
     235,   235,   236,   237,   236,   238,   239,   238,   240,   240,
     241,   241,   242,   242,   243,   243,   243,   243,   243,   243,
     243,   243,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   245,   245,   246,   246,   246,   246,   246,
     246,   247,   247,   248,   248,   248,   249,   249,   249,   249,
     250,   250,   252,   251,   251,   251,   253,   251,   254,   255,
     255,   256,   256,   257,   257,   258,   258,   259,   259,   260,
     261,   261,   262,   262,   263,   264,   264,   265,   265,   266,
     266,   267,   267,   268,   268,   269,   269,   270,   270,   270,
     270,   270,   270,   271,   271,   271,   271,   272,   272,   273,
     273,   274,   274,   276,   275,   275,   278,   277,   277,   277,
     279,   277,   280,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     281,   277,   282,   277,   283,   277,   284,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   285,   286,   277,   287,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     288,   277,   277,   277,   277,   277,   289,   277,   290,   277,
     291,   292,   292,   293,   293,   293,   293,   295,   294,   296,
     294,   297,   294,   298,   294,   299,   294,   300,   294,   301,
     294,   302,   294,   303,   303,   303,   303,   304,   304,   304,
     305,   305,   307,   308,   306,   306,   309,   309,   310,   311,
     311,   311,   312,   312,   312,   313,   313,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   315,
     315,   315,   315,   315,   315,   315,   315,   316,   317,   317,
     317,   317,   317,   317,   317,   317,   318,   318,   319,   319,
     320,   320,   320,   320,   321,   321,   322,   323,   324,   326,
     327,   325,   325,   328,   328,   330,   329,   331,   331,   333,
     332,   334,   334,   334,   335,   335,   336,   336,   337,   338,
     339,   338,   340,   340,   340,   341,   341,   341,   342,   342,
     342,   343,   343,   344,   344,   345,   346,   345,   347,   347,
     347,   348,   348,   349,   349,   350,   350,   351,   352,   351,
     351,   353,   353,   354,   354,   354,   354,   354,   354,   354,
     354,   355,   355,   355,   355,   356,   357,   356,   356,   356,
     356,   356,   358,   358,   358,   359,   359,   359,   359,   359,
     359,   359,   360,   361,   360,   362,   362
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
      10,     7,     0,     7,     1,     2,     1,     2,     0,     2,
       1,     0,     2,     0,     2,     1,     3,     0,     2,     1,
       2,     1,     4,     1,     4,     1,     4,     3,     5,     3,
       4,     4,     5,     0,     0,     6,     0,     5,     1,     1,
       1,     4,     0,     0,     7,     0,     0,     8,     0,     2,
       0,     3,     1,     0,     2,     3,     5,     4,     4,     5,
       7,     6,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     2,     3,     3,
       4,     3,     1,     1,     2,     4,     3,     5,     1,     3,
       2,     0,     0,     4,     2,     1,     0,     9,     3,     1,
       3,     1,     3,     0,     1,     1,     2,     2,     2,     3,
       1,     3,     1,     1,     3,     4,     3,     0,     1,     1,
       3,     1,     1,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     3,     5,     1,     3,     5,     4,     3,
       1,     0,     1,     0,     4,     1,     0,     7,     3,     4,
       0,     7,     0,     4,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       0,     4,     0,     4,     0,     4,     0,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     0,     0,     7,     0,     5,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       0,     3,     1,     4,     3,     2,     0,    10,     0,    11,
       1,     0,     4,     3,     4,     1,     2,     0,     5,     0,
       7,     0,     6,     0,     7,     0,     7,     0,     7,     0,
       7,     0,     5,     1,     1,     3,     2,     1,     3,     2,
       1,     1,     0,     0,     6,     1,     2,     0,     2,     0,
       2,     3,     0,     1,     1,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     1,
       1,     3,     2,     2,     2,     4,     1,     3,     1,     1,
       1,     3,     2,     1,     3,     3,     0,     2,     0,     1,
       5,     3,     3,     1,     1,     1,     1,     1,     1,     0,
       0,     7,     1,     2,     0,     0,     4,     4,     4,     0,
       4,     1,     1,     0,     1,     2,     3,     3,     1,     4,
       0,     5,     1,     1,     1,     1,     2,     1,     4,     4,
       1,     1,     4,     0,     1,     1,     0,     2,     4,     4,
       1,     1,     3,     1,     2,     3,     1,     1,     0,     5,
       0,     0,     2,     5,     3,     3,     1,     6,     4,     4,
       2,     2,     2,     1,     2,     1,     0,     5,     3,     3,
       6,     3,     1,     1,     1,     4,     4,     2,     2,     4,
       2,     2,     1,     0,     4,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   320,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   369,
       0,   377,   378,     6,   398,   451,    65,   379,     0,    46,
       0,     0,     0,    74,     0,     0,     0,     0,   330,     0,
       0,    77,     0,     0,     0,     0,     0,   353,     0,     0,
       0,     0,   104,   106,   110,     0,     0,   383,   384,   385,
     380,   381,     0,     0,   386,   382,     0,     0,    76,    29,
     463,   372,     0,   400,     4,     0,     8,    34,     9,    10,
      95,    96,     0,     0,   415,    97,   444,     0,   403,   322,
       0,   414,     0,   416,     0,   447,     0,   443,   422,   442,
     445,   450,     0,   309,   399,     6,   353,     0,    97,   501,
     500,     0,   498,   497,   325,   290,   291,   292,   293,     0,
     318,   315,   314,   313,   312,   311,   316,   317,   310,   353,
       0,     0,   354,     0,   269,   418,     0,   267,   254,     0,
       0,   354,   360,   252,   361,     0,   365,   445,     0,     0,
     319,     0,    35,     0,   240,     0,    43,   241,     0,     0,
       0,    55,     0,    57,     0,     0,     0,    59,   415,     0,
     416,     0,     0,     0,    21,     0,    20,   183,     0,     0,
     182,   107,   105,   188,     0,    97,     0,     0,     0,     0,
     246,   471,   485,     0,   388,     0,     0,     0,   483,     0,
      15,     0,   402,     0,    27,     0,   373,     0,   374,     0,
       0,     0,   337,     0,    18,   108,   102,    98,     0,     0,
       0,   274,     0,   276,   304,   270,   272,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,   268,   266,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   351,     0,   453,   419,   453,     0,   464,   446,
       0,     0,   321,     0,   356,     0,     0,     0,   356,     0,
     375,     0,   362,   446,   370,     0,     0,     0,    64,     0,
       0,     0,   242,   245,   415,   416,     0,     0,    56,    58,
      84,     0,    60,    61,    29,    83,    23,     0,     0,    17,
       0,   184,   416,     0,    62,     0,     0,    63,     0,     0,
      92,    94,   502,     0,     0,     0,   470,     0,   476,     0,
     408,   486,     0,   387,   484,   398,     0,     0,   482,   405,
     481,   401,     5,    12,    13,   341,   303,    36,     0,     0,
     324,   404,     7,   174,     0,     0,   113,   111,    99,   326,
     453,   505,   436,   434,     0,     0,   278,     0,   307,     0,
       0,     0,   279,   281,   280,   295,   294,   297,   296,   298,
     300,   301,   299,   289,   288,   283,   284,   282,   285,   286,
     287,   302,     0,   248,   265,   264,   263,   262,   261,   260,
     259,   258,   257,   256,   255,   174,   506,   437,   454,     0,
       0,     0,     0,   499,   355,     0,     0,   355,   436,   174,
     253,   437,     0,   371,    37,   239,     0,     0,    49,   243,
      71,    68,     0,     0,    53,     0,     0,     0,     0,     0,
       0,   390,     0,   389,    26,   396,    27,     0,    22,    19,
       0,   181,   189,   186,   328,     0,     0,   503,   495,   496,
      11,     0,   467,     0,   466,   480,   417,     0,   323,   409,
     472,     0,   488,     0,   489,   491,   339,     3,     5,   174,
       0,    28,    30,    31,    32,   452,     0,     0,   173,   415,
     416,     0,     0,     0,   357,   109,     0,     0,     0,     0,
       0,   162,     0,   343,   345,   435,   275,   277,     0,     0,
     271,   273,     0,   249,     0,   347,   349,   439,   461,     0,
     456,   420,   455,   460,   448,   449,     0,   363,    40,     0,
      47,    44,   241,     0,     0,     0,     0,     0,     0,     0,
     393,   394,   406,     0,     0,   392,     0,     0,    24,   185,
       0,   162,    93,    67,     0,   468,   470,     0,     0,   475,
       0,   474,   492,   494,   493,     0,     0,   174,    16,     3,
       0,     0,   177,   338,     0,    25,     0,   359,   114,   115,
     191,   112,   191,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,     0,   152,     0,   172,   441,   174,   174,
     308,   305,   250,   352,   174,   174,     0,   457,   433,   453,
       0,   376,   367,    29,    38,     0,     0,     0,   244,   117,
       0,   117,   119,   127,     0,    29,   125,    75,   133,   133,
      54,   413,     0,   408,   391,   397,     0,   187,     0,   504,
     470,   465,     0,   479,   478,     0,   487,     0,     0,    14,
     342,     0,     0,   415,   416,   358,     0,   223,   223,     0,
     331,   162,     0,   154,     0,     0,     0,   375,     0,     0,
     462,   429,   432,   431,   424,     0,     0,   364,    27,   142,
       0,    29,   140,    45,    50,     0,     0,   120,     0,     0,
      27,   133,     0,   133,     0,     0,   395,   409,   407,    78,
     331,     0,   247,     0,   473,   490,   340,    33,   180,   116,
       0,     0,   227,   228,   229,   232,   231,   230,   222,   101,
     190,   195,   192,     0,   221,   225,     0,   103,     0,     0,
       0,     0,   155,     0,   344,   346,   306,   251,   348,   350,
     174,   453,   453,   421,   458,   459,     0,   366,   145,   148,
       0,    27,   241,   118,    72,    69,   128,     0,     0,     0,
       0,     0,     0,   129,   412,   411,     0,     0,   469,   477,
       0,     0,   199,     0,    97,   226,     0,   194,    29,     0,
      29,     0,   158,     0,   157,     0,     0,     0,     0,   423,
     368,   150,     0,     0,    39,    48,     0,     0,     0,     0,
     126,     0,   131,     0,   138,   139,   136,   130,     0,    79,
      29,     0,     0,   201,   203,   198,   235,     0,     0,     0,
      27,     0,   335,     0,    27,   159,     0,   156,   430,   427,
     428,   425,     0,     0,     0,     0,   149,   141,    51,    29,
     123,    73,    70,   132,   134,    29,   410,     0,    27,   238,
     200,     6,     0,   204,   205,     0,     0,   213,     0,     0,
       0,     0,   193,   196,     0,   100,   336,     0,   332,   327,
       0,   161,   433,     0,    29,     0,     0,     0,    27,    29,
      27,     0,   329,   202,   206,   207,   217,     0,   208,     0,
     236,   233,     0,   237,     0,   333,   160,   426,     0,    27,
      42,   143,    29,   121,    52,     0,    27,    80,     0,   216,
     209,   210,   214,     0,   162,   334,     0,     0,    27,   124,
       0,   215,     0,   234,     0,   146,   144,     0,    29,   211,
       0,    29,   122,    27,   219,    29,   197,    27,    81,    27,
      86,   220,     0,    82,    85,    87,     0,    88,    89,     0,
       0,    90,     0,    29,    27,    91
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    83,    84,   488,   352,   185,   186,
      85,   214,   358,   491,   850,    87,   539,   689,   623,   758,
     300,   626,   165,   625,   542,   762,   887,   549,   545,   809,
     544,   808,   169,   181,   776,   857,   930,   950,   953,   954,
     955,   959,   962,   329,   330,    88,    89,   228,    90,   510,
      91,   367,    92,   366,    93,   509,   507,   588,   696,   631,
     914,   851,   637,   443,   640,   702,   889,   855,   816,   693,
     759,   927,   801,   941,   804,   844,   603,   604,   605,   497,
     498,   189,   190,   194,   667,   730,   783,   902,   731,   781,
     825,   862,   863,   864,   865,   920,   866,   867,   868,   918,
     946,   732,   733,   734,   735,   827,   736,   163,   301,   302,
     543,    94,   336,   677,   290,   380,   381,   375,   377,   379,
     676,   518,   129,   511,   561,   118,   740,   833,    96,   363,
     577,   489,   608,   609,   614,   615,   415,    97,   606,   153,
     154,   432,   622,   687,   757,   160,   217,   430,    98,   454,
     455,    99,   642,   480,   643,   179,   101,   475,   102,   103,
     420,   618,   753,   799,   882,   682,   683,   750,   684,   104,
     105,   106,   107,   229,   108,   109,   110,   111,   419,   531,
     617,   532,   533,   112,   473,   474,   650,   339,   340,   207,
     208,   481,   575,   113,   333,   564,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -717
static const yytype_int16 yypact[] =
{
    -717,    61,    83,  -717,  1642,  3912,  3912,   -65,  3912,  3912,
    3912,  3912,  3912,  3912,  3912,  -717,  3912,  3912,  3912,  3912,
    3912,  3912,  3912,  3912,  3912,   175,   175,  3912,   193,   -50,
     -45,  -717,  -717,   164,  -717,  -717,  -717,  -717,  3912,  -717,
      46,    58,    98,  -717,   108,  2615,  2733,   157,  -717,   200,
    2851,  -717,  3912,   -34,   -53,   156,   160,    10,   166,   187,
     191,   221,  -717,  -717,  -717,   242,   248,  -717,  -717,  -717,
    -717,  -717,   216,     8,  -717,  -717,   233,  3912,  -717,  -717,
     155,   158,   239,   -68,  -717,    19,  -717,  -717,  -717,  -717,
    -717,  -717,   291,   303,  -717,   386,   356,   274,  -717,  -717,
    4345,  -717,   289,  1274,   271,  -717,   286,   383,   345,  -717,
     -29,  -717,   -42,  -717,  -717,  -717,   372,   321,   386,  5068,
    5068,  3912,  5068,  5068,  5131,  -717,  -717,   425,  -717,  3912,
    -717,  -717,  -717,  -717,  -717,  -717,  -717,  -717,  -717,  -717,
     324,   233,   197,   332,  -717,  -717,   342,  -717,  -717,   343,
     233,   351,   358,  -717,  -717,   364,   393,   -33,   -42,  2969,
    -717,  3912,  -717,    23,  5068,  2476,  -717,  3912,  3912,   368,
    3912,  -717,  4386,  -717,  4439,   369,   521,  -717,   378,  5068,
      82,   384,  4480,   233,   118,    24,  -717,  -717,    87,    27,
    -717,  -717,  -717,   534,    28,   386,   175,   175,   175,   402,
    -717,  3087,    -4,   246,  -717,  4029,   175,   219,  -717,   233,
    -717,   142,   259,  4521,   389,  3912,   207,   399,   250,   207,
      73,   498,  -717,   500,  -717,   451,  -717,  -717,   -16,   514,
     -17,  -717,  3912,  -717,   552,  -717,  -717,  3912,  3912,  3912,
    3912,  3912,  3912,  3912,  3912,  3912,  3912,  3912,  3912,  3912,
    3912,  3912,  3912,  3912,  3912,  3912,   193,  -717,  -717,  -717,
    3205,  3912,  3912,  3912,  3912,  3912,  3912,  3912,  3912,  3912,
    3912,  3912,  -717,    40,  3912,  -717,  3912,  3912,   155,   -11,
     422,  4572,  -717,   233,   205,    64,    94,   233,   351,   -28,
     423,   -28,  -717,   -10,  -717,  4613,  4655,  3912,  -717,   505,
    3912,   431,   574,  5068,   492,  1155,   518,  4704,  -717,  -717,
    -717,  1121,  -717,  -717,  -717,  -717,   178,   519,   -34,  -717,
    3912,  -717,  -717,   -53,  -717,  1121,   520,  -717,   439,    12,
    -717,  -717,  -717,    33,   440,   438,   125,   175,  4919,   441,
     592,  -717,   533,  -717,  -717,   545,  1065,   449,  -717,  -717,
    -717,   339,  -717,  -717,  -717,  -717,  -717,  -717,  1781,  1628,
    -717,  -717,  -717,  3323,   604,    69,   494,   497,  -717,  -717,
    3912,   464,   465,   -10,   -42,  3912,  1379,  3912,  -717,  3912,
    3912,  3912,  1523,  2667,  2783,  2901,  2901,  2901,  2901,  1301,
    1301,  1301,  1301,   390,   390,   466,   466,   466,   425,   425,
     425,  -717,    65,  5131,  5131,  5131,  5131,  5131,  5131,  5131,
    5131,  5131,  5131,  5131,  5131,  3323,   467,   469,  5068,   458,
      -8,   463,  4169,  -717,   217,   464,   467,   351,  -717,  3323,
    -717,  -717,    -8,  -717,   605,  5068,   473,  4745,  -717,  -717,
    -717,  -717,   619,    34,  -717,  1121,  1121,   476,   -20,   478,
     233,   136,   484,  -717,  -717,  -717,   479,   566,  -717,  -717,
    4210,  -717,  -717,   631,  -717,   175,   486,  -717,  -717,  -717,
    -717,   490,  -717,    35,  -717,  -717,  -717,  3441,  -717,  3559,
    -717,   263,  -717,  3912,  -717,  -717,  -717,   482,  -717,  3323,
     491,  -717,  -717,  -717,  -717,  -717,   175,   501,   641,    36,
      56,  1121,   499,   233,   351,  -717,    69,   496,    69,   504,
     493,   251,   503,  -717,  -717,   -10,  5108,  5131,  3912,  5021,
    5176,  1455,   193,  -717,   507,  -717,  -717,  -717,  -717,  3912,
    -717,  -717,    -9,  -717,  -717,  -717,   508,  -717,  -717,  2476,
    -717,  -717,  3912,  3912,   175,    51,  1121,   585,  1920,    -5,
    -717,  -717,  1121,   512,   233,   170,   589,   563,  -717,  -717,
    1121,   251,  -717,  -717,   175,  -717,   125,   656,   175,  5068,
     175,  4968,  -717,  -717,  -717,   513,   420,  3323,  -717,   511,
     523,   525,  -717,  -717,  3677,  -717,   233,   351,   671,  -717,
    -717,   671,  -717,   251,  -717,  -717,  -717,  -717,  -717,  -717,
    -717,  -717,  -717,   526,   677,   186,  -717,  -717,  3323,  3323,
    5154,  -717,  -717,  -717,  3323,  3323,  4251,  -717,   529,  3912,
    3912,  -717,  -717,  -717,  -717,  3912,  2059,   528,  5068,   564,
     175,   564,  -717,  -717,   676,  -717,  -717,  -717,   532,   535,
    -717,   567,   537,   684,   189,  -717,   540,  -717,   542,  -717,
     125,  -717,  3912,  -717,  -717,  3795,  -717,   538,   543,  -717,
    -717,   539,   175,    37,  1025,   351,    69,   704,   800,   544,
     598,   630,   635,   692,   570,   575,  3912,   423,   577,   578,
    -717,  -717,   669,   675,  -717,   579,  4304,   614,   323,  -717,
    4787,  -717,  -717,  -717,  -717,    51,   582,  -717,   587,  1121,
     652,  -717,   428,  -717,   124,  1121,  -717,  1121,  -717,  -717,
     598,    38,  5131,   175,  5068,  -717,  -717,  -717,  -717,  -717,
     673,    69,  -717,  -717,  -717,  -717,  -717,  -717,  -717,  -717,
    -717,  -717,  -717,   372,   502,  -717,    29,  -717,   590,   595,
     593,   215,   734,  1121,  -717,  -717,  5154,  -717,  -717,  -717,
    3323,  3912,  3912,   629,  -717,  -717,    -8,  -717,  -717,   334,
     597,   682,  3912,  -717,  -717,  -717,  -717,   611,   436,   612,
    3912,    -3,   149,  -717,  -717,   646,    69,   613,  -717,  -717,
     764,    16,  -717,   706,   386,  -717,   705,  -717,  -717,   222,
    -717,   707,   766,  1121,  -717,   627,   622,   623,    -8,  -717,
    -717,   373,   632,  2476,  -717,  -717,   633,   636,  2198,  2198,
    -717,   639,  -717,  1578,  -717,  -717,  -717,  -717,  1121,  -717,
    -717,  1121,    69,  -717,   104,  -717,   777,    30,   718,   782,
     640,   725,  -717,    41,   642,   793,  1121,  -717,  -717,  -717,
    -717,  -717,   650,   783,   738,  3912,  -717,  -717,  -717,  -717,
    -717,  -717,  -717,  -717,  -717,  -717,  -717,   737,   660,  -717,
    -717,   730,   662,   104,  -717,   666,   735,   719,   670,   679,
    1121,   753,  -717,  -717,  1121,  -717,  -717,   252,  -717,  -717,
    1121,  -717,   529,  3912,  -717,   678,  4836,  2337,   746,  -717,
     318,   681,  -717,  -717,  -717,  -717,   392,    69,  -717,   767,
    -717,   828,   685,  -717,   768,  -717,  -717,  -717,  4877,   774,
    -717,  -717,  -717,  -717,  -717,   689,   328,  -717,   778,   779,
     842,  -717,  -717,  1121,   251,  -717,   827,  2476,   769,  -717,
     694,  -717,    69,  -717,   699,  -717,  -717,   700,  -717,  -717,
     405,  -717,  -717,   697,  -717,  -717,  -717,   489,  -717,   702,
     756,  -717,   709,  -717,   756,  -717,    69,  -717,  -717,   786,
     711,  -717,   714,  -717,   715,  -717
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -717,  -717,  -327,  -717,   -25,  -717,  -717,  -717,  -717,   549,
    -717,  -303,  -717,  -717,     1,  -717,  -717,  -717,  -717,  -717,
    -717,  -717,  -717,  -717,  -717,  -717,  -717,  -717,  -717,  -717,
    -717,  -717,  -717,  -717,  -717,  -717,  -717,  -717,  -717,  -717,
     -77,  -717,  -717,  -717,   413,   522,   524,  -108,  -717,  -717,
    -717,  -717,  -717,  -717,  -717,  -717,  -717,   371,   253,   188,
    -717,    76,  -717,  -717,  -717,  -385,  -717,  -717,    74,  -717,
    -717,  -717,  -717,  -717,  -717,  -717,  -553,  -717,   220,  -403,
    -717,  -717,   569,  -717,   294,  -717,  -717,  -717,  -717,  -717,
    -717,  -717,  -717,    31,  -717,  -717,  -717,  -717,  -717,  -717,
    -717,  -717,  -717,  -717,  -716,  -717,  -717,  -717,  -527,  -717,
    -717,   -21,  -717,  -717,  -717,  -717,  -717,  -717,  -717,  -717,
    -717,  -717,  -717,  -717,  -717,    -2,   180,  -717,  -717,  -717,
    -717,  -717,  -717,  -717,  -717,  -717,  -717,   808,  -349,  -243,
    -717,  -717,  -717,  -717,  -717,  -717,  -717,   218,  -217,   329,
    -717,  -717,  -717,   254,  -717,   703,   708,  -477,   541,   821,
    -717,  -717,  -717,  -717,  -717,  -717,  -717,  -717,    11,  -223,
    -717,   107,  -717,  -717,  -717,   -24,   -22,  -717,  -259,  -423,
    -717,  -717,  -717,   -14,   255,   336,  -717,  -717,  -717,   488,
     335,  -717,  -717,  -717,  -717,  -717,  -717
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -441
static const yytype_int16 yytable[] =
{
     142,   142,    95,   151,   156,    86,   157,   372,   648,   537,
     280,   456,   524,   401,   158,   627,   505,   421,   785,   582,
     465,   638,   187,   814,   822,   487,   536,   223,   184,   178,
     276,   297,   318,    35,   276,   323,   326,   786,   871,   115,
     669,   467,   547,   566,  -175,  -178,   566,    35,   211,   877,
     417,   212,   276,   276,   619,   195,   371,   368,    35,   341,
     553,     3,   372,   417,  -176,   528,   428,    35,   431,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   115,   630,    -2,  -354,   193,   580,   328,   221,   222,
     279,   653,   121,   654,   453,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   159,   453,   188,
      48,   512,   161,   416,   195,    35,   284,  -418,  -418,  -438,
     278,   342,   183,  -438,   115,   288,    35,   277,  -434,   204,
     522,   277,   146,   146,    80,   155,   293,   425,   115,    35,
      35,   369,   115,  -418,  -418,    80,  -435,   304,   202,   277,
     277,   620,   529,   348,    80,   639,   815,   589,   316,   589,
     115,   579,    35,   142,   209,   139,   299,   426,   210,    35,
     466,   142,   142,   142,   658,   823,   824,   861,   224,   139,
     919,   142,   298,   319,   351,   718,   324,   327,   787,   872,
     162,   468,   548,   567,  -175,  -178,   778,   530,   115,   878,
      35,   139,    80,   166,   140,   674,   675,   141,   373,   530,
     317,   678,   679,    80,  -176,   167,   374,   672,   140,   770,
     771,   141,   502,   205,   206,   503,    80,    80,   453,   453,
     175,   151,   156,   202,   157,   807,   779,   361,   216,   139,
     140,   313,   158,   141,   770,   771,   791,   320,   115,    80,
      35,   373,   471,   831,   704,   168,    80,   502,   424,   374,
     503,   673,   427,   373,   373,   170,   115,   373,    35,   373,
     457,   374,   374,   176,   221,   374,   191,   374,   140,   612,
     192,   141,   202,   904,   453,   773,   451,    80,  -354,   139,
     792,   202,   221,   184,   202,   146,   203,   832,   221,   348,
     451,   353,   354,   146,   146,   146,   115,   139,   205,   206,
     817,   142,   142,   146,   202,   215,   768,   719,   772,   219,
     688,   202,  -356,   196,   115,   202,   221,   905,   140,   453,
     348,   141,   700,   800,   221,   453,   572,    80,   573,   574,
     504,  -355,   499,   453,   197,   221,   149,   795,   198,   150,
     258,   259,   515,   221,   222,    80,    95,   205,   206,   492,
     685,   221,   355,   155,   225,   204,   205,   206,   349,   205,
     206,   934,   782,   221,   486,   841,   226,   142,   199,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   761,   205,
     206,   -41,   -41,   -41,   499,   343,   205,   206,   373,   200,
     205,   206,   802,   803,   502,   201,   374,   503,   499,  -153,
     373,  -356,  -137,  -137,  -137,   221,   355,   227,   374,  -440,
     451,   451,  -135,  -135,  -135,   555,   230,   819,   272,   231,
     232,   233,   250,   251,   252,   253,   254,   255,   273,   256,
     142,   842,   843,   146,   146,   234,   274,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   499,   256,
     275,   142,    48,   860,   256,   869,   451,   209,   587,  -137,
     283,   504,   453,   504,   285,   830,   504,   834,   453,  -135,
     453,  -355,   796,   797,   286,   221,   486,   151,   156,   287,
     157,   722,   723,   724,   725,   726,   727,   221,   158,   146,
     289,   253,   254,   255,   869,   256,   291,   858,   292,   142,
     142,   451,   769,   770,   771,   306,   453,   451,   310,   644,
     811,   770,   771,   530,   311,   451,   504,   312,   344,   142,
     624,   142,   350,   142,   314,   142,   888,   325,   921,   636,
     357,   344,   890,   350,   344,   350,   499,  -147,  -147,  -147,
     335,   665,   360,   663,   944,   945,   144,   147,   504,   218,
     220,   362,   146,   364,   365,   530,   453,   370,   378,   369,
     429,   909,   439,   939,   440,   657,   916,   499,   499,   436,
     438,   442,   458,   499,   499,   463,   464,   470,   469,   478,
     479,   453,  -224,   146,   453,   142,   482,   958,   483,   928,
     485,   722,   723,   724,   725,   726,   727,   501,   506,   453,
     508,   513,   514,   527,   525,   142,   526,   692,   534,   155,
     540,   538,   546,   552,   554,   943,   556,   142,   947,   558,
     557,   504,   949,   578,   560,   563,   504,   565,   581,   584,
     593,   146,   146,   453,   462,   586,   590,   453,   634,   583,
     964,   343,   645,   453,   592,   613,   621,   646,   607,   652,
     142,   146,   659,   146,   451,   146,   828,   146,   656,   666,
     451,   660,   451,   661,   670,   671,   681,   694,   142,   699,
     695,   701,   707,   705,   703,   706,   504,   709,   717,   715,
     710,   716,   738,   115,   739,   743,   453,   100,   119,   120,
     742,   122,   123,   124,   125,   126,   127,   128,   451,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   744,   499,
     148,   784,   751,   745,   373,   748,   749,   146,   752,   756,
     764,   164,   374,   767,   754,   765,   780,   793,   172,   174,
     788,   504,   789,   790,   798,   182,   805,   146,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   806,   451,   146,
     810,   812,   818,   820,   550,   551,   373,   821,   829,   836,
     213,   826,   835,   502,   374,   838,   503,   839,   840,   845,
     870,   873,   847,   451,   848,   874,   451,   504,   853,   504,
     876,   875,   146,   879,   846,   720,   880,   883,   885,   884,
     721,   451,   891,   722,   723,   724,   725,   726,   727,   728,
     146,   892,  -212,   893,   281,   895,   897,   896,   901,   898,
     585,   899,   282,   143,   143,   915,   152,   910,   504,   917,
     922,   923,   924,   925,  -151,   451,   145,   145,   929,   451,
     932,   931,  -218,   935,   938,   451,   937,   940,   948,   942,
     952,   960,   295,   951,   296,   729,   956,   459,   100,   961,
     303,   180,   504,   307,   963,   633,   965,   957,   562,   591,
     493,   641,   494,   763,   698,   852,   668,   854,   913,   647,
     777,   741,   461,   907,   894,   747,   321,   708,   451,   504,
       0,   720,   651,     0,   338,   711,   721,   504,   346,   722,
     723,   724,   725,   726,   727,   728,     0,     0,   359,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   936,     0,
       0,   504,     0,     0,     0,   376,     0,     0,     0,     0,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,     0,
       0,   737,     0,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,     0,     0,   418,     0,   418,
     422,     0,     0,     0,     0,     0,     0,     0,     0,   305,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
     435,     0,     0,   437,   143,   143,   143,     0,     0,   322,
       0,     0,     0,     0,   143,     0,     0,   331,   332,   334,
       0,     0,     0,   460,     0,     0,     0,   347,   766,     0,
       0,     0,     0,  -179,   774,     0,   775,     0,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,     0,   152,     0,     0,     0,     0,     0,
       0,     0,   794,   418,   231,   232,   233,     0,   516,     0,
     517,     0,   519,   520,   521,     0,  -418,  -418,     0,     0,
     234,     0,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,     0,   256,     0,     0,     0,     0,   452,
       0,     0,   837,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   452,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,   143,     0,   856,     0,     0,
     859,     0,     0,     0,     0,     0,     0,   472,   476,     0,
       0,     0,     0,   445,   446,   881,     0,     0,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     569,     0,   571,  -179,   500,     0,   576,     0,     0,     0,
       0,     0,    31,    32,   115,     0,     0,     0,     0,   900,
       0,     0,    37,   903,     0,     0,     0,     0,     0,   906,
     143,     0,     0,     0,     0,     0,  -418,  -418,     0,     0,
       0,   610,     0,   523,     0,     0,   484,     0,     0,     0,
       0,     0,   616,     0,     0,   139,   500,     0,     0,     0,
       0,     0,   100,     0,     0,   303,   628,   441,     0,   447,
     500,   100,   933,   452,   452,     0,     0,     0,    67,    68,
      69,    70,    71,     0,     0,     0,     0,     0,     0,   448,
       0,     0,     0,   143,   449,    74,    75,   450,     0,     0,
       0,     0,     0,     0,     0,     0,   331,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,     0,
       0,     0,     0,     0,   143,     0,     0,     0,     0,   452,
     500,     0,     0,     0,     0,     0,     0,   476,     0,     0,
       0,     0,   418,   686,     0,     0,     0,     0,   690,   100,
     152,     0,     0,     0,     0,  -418,  -418,  -441,  -441,  -441,
    -441,   248,   249,   250,   251,   252,   253,   254,   255,     0,
     256,     0,   143,   143,   452,   712,     0,     0,   714,     0,
     452,     0,     0,     0,     0,   629,   632,     0,   452,     0,
       0,     0,   143,     0,   143,     0,   143,     0,   143,   746,
       0,     0,     0,     0,     0,   649,     0,   472,     0,   476,
     233,   476,     0,     0,     0,     0,     0,     0,   500,     0,
       0,     0,     0,     0,   234,   664,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,     0,   256,   500,
     500,     0,     0,     0,     0,   500,   500,     0,   143,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   697,     0,     0,   418,   418,     0,     0,   143,     0,
       0,     0,     0,     0,     0,   303,     0,     0,     0,     0,
     143,   472,     0,   813,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   476,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   143,   256,     0,   100,   452,     0,     0,
       0,   100,   100,   452,     0,   452,   632,     0,     0,     0,
       0,   143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   476,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   886,     0,
       0,   452,     0,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   500,   256,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   908,   231,   232,   233,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   452,     0,   234,   814,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   452,   256,     0,   452,
     100,     0,     0,     0,     0,     0,     0,   231,   232,   233,
       0,     0,     0,     0,   452,     5,     6,     7,     8,     9,
       0,     0,     0,   234,    10,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,     0,   256,   452,     0,
       0,     0,   452,     0,    11,    12,     0,     0,   452,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,    29,    30,
       0,     0,     0,    31,    32,    33,    34,    35,     0,    36,
       0,     0,     0,    37,    38,    39,    40,     0,    41,     0,
      42,   452,    43,     0,     0,    44,     0,   815,     0,    45,
      46,    47,    48,    49,    50,    51,     0,    52,    53,     0,
      54,     0,     0,     0,    55,    56,    57,     0,    58,    59,
      60,    61,    62,    63,    64,     0,     0,     0,     0,    65,
      66,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,     5,     6,     7,     8,     9,   495,
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
     490,    62,    63,    64,     0,     0,     0,     0,    65,    66,
       0,     0,     0,     0,     0,     0,     0,     0,    67,    68,
      69,    70,    71,     5,     6,     7,     8,     9,     0,    72,
       0,     0,    10,     0,   117,    74,    75,    76,    77,     0,
      78,    79,     0,    80,    81,    82,   635,     0,     0,     0,
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
      79,     0,    80,    81,    82,   691,     0,     0,     0,     0,
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
       0,    80,    81,    82,   849,     0,     0,     0,     0,     0,
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
      80,    81,    82,   912,     0,     0,     0,     0,     0,     0,
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
      35,     0,     0,     0,     0,     0,    37,     0,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,    48,   256,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
       0,     0,    59,    60,     0,     0,     5,     6,     7,     8,
       9,     0,    65,    66,     0,    10,     0,     0,     0,     0,
       0,     0,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,     0,    72,     0,     0,     0,     0,   117,    74,
      75,    76,    77,     0,   171,    11,    12,    80,    81,    82,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,    28,    29,
       0,     0,     0,     0,    31,    32,   115,    34,    35,     0,
       0,     0,     0,     0,    37,   240,   241,   242,   243,   244,
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
       0,     0,    37,  -441,  -441,  -441,  -441,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,     0,
     256,    48,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,    72,   402,     0,     0,     0,
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
       0,     0,     0,    72,   496,     0,     0,     0,   117,    74,
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
       0,    72,   568,     0,     0,     0,   117,    74,    75,    76,
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
     570,     0,     0,     0,   117,    74,    75,    76,    77,     0,
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
      71,     0,     0,     0,     0,     0,     0,    72,   662,     0,
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
       0,     0,     0,     0,     0,    72,   713,     0,     0,     0,
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
     535,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,     0,   256,   231,   232,   233,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     234,   559,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,     0,   256,   231,   232,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   234,   680,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,     0,   256,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   231,   232,
     233,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   234,   755,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,     0,   256,   231,
     232,   233,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   257,   234,     0,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,     0,   256,
     231,   232,   233,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   308,   234,     0,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,     0,
     256,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   231,   232,   233,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   234,   309,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
       0,   256,   231,   232,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   234,   315,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,     0,   256,     0,   231,   232,   233,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   356,
     234,     0,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,     0,   256,     0,     0,     0,     0,     0,
       0,     0,     0,   231,   232,   233,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   234,
     423,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,     0,   256,   231,   232,   233,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     234,   433,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,     0,   256,     0,   231,   232,   233,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   234,   434,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,     0,   256,     0,     0,     0,
       0,     0,     0,     0,     0,   231,   232,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   234,   444,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,     0,   256,   231,   232,   233,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   234,   541,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,     0,   256,     0,   231,   232,
     233,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   234,   760,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,     0,   256,     0,
       0,     0,     0,     0,     0,     0,     0,   231,   232,   233,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   234,   911,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,     0,   256,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     231,   232,   233,     0,     0,   926,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   477,   234,   611,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,     0,
     256,     0,     0,     0,     0,     0,     0,   231,   232,   233,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   234,   655,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,     0,   256,   232,   233,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   234,     0,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   234,   256,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,     0,
     256,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,     0,   256,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,     0,   256
};

static const yytype_int16 yycheck[] =
{
      25,    26,     4,    28,    28,     4,    28,   230,   561,   432,
     118,   314,   415,   256,    28,   542,   365,   276,   734,   496,
       8,    26,    75,    26,     8,   352,   429,     8,    53,    50,
      63,     8,     8,    75,    63,     8,     8,     8,     8,    73,
     593,     8,     8,     8,     8,     8,     8,    75,    73,     8,
     273,    76,    63,    63,    63,    57,    73,    73,    75,    63,
      80,     0,   285,   286,     8,    73,   289,    75,   291,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    73,    31,     0,   152,    75,   489,   195,   156,   157,
     112,   568,   157,   570,   311,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   157,   325,   162,
     100,   370,   157,    73,   116,    75,   141,    61,    62,   152,
     162,   125,   156,   152,    73,   150,    75,   160,   157,   149,
      65,   160,    25,    26,   162,    28,   158,    73,    73,    75,
      75,   157,    73,    61,    62,   162,   157,   168,    75,   160,
     160,   160,   160,    80,   162,   160,   159,   506,   183,   508,
      73,   488,    75,   188,   156,   114,   165,    73,   160,    75,
     158,   196,   197,   198,   577,   159,   160,    73,   159,   114,
     896,   206,   159,   159,   209,   662,   159,   159,   159,   159,
      26,   158,   158,   158,   158,   158,   158,   420,    73,   158,
      75,   114,   162,   157,   153,   608,   609,   156,   230,   432,
      92,   614,   615,   162,   158,   157,   230,    31,   153,    95,
      96,   156,   153,   150,   151,   156,   162,   162,   445,   446,
      73,   256,   256,    75,   256,   762,   713,   164,    80,   114,
     153,   159,   256,   156,    95,    96,    31,   160,    73,   162,
      75,   273,   127,    31,   639,   157,   162,   153,   283,   273,
     156,    75,   287,   285,   286,   157,    73,   289,    75,   291,
      92,   285,   286,    73,   156,   289,   120,   291,   153,   522,
     120,   156,    75,    31,   501,   161,   311,   162,   152,   114,
      75,    75,   156,   318,    75,   188,    80,    75,   156,    80,
     325,   159,   160,   196,   197,   198,    73,   114,   150,   151,
     161,   336,   337,   206,    75,   160,   701,   666,   703,    80,
     623,    75,   152,   157,    73,    75,   156,    75,   153,   546,
      80,   156,   635,   756,   156,   552,    73,   162,    75,    76,
     365,   152,   363,   560,   157,   156,   153,   750,   157,   156,
      61,    62,   374,   156,   157,   162,   358,   150,   151,   358,
     619,   156,   157,   256,    73,   149,   150,   151,   149,   150,
     151,   924,   721,   156,   157,   798,    73,   402,   157,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   691,   150,
     151,    68,    69,    70,   415,   149,   150,   151,   420,   157,
     150,   151,    68,    69,   153,   157,   420,   156,   429,   158,
     432,   152,    94,    95,    96,   156,   157,    31,   432,    63,
     445,   446,    94,    95,    96,   450,   152,   776,   157,     9,
      10,    11,    42,    43,    44,    45,    46,    47,   152,    49,
     465,    68,    69,   336,   337,    25,    63,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   489,    49,
     125,   496,   100,   822,    49,   824,   501,   156,   503,   161,
     156,   506,   699,   508,   152,   788,   511,   790,   705,   161,
     707,   152,   751,   752,   152,   156,   157,   522,   522,   156,
     522,   109,   110,   111,   112,   113,   114,   156,   522,   402,
     152,    45,    46,    47,   863,    49,   152,   820,   125,   544,
     545,   546,    94,    95,    96,   157,   743,   552,   159,   554,
      94,    95,    96,   756,    13,   560,   561,   159,   203,   564,
     539,   566,   207,   568,   160,   570,   849,    13,   897,   548,
     161,   216,   855,   218,   219,   220,   577,    68,    69,    70,
     158,   586,   163,   584,   159,   160,    25,    26,   593,    81,
      82,    73,   465,    73,   123,   798,   793,    63,    26,   157,
     157,   884,     8,   932,    92,   165,   889,   608,   609,    84,
     159,    73,    73,   614,   615,    75,   157,   159,   158,   158,
       8,   818,   100,   496,   821,   630,    73,   956,    63,   912,
     161,   109,   110,   111,   112,   113,   114,    13,   124,   836,
     123,   157,   157,   165,   157,   650,   157,   626,   165,   522,
     157,    26,    13,   157,   156,   938,   152,   662,   941,    73,
     161,   666,   945,   161,    13,   159,   671,   157,   157,     8,
     157,   544,   545,   870,   325,   156,   160,   874,    73,   158,
     963,   149,    73,   880,   160,   158,   158,   104,   165,    13,
     695,   564,   161,   566,   699,   568,   784,   570,   165,     8,
     705,   158,   707,   158,   158,     8,   157,   159,   713,    13,
     126,   159,     8,   126,   159,   158,   721,   157,   159,   161,
     158,   158,   158,    73,   106,    13,   923,     4,     5,     6,
      75,     8,     9,    10,    11,    12,    13,    14,   743,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   158,   750,
      27,   733,    63,   158,   756,   158,   158,   630,    63,   125,
     158,    38,   756,    91,   165,   158,    73,    13,    45,    46,
     160,   776,   157,   160,   125,    52,   159,   650,   128,   129,
     130,   131,   132,   133,   134,   135,   136,    85,   793,   662,
     159,   159,   126,   160,   445,   446,   798,    13,    73,    13,
      77,    75,    75,   153,   798,   158,   156,   165,   165,   157,
      13,    73,   159,   818,   158,    13,   821,   822,   159,   824,
      75,   161,   695,   161,   803,   101,    13,   157,    70,    26,
     106,   836,    75,   109,   110,   111,   112,   113,   114,   115,
     713,   161,    92,   161,   121,   159,   107,    92,    75,   159,
     501,   152,   129,    25,    26,    89,    28,   159,   863,   158,
      73,    13,   157,    75,    70,   870,    25,    26,   159,   874,
       8,    73,    73,    26,   160,   880,    87,   158,   161,   159,
     104,    75,   159,   161,   161,   161,   157,   318,   165,   158,
     167,    50,   897,   170,   160,   546,   161,   954,   465,   508,
     358,   552,   358,   695,   631,   809,   592,   813,   887,   560,
     710,   671,   323,   882,   863,   677,   188,   643,   923,   924,
      -1,   101,   566,    -1,   201,   650,   106,   932,   205,   109,
     110,   111,   112,   113,   114,   115,    -1,    -1,   215,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   927,    -1,
      -1,   956,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,    -1,
      -1,   161,    -1,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,    -1,    -1,   274,    -1,   276,
     277,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   168,
      -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,    -1,
     297,    -1,    -1,   300,   196,   197,   198,    -1,    -1,   188,
      -1,    -1,    -1,    -1,   206,    -1,    -1,   196,   197,   198,
      -1,    -1,    -1,   320,    -1,    -1,    -1,   206,   699,    -1,
      -1,    -1,    -1,     8,   705,    -1,   707,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   358,    -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   743,   370,     9,    10,    11,    -1,   375,    -1,
     377,    -1,   379,   380,   381,    -1,    61,    62,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,   311,
      -1,    -1,   793,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   325,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   336,   337,    -1,   818,    -1,    -1,
     821,    -1,    -1,    -1,    -1,    -1,    -1,   336,   337,    -1,
      -1,    -1,    -1,    42,    43,   836,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
     477,    -1,   479,   158,   363,    -1,   483,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    -1,    -1,    -1,    -1,   870,
      -1,    -1,    81,   874,    -1,    -1,    -1,    -1,    -1,   880,
     402,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,   518,    -1,   402,    -1,    -1,   161,    -1,    -1,    -1,
      -1,    -1,   529,    -1,    -1,   114,   415,    -1,    -1,    -1,
      -1,    -1,   539,    -1,    -1,   542,   543,    92,    -1,   128,
     429,   548,   923,   445,   446,    -1,    -1,    -1,   137,   138,
     139,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    -1,   465,   153,   154,   155,   156,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   465,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,   496,    -1,    -1,    -1,    -1,   501,
     489,    -1,    -1,    -1,    -1,    -1,    -1,   496,    -1,    -1,
      -1,    -1,   619,   620,    -1,    -1,    -1,    -1,   625,   626,
     522,    -1,    -1,    -1,    -1,    61,    62,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,   544,   545,   546,   652,    -1,    -1,   655,    -1,
     552,    -1,    -1,    -1,    -1,   544,   545,    -1,   560,    -1,
      -1,    -1,   564,    -1,   566,    -1,   568,    -1,   570,   676,
      -1,    -1,    -1,    -1,    -1,   564,    -1,   566,    -1,   568,
      11,   570,    -1,    -1,    -1,    -1,    -1,    -1,   577,    -1,
      -1,    -1,    -1,    -1,    25,   584,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,   608,
     609,    -1,    -1,    -1,    -1,   614,   615,    -1,   630,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   630,    -1,    -1,   751,   752,    -1,    -1,   650,    -1,
      -1,    -1,    -1,    -1,    -1,   762,    -1,    -1,    -1,    -1,
     662,   650,    -1,   770,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   662,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,   695,    49,    -1,   803,   699,    -1,    -1,
      -1,   808,   809,   705,    -1,   707,   695,    -1,    -1,    -1,
      -1,   713,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   713,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   845,    -1,
      -1,   743,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,   750,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   883,     9,    10,    11,
     887,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   793,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,   818,    49,    -1,   821,
     927,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,   836,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    25,    12,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,   870,    -1,
      -1,    -1,   874,    -1,    42,    43,    -1,    -1,   880,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    77,
      -1,    -1,    -1,    81,    82,    83,    84,    -1,    86,    -1,
      88,   923,    90,    -1,    -1,    93,    -1,   159,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,   105,   106,    -1,
     108,    -1,    -1,    -1,   112,   113,   114,    -1,   116,   117,
     118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
     138,   139,   140,   141,     3,     4,     5,     6,     7,   161,
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
      75,    -1,    -1,    -1,    -1,    -1,    81,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   100,    49,    -1,    -1,    -1,
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
      -1,    -1,    81,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   161,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   159,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   159,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     158,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   158,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   158,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   158,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   158,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   158,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   158,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    10,    11,    -1,    -1,   158,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   126,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   126,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    25,    49,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49
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
     214,   216,   218,   220,   277,   291,   294,   303,   314,   317,
     321,   322,   324,   325,   335,   336,   337,   338,   340,   341,
     342,   343,   349,   359,   362,    73,   114,   153,   291,   321,
     321,   157,   321,   321,   321,   321,   321,   321,   321,   288,
     321,   321,   321,   321,   321,   321,   321,   321,   321,   114,
     153,   156,   170,   303,   324,   325,   337,   324,   321,   153,
     156,   170,   303,   305,   306,   337,   341,   342,   349,   157,
     311,   157,    26,   273,   321,   188,   157,   157,   157,   198,
     157,   159,   321,   159,   321,    73,    73,   159,   277,   321,
     325,   199,   321,   156,   170,   174,   175,    75,   162,   247,
     248,   120,   120,    75,   249,   291,   157,   157,   157,   157,
     157,   157,    75,    80,   149,   150,   151,   355,   356,   156,
     160,   170,   170,   321,   177,   160,    80,   312,   355,    80,
     355,   156,   157,     8,   159,    73,    73,    31,   213,   339,
     152,     9,    10,    11,    25,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    49,   159,    61,    62,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   157,   152,    63,   125,    63,   160,   162,   342,
     213,   321,   321,   156,   170,   152,   152,   156,   170,   152,
     280,   152,   125,   342,   158,   321,   321,     8,   159,   180,
     186,   274,   275,   321,   277,   325,   157,   321,   159,   159,
     159,    13,   159,   159,   160,   159,   170,    92,     8,   159,
     160,   322,   325,     8,   159,    13,     8,   159,   213,   209,
     210,   325,   325,   360,   325,   158,   278,    31,   321,   353,
     354,    63,   125,   149,   356,    74,   321,   325,    80,   149,
     356,   170,   173,   159,   160,   157,   158,   161,   178,   321,
     163,   164,    73,   295,    73,   123,   219,   217,    73,   157,
      63,    73,   335,   342,   349,   283,   321,   284,    26,   285,
     281,   282,   321,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   321,   321,
     321,   305,    31,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   302,    73,   335,   321,   344,
     326,   344,   321,   158,   170,    73,    73,   170,   335,   157,
     313,   335,   307,   158,   158,   321,    84,   321,   159,     8,
      92,    92,    73,   229,   158,    42,    43,   128,   148,   153,
     156,   170,   303,   314,   315,   316,   177,    92,    73,   175,
     321,   248,   315,    75,   157,     8,   158,     8,   158,   158,
     159,   127,   325,   350,   351,   323,   325,   126,   158,     8,
     319,   357,    73,    63,   161,   161,   157,   168,   172,   297,
     119,   179,   180,   211,   212,   161,    31,   245,   246,   277,
     325,    13,   153,   156,   170,   304,   124,   222,   123,   221,
     215,   289,   344,   157,   157,   342,   321,   321,   287,   321,
     321,   321,    65,   325,   245,   157,   157,   165,    73,   160,
     335,   345,   347,   348,   165,   161,   245,   345,    26,   182,
     157,   158,   190,   276,   196,   194,    13,     8,   158,   193,
     315,   315,   157,    80,   156,   170,   152,   161,    73,   161,
      13,   290,   210,   159,   361,   157,     8,   158,    31,   321,
      31,   321,    73,    75,    76,   358,   321,   296,   161,   168,
     245,   157,   323,   158,     8,   315,   156,   170,   223,   304,
     160,   223,   160,   157,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   242,   243,   244,   304,   165,   298,   299,
     321,    26,   305,   158,   300,   301,   321,   346,   327,    63,
     160,   158,   308,   184,   180,   189,   187,   274,   321,   325,
      31,   225,   325,   315,    73,    26,   180,   228,    26,   160,
     230,   315,   318,   320,   170,    73,   104,   315,   242,   325,
     352,   351,    13,   323,   323,   126,   165,   165,   245,   161,
     158,   158,    31,   277,   325,   170,     8,   250,   250,   242,
     158,     8,    31,    75,   245,   245,   286,   279,   245,   245,
     161,   157,   331,   332,   334,   344,   321,   309,   177,   183,
     321,    26,   180,   235,   159,   126,   224,   325,   224,    13,
     177,   159,   231,   159,   231,   126,   158,     8,   319,   157,
     158,   350,   321,    31,   321,   161,   158,   159,   323,   304,
     101,   106,   109,   110,   111,   112,   113,   114,   115,   161,
     251,   254,   267,   268,   269,   270,   272,   161,   158,   106,
     292,   244,    75,    13,   158,   158,   321,   313,   158,   158,
     333,    63,    63,   328,   165,   161,   125,   310,   185,   236,
     158,   177,   191,   225,   158,   158,   315,    91,   231,    94,
      95,    96,   231,   161,   315,   315,   200,   292,   158,   323,
      73,   255,   304,   252,   291,   270,     8,   159,   160,   157,
     160,    31,    75,    13,   315,   245,   344,   344,   125,   329,
     345,   238,    68,    69,   240,   159,    85,   274,   197,   195,
     159,    94,   159,   321,    26,   159,   234,   161,   126,   304,
     160,    13,     8,   159,   160,   256,    75,   271,   213,    73,
     177,    31,    75,   293,   177,    75,    13,   315,   158,   165,
     165,   345,    68,    69,   241,   157,   180,   159,   158,    26,
     180,   227,   227,   159,   234,   233,   315,   201,   177,   315,
     304,    73,   257,   258,   259,   260,   262,   263,   264,   304,
      13,     8,   159,    73,    13,   161,    75,     8,   158,   161,
      13,   315,   330,   157,    26,    70,   321,   192,   177,   232,
     177,    75,   161,   161,   259,   159,    92,   107,   159,   152,
     315,    75,   253,   315,    31,    75,   315,   334,   321,   177,
     159,   158,    26,   180,   226,    89,   177,   158,   265,   270,
     261,   304,    73,    13,   157,    75,   158,   237,   177,   159,
     202,    73,     8,   315,   242,    26,   180,    87,   160,   304,
     158,   239,   159,   177,   159,   160,   266,   177,   161,   177,
     203,   161,   104,   204,   205,   206,   157,   206,   304,   207,
      75,   158,   208,   160,   177,   161
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

    {printf("%s %s\n",(yyvsp[(1) - (7)]) (yyvsp[(2) - (7)]));;}
    break;

  case 102:

    {;}
    break;

  case 103:

    {;}
    break;

  case 104:

    {printf("class entry type:%s\n",(yyvsp[(1) - (1)]));;}
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

  case 109:

    {;}
    break;

  case 110:

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

  case 119:

    {;}
    break;

  case 120:

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

  case 136:

    {;}
    break;

  case 137:

    {;}
    break;

  case 143:

    {;}
    break;

  case 144:

    {;}
    break;

  case 146:

    {;}
    break;

  case 147:

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

  case 188:

    {;}
    break;

  case 189:

    {;}
    break;

  case 192:

    {;}
    break;

  case 196:

    {;}
    break;

  case 197:

    {;}
    break;

  case 199:

    {;}
    break;

  case 200:

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

    {;}
    break;

  case 219:

    {;}
    break;

  case 220:

    { ;}
    break;

  case 221:

    {;}
    break;

  case 222:

    {;}
    break;

  case 223:

    {;}
    break;

  case 224:

    { ;}
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

    { ;}
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

    {;}
    break;

  case 289:

    {;}
    break;

  case 290:

    {  ;}
    break;

  case 291:

    {  ;}
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

  case 329:

    {;}
    break;

  case 330:

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

    {;}
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

    {;}
    break;

  case 352:

    { ;}
    break;

  case 353:

    { ;}
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

  case 364:

    {;}
    break;

  case 365:

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

  case 406:

    {;}
    break;

  case 407:

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

    {;}
    break;

  case 416:

    {;}
    break;

  case 417:

    {  ;}
    break;

  case 418:

    {  ;}
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

    {;}
    break;

  case 456:

    {;}
    break;

  case 457:

    { ;}
    break;

  case 458:

    {;}
    break;

  case 459:

    {;}
    break;

  case 460:

    { ;}
    break;

  case 461:

    {;}
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

  case 505:

    {;}
    break;

  case 506:

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

