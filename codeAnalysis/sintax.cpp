/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

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

/* Line 268 of yacc.c  */
#line 1 "sintax.y"

#include <stdio.h>
#include <cstdio>
#include <iostream>
#include "../semantica/funcdirectory.cpp"
#include "../semantica/cubo.cpp"
#include "../cuadruplos/cuadruplos.cpp"

using namespace std;

// stuff from flex that bison needs to know about:
extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;

//		  1  2  3  4  5  6  7  8  9  10 11 12 13
//        --------+  -  *  /  =  != == <  <= >  >= && ||
//	1 int
//		  1, 1, 2, 2, 1, 4, 4, 4, 4, 4, 4, E, E 	1 int
//		  2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, E, E 	2 float
//		  3, E, E, E, E, E, E, E, E, E, E, E, E 	3 string
//		  E, E, E, E, E, E, E, E, E, E, E, E, E 	4 bool
//	2 float
//		  2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, E, E 	1 int
//		  2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, E, E 	2 float
//		  3, E, E, E, E, E, E, E, E, E, E, E, E 	3 string
//		  E, E, E, E, E, E, E, E, E, E, E, E, E 	4 bool
//	3 string
//		  3, E, E, E, E, 4, 4, 4, 4, 4, 4, E, E 	1 int
//		  3, E, E, E, E, E, E, E, E, E, E, E, E 	2 float
//		  3, E, E, E, E, E, E, E, E, E, E, E, E 	3 string
//		  E, E, E, E, E, E, E, E, E, E, E, E, E 	4 bool
//	4 bool
//		  E, E, E, E, E, E, E, E, E, E, E, E, E 	1 int
//		  E, E, E, E, E, E, E, E, E, E, E, E, E 	2 float
//		  E, E, E, E, E, E, E, E, E, E, E, E, E 	3 string
//		  E, E, E, E, E, E, E, E, E, E, E, 4, 4 	4 bool

/*
----------VARIABLES GLOBALES--------------
 0000 -  1999			ENTEROS
 2000 -  3999			FLOTANTES
 4000 -  5999			STRINGS
 6000 -  7999			BOOLS
-----------VARIABLES LOCALES--------------
 8000 -  9999			ENTEROS
10000 - 11999			FLOTANTES
12000 - 13999			STRINGS
14000 - 15999			BOOLS
-------- VARIABLES TEMPORALES-------------
16000 - 17999			ENTEROS
18000 - 19999			FLOTANTES
20000 - 21999			STRINGS
22000 - 23999			BOOLS
--------------CONSTANTES------------------
24000 - 25999			ENTEROS
26000 - 27999			FLOTANTES
28000 - 29999			STRINGS
30000 - 31999			BOOLS
*/

int iG =     0, fG =  2000, sG =  4000, bG =  6000;
int iL =  8000, fL = 10000, sL = 12000, bL = 14000;
int iT = 16000, fT = 18000, sT = 20000, bT = 22000;
int iC = 24000, fC = 26000, sC = 28000, bC = 30000;

int contFunc = 0;
int contParam = 0;
int contVars = 0;
int scope = 0;
char* nameVar = NULL;

#include "../cuadruplos/GCI/GC_Expresiones.cpp"
#include "../cuadruplos/GCI/GC_Asignaciones.cpp"
#include "../cuadruplos/GCI/GC_Estatutos.cpp"
 
void yyerror(const char *s);



/* Line 268 of yacc.c  */
#line 152 "sintax.cpp"

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
     CINT = 258,
     CFLOAT = 259,
     IDE = 260,
     ID = 261,
     STRING = 262,
     PROGRAMA = 263,
     FUNC = 264,
     COND = 265,
     SI = 266,
     SINO = 267,
     VAR = 268,
     IMPRIMIR = 269,
     MIENTRAS = 270,
     DETENER = 271,
     MOVER_ADELANTE = 272,
     MOVER_ATRAS = 273,
     ROTAR = 274,
     CARGAR_MAPA = 275,
     LLO = 276,
     LLC = 277,
     COO = 278,
     COC = 279,
     PAO = 280,
     PAC = 281,
     ASIGNACION = 282,
     IGUAL = 283,
     MAY = 284,
     MAYIG = 285,
     MENIG = 286,
     MEN = 287,
     NOT = 288,
     DIF = 289,
     MAS = 290,
     MENOS = 291,
     POR = 292,
     ENTRE = 293,
     C = 294,
     PC = 295,
     PUNTO = 296,
     DP = 297,
     TRUE = 298,
     FALSE = 299,
     AND = 300,
     OR = 301,
     CAMINO_DESPEJADO = 302,
     CAMINO_BLOQUEADO = 303,
     INTERSECCION_OBJ = 304,
     TENER_TODOS_OBJS = 305,
     RECOGER_OBJ = 306,
     TERMINAR = 307
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 80 "sintax.y"

	int ival;
	float fval;
	char *id;
	char *ide;



