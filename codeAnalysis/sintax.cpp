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

using namespace std;

// stuff from flex that bison needs to know about:
extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;

//		  1  2  3  4  5  6  7  8  9  10 11 12 13
//        +  -  *  /  =  != == <  <= >  >= && ||
//	1 int
//		  1, 1, 1, 2, 1, 4, 4, 4, 4, 4, 4, E, E 	1 int
//		  2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, E, E 	2 float
//		  3, E, E, E, E, E, E, E, E, E, E, E, E 	3 string
//		  E, E, E, E, E, E, E, E, E, E, E, E, E 	4 bool
//	2 float
//		  2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, E, E 	1 int
//		  2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, E, E 	2 float
//		  3, E, E, E, E, E, E, E, E, E, E, E, E 	3 string
//		  E, E, E, E, E, E, E, E, E, E, E, E, E 	4 bool
//	3 string
//		  3, E, E, E, E, E, E, E, E, E, E, E, E 	1 int
//		  3, E, E, E, E, E, E, E, E, E, E, E, E 	2 float
//		  3, E, E, E, E, E, E, E, E, E, E, E, E 	3 string
//		  E, E, E, E, E, E, E, E, E, E, E, E, E 	4 bool
//	4 bool
//		  E, E, E, E, E, E, E, E, E, E, E, E, E 	1 int
//		  E, E, E, E, E, E, E, E, E, E, E, E, E 	2 float
//		  E, E, E, E, E, E, E, E, E, E, E, E, E 	3 string
//		  E, E, E, E, E, E, E, E, E, E, E, 4, 4 	4 bool

/*	14 gotoF 
	15 goto  
	16 return 
	17 endF  
	18 endP 
	19 era   
	20 param 
	21 gosub 
	22 predef 
	23 boolFuncs
	24 imprimir 
	25 sumaEspecial 
	26 verificar
// cuadruplos de funciones predefinidas
*/
// 21 -1 22 1  DETENER
// 21 -1 22 2  MOVER_ADELANTE
// 21 -1 22 3  ROTAR
// 21 -1 22 4  RECOGER_OBJ
// 21 -1 22 5  CARGAR_MAPA
// 21 -1 22 6  TERMINAR
// 23 -1 -1 1  CAMINO_DESPEJADO
// 23 -1 -1 2  CAMINO_BLOQUEADO
// 23 -1 -1 3  INTERSECCION_OBJ
// 23 -1 -1 4  TENER_TODOS_OBJS

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
int params = 0;
char* nameVar = NULL;
int indexFunc = 0;
int iPredef = 0;
bool predef = false;
int sizeByCount = 0;
int typeArr = 0;
int dirBaseArr = 0;

void yyerror(const char *s);

#include "../semantica/funcdirectory.cpp"
#include "../semantica/cubo.cpp"
#include "../cuadruplos/cuadruplos.cpp"
#include "../cuadruplos/GCI/GC_Expresiones.cpp"
#include "../cuadruplos/GCI/GC_Asignaciones.cpp"
#include "../cuadruplos/GCI/GC_Estatutos.cpp"



/* Line 268 of yacc.c  */
#line 184 "sintax.cpp"

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
     TERMINAR = 307,
     RETORNO = 308
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 112 "sintax.y"

	int ival;
	float fval;
	char *id;
	char *ide;



