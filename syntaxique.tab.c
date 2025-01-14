
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

/* Line 189 of yacc.c  */
#line 1 "syntaxique.y"

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "ts.h"
#include "quad.h"
extern int yylex(); // Declare the lexer function
extern int yylineno; // Declare the line number variable if used

int nb_line=1;
int nb_character=0;
char *file_name;
char typeIDF[20];
char savet[20];
char para[20];
char pas[20];

char i[20];
int deb_else;
int fin_if;
int fin_for;
int deb_for;
int qc;

char partie1_1[20];
char partie2_1[20];
char partie1_2[20];
char partie2_2[20];
char index_start_for[20];
char ch[20];
char cat[20];
int tmp=0;
char temp[20];

char tab[20];



/* Line 189 of yacc.c  */
#line 112 "syntaxique.tab.c"

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
     plus = 258,
     minus = 259,
     mul = 260,
     divi = 261,
     aff = 262,
     pvg = 263,
     po = 264,
     pf = 265,
     pt = 266,
     vg = 267,
     dp = 268,
     kwVAR_GLOBAL = 269,
     kwDECLARATION = 270,
     kwCONST = 271,
     kwINSTRUCTION = 272,
     kwINTEGER = 273,
     kwFLOAT = 274,
     kwCHARACTER = 275,
     kwREAD = 276,
     kwWRITE = 277,
     kwIF = 278,
     kwFOR = 279,
     kwELSE = 280,
     kwENDIF = 281,
     kwOR = 282,
     kwAND = 283,
     kwGT = 284,
     kwGE = 285,
     kwEQ = 286,
     kwLE = 287,
     kwLT = 288,
     kwNE = 289,
     integer = 290,
     real = 291,
     character = 292,
     idf = 293,
     boolean = 294,
     ao = 295,
     af = 296,
     co = 297,
     cf = 298
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 39 "syntaxique.y"

    char* str;