/* Line 293 of yacc.c  */
#line 249 "sintax.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 261 "sintax.cpp"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   198

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNRULES -- Number of states.  */
#define YYNSTATES  200

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,    15,    16,    19,    20,    22,
      25,    26,    29,    30,    36,    38,    42,    43,    47,    49,
      53,    56,    57,    61,    62,    73,    74,    76,    79,    80,
      83,    86,    87,    90,    92,    93,    95,    99,   100,   103,
     106,   108,   110,   113,   116,   118,   119,   120,   127,   128,
     132,   133,   137,   138,   139,   143,   144,   148,   150,   152,
     153,   158,   160,   162,   164,   166,   168,   170,   171,   175,
     176,   177,   181,   182,   186,   187,   191,   192,   193,   197,
     198,   202,   204,   206,   207,   212,   213,   217,   219,   221,
     223,   225,   227,   228,   232,   233,   243,   246,   247,   250,
     251,   252,   258,   259,   260,   270,   273,   274,   277,   282,
     285,   286,   290,   295,   298,   299,   303,   305,   307,   309,
     311,   313,   315,   317,   319,   321,   323
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      54,     0,    -1,    -1,    -1,    55,    57,    58,     8,    56,
      21,    57,    59,    22,    -1,    -1,    61,    57,    -1,    -1,
      69,    -1,    80,    60,    -1,    -1,    80,    60,    -1,    -1,
      13,     6,    62,    63,    40,    -1,    64,    -1,    23,     3,
      24,    -1,    -1,    27,    65,    66,    -1,    95,    -1,    21,
      67,    22,    -1,     3,    68,    -1,    -1,    39,     3,    68,
      -1,    -1,     9,     6,    70,    25,    71,    26,    21,    72,
      22,    76,    -1,    -1,    78,    -1,    73,    74,    -1,    -1,
      61,    73,    -1,    80,    75,    -1,    -1,    80,    75,    -1,
      77,    -1,    -1,    69,    -1,    13,     6,    79,    -1,    -1,
      39,    78,    -1,    82,    81,    -1,   110,    -1,   116,    -1,
     121,    81,    -1,   124,    81,    -1,    40,    -1,    -1,    -1,
       6,    83,    85,    27,    84,    95,    -1,    -1,    23,    95,
      24,    -1,    -1,    92,    87,    88,    -1,    -1,    -1,    45,
      89,    91,    -1,    -1,    46,    90,    91,    -1,    92,    -1,
     128,    -1,    -1,    95,    94,    93,    95,    -1,    29,    -1,
      32,    -1,    30,    -1,    31,    -1,    28,    -1,    34,    -1,
      -1,   100,    96,    97,    -1,    -1,    -1,    35,    98,    95,
      -1,    -1,    36,    99,    95,    -1,    -1,   105,   101,   102,
      -1,    -1,    -1,    37,   103,   100,    -1,    -1,    38,   104,
     100,    -1,   107,    -1,   121,    -1,    -1,    25,   106,    92,
      26,    -1,    -1,     6,   108,   109,    -1,     3,    -1,     4,
      -1,     7,    -1,    43,    -1,    44,    -1,    -1,    23,    95,
      24,    -1,    -1,    11,    25,    86,    26,   111,    21,   112,
      22,   114,    -1,    80,   113,    -1,    -1,    80,   113,    -1,
      -1,    -1,    12,   115,    21,   112,    22,    -1,    -1,    -1,
      15,   117,    25,    86,    26,   118,    21,   119,    22,    -1,
      80,   120,    -1,    -1,    80,   120,    -1,   127,    25,   122,
      26,    -1,    95,   123,    -1,    -1,    39,    95,   123,    -1,
      14,    25,   125,    26,    -1,   107,   126,    -1,    -1,    35,
     107,   126,    -1,    16,    -1,    17,    -1,    19,    -1,    51,
      -1,    20,    -1,    52,    -1,     6,    -1,    47,    -1,    48,
      -1,    49,    -1,    50,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    99,    99,   100,    99,   101,   101,   102,   102,   103,
     104,   104,   107,   107,   108,   108,   109,   109,   110,   110,
     111,   112,   112,   115,   115,   117,   117,   118,   119,   119,
     120,   121,   121,   122,   123,   123,   126,   127,   127,   130,
     130,   130,   130,   130,   131,   134,   134,   134,   135,   135,
     138,   138,   139,   139,   139,   139,   139,   140,   140,   143,
     143,   144,   144,   144,   144,   144,   144,   147,   147,   148,
     148,   148,   148,   148,   151,   151,   152,   152,   152,   152,
     152,   155,   155,   155,   155,   158,   158,   159,   161,   163,
     164,   165,   166,   166,   169,   169,   170,   171,   171,   172,
     172,   172,   175,   176,   175,   178,   179,   179,   182,   183,
     184,   184,   187,   188,   189,   189,   192,   192,   192,   192,
     192,   192,   192,   195,   195,   195,   195
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CINT", "CFLOAT", "IDE", "ID", "STRING",
  "PROGRAMA", "FUNC", "COND", "SI", "SINO", "VAR", "IMPRIMIR", "MIENTRAS",
  "DETENER", "MOVER_ADELANTE", "MOVER_ATRAS", "ROTAR", "CARGAR_MAPA",
  "LLO", "LLC", "COO", "COC", "PAO", "PAC", "ASIGNACION", "IGUAL", "MAY",
  "MAYIG", "MENIG", "MEN", "NOT", "DIF", "MAS", "MENOS", "POR", "ENTRE",
  "C", "PC", "PUNTO", "DP", "TRUE", "FALSE", "AND", "OR",
  "CAMINO_DESPEJADO", "CAMINO_BLOQUEADO", "INTERSECCION_OBJ",
  "TENER_TODOS_OBJS", "RECOGER_OBJ", "TERMINAR", "$accept", "programa",
  "$@1", "$@2", "p1", "p2", "p3", "p4", "var", "$@3", "v1", "v2", "$@4",
  "v3", "v4", "v5", "modulo", "$@5", "m1", "m2", "m3", "m4", "m5", "m6",
  "m7", "param", "pa", "cuerpo", "C1", "asignacion", "$@6", "$@7", "as",
  "logico", "$@8", "l1", "$@9", "$@10", "l2", "expresion", "$@11", "expr",
  "exp", "$@12", "exp1", "$@13", "$@14", "termino", "$@15", "te", "$@16",
  "$@17", "factor", "$@18", "varcte", "$@19", "varcte1", "condicion",
  "$@20", "co1", "co2", "co3", "$@21", "ciclo", "$@22", "$@23", "ci1",
  "ci2", "predef", "pred1", "pred2", "imprimir", "imp1", "imp2", "pdfunc",
  "pruebas", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    55,    56,    54,    57,    57,    58,    58,    59,
      60,    60,    62,    61,    63,    63,    65,    64,    66,    66,
      67,    68,    68,    70,    69,    71,    71,    72,    73,    73,
      74,    75,    75,    76,    77,    77,    78,    79,    79,    80,
      80,    80,    80,    80,    81,    83,    84,    82,    85,    85,
      87,    86,    88,    89,    88,    90,    88,    91,    91,    93,
      92,    94,    94,    94,    94,    94,    94,    96,    95,    97,
      98,    97,    99,    97,   101,   100,   102,   103,   102,   104,
     102,   105,   105,   106,   105,   108,   107,   107,   107,   107,
     107,   107,   109,   109,   111,   110,   112,   113,   113,   114,
     115,   114,   117,   118,   116,   119,   120,   120,   121,   122,
     123,   123,   124,   125,   126,   126,   127,   127,   127,   127,
     127,   127,   127,   128,   128,   128,   128
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     9,     0,     2,     0,     1,     2,
       0,     2,     0,     5,     1,     3,     0,     3,     1,     3,
       2,     0,     3,     0,    10,     0,     1,     2,     0,     2,
       2,     0,     2,     1,     0,     1,     3,     0,     2,     2,
       1,     1,     2,     2,     1,     0,     0,     6,     0,     3,
       0,     3,     0,     0,     3,     0,     3,     1,     1,     0,
       4,     1,     1,     1,     1,     1,     1,     0,     3,     0,
       0,     3,     0,     3,     0,     3,     0,     0,     3,     0,
       3,     1,     1,     0,     4,     0,     3,     1,     1,     1,
       1,     1,     0,     3,     0,     9,     2,     0,     2,     0,
       0,     5,     0,     0,     9,     2,     0,     2,     4,     2,
       0,     3,     4,     2,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     5,     1,     0,     7,     5,    12,     0,     0,
       8,     6,     0,    23,     3,     0,    16,     0,    14,     0,
       0,     0,     0,    13,    25,     5,    15,    87,    88,    85,
      89,   116,   117,   118,   120,     0,    83,    90,    91,   119,
     121,    17,    18,    67,    74,    81,    82,     0,     0,     0,
      26,     0,    92,    21,     0,     0,    69,    76,     0,    37,
       0,    45,     0,     0,   102,     0,    10,     0,    40,    41,
       0,     0,     0,    86,     0,    20,    19,     0,     0,    70,
      72,    68,    77,    79,    75,   110,     0,     0,    36,    28,
      48,     0,     0,     0,     4,     9,    10,    44,    39,    42,
      43,     0,    21,    84,    65,    61,    63,    64,    62,    66,
      59,     0,     0,     0,     0,     0,   109,   108,    38,    28,
       0,     0,     0,     0,     0,    50,    85,   114,     0,     0,
      11,    93,    22,     0,    71,    73,    78,    80,   110,    29,
      34,    27,    31,     0,    46,    94,    52,     0,   113,   112,
       0,    60,   111,    35,    24,    33,    30,    31,    49,     0,
       0,    53,    55,    51,   114,   103,    32,    47,     0,     0,
       0,   115,     0,    97,     0,   123,   124,   125,   126,    54,
      57,    58,    56,     0,    97,    96,    99,   106,     0,    98,
     100,    95,   106,   105,   104,     0,   107,     0,     0,   101
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    20,     5,     9,    65,    95,     6,    12,
      17,    18,    22,    41,    54,    75,    10,    19,    49,   120,
     121,   141,   156,   154,   155,    50,    88,    96,    98,    67,
      90,   159,   123,   124,   146,   163,   169,   170,   179,   125,
     133,   110,    78,    56,    81,   111,   112,    43,    57,    84,
     113,   114,    44,    55,    45,    52,    73,    68,   160,   174,
     185,   191,   195,    69,    93,   172,   188,   193,    46,    86,
     116,    71,   128,   148,    47,   181
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -92
static const yytype_int16 yypact[] =
{
     -92,    30,    27,   -92,     6,    33,    27,   -92,    28,    38,
     -92,   -92,    12,   -92,   -92,    54,   -92,    20,   -92,    46,
      42,    49,    58,   -92,    63,    27,   -92,   -92,   -92,    57,
     -92,   -92,   -92,   -92,   -92,    86,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,    67,    90,    71,
     -92,     7,    76,    61,    81,   146,   -26,    -1,   146,    65,
      91,    57,    82,    88,   -92,    89,     7,    74,   -92,   -92,
      74,    74,   146,   -92,   112,   -92,   -92,    92,    56,   -92,
     -92,   -92,   -92,   -92,   -92,    84,    94,    63,   -92,    27,
      98,   146,    25,   102,   -92,   -92,     7,   -92,   -92,   -92,
     -92,   104,    61,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   146,   146,   146,   146,   146,   -92,   -92,   -92,    27,
     107,     7,   146,   103,   105,   -92,   -92,   109,   111,   146,
     -92,   -92,   -92,   146,   -92,   -92,   -92,   -92,    84,   -92,
      33,   -92,     7,   115,   -92,   -92,    21,    25,   -92,   -92,
     114,   -92,   -92,   -92,   -92,   -92,   -92,     7,   -92,   146,
     124,   -92,   -92,   -92,   109,   -92,   -92,   -92,     7,     0,
       0,   -92,   126,     7,   129,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,     7,     7,   -92,   142,     7,   133,   -92,
     -92,   -92,     7,   -92,   -92,   135,   -92,     7,   136,   -92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -92,   -92,   -92,   -92,     8,   -92,   -92,    64,   -81,   -92,
     -92,   -92,   -92,   -92,   -92,    55,    19,   -92,   -92,   -92,
      45,   -92,     4,   -92,   -92,    80,   -92,   -49,    10,   -92,
     -92,   -92,   -92,    39,   -92,   -92,   -92,   -92,     2,   -44,
     -92,   -92,   -17,   -92,   -92,   -92,   -92,   -60,   -92,   -92,
     -92,   -92,   -92,   -92,   -91,   -92,   -92,   -92,   -92,   -28,
     -14,   -92,   -92,   -92,   -92,   -92,   -92,   -19,   -51,   -92,
      36,   -92,   -92,    11,   -92,   -92
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -123
static const yytype_int16 yytable[] =
{
      70,   127,    66,    27,    28,    42,    29,    30,   119,    79,
      80,    77,     7,    61,    11,    70,    31,    32,    62,    33,
      34,    63,    64,    31,    32,    36,    33,    34,    27,    28,
       3,   126,    30,    51,    13,    15,    82,    83,   119,    16,
       4,    85,     8,    37,    38,    70,    14,   175,   176,   177,
     178,    39,    40,   136,   137,   101,   164,    21,    39,    40,
      23,    27,    28,    25,    29,    30,   161,   162,    37,    38,
      70,    24,   142,    26,    31,    32,    48,    33,    34,    35,
      99,   100,  -122,    36,   104,   105,   106,   107,   108,    53,
     109,    70,    58,   157,   134,   135,    59,    60,   138,    72,
      74,    37,    38,    76,    87,   143,    70,    91,   157,    39,
      40,    94,    89,    92,    97,   102,   151,    70,   103,   173,
     117,   122,    70,   115,   184,   180,   180,   129,   131,   140,
     144,   145,    70,    70,   187,   184,    70,   149,   192,   158,
     165,    70,   167,   192,   147,   168,    70,   183,   173,    27,
      28,   186,    29,    30,   190,   194,   197,   132,   199,   153,
     130,   166,    31,    32,   139,    33,    34,   118,   150,   198,
     189,    36,   182,   196,   152,   171,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
      38,     0,     0,     0,     0,     0,     0,    39,    40
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-92))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      51,    92,    51,     3,     4,    22,     6,     7,    89,    35,
      36,    55,     6,     6,     6,    66,    16,    17,    11,    19,
      20,    14,    15,    16,    17,    25,    19,    20,     3,     4,
       0,     6,     7,    25,     6,    23,    37,    38,   119,    27,
      13,    58,     9,    43,    44,    96,     8,    47,    48,    49,
      50,    51,    52,   113,   114,    72,   147,     3,    51,    52,
      40,     3,     4,    21,     6,     7,    45,    46,    43,    44,
     121,    25,   121,    24,    16,    17,    13,    19,    20,    21,
      70,    71,    25,    25,    28,    29,    30,    31,    32,     3,
      34,   142,    25,   142,   111,   112,     6,    26,   115,    23,
      39,    43,    44,    22,    39,   122,   157,    25,   157,    51,
      52,    22,    21,    25,    40,     3,   133,   168,    26,   168,
      26,    23,   173,    39,   173,   169,   170,    25,    24,    22,
      27,    26,   183,   184,   183,   184,   187,    26,   187,    24,
      26,   192,   159,   192,    35,    21,   197,    21,   197,     3,
       4,    22,     6,     7,    12,    22,    21,   102,    22,   140,
      96,   157,    16,    17,   119,    19,    20,    87,   129,   197,
     184,    25,   170,   192,   138,   164,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    54,    55,     0,    13,    57,    61,     6,     9,    58,
      69,    57,    62,     6,     8,    23,    27,    63,    64,    70,
      56,     3,    65,    40,    25,    21,    24,     3,     4,     6,
       7,    16,    17,    19,    20,    21,    25,    43,    44,    51,
      52,    66,    95,   100,   105,   107,   121,   127,    13,    71,
      78,    57,   108,     3,    67,   106,    96,   101,    25,     6,
      26,     6,    11,    14,    15,    59,    80,    82,   110,   116,
     121,   124,    23,   109,    39,    68,    22,    92,    95,    35,
      36,    97,    37,    38,   102,    95,   122,    39,    79,    21,
      83,    25,    25,   117,    22,    60,    80,    40,    81,    81,
      81,    95,     3,    26,    28,    29,    30,    31,    32,    34,
      94,    98,    99,   103,   104,    39,   123,    26,    78,    61,
      72,    73,    23,    85,    86,    92,     6,   107,   125,    25,
      60,    24,    68,    93,    95,    95,   100,   100,    95,    73,
      22,    74,    80,    95,    27,    26,    87,    35,   126,    26,
      86,    95,   123,    69,    76,    77,    75,    80,    24,    84,
     111,    45,    46,    88,   107,    26,    75,    95,    21,    89,
      90,   126,   118,    80,   112,    47,    48,    49,    50,    91,
      92,   128,    91,    21,    80,   113,    22,    80,   119,   113,
      12,   114,    80,   120,    22,   115,   120,    21,   112,    22
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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