/* Line 293 of yacc.c  */
#line 282 "sintax.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 294 "sintax.cpp"

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
#define YYLAST   212

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNRULES -- Number of states.  */
#define YYNSTATES  211

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,     6,     7,    19,    20,    23,
      24,    26,    27,    30,    31,    37,    39,    45,    46,    50,
      52,    53,    59,    60,    61,    66,    67,    68,    69,    82,
      83,    84,    87,    90,    91,    94,    95,    98,    99,   101,
     102,   108,   109,   112,   115,   117,   119,   122,   125,   127,
     129,   130,   135,   136,   137,   144,   145,   149,   150,   154,
     157,   160,   161,   162,   166,   167,   171,   175,   177,   179,
     181,   183,   185,   187,   188,   192,   193,   194,   198,   199,
     203,   204,   208,   209,   210,   214,   215,   219,   221,   223,
     224,   229,   230,   234,   236,   238,   240,   242,   244,   245,
     249,   250,   260,   263,   264,   267,   268,   269,   275,   276,
     277,   287,   290,   291,   294,   299,   300,   304,   305,   306,
     309,   314,   315,   319,   320,   323,   325,   327,   329,   331,
     333,   335,   337,   339,   341,   343
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      55,     0,    -1,    -1,    -1,    -1,    -1,    56,    57,    60,
      61,     8,    58,    59,    21,    60,    62,    22,    -1,    -1,
      63,    60,    -1,    -1,    72,    -1,    -1,    85,    62,    -1,
      -1,    13,     6,    64,    65,    40,    -1,    66,    -1,    23,
       3,    24,    42,     6,    -1,    -1,    27,    67,    68,    -1,
     100,    -1,    -1,    21,   100,    69,    70,    22,    -1,    -1,
      -1,    39,   100,    71,    70,    -1,    -1,    -1,    -1,     9,
       6,    73,    25,    76,    74,    26,    21,    78,    22,    75,
      81,    -1,    -1,    -1,    77,    82,    -1,    79,    80,    -1,
      -1,    63,    79,    -1,    -1,    85,    80,    -1,    -1,    72,
      -1,    -1,     6,    42,     6,    83,    84,    -1,    -1,    39,
      82,    -1,    89,    86,    -1,   115,    -1,   121,    -1,   126,
      86,    -1,   130,    86,    -1,    87,    -1,    40,    -1,    -1,
      53,   100,    88,    40,    -1,    -1,    -1,     6,    90,    92,
      27,    91,   100,    -1,    -1,    23,   100,    24,    -1,    -1,
      98,    94,    95,    -1,   135,    95,    -1,     6,    95,    -1,
      -1,    -1,    45,    96,    93,    -1,    -1,    46,    97,    93,
      -1,   100,    99,   100,    -1,    29,    -1,    32,    -1,    30,
      -1,    31,    -1,    28,    -1,    34,    -1,    -1,   105,   101,
     102,    -1,    -1,    -1,    35,   103,   100,    -1,    -1,    36,
     104,   100,    -1,    -1,   110,   106,   107,    -1,    -1,    -1,
      37,   108,   105,    -1,    -1,    38,   109,   105,    -1,   112,
      -1,   126,    -1,    -1,    25,   111,   100,    26,    -1,    -1,
       6,   113,   114,    -1,     3,    -1,     4,    -1,     7,    -1,
      43,    -1,    44,    -1,    -1,    23,   100,    24,    -1,    -1,
      11,    25,    93,    26,   116,    21,   117,    22,   119,    -1,
      85,   118,    -1,    -1,    85,   118,    -1,    -1,    -1,    12,
     120,    21,   117,    22,    -1,    -1,    -1,    15,   122,    25,
      93,    26,   123,    21,   124,    22,    -1,    85,   125,    -1,
      -1,    85,   125,    -1,   134,    25,   127,    26,    -1,    -1,
     100,   128,   129,    -1,    -1,    -1,    39,   127,    -1,    14,
      25,   131,    26,    -1,    -1,   112,   132,   133,    -1,    -1,
      39,   131,    -1,    16,    -1,    17,    -1,    19,    -1,    51,
      -1,    20,    -1,    52,    -1,     6,    -1,    47,    -1,    48,
      -1,    49,    -1,    50,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   131,   131,   132,   133,   134,   131,   135,   135,   136,
     136,   137,   137,   140,   140,   141,   141,   145,   145,   146,
     147,   147,   155,   155,   155,   165,   167,   168,   165,   169,
     169,   169,   170,   171,   171,   172,   172,   173,   173,   176,
     176,   179,   179,   182,   182,   182,   182,   182,   182,   183,
     186,   186,   189,   189,   189,   190,   190,   193,   193,   193,
     193,   194,   194,   194,   194,   194,   197,   198,   198,   198,
     198,   198,   198,   201,   201,   202,   202,   202,   202,   202,
     205,   205,   206,   206,   206,   206,   206,   209,   209,   209,
     209,   212,   212,   213,   215,   217,   218,   219,   220,   220,
     226,   226,   227,   228,   228,   229,   229,   229,   232,   233,
     232,   235,   236,   236,   239,   245,   245,   248,   249,   249,
     252,   253,   253,   254,   254,   257,   258,   259,   260,   261,
     262,   263,   269,   270,   271,   272
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
  "TENER_TODOS_OBJS", "RECOGER_OBJ", "TERMINAR", "RETORNO", "$accept",
  "programa", "$@1", "$@2", "$@3", "$@4", "p1", "p2", "p3", "var", "$@5",
  "v1", "v2", "$@6", "v3", "$@7", "v4", "$@8", "modulo", "$@9", "$@10",
  "$@11", "m1", "$@12", "m2", "m3", "m4", "m6", "param", "$@13", "pa",
  "cuerpo", "C1", "retorno", "$@14", "asignacion", "$@15", "$@16", "as",
  "logico", "$@17", "l1", "$@18", "$@19", "expresion", "expr", "exp",
  "$@20", "exp1", "$@21", "$@22", "termino", "$@23", "te", "$@24", "$@25",
  "factor", "$@26", "varcte", "$@27", "varcte1", "condicion", "$@28",
  "co1", "co2", "co3", "$@29", "ciclo", "$@30", "$@31", "ci1", "ci2",
  "predef", "pred1", "$@32", "pred2", "imprimir", "imp1", "$@33", "imp2",
  "pdfunc", "pruebas", 0
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
     305,   306,   307,   308
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    56,    57,    58,    59,    55,    60,    60,    61,
      61,    62,    62,    64,    63,    65,    65,    67,    66,    68,
      69,    68,    70,    71,    70,    73,    74,    75,    72,    76,
      77,    76,    78,    79,    79,    80,    80,    81,    81,    83,
      82,    84,    84,    85,    85,    85,    85,    85,    85,    86,
      88,    87,    90,    91,    89,    92,    92,    94,    93,    93,
      93,    95,    96,    95,    97,    95,    98,    99,    99,    99,
      99,    99,    99,   101,   100,   102,   103,   102,   104,   102,
     106,   105,   107,   108,   107,   109,   107,   110,   110,   111,
     110,   113,   112,   112,   112,   112,   112,   112,   114,   114,
     116,   115,   117,   118,   118,   119,   120,   119,   122,   123,
     121,   124,   125,   125,   126,   128,   127,   127,   129,   129,
     130,   132,   131,   133,   133,   134,   134,   134,   134,   134,
     134,   134,   135,   135,   135,   135
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     0,     0,    11,     0,     2,     0,
       1,     0,     2,     0,     5,     1,     5,     0,     3,     1,
       0,     5,     0,     0,     4,     0,     0,     0,    12,     0,
       0,     2,     2,     0,     2,     0,     2,     0,     1,     0,
       5,     0,     2,     2,     1,     1,     2,     2,     1,     1,
       0,     4,     0,     0,     6,     0,     3,     0,     3,     2,
       2,     0,     0,     3,     0,     3,     3,     1,     1,     1,
       1,     1,     1,     0,     3,     0,     0,     3,     0,     3,
       0,     3,     0,     0,     3,     0,     3,     1,     1,     0,
       4,     0,     3,     1,     1,     1,     1,     1,     0,     3,
       0,     9,     2,     0,     2,     0,     0,     5,     0,     0,
       9,     2,     0,     2,     4,     0,     3,     0,     0,     2,
       4,     0,     3,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     3,     1,     7,     0,     9,     7,    13,     0,
       0,    10,     8,     0,    25,     4,     0,    17,     0,    15,
       0,     5,     0,     0,    14,    29,     0,     0,    93,    94,
      91,    95,   125,   126,   127,   129,     0,    89,    96,    97,
     128,   130,    18,    19,    73,    80,    87,    88,     0,    26,
       0,     7,     0,    98,    20,     0,    75,    82,   117,     0,
       0,    31,    11,    16,     0,    92,    22,     0,    76,    78,
      74,    83,    85,    81,   115,     0,     0,     0,    52,     0,
       0,   108,     0,     0,    11,    48,     0,    44,    45,     0,
       0,     0,     0,     0,    90,     0,     0,     0,     0,   118,
     114,    33,    39,    55,     0,     0,     0,    50,     6,    12,
      49,    43,    46,    47,    99,    23,    21,    77,    79,    84,
      86,   117,   116,    33,     0,    35,    41,     0,     0,    91,
     132,   133,   134,   135,     0,    57,     0,    61,    91,   121,
       0,     0,     0,    22,   119,    34,    27,    32,    35,     0,
      40,     0,    53,    62,    64,    60,   100,    61,    71,    67,
      69,    70,    68,    72,     0,    59,   123,   120,     0,    51,
      24,    37,    36,    42,    56,     0,     0,     0,     0,    58,
      66,     0,   122,   109,    38,    28,    54,    63,    65,     0,
     124,     0,   103,     0,     0,   103,   102,   105,   112,     0,
     104,   106,   101,   112,   111,   110,     0,   113,     0,     0,
     107
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    21,    26,     6,    10,    83,     7,
      13,    18,    19,    23,    42,    66,    93,   143,    11,    20,
      59,   171,    49,    50,   124,   125,   147,   185,    61,   126,
     150,    84,   111,    85,   142,    86,   103,   175,   128,   134,
     157,   155,   176,   177,   135,   164,   136,    56,    70,    95,
      96,    44,    57,    73,    97,    98,    45,    55,    46,    53,
      65,    87,   178,   193,   196,   202,   206,    88,   106,   191,
     199,   204,    47,    75,    99,   122,    90,   140,   166,   182,
      48,   137
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -138
static const yytype_int16 yypact[] =
{
    -138,    10,  -138,  -138,    -1,     9,    29,    -1,  -138,    25,
      36,  -138,  -138,    -3,  -138,  -138,    45,  -138,    27,  -138,
      43,  -138,    46,   102,  -138,    69,    58,    39,  -138,  -138,
      57,  -138,  -138,  -138,  -138,  -138,   152,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,    59,  -138,
      77,    -1,    80,    65,  -138,   152,     7,    18,   152,    70,
      47,  -138,   159,  -138,   152,  -138,    60,    74,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,    75,    81,    97,    57,    82,
      85,  -138,   152,    89,   159,  -138,    72,  -138,  -138,    72,
      72,    90,   152,    91,  -138,   152,   152,   152,   152,    76,
    -138,    -1,  -138,    93,     2,    22,    92,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,   152,  -138,    -1,    98,   159,    86,   152,    99,    -9,
    -138,  -138,  -138,  -138,   103,  -138,    63,    12,  -138,  -138,
     104,     2,    84,    60,  -138,  -138,  -138,  -138,   159,    77,
    -138,   108,  -138,  -138,  -138,  -138,  -138,    12,  -138,  -138,
    -138,  -138,  -138,  -138,   152,  -138,    96,  -138,   110,  -138,
    -138,    29,  -138,  -138,  -138,   152,     2,     2,   117,  -138,
    -138,    22,  -138,  -138,  -138,  -138,  -138,  -138,  -138,   159,
    -138,   118,   159,   121,   159,   159,  -138,   128,   159,   122,
    -138,  -138,  -138,   159,  -138,  -138,   127,  -138,   159,   129,
    -138
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -138,  -138,  -138,  -138,  -138,  -138,    -4,  -138,    66,   -90,
    -138,  -138,  -138,  -138,  -138,  -138,     6,  -138,   -14,  -138,
    -138,  -138,  -138,  -138,  -138,    37,    13,  -138,    14,  -138,
    -138,  -118,   -29,  -138,  -138,  -138,  -138,  -138,  -138,  -137,
    -138,  -123,  -138,  -138,  -138,  -138,   -23,  -138,  -138,  -138,
    -138,   -35,  -138,  -138,  -138,  -138,  -138,  -138,  -103,  -138,
    -138,  -138,  -138,   -46,   -31,  -138,  -138,  -138,  -138,  -138,
    -138,   -37,   -61,    61,  -138,  -138,  -138,     0,  -138,  -138,
    -138,  -138
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -132
static const yytype_int16 yytable[] =
{
      43,    89,   139,    12,   168,    28,    29,   148,   129,    31,
       3,   123,     5,    54,   165,     8,  -131,   -61,    32,    33,
      16,    34,    35,    89,    17,    28,    29,    37,   138,    31,
     148,    14,    67,   123,   179,    74,   153,   154,     9,   187,
     188,    91,    68,    69,    15,    38,    39,    62,    22,   130,
     131,   132,   133,    40,    41,    71,    72,   153,   154,   107,
     112,   113,   119,   120,    89,    38,    39,    24,    25,   115,
      27,   192,   117,   118,   195,   -30,   198,   195,   139,    51,
     203,    52,  -131,    60,    58,   203,    63,    89,    64,    77,
     192,   158,   159,   160,   161,   162,    76,   163,    74,    92,
      94,   100,   101,   102,   151,    28,    29,   104,    30,    31,
     105,   108,   110,   116,   114,   121,   127,   141,    32,    33,
     146,    34,    35,    36,   169,   149,   152,    37,    89,   156,
     167,    89,   174,    89,    89,   181,   183,    89,   189,   194,
     201,   180,    89,   197,   205,    38,    39,    89,   208,   170,
     109,   210,   186,    40,    41,    28,    29,   184,    30,    31,
     145,   172,   209,   173,   200,    78,   207,     0,    32,    33,
      79,    34,    35,    80,    81,    32,    33,    37,    34,    35,
       0,   190,   144,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,    39,     0,     0,     0,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
      40,    41,    82
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-138))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      23,    62,   105,     7,   141,     3,     4,   125,     6,     7,
       0,   101,    13,    36,   137,     6,    25,    26,    16,    17,
      23,    19,    20,    84,    27,     3,     4,    25,     6,     7,
     148,     6,    55,   123,   157,    58,    45,    46,     9,   176,
     177,    64,    35,    36,     8,    43,    44,    51,     3,    47,
      48,    49,    50,    51,    52,    37,    38,    45,    46,    82,
      89,    90,    97,    98,   125,    43,    44,    40,    25,    92,
      24,   189,    95,    96,   192,     6,   194,   195,   181,    21,
     198,    42,    25,     6,    25,   203,     6,   148,    23,    42,
     208,    28,    29,    30,    31,    32,    26,    34,   121,    39,
      26,    26,    21,     6,   127,     3,     4,    25,     6,     7,
      25,    22,    40,    22,    24,    39,    23,    25,    16,    17,
      22,    19,    20,    21,    40,    39,    27,    25,   189,    26,
      26,   192,    24,   194,   195,    39,    26,   198,    21,    21,
      12,   164,   203,    22,    22,    43,    44,   208,    21,   143,
      84,    22,   175,    51,    52,     3,     4,   171,     6,     7,
     123,   148,   208,   149,   195,     6,   203,    -1,    16,    17,
      11,    19,    20,    14,    15,    16,    17,    25,    19,    20,
      -1,   181,   121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,
      51,    52,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    56,     0,    57,    13,    60,    63,     6,     9,
      61,    72,    60,    64,     6,     8,    23,    27,    65,    66,
      73,    58,     3,    67,    40,    25,    59,    24,     3,     4,
       6,     7,    16,    17,    19,    20,    21,    25,    43,    44,
      51,    52,    68,   100,   105,   110,   112,   126,   134,    76,
      77,    21,    42,   113,   100,   111,   101,   106,    25,    74,
       6,    82,    60,     6,    23,   114,    69,   100,    35,    36,
     102,    37,    38,   107,   100,   127,    26,    42,     6,    11,
      14,    15,    53,    62,    85,    87,    89,   115,   121,   126,
     130,   100,    39,    70,    26,   103,   104,   108,   109,   128,
      26,    21,     6,    90,    25,    25,   122,   100,    22,    62,
      40,    86,    86,    86,    24,   100,    22,   100,   100,   105,
     105,    39,   129,    63,    78,    79,    83,    23,    92,     6,
      47,    48,    49,    50,    93,    98,   100,   135,     6,   112,
     131,    25,    88,    71,   127,    79,    22,    80,    85,    39,
      84,   100,    27,    45,    46,    95,    26,    94,    28,    29,
      30,    31,    32,    34,    99,    95,   132,    26,    93,    40,
      70,    75,    80,    82,    24,    91,    96,    97,   116,    95,
     100,    39,   133,    26,    72,    81,   100,    93,    93,    21,
     131,   123,    85,   117,    21,    85,   118,    22,    85,   124,
     118,    12,   119,    85,   125,    22,   120,   125,    21,   117,
      22
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
#line 131 "sintax.y"
    { addCuad(15,-1,-1,-1); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 132 "sintax.y"
    { addFunc((char*)"global", contFunc); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 133 "sintax.y"
    { editCuad(1); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 134 "sintax.y"
    { addFunc((char*)"main", ++contFunc); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 134 "sintax.y"
    {printAllCuads();YYACCEPT;}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 140 "sintax.y"
    { nameVar = (yyvsp[(2) - (2)].id); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 141 "sintax.y"
    {
			sizeArr[nameVar] = (yyvsp[(2) - (5)].ival); 
			char* type = (yyvsp[(5) - (5)].id);
			addType( nameVar, type, (yyvsp[(2) - (5)].ival) - 1); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 145 "sintax.y"
    { GC_Asignaciones_1(); GC_Asignaciones_2();}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 146 "sintax.y"
    {GC_Asignaciones_3();}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 147 "sintax.y"
    { sizeByCount++; typeArr = PilaT.top();
			  dataArr.push_back(PilaO.top()); PilaO.pop(); 
			  dataArr.push_back(PilaT.top()); PilaT.pop();
			 }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 151 "sintax.y"
    {	sizeArr[nameVar] = sizeByCount;
					dirBaseArr = addType( nameVar, typeArr, sizeByCount);
					addCuadsArrInic(nameVar, sizeByCount, dirBaseArr);
				}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 155 "sintax.y"
    { 
					if( PilaT.top() != typeArr) 
						yyerror("ERROR tipos no compatibles con el arreglo\n");
					else{
						sizeByCount++; dataArr.push_back(PilaO.top()); 
						dataArr.push_back(PilaT.top());
						PilaO.pop(); PilaT.pop(); } 
					}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 165 "sintax.y"
    { iL = 8000; fL = 10000; sL = 12000; bL = 14000;
			if( !findFunc((yyvsp[(2) - (2)].id)) ){ addFunc((yyvsp[(2) - (2)].id), ++contFunc); addVar((yyvsp[(2) - (2)].id)); } else yyerror("ERROR la funcion ya existe\n"); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 167 "sintax.y"
    { addInCuadAndParams(params, cuadActual); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 168 "sintax.y"
    { addCuad(17,-1,-1,-1); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 169 "sintax.y"
    { params = 0; }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 176 "sintax.y"
    { nameVar = (yyvsp[(1) - (3)].id); 
		if(findVar(nameVar) == -1) addVar(nameVar); 
	    char* type = (yyvsp[(3) - (3)].id); addType( nameVar, type); params++;}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 186 "sintax.y"
    { addCuad(16,PilaO.top(),-1,-1); PilaO.pop(); PilaT.pop(); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 189 "sintax.y"
    {nameVar = (yyvsp[(1) - (1)].id); GC_getDirAndType();}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 189 "sintax.y"
    {GC_Asignaciones_2();}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 189 "sintax.y"
    {GC_Asignaciones_5();}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 193 "sintax.y"
    {GC_Expresiones_11();}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 194 "sintax.y"
    {GC_Expresiones_2(12);}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 194 "sintax.y"
    {GC_Expresiones_2(13);}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 197 "sintax.y"
    { GC_Expresiones_9();}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 198 "sintax.y"
    {GC_Expresiones_2(10);}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 198 "sintax.y"
    { GC_Expresiones_2(8);}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 198 "sintax.y"
    {GC_Expresiones_2(11);}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 198 "sintax.y"
    {GC_Expresiones_2(9);}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 198 "sintax.y"
    {GC_Expresiones_2(7);}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 198 "sintax.y"
    {GC_Expresiones_2(6);}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 201 "sintax.y"
    { GC_Expresiones_4(); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 202 "sintax.y"
    {GC_Expresiones_2(1);}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 202 "sintax.y"
    {GC_Expresiones_2(2);}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 205 "sintax.y"
    { GC_Expresiones_5(); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 206 "sintax.y"
    { GC_Expresiones_2(3); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 206 "sintax.y"
    { GC_Expresiones_2(4); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 209 "sintax.y"
    {GC_Expresiones_6();}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 209 "sintax.y"
    {GC_Expresiones_7();}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 212 "sintax.y"
    {nameVar = (yyvsp[(1) - (1)].id); GC_getDirAndType(); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 213 "sintax.y"
    {char* buf = (char*)malloc( sizeof (int)); sprintf(buf,"%d", (yyvsp[(1) - (1)].ival)); 
					Constants[iC] = buf; PilaT.push(1); PilaO.push(iC++);}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 215 "sintax.y"
    {char* buf = (char*)malloc( sizeof (float)); sprintf(buf,"%f", (yyvsp[(1) - (1)].fval)); 
					Constants[fC] = buf; PilaT.push(2); PilaO.push(fC++);}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 217 "sintax.y"
    { PilaT.push(3); PilaO.push(sC++);}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 218 "sintax.y"
    {Constants[bC] = (char *)"TRUE"; PilaT.push(4); PilaO.push(bC++);}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 219 "sintax.y"
    {Constants[bC] = (char *)"FALSE"; PilaT.push(5); PilaO.push(bC++);}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 221 "sintax.y"
    {	
				addCuadsArrInic(nameVar, sizeArr.find(nameVar)->second, getSizeArr((char*)"a"));
			}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 226 "sintax.y"
    { GC_Estatutos_gotoF(); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 226 "sintax.y"
    { GC_Estatutos_IF_3();}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 229 "sintax.y"
    { GC_Estatutos_IF_2(); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 232 "sintax.y"
    { GC_Estatutos_WHILE_1();}
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 233 "sintax.y"
    { GC_Estatutos_gotoF();}
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 234 "sintax.y"
    { GC_Estatutos_WHILE_2(); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 239 "sintax.y"
    { 
			if( predef == false ){
				if( params != getFuncParamsCount(indexFunc) ) yyerror("ERROR los parametros no concuerda con la funcion definida\n"); 
					addCuad(21,-1,-1,getFuncInCuad(indexFunc));
			} else { addCuadPredef(iPredef); predef = false; }
			}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 245 "sintax.y"
    { if( PilaT.top() == getFuncVarType(indexFunc,++params)){ 
				addCuad(20,PilaO.top(),-1,params);
			} else  yyerror("ERROR tipos de parametros no son compatibles con la funcion\n");}
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 253 "sintax.y"
    { addCuad(24,-1,-1,PilaO.top()); PilaO.pop(); PilaT.pop(); }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 257 "sintax.y"
    {predef = true; iPredef = 1;}
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 258 "sintax.y"
    {predef = true; iPredef = 2;}
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 259 "sintax.y"
    {predef = true; iPredef = 3;}
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 260 "sintax.y"
    {predef = true; iPredef = 4;}
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 261 "sintax.y"
    {predef = true; iPredef = 5;}
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 262 "sintax.y"
    {predef = true; iPredef = 6;}
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 263 "sintax.y"
    { if( !findFunc((yyvsp[(1) - (1)].id)) ) yyerror("ERROR la funcion no existe\n");
		 	 else indexFunc = getFuncScope((yyvsp[(1) - (1)].id)); 
		 	 addCuad(19,indexFunc,-1,-1); 
		 	 params = 0; }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 269 "sintax.y"
    { addCuad(23,-1,-1,1); }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 270 "sintax.y"
    { addCuad(23,-1,-1,2); }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 271 "sintax.y"
    { addCuad(23,-1,-1,3); }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 272 "sintax.y"
    { addCuad(23,-1,-1,4); }
    break;



/* Line 1806 of yacc.c  */
#line 2231 "sintax.cpp"
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
#line 274 "sintax.y"

main() {
	if (yyparse()==0)
		printf("PROGRAMA ACEPTADO\n");
	else
		printf("ERROR\n");
	
}

void yyerror(const char *s) {
	cout << s << endl;
	// might as well halt now:
	exit(-1);
}