/* Line 214 of yacc.c  */
#line 197 "syntaxique.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 209 "syntaxique.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   206

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNRULES -- Number of states.  */
#define YYNSTATES  169

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    14,    17,    20,    23,    24,    26,
      28,    30,    37,    42,    49,    57,    59,    61,    62,    66,
      72,    79,    82,    83,    86,    89,    92,    94,    96,   100,
     107,   114,   118,   122,   126,   130,   134,   136,   141,   143,
     145,   147,   149,   153,   155,   157,   160,   165,   168,   173,
     179,   184,   189,   195,   201,   207,   211,   213,   215,   217,
     219,   221,   223,   225,   227,   236,   241,   243,   248,   253,
     258,   263,   266,   268,   272,   277
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    14,    40,    47,    41,    46,    -1,    17,
      40,    55,    41,    -1,    50,    47,    -1,    51,    47,    -1,
      49,    47,    -1,    -1,    18,    -1,    19,    -1,    20,    -1,
      16,    48,    38,     7,    58,     8,    -1,    48,    38,    52,
       8,    -1,    48,    38,     7,    58,    52,     8,    -1,    48,
      38,    42,    35,    43,    52,     8,    -1,    53,    -1,    54,
      -1,    -1,    12,    38,    52,    -1,    12,    38,     7,    58,
      52,    -1,    12,    38,     9,    35,    10,    52,    -1,    56,
      55,    -1,    -1,    71,     8,    -1,    72,     8,    -1,    57,
       8,    -1,    64,    -1,    69,    -1,    38,     7,    58,    -1,
      38,    42,    59,    43,     7,    58,    -1,    38,    42,    59,
      43,     7,    37,    -1,    38,     7,    37,    -1,    58,     3,
      58,    -1,    58,     4,    58,    -1,    58,     5,    58,    -1,
      58,     6,    58,    -1,    38,    -1,    38,    42,    59,    43,
      -1,    36,    -1,    35,    -1,    39,    -1,    37,    -1,     9,
      58,    10,    -1,    38,    -1,    35,    -1,    23,    65,    -1,
      60,    40,    55,    41,    -1,    23,    58,    -1,    62,    40,
      55,    41,    -1,    61,    25,    40,    55,    41,    -1,    60,
      40,    55,    41,    -1,    62,    40,    55,    41,    -1,    63,
      25,    40,    55,    41,    -1,     9,    58,    67,    58,    10,
      -1,     9,    65,    66,    65,    10,    -1,     9,    65,    10,
      -1,    28,    -1,    27,    -1,    29,    -1,    30,    -1,    31,
      -1,    32,    -1,    33,    -1,    34,    -1,    24,     9,    57,
      13,    59,    13,    59,    10,    -1,    68,    40,    55,    41,
      -1,    38,    -1,    38,    42,    59,    43,    -1,    21,     9,
      70,    10,    -1,    22,     9,    73,    10,    -1,    22,     9,
      70,    10,    -1,    37,    74,    -1,    37,    -1,    70,    12,
      73,    -1,    12,    70,    12,    73,    -1,    12,    70,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    62,    62,    65,    68,    69,    70,    71,    74,    75,
      76,    79,   100,   109,   131,   150,   151,   152,   155,   165,
     191,   208,   209,   212,   213,   214,   215,   216,   219,   249,
     281,   309,   332,   356,   379,   403,   424,   437,   457,   463,
     469,   475,   481,   487,   501,   511,   519,   528,   541,   550,
     555,   560,   565,   572,   588,   595,   601,   602,   605,   606,
     607,   608,   609,   610,   613,   627,   639,   648,   659,   662,
     666,   672,   678,   682,   690,   696
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "plus", "minus", "mul", "divi", "aff",
  "pvg", "po", "pf", "pt", "vg", "dp", "kwVAR_GLOBAL", "kwDECLARATION",
  "kwCONST", "kwINSTRUCTION", "kwINTEGER", "kwFLOAT", "kwCHARACTER",
  "kwREAD", "kwWRITE", "kwIF", "kwFOR", "kwELSE", "kwENDIF", "kwOR",
  "kwAND", "kwGT", "kwGE", "kwEQ", "kwLE", "kwLT", "kwNE", "integer",
  "real", "character", "idf", "boolean", "ao", "af", "co", "cf", "$accept",
  "CODE", "MAIN", "DEC", "TYPE", "DECCONST", "DECSOLO", "DECTAB",
  "LISTVAR", "LISTVARSOLO", "LISTVARTAB", "INST", "INSTS", "AFFECTATION",
  "EXPRESSION", "INDEX", "R2_1_CONTROLE", "R1_2_CONTROLE", "R3_1_CONTROLE",
  "R4_2_CONTROLE", "CONTROLE", "CONDITION", "OPLOG", "OPCOMP",
  "BOUCLECOND", "BOUCLE", "MEMBREIDF", "ENTREE", "SORTIE", "MESSAGE",
  "MESSAGEIDF", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    47,    47,    47,    47,    48,    48,
      48,    49,    50,    50,    51,    52,    52,    52,    53,    53,
      54,    55,    55,    56,    56,    56,    56,    56,    57,    57,
      57,    57,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    59,    59,    60,    61,    62,    63,    64,
      64,    64,    64,    65,    65,    65,    66,    66,    67,    67,
      67,    67,    67,    67,    68,    69,    70,    70,    71,    72,
      72,    73,    73,    73,    74,    74
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     4,     2,     2,     2,     0,     1,     1,
       1,     6,     4,     6,     7,     1,     1,     0,     3,     5,
       6,     2,     0,     2,     2,     2,     1,     1,     3,     6,
       6,     3,     3,     3,     3,     3,     1,     4,     1,     1,
       1,     1,     3,     1,     1,     2,     4,     2,     4,     5,
       4,     4,     5,     5,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     8,     4,     1,     4,     4,     4,
       4,     2,     1,     3,     4,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     7,     1,     0,     8,     9,    10,     0,
       0,     7,     7,     7,     0,     0,    17,     6,     4,     5,
       0,     0,     2,     0,     0,     0,     0,    15,    16,     0,
      22,     0,    39,    38,    41,    36,    40,    17,    17,     0,
      12,     0,     0,     0,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,    17,
      11,     0,     0,     0,    47,    45,     0,     0,     0,     3,
      21,    25,    22,     0,    22,     0,    22,    23,    24,    42,
      44,    43,     0,    32,    33,    34,    35,    13,    17,     0,
       0,    66,     0,    72,     0,     0,     0,     0,     0,    41,
      28,     0,     0,    22,     0,    22,     0,    37,    19,    17,
      14,     0,    68,     0,    71,    70,     0,    69,    58,    59,
      60,    61,    62,    63,     0,    55,    57,    56,     0,     0,
       0,    50,     0,    51,     0,    65,    20,     0,    75,     0,
      73,     0,     0,     0,     0,     0,    49,    52,    67,     0,
      53,     0,    54,     0,    41,    29,    74,     0,    64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    22,     9,    10,    11,    12,    13,    26,    27,
      28,    47,    48,    49,    37,    92,    50,    51,    52,    53,
      54,   107,   138,   134,    55,    56,   149,    57,    58,   105,
     124
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -121
static const yytype_int16 yypact[] =
{
       2,   -18,    30,   125,  -121,    84,  -121,  -121,  -121,    -3,
       4,   125,   125,   125,    41,    68,     5,  -121,  -121,  -121,
      87,    56,  -121,    31,    74,    97,   145,  -121,  -121,    31,
      35,    31,  -121,  -121,  -121,   113,  -121,    72,   126,   111,
    -121,    15,   147,   148,    54,   149,     7,   118,    35,   152,
     121,   137,   127,   138,  -121,   128,  -121,   156,   157,   115,
     -25,    31,    31,    31,    31,   158,    31,   135,  -121,   159,
    -121,   131,    24,    54,   143,  -121,   136,    62,   -25,  -121,
    -121,  -121,    35,   132,    35,   133,    35,  -121,  -121,  -121,
    -121,  -121,   140,   134,   134,  -121,  -121,  -121,    72,   165,
     168,   142,   167,   166,   112,   169,    21,     1,   172,   123,
     143,   144,   141,    35,   150,    35,   151,  -121,  -121,   159,
    -121,   -25,  -121,   131,  -121,  -121,    24,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,    31,  -121,  -121,  -121,   171,   -25,
     174,   161,   153,   163,   154,  -121,  -121,   146,   178,   181,
    -121,   124,    54,   186,   184,    78,  -121,  -121,  -121,    24,
    -121,    77,  -121,   -25,   129,   143,  -121,   188,  -121
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -121,  -121,  -121,   139,   194,  -121,  -121,  -121,   -33,  -121,
    -121,   -41,  -121,   130,   -29,   -75,  -121,  -121,  -121,  -121,
    -121,   -43,  -121,  -121,  -121,  -121,   -63,  -121,  -121,  -120,
    -121
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -49
static const yytype_int16 yytable[] =
{
      41,    75,    59,   111,    65,    68,   150,    80,   102,   104,
      90,   135,    23,    91,    77,    74,     1,    24,    61,    62,
      63,    64,     3,    70,    61,    62,    63,    64,   136,   137,
       4,    89,    93,    94,    95,    96,   100,    98,    15,   166,
      31,   112,    16,   114,   106,   116,   147,    25,   110,    78,
     128,   129,   130,   131,   132,   133,    42,    43,    44,    45,
     148,   103,   101,    73,   154,   118,    32,    33,    34,    35,
      36,    31,   142,    46,   144,    61,    62,    63,    64,    20,
      61,    62,    63,    64,    24,    21,   146,    31,   167,    32,
      33,    34,    35,    36,    29,   153,    30,    32,    33,   109,
      35,    36,     6,     7,     8,   151,   128,   129,   130,   131,
     132,   133,    38,    32,    33,   164,    35,    36,    61,    62,
      63,    64,   125,   161,   126,    89,   165,    61,    62,    63,
      64,   -31,    39,    66,   160,    67,   -31,   -30,    24,    63,
      64,     5,   -30,     6,     7,     8,    61,    62,    63,    64,
      17,    18,    19,    40,    69,    60,    71,    72,    76,    79,
      81,    82,    83,    85,    87,    88,    97,    84,    86,   101,
      99,    24,   113,   115,    46,   119,   120,   122,   123,   127,
     152,   155,   141,   117,   121,   139,   -46,   140,   -48,   158,
     159,   143,   145,   126,   156,   157,   162,   163,   168,    14,
       0,     0,     0,     0,     0,     0,   108
};

static const yytype_int16 yycheck[] =
{
      29,    44,    31,    78,    37,    38,   126,    48,    71,    72,
      35,    10,     7,    38,     7,    44,    14,    12,     3,     4,
       5,     6,    40,     8,     3,     4,     5,     6,    27,    28,
       0,    10,    61,    62,    63,    64,    69,    66,    41,   159,
       9,    82,    38,    84,    73,    86,   121,    42,    77,    42,
      29,    30,    31,    32,    33,    34,    21,    22,    23,    24,
     123,    37,    38,     9,   139,    98,    35,    36,    37,    38,
      39,     9,   113,    38,   115,     3,     4,     5,     6,    38,
       3,     4,     5,     6,    12,    17,   119,     9,   163,    35,
      36,    37,    38,    39,     7,   138,    40,    35,    36,    37,
      38,    39,    18,    19,    20,   134,    29,    30,    31,    32,
      33,    34,    38,    35,    36,    37,    38,    39,     3,     4,
       5,     6,    10,   152,    12,    10,   155,     3,     4,     5,
       6,     8,    35,     7,    10,     9,    13,     8,    12,     5,
       6,    16,    13,    18,    19,    20,     3,     4,     5,     6,
      11,    12,    13,     8,    43,    42,     9,     9,     9,    41,
       8,    40,    25,    25,     8,     8,     8,    40,    40,    38,
      35,    12,    40,    40,    38,    10,     8,    10,    12,    10,
       9,     7,    41,    43,    42,    13,    25,    43,    25,    43,
      12,    41,    41,    12,    41,    41,    10,    13,    10,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    76
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    45,    40,     0,    16,    18,    19,    20,    47,
      48,    49,    50,    51,    48,    41,    38,    47,    47,    47,
      38,    17,    46,     7,    12,    42,    52,    53,    54,     7,
      40,     9,    35,    36,    37,    38,    39,    58,    38,    35,
       8,    58,    21,    22,    23,    24,    38,    55,    56,    57,
      60,    61,    62,    63,    64,    68,    69,    71,    72,    58,
      42,     3,     4,     5,     6,    52,     7,     9,    52,    43,
       8,     9,     9,     9,    58,    65,     9,     7,    42,    41,
      55,     8,    40,    25,    40,    25,    40,     8,     8,    10,
      35,    38,    59,    58,    58,    58,    58,     8,    58,    35,
      52,    38,    70,    37,    70,    73,    58,    65,    57,    37,
      58,    59,    55,    40,    55,    40,    55,    43,    52,    10,
       8,    42,    10,    12,    74,    10,    12,    10,    29,    30,
      31,    32,    33,    34,    67,    10,    27,    28,    66,    13,
      43,    41,    55,    41,    55,    41,    52,    59,    70,    70,
      73,    58,     9,    65,    59,     7,    41,    41,    43,    12,
      10,    58,    10,    13,    37,    58,    73,    59,    10
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

/* Line 1455 of yacc.c  */
#line 62 "syntaxique.y"
    {printf("\n\nCode correct!\n\n"); YYACCEPT;;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 65 "syntaxique.y"
    { printf("\n\n declaration main correct!\n\n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 74 "syntaxique.y"
    {(yyval.str)=strdup((yyvsp[(1) - (1)].str));strcpy(savet,(yyvsp[(1) - (1)].str));;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 75 "syntaxique.y"
    {(yyval.str)=strdup((yyvsp[(1) - (1)].str));strcpy(savet,(yyvsp[(1) - (1)].str));;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 76 "syntaxique.y"
    {(yyval.str)=strdup((yyvsp[(1) - (1)].str));strcpy(savet,(yyvsp[(1) - (1)].str));;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 80 "syntaxique.y"
    {
                diviserChaine((yyvsp[(5) - (6)].str),partie1_1,partie1_2);
                if (idf_existe((yyvsp[(3) - (6)].str),"Variable") || idf_existe((yyvsp[(3) - (6)].str),"Vecteur") || idf_existe((yyvsp[(3) - (6)].str),"Constante")) {
                  printf("\nFile '%s', line %d, character %d: semantic error : Double declaration '%s'.\n",file_name,nb_line,nb_character,(yyvsp[(2) - (6)].str));
                  printf("I AM HERE 1");
                  YYABORT;
                }
                  miseajour((yyvsp[(3) - (6)].str),"Constante",(yyvsp[(2) - (6)].str),partie1_2,"/","/","SEMANTIQUE");

                if (strcmp((yyvsp[(2) - (6)].str),partie1_1)!=0 && strcmp(partie1_1,"/")!=0) {
                  if(strcmp((yyvsp[(2) - (6)].str),"REAL")!=0 || strcmp(partie1_1,"INTEGER")!=0 ){
                    printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                    printf("HIII 1!");
                    YYABORT;
                  }
                }
                remplir_quad("=",partie1_2,"<vide>",(yyvsp[(3) - (6)].str));
            ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 101 "syntaxique.y"
    { 
                if (idf_existe((yyvsp[(2) - (4)].str),"Variable") || idf_existe((yyvsp[(2) - (4)].str),"Vecteur") || idf_existe((yyvsp[(2) - (4)].str),"Constante")) {
                  printf("\nFile '%s', line %d, character %d: semantic error : Double declaration '%s'.\n",file_name,nb_line,nb_character,(yyvsp[(2) - (4)].str));
                  printf("I AM HERE 2");
                  YYABORT;
                }
                  miseajour((yyvsp[(2) - (4)].str),"Variable",(yyvsp[(1) - (4)].str),"-1","/","/","SYNTAXIQUE");
              ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 110 "syntaxique.y"
    { 
                diviserChaine((yyvsp[(4) - (6)].str),partie1_1,partie1_2);
                if (idf_existe((yyvsp[(2) - (6)].str),"Variable") || idf_existe((yyvsp[(2) - (6)].str),"Vecteur") || idf_existe((yyvsp[(2) - (6)].str),"Constante")) {
                  printf("\nFile '%s', line %d, character %d: semantic error : Double declaration '%s'.\n",file_name,nb_line,nb_character,(yyvsp[(2) - (6)].str));
                  printf("I AM HERE 3");
                  YYABORT;
                }
                  miseajour((yyvsp[(2) - (6)].str),"Variable",(yyvsp[(1) - (6)].str),partie1_2,"/","/","SEMANTIQUE");

                if (strcmp((yyvsp[(1) - (6)].str),partie1_1)!=0 && strcmp(partie1_1,"/")!=0) {
                  if(strcmp((yyvsp[(1) - (6)].str),"REAL")!=0 || strcmp(partie1_1,"INTEGER")!=0 ){
                    printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                    printf("HIII 2!");
                    YYABORT;
                  }
                }
                remplir_quad("=",partie1_2,"<vide>",(yyvsp[(2) - (6)].str));
              ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 132 "syntaxique.y"
    { 
              if (idf_existe((yyvsp[(2) - (7)].str),"Variable") || idf_existe((yyvsp[(2) - (7)].str),"Vecteur") || idf_existe((yyvsp[(2) - (7)].str),"Constante")) {
                printf("\nFile '%s', line %d, character %d: semantic error : Double declaration '%s'.\n",file_name,nb_line,nb_character,(yyvsp[(2) - (7)].str));
                printf("I AM HERE 4");
                YYABORT;
              }

                miseajour((yyvsp[(2) - (7)].str),"Vecteur",(yyvsp[(1) - (7)].str),"/",(yyvsp[(4) - (7)].str),(yyvsp[(4) - (7)].str),"SYNTAXIQUE");
              
              if(atof((yyvsp[(4) - (7)].str))<1){
                printf("\nFile '%s', line %d, character %d: semantic error : Negative dimension of vector.\n",file_name,nb_line,nb_character);
                YYABORT;
              }
              remplir_quad("BOUNDS","1",(yyvsp[(4) - (7)].str),"<vide>");
              remplir_quad("ADEC",(yyvsp[(2) - (7)].str),"<vide>","<vide>");
            ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 156 "syntaxique.y"
    {  
                    if (idf_existe((yyvsp[(2) - (3)].str),"Variable") || idf_existe((yyvsp[(2) - (3)].str),"Vecteur") || idf_existe((yyvsp[(2) - (3)].str),"Constante")) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Double declaration '%s'.\n",file_name,nb_line,nb_character,(yyvsp[(2) - (3)].str));
                      printf("I AM HERE 5");
                      YYABORT;
                    }
    
                      miseajour((yyvsp[(2) - (3)].str),"Variable",savet,"-1","/","/","SYNTAXIQUE");
                  ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 166 "syntaxique.y"
    { 
                    diviserChaine((yyvsp[(4) - (5)].str),partie1_1,partie1_2);
                    if (idf_existe((yyvsp[(2) - (5)].str),"Variable") || idf_existe((yyvsp[(2) - (5)].str),"Vecteur") || idf_existe((yyvsp[(2) - (5)].str),"Constante") ) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Double declaration '%s'.\n",file_name,nb_line,nb_character,(yyvsp[(2) - (5)].str));
                      printf("I AM HERE 6");
                      YYABORT;
                    }
                      miseajour((yyvsp[(2) - (5)].str),"Variable",savet,partie1_2,"/","/","SEMANTIQUE");
                    if (strcmp(getType((yyvsp[(2) - (5)].str),"Variable"),partie1_1)!=0 && strcmp(partie1_1,"/")!=0) {
                      if(strcmp(getType((yyvsp[(2) - (5)].str),"Variable"),"REAL")!=0 || strcmp(partie1_1,"INTEGER")!=0 ){
                        printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                        printf("HIII 3!");
                        YYABORT;
                      }
                    }
                    if(strcmp(getType((yyvsp[(2) - (5)].str),"Variable"),"CHARACTER")==0 && strcmp(partie1_1,"CHARACTER")==0 ){
                      if (!verif_char((yyvsp[(2) - (5)].str),"Variable",partie1_2)) {
                        printf("\nFile '%s', line %d, character %d: semantic error : String too long.\n",file_name,nb_line,nb_character);
                        YYABORT;
                      }
                    }
                    remplir_quad("=",partie1_2,"<vide>",(yyvsp[(2) - (5)].str));
                  ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 192 "syntaxique.y"
    { 
                    if (idf_existe((yyvsp[(2) - (6)].str),"Variable") || idf_existe((yyvsp[(2) - (6)].str),"Vecteur") || idf_existe((yyvsp[(2) - (6)].str),"Constante")) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Double declaration '%s'.\n",file_name,nb_line,nb_character,(yyvsp[(2) - (6)].str));
                      printf("I AM HERE 7");
                      YYABORT;
                    }
                      miseajour((yyvsp[(2) - (6)].str),"Vecteur",savet,"/",(yyvsp[(4) - (6)].str),(yyvsp[(4) - (6)].str),"SYNTAXIQUE");
                    if(atof((yyvsp[(4) - (6)].str))<1){
                      printf("\nFile '%s', line %d, character %d: semantic error : Negative dimension of vector.\n",file_name,nb_line,nb_character);
                      YYABORT;
                    }
                    remplir_quad("BOUNDS","1",(yyvsp[(4) - (6)].str),"<vide>");
                    remplir_quad("ADEC",(yyvsp[(2) - (6)].str),"<vide>","<vide>");
                  ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 220 "syntaxique.y"
    { 
                    if(idf_existe((yyvsp[(1) - (3)].str),"Constante")){
                      printf("\nFile '%s', line %d, character %d: semantic error : Can't change the value of a Constante '%s'.\n",file_name,nb_line,nb_character,(yyvsp[(1) - (3)].str));
                      YYABORT;
                    }
                    if (!idf_existe((yyvsp[(1) - (3)].str),"Variable")) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Undeclared variable '%s'.\n",file_name,nb_line,nb_character,(yyvsp[(1) - (3)].str));
                      printf("HELLO 1");
                      YYABORT;
                    }
                    diviserChaine((yyvsp[(3) - (3)].str),partie1_1,partie1_2);
                    strcpy(typeIDF,getType((yyvsp[(1) - (3)].str),"Variable"));
                    if (strcmp(typeIDF,partie1_1)!=0 && strcmp(typeIDF,"/")!=0 && strcmp(partie1_1,"/")!=0) {
                      if(strcmp(typeIDF,"REAL")!=0 || strcmp(partie1_1,"INTEGER")!=0 ){
                          printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                          printf("HIII 4!");
                          
                        YYABORT;
                      }
                    }
                    if(strcmp(typeIDF,"CHARACTER")==0 && strcmp(partie1_1,"CHARACTER")==0 ){
                      if (!verif_char((yyvsp[(1) - (3)].str),"Variable",partie1_2)) {
                        printf("\nFile '%s', line %d, character %d: semantic error : String too long'.\n",file_name,nb_line,nb_character);
                        YYABORT;
                      }
                    }
                    remplir_quad("=",partie1_2,"<vide>",(yyvsp[(1) - (3)].str));
                    miseajour((yyvsp[(1) - (3)].str),"Variable","-1",partie1_2,"-1","-1","SEMANTIQUE");
                  ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 250 "syntaxique.y"
    { 
                    if(idf_existe((yyvsp[(1) - (6)].str),"Constante")){
                      printf("\nFile '%s', line %d, character %d: semantic error : Can't change the value of a Constante '%s'.\n",file_name,nb_line,nb_character,(yyvsp[(1) - (6)].str));
                      YYABORT;
                    }
                    diviserChaine((yyvsp[(6) - (6)].str),partie1_1,partie1_2);
                    if (!idf_existe((yyvsp[(1) - (6)].str),"Vecteur")) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Undeclared variable '%s'.\n",file_name,nb_line,nb_character,(yyvsp[(1) - (6)].str));
                      printf("HELLO 2");
                      YYABORT;
                    }
                    strcpy(typeIDF,getType((yyvsp[(1) - (6)].str),"Vecteur"));
                                        if(strcmp(typeIDF,"CHARACTER")==0 && strcmp(partie1_1,"CHARACTER")==0 ){
                      if (!verif_char((yyvsp[(1) - (6)].str),"Variable",partie1_2)) {
                        printf("\nFile '%s', line %d, character %d: semantic error : String too long'.\n",file_name,nb_line,nb_character);
                        YYABORT;
                      }
                    }
                    if (strcmp(typeIDF,partie1_1)!=0 && strcmp(typeIDF,"/")!=0 && strcmp(partie1_1,"/")!=0) {
                      if(strcmp(typeIDF,"REAL")!=0 || strcmp(partie1_1,"INTEGER")!=0){
                        printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                        printf("HIII 5!");
                        YYABORT;

                      }
                    }
                    strcat(tab,(yyvsp[(1) - (6)].str));strcat(tab,(yyvsp[(2) - (6)].str));strcat(tab,(yyvsp[(3) - (6)].str));strcat(tab,(yyvsp[(4) - (6)].str));
                    remplir_quad("=",partie1_2,"<vide>",tab);
                    miseajour((yyvsp[(1) - (6)].str),"Variable","-1",partie1_2,"-1","-1","SEMANTIQUE");
                    strcpy(tab," ");
                  ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 282 "syntaxique.y"
    {
                    if (!idf_existe((yyvsp[(1) - (6)].str),"Vecteur")) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Undeclared variable '%s'.\n",file_name,nb_line,nb_character,(yyvsp[(1) - (6)].str));
                      printf("HELLO 41");
                      YYABORT;
                    }
                    if(idf_existe((yyvsp[(1) - (6)].str),"Constante")){
                      printf("\nFile '%s', line %d, character %d: semantic error : Can't change the value of a Constante '%s'.\n",file_name,nb_line,nb_character,(yyvsp[(1) - (6)].str));
                      YYABORT;
                    }
                    if (!verif_index((yyvsp[(1) - (6)].str),"Vecteur",(yyvsp[(3) - (6)].str))) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Index out of range '%s(%s)'.\n",file_name,nb_line,nb_character,(yyvsp[(1) - (6)].str),(yyvsp[(3) - (6)].str));
                      YYABORT;
                    }
                    if(strcmp("CHAR",getType((yyvsp[(1) - (6)].str),"Vecteur"))!=0){
                    printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                      YYABORT;                      
                    }
                    if (strlen((yyvsp[(6) - (6)].str)) != 3) {
                    printf("\nFile '%s', line %d, character %d: semantic error : MESSAGE length must be exactly 3.\n", file_name, nb_line, nb_character);
                    YYABORT;
                  }
                  strcat(tab,(yyvsp[(1) - (6)].str));strcat(tab,(yyvsp[(2) - (6)].str));strcat(tab,(yyvsp[(3) - (6)].str));strcat(tab,(yyvsp[(4) - (6)].str));
                  remplir_quad("=",(yyvsp[(6) - (6)].str),"<vide>",tab);
                  strcpy(tab," ");

        ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 310 "syntaxique.y"
    {
                    if (!idf_existe((yyvsp[(1) - (3)].str),"Variable")) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Undeclared variable '%s'.\n",file_name,nb_line,nb_character,(yyvsp[(1) - (3)].str));
                      printf("HELLO 42");
                      YYABORT;
                    }
                    if(idf_existe((yyvsp[(1) - (3)].str),"Constante")){
                      printf("\nFile '%s', line %d, character %d: semantic error : Can't change the value of a Constante '%s'.\n",file_name,nb_line,nb_character,(yyvsp[(1) - (3)].str));
                      YYABORT;
                    }
                    if(strcmp("CHAR",getType((yyvsp[(1) - (3)].str),"Variable"))!=0){
                    printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                      YYABORT;                      
                    }
                    if (strlen((yyvsp[(3) - (3)].str)) != 3) {
                    printf("\nFile '%s', line %d, character %d: semantic error : MESSAGE length must be exactly 3.\n", file_name, nb_line, nb_character);
                    YYABORT;
                  }
                  remplir_quad("=",(yyvsp[(3) - (3)].str),"<vide>",(yyvsp[(1) - (3)].str));
        ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 333 "syntaxique.y"
    { 
                    diviserChaine((yyvsp[(1) - (3)].str),partie1_1,partie1_2);
                    diviserChaine((yyvsp[(3) - (3)].str),partie2_1,partie2_2);
                    sprintf(temp,"T%d",tmp);
                    if (strcmp(partie1_1,"CHARACTER") == 0 || strcmp(partie1_1,"LOGICAL") == 0 || strcmp(partie2_1,"CHARACTER") == 0 || strcmp(partie2_1,"LOGICAL") == 0) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                      printf("HIII 7!");
                      YYABORT;
                    }
                    if (strcmp(partie1_1,"REAL") == 0 || strcmp(partie2_1,"REAL") == 0 && strcmp(partie1_1,"/")!=0 && strcmp(partie2_1,"/")!=0){
                      strcpy(cat,"REAL-");
                      strcat(cat,temp);
                      (yyval.str)=strdup(cat);
                    }
                    else{
                      strcpy(cat,"INTEGER-");
                      strcat(cat,temp);
                      (yyval.str)=strdup(cat);
                    }
                    remplir_quad("+",partie1_2,partie2_2,temp);
                    tmp++;

                  ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 357 "syntaxique.y"
    { 
                    diviserChaine((yyvsp[(1) - (3)].str),partie1_1,partie1_2);
                    diviserChaine((yyvsp[(3) - (3)].str),partie2_1,partie2_2);
                    sprintf(temp,"T%d",tmp);
                    if (strcmp(partie1_1,"CHARACTER") == 0 || strcmp(partie1_1,"LOGICAL") == 0 || strcmp(partie2_1,"CHARACTER") == 0 || strcmp(partie2_1,"LOGICAL") == 0) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                      printf("HIII 8!");
                      YYABORT;
                    }
                    if (strcmp(partie1_1,"REAL") == 0 || strcmp(partie2_1,"REAL") == 0 && strcmp(partie1_1,"/")!=0 && strcmp(partie2_1,"/")!=0){
                      strcpy(cat,"REAL-");
                      strcat(cat,temp);
                      (yyval.str)=strdup(cat);
                    }
                    else{
                      strcpy(cat,"INTEGER-");
                      strcat(cat,temp);
                      (yyval.str)=strdup(cat);
                    }
                    remplir_quad("-",partie1_2,partie2_2,temp);
                    tmp++;
                  ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 380 "syntaxique.y"
    { 
                    diviserChaine((yyvsp[(1) - (3)].str),partie1_1,partie1_2);
                    diviserChaine((yyvsp[(3) - (3)].str),partie2_1,partie2_2);
                    sprintf(temp,"T%d",tmp);
                    if (strcmp(partie1_1,"CHARACTER") == 0 || strcmp(partie1_1,"LOGICAL") == 0 || strcmp(partie2_1,"CHARACTER") == 0 || strcmp(partie2_1,"LOGICAL") == 0) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                      printf("HIII 9!");
                      YYABORT;
                    }
                    if (strcmp(partie1_1,"REAL") == 0 || strcmp(partie2_1,"REAL") == 0 && strcmp(partie1_1,"/")!=0 && strcmp(partie2_1,"/")!=0){
                      strcpy(cat,"REAL-");
                      strcat(cat,temp);
                      (yyval.str)=strdup(cat);
                    }
                    else{
                      strcpy(cat,"INTEGER-");
                      strcat(cat,temp);
                      (yyval.str)=strdup(cat);
                    }
                    remplir_quad("*",partie1_2,partie2_2,temp);
                    tmp++;
                  ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 404 "syntaxique.y"
    {  
                    diviserChaine((yyvsp[(1) - (3)].str),partie1_1,partie1_2);
                    diviserChaine((yyvsp[(3) - (3)].str),partie2_1,partie2_2);
                    sprintf(temp,"T%d",tmp);
                    if (strcmp(partie2_2,"0") == 0) { 
                      printf("\nFile '%s', line %d, character %d: semantic error : Division by zero.\n",file_name,nb_line,nb_character);
                      YYABORT;
                    }
                    if (strcmp(partie1_1,"CHARACTER") == 0 || strcmp(partie1_1,"LOGICAL") == 0 || strcmp(partie2_1,"CHARACTER") == 0 || strcmp(partie2_1,"LOGICAL") == 0) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                      printf("HIII 10!");
                      YYABORT;
                    }
                    strcpy(cat,"REAL-");
                    strcat(cat,temp);
                    (yyval.str)=strdup(cat);
                    remplir_quad("/",partie1_2,partie2_2,temp);
                    tmp++;
                  ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 425 "syntaxique.y"
    { 
                    if (!idf_existe((yyvsp[(1) - (1)].str),"Variable") && !idf_existe((yyvsp[(1) - (1)].str),"Constante")) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Undeclared variable '%s'.\n",file_name,nb_line,nb_character,(yyvsp[(1) - (1)].str));
                      printf("HELLO 3");
                      YYABORT;
                    }
                    strcpy(ch,"-");
                    strcat(ch,(yyvsp[(1) - (1)].str));
                    if (idf_existe((yyvsp[(1) - (1)].str),"Variable") || idf_existe((yyvsp[(1) - (1)].str),"Constante")) strcpy(cat,getType((yyvsp[(1) - (1)].str),"Variable"));
                    strcat(cat,ch);
                    (yyval.str)=strdup(cat);
                  ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 438 "syntaxique.y"
    {
                    if (!idf_existe((yyvsp[(1) - (4)].str),"Vecteur")) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Undeclared variable '%s'.\n",file_name,nb_line,nb_character,(yyvsp[(1) - (4)].str));
                      printf("HELLO 44");
                      YYABORT;
                    }
                    if (!verif_index((yyvsp[(1) - (4)].str),"Vecteur",(yyvsp[(3) - (4)].str))) {
                      printf("\nFile '%s', line %d, character %d: semantic error : Index out of range '%s(%s)'.\n",file_name,nb_line,nb_character,(yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].str));
                      YYABORT;
                    }
                    strcpy(ch,"-");
                    strcat(tab,(yyvsp[(1) - (4)].str));strcat(tab,(yyvsp[(2) - (4)].str));strcat(tab,(yyvsp[(3) - (4)].str));strcat(tab,(yyvsp[(4) - (4)].str));
                    strcat(ch,tab);
                    strcpy(tab," ");
                    if (idf_existe((yyvsp[(1) - (4)].str),"Vecteur")) strcpy(cat,getType((yyvsp[(1) - (4)].str),"Vecteur"));
                    strcat(cat,ch);
                    (yyval.str)=strdup(cat);
                ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 458 "syntaxique.y"
    {
                strcpy(cat,"REAL-");
                strcat(cat,(yyvsp[(1) - (1)].str));
                (yyval.str)=strdup(cat);
              ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 464 "syntaxique.y"
    {
                strcpy(cat,"INTEGER-");
                strcat(cat,(yyvsp[(1) - (1)].str));
                (yyval.str)=strdup(cat);
              ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 470 "syntaxique.y"
    {
                strcpy(cat,"LOGICAL-");
                strcat(cat,(yyvsp[(1) - (1)].str));
                (yyval.str)=strdup(cat);
              ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 476 "syntaxique.y"
    {
                strcpy(cat,"CHARACTER-");
                strcat(cat,(yyvsp[(1) - (1)].str));
                (yyval.str)=strdup(cat);
              ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 482 "syntaxique.y"
    {
                (yyval.str)=strdup((yyvsp[(2) - (3)].str));
              ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 488 "syntaxique.y"
    { 
          if (!idf_existe((yyvsp[(1) - (1)].str),"Variable") && !idf_existe((yyvsp[(1) - (1)].str),"Constante")) {
            printf("\nFile '%s', line %d, character %d: semantic error : Undeclared variable '%s'.\n",file_name,nb_line,nb_character,(yyvsp[(1) - (1)].str));
            printf("HELLO 5");
            YYABORT;
          }
          strcpy(typeIDF,getType((yyvsp[(1) - (1)].str),"Variable"));
          if(strcmp(typeIDF,"INTEGER")!=0){
            printf("\nFile '%s', line %d, character %d: semantic error : Unexpected index type '%s'.\n",file_name,nb_line,nb_character,(yyvsp[(1) - (1)].str));
            YYABORT;
          }

        ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 502 "syntaxique.y"
    {
          if(atof((yyvsp[(1) - (1)].str))<0){
              printf("\nFile '%s', line %d, character %d: semantic error : Negative index value.\n",file_name,nb_line,nb_character);
              YYABORT;
          }
          (yyval.str)=strdup((yyvsp[(1) - (1)].str));
        ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 512 "syntaxique.y"
    {
                deb_else=qc;
                fin_if=qc;
                remplir_quad("BNZ"," ",(yyvsp[(2) - (2)].str),"<vide>");
              ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 520 "syntaxique.y"
    {
                fin_if=qc;
                remplir_quad("BR"," ","<vide>","<vide>");
                sprintf(i,"%d",qc); 
                mise_jr_quad(deb_else,2,i);
              ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 529 "syntaxique.y"
    {
                diviserChaine((yyvsp[(2) - (2)].str),partie1_1,partie1_2);
                if (strcmp(partie1_1,"LOGICAL")!=0 && strcmp(partie1_1,"/")!=0){
                  printf("\nFile '%s', line %d, character %d: semantic error : Unexpected expression type.\n",file_name,nb_line,nb_character);
                  YYABORT;
                }
                deb_else=qc;
                fin_if=qc;
                remplir_quad("BNZ"," ",partie1_2,"<vide>");
              ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 542 "syntaxique.y"
    {
                fin_if=qc;
                remplir_quad("BR"," ","<vide>","<vide>");
                sprintf(i,"%d",qc); 
                mise_jr_quad(deb_else,2,i);
              ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 551 "syntaxique.y"
    {
                sprintf(i,"%d",qc);
                mise_jr_quad(fin_if,2,i);
              ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 556 "syntaxique.y"
    {
                sprintf(i,"%d",qc);
                mise_jr_quad(fin_if,2,i);
              ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 561 "syntaxique.y"
    {
                sprintf(i,"%d",qc);
                mise_jr_quad(fin_if,2,i);
              ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 566 "syntaxique.y"
    {
                sprintf(i,"%d",qc);
                mise_jr_quad(fin_if,2,i);
              ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 573 "syntaxique.y"
    { 
                diviserChaine((yyvsp[(2) - (5)].str),partie1_1,partie1_2);
                diviserChaine((yyvsp[(4) - (5)].str),partie2_1,partie2_2);
                sprintf(temp,"T%d",tmp);
                if (strcmp(partie2_1,partie1_1)!=0 && strcmp(partie1_1,"/")!=0 && strcmp(partie2_1,"/")!=0) {
                  if(!((strcmp(partie1_1,"REAL")==0 && strcmp(partie2_1,"INTEGER")==0) || (strcmp(partie2_1,"REAL")==0 && strcmp(partie1_1,"INTEGER")==0))){
                    printf("\nFile '%s', line %d, character %d: semantic error : Type incompatibility.\n",file_name,nb_line,nb_character);
                    printf("HIII 13!");
                    YYABORT;
                  }
                }
                (yyval.str)=strdup(temp);
                remplir_quad((yyvsp[(3) - (5)].str),partie1_2,partie2_2,temp);
                tmp++;
              ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 589 "syntaxique.y"
    {
                sprintf(temp,"T%d",tmp);
                (yyval.str)=strdup(temp);
                remplir_quad((yyvsp[(3) - (5)].str),(yyvsp[(2) - (5)].str),(yyvsp[(4) - (5)].str),temp);
                tmp++;
              ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 596 "syntaxique.y"
    {
                (yyval.str)=strdup((yyvsp[(2) - (3)].str));
              ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 601 "syntaxique.y"
    {(yyval.str)=strdup((yyvsp[(1) - (1)].str));;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 602 "syntaxique.y"
    {(yyval.str)=strdup((yyvsp[(1) - (1)].str));;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 605 "syntaxique.y"
    {(yyval.str)=strdup((yyvsp[(1) - (1)].str));;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 606 "syntaxique.y"
    {(yyval.str)=strdup((yyvsp[(1) - (1)].str));;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 607 "syntaxique.y"
    {(yyval.str)=strdup((yyvsp[(1) - (1)].str));;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 608 "syntaxique.y"
    {(yyval.str)=strdup((yyvsp[(1) - (1)].str));;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 609 "syntaxique.y"
    {(yyval.str)=strdup((yyvsp[(1) - (1)].str));;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 610 "syntaxique.y"
    {(yyval.str)=strdup((yyvsp[(1) - (1)].str));;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 614 "syntaxique.y"
    {

                deb_for = qc;

                char index_end[20];
                strcpy(index_start_for,(yyvsp[(3) - (8)].str));
                strcpy(index_end, (yyvsp[(7) - (8)].str));

                strcpy(pas,(yyvsp[(5) - (8)].str));

                remplir_quad("BGE", "<vide>", index_start_for, index_end);
            ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 628 "syntaxique.y"
    {

                remplir_quad("+", index_start_for, pas, index_start_for);
                sprintf(i, "%d", deb_for);
                remplir_quad("BR", i, "<vide>", "<vide>");
      
                sprintf(i, "%d", qc);
                mise_jr_quad(deb_for, 2, i);
            ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 640 "syntaxique.y"
    { 
                  if (!idf_existe((yyvsp[(1) - (1)].str),"Variable") && !idf_existe((yyvsp[(1) - (1)].str),"Constante")) {
                    printf("\nFile '%s', line %d, character %d: semantic error : Undeclared variable '%s'.\n",file_name,nb_line,nb_character,(yyvsp[(1) - (1)].str));
                    printf("HELLO 6");
                    YYABORT;
                  }
                  (yyval.str)=strdup((yyvsp[(1) - (1)].str));
                ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 649 "syntaxique.y"
    { 
                  if (!idf_existe((yyvsp[(1) - (4)].str),"Vecteur")) {
                    printf("\nFile '%s', line %d, character %d: semantic error : Undeclared variable '%s'.\n",file_name,nb_line,nb_character,(yyvsp[(1) - (4)].str));
                    printf("HELLO 7");
                    YYABORT;
                  }
                  (yyval.str)=strdup((yyvsp[(1) - (4)].str));
                ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 663 "syntaxique.y"
    {
            rechercher((yyvsp[(3) - (4)].str),"Idf","CHARACTER","/","-1","/",3);
          ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 667 "syntaxique.y"
    {
            rechercher((yyvsp[(3) - (4)].str),"Idf","CHARACTER","/","-1","/",3);
          ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 673 "syntaxique.y"
    {
            strcat(tab,(yyvsp[(1) - (2)].str));strcat(tab,(yyvsp[(2) - (2)].str));
            (yyval.str)=strdup(tab);
            strcpy(tab," ");
          ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 679 "syntaxique.y"
    {
            (yyval.str)=strdup((yyvsp[(1) - (1)].str));
          ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 683 "syntaxique.y"
    {
            strcat(tab,(yyvsp[(1) - (3)].str));strcat(tab,(yyvsp[(2) - (3)].str));strcat(tab,(yyvsp[(3) - (3)].str));
            (yyval.str)=strdup(tab);
            strcpy(tab," ");
          ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 691 "syntaxique.y"
    {
                strcat(tab,(yyvsp[(1) - (4)].str));strcat(tab,(yyvsp[(2) - (4)].str));strcat(tab,(yyvsp[(3) - (4)].str));strcat(tab,(yyvsp[(4) - (4)].str));
                (yyval.str)=strdup(tab);
                strcpy(tab," ");
              ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 697 "syntaxique.y"
    {
                strcat(tab,(yyvsp[(1) - (2)].str));strcat(tab,(yyvsp[(2) - (2)].str));
                (yyval.str)=strdup(tab);
                strcpy(tab," ");
              ;}
    break;



/* Line 1455 of yacc.c  */
#line 2425 "syntaxique.tab.c"
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



/* Line 1675 of yacc.c  */
#line 705 "syntaxique.y"


int yyerror(char *msg) { 
  printf("\nFile '%s', line %d, character %d: syntax error\n",file_name,nb_line,nb_character);
  return 1; 
}

int main(int argc,char *argv[]){
  file_name=argv[1];
  initialisation();
  yyparse();
  afficher();
  affiche_quad();
  return 0;
}

int yywrap(){
  return 0;
}