/*----------.
| yyparse.  |
`----------*/

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
  if (yypact_value_is_default (yyn))
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

/* Line 1806 of yacc.c  */
#line 99 "sintax.y"
    { addFunc((char*)"global", contFunc); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 100 "sintax.y"
    { addFunc((char*)"main", ++contFunc); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 107 "sintax.y"
    { nameVar = (yyvsp[(2) - (2)].id); GC_Asignaciones_1();}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 109 "sintax.y"
    {GC_Asignaciones_2();}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 110 "sintax.y"
    {GC_Asignaciones_3();}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 115 "sintax.y"
    { if( findFunc((yyvsp[(2) - (2)].id)) ){ addFunc((yyvsp[(2) - (2)].id), ++contFunc); } }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 134 "sintax.y"
    {nameVar = (yyvsp[(1) - (1)].id); GC_getDirAndType();}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 134 "sintax.y"
    {GC_Asignaciones_2();}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 134 "sintax.y"
    {GC_Asignaciones_5();}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 138 "sintax.y"
    {GC_Expresiones_11();}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 139 "sintax.y"
    {GC_Expresiones_8(12);}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 139 "sintax.y"
    {GC_Expresiones_8(13);}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 143 "sintax.y"
    {GC_Expresiones_9(); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 144 "sintax.y"
    {GC_Expresiones_8(10);}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 144 "sintax.y"
    { GC_Expresiones_8(8);}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 144 "sintax.y"
    {GC_Expresiones_8(11);}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 144 "sintax.y"
    {GC_Expresiones_8(9);}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 144 "sintax.y"
    {GC_Expresiones_8(7);}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 144 "sintax.y"
    {GC_Expresiones_8(6);}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 147 "sintax.y"
    {GC_Expresiones_4();}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 148 "sintax.y"
    {GC_Expresiones_2(1);}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 148 "sintax.y"
    {GC_Expresiones_2(2);}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 151 "sintax.y"
    { GC_Expresiones_5(); }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 152 "sintax.y"
    { GC_Expresiones_3(3); }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 152 "sintax.y"
    { GC_Expresiones_3(4); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 155 "sintax.y"
    {GC_Expresiones_6();}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 155 "sintax.y"
    {GC_Expresiones_7();}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 158 "sintax.y"
    {nameVar = (yyvsp[(1) - (1)].id); GC_getDirAndType();}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 159 "sintax.y"
    {char* buf = (char*)malloc( sizeof (int)); sprintf(buf,"%d", (yyvsp[(1) - (1)].ival)); 
					Constantes[iC] = buf; PilaT.push(1); PilaO.push(iC++); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 161 "sintax.y"
    {char* buf = (char*)malloc( sizeof (float)); sprintf(buf,"%f", (yyvsp[(1) - (1)].fval)); 
					Constantes[fC] = buf; PilaT.push(2); PilaO.push(fC++);}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 163 "sintax.y"
    {PilaT.push(3); PilaO.push(sC++);}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 164 "sintax.y"
    {Constantes[bC] = (char *)"TRUE"; PilaT.push(4); PilaO.push(bC++);}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 165 "sintax.y"
    {Constantes[bC] = (char *)"FALSE"; PilaT.push(5); PilaO.push(bC++);}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 169 "sintax.y"
    { GC_Estatutos_gotoF(); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 169 "sintax.y"
    { GC_Estatutos_IF_3(); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 172 "sintax.y"
    { GC_Estatutos_IF_2(); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 175 "sintax.y"
    { GC_Estatutos_WHILE_1();}
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 176 "sintax.y"
    { GC_Estatutos_gotoF();}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 177 "sintax.y"
    { GC_Estatutos_WHILE_2(); }
    break;



/* Line 1806 of yacc.c  */
#line 1959 "sintax.cpp"
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2067 of yacc.c  */
#line 197 "sintax.y"

main() {
	if (yyparse()==0)
		printf("PROGRAMA ACEPTADO\n");
	else
		printf("ERROR\n");
	
}

void yyerror(const char *s) {
	cout << "Parse error!  Message: " << s << endl;
	// might as well halt now:
	exit(-1);
}

