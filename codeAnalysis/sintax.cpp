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
<<<<<<< HEAD
//#include "../cuadruplos/cuadruplos.cpp"
=======
>>>>>>> 2ba6f4a1d1bdeac977880976c76ab6a9a2a8c1f1
using namespace std;

// stuff from flex that bison needs to know about:
extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;

<<<<<<< HEAD
//		  1  2  3  4  5  6  7  8  9  10 11 12 13
//--------+  -  *  /  =  != == <  <= >  >= && ||
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

char* e = (char*)"";  //error message

=======
//numeros de operadores 1  2  3  4  5  6  7  8  9  10 11 12 13
//--------------------- +  -  *  /  =  != == <  <= >  >= && ||
>>>>>>> 2ba6f4a1d1bdeac977880976c76ab6a9a2a8c1f1
int contFunc = 0;
int contParam = 0;
int contVars = 0;
int scope = 0;
char* nameVar = NULL;

int numCuad = 0;
int iG =     0, fG =  2000, sG =  4000, bG =  6000;
int iL =  8000, fL = 10000, sL = 12000, bL = 14000;
int iT = 16000, fT = 18000, sT = 20000, bT = 22000;
int iC = 24000, fC = 26000, sC = 28000, bC = 30000;

void yyerror(const char *s);



/* Line 268 of yacc.c  */
<<<<<<< HEAD
#line 150 "sintax.cpp"
=======
#line 97 "sintax.cpp"
>>>>>>> 2ba6f4a1d1bdeac977880976c76ab6a9a2a8c1f1

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
     SI = 265,
     SINO = 266,
     VAR = 267,
     IMPRIMIR = 268,
     MIENTRAS = 269,
     DETENER = 270,
     MOVER_ADELANTE = 271,
     MOVER_ATRAS = 272,
     ROTAR = 273,
     CARGAR_MAPA = 274,
     LLO = 275,
     LLC = 276,
     COO = 277,
     COC = 278,
     PAO = 279,
     PAC = 280,
     ASIGNACION = 281,
     IGUAL = 282,
     MAY = 283,
     MAYIG = 284,
     MENIG = 285,
     MEN = 286,
     NOT = 287,
     DIF = 288,
     MAS = 289,
     MENOS = 290,
     POR = 291,
     ENTRE = 292,
     C = 293,
     PC = 294,
     PUNTO = 295,
     DP = 296,
     TRUE = 297,
     FALSE = 298,
     AND = 299,
     OR = 300,
     CAMINO_DESPEJADO = 301,
     CAMINO_BLOQUEADO = 302,
     INTERSECCION_OBJ = 303,
     TENER_TODOS_OBJS = 304,
     RECOGER_OBJ = 305,
     TERMINAR = 306
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
<<<<<<< HEAD
#line 78 "sintax.y"
=======
#line 25 "sintax.y"
>>>>>>> 2ba6f4a1d1bdeac977880976c76ab6a9a2a8c1f1

	int ival;
	float fval;
	char *id;
	char *ide;
	char *sval;



/* Line 293 of yacc.c  */
<<<<<<< HEAD
#line 247 "sintax.cpp"
=======
#line 195 "sintax.cpp"
>>>>>>> 2ba6f4a1d1bdeac977880976c76ab6a9a2a8c1f1
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
<<<<<<< HEAD
#line 259 "sintax.cpp"
=======
#line 207 "sintax.cpp"
>>>>>>> 2ba6f4a1d1bdeac977880976c76ab6a9a2a8c1f1

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
#define YYLAST   190

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNRULES -- Number of states.  */
#define YYNSTATES  183

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,    15,    16,    19,    20,    22,
      25,    26,    29,    30,    31,    38,    40,    44,    47,    49,
      53,    56,    57,    61,    62,    73,    74,    76,    79,    80,
      83,    86,    87,    90,    92,    93,    95,    99,   100,   103,
     106,   108,   110,   113,   116,   118,   123,   124,   128,   131,
     132,   135,   138,   140,   142,   143,   148,   150,   152,   154,
     156,   158,   160,   163,   164,   167,   170,   173,   174,   177,
     180,   182,   184,   188,   191,   193,   195,   197,   199,   201,
     202,   206,   215,   218,   219,   222,   223,   228,   236,   239,
     240,   243,   248,   251,   252,   256,   261,   264,   265,   269,
     271,   273,   275,   277,   279,   281,   283,   285,   287,   289
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    -1,    -1,    54,    56,    57,     8,    55,
      20,    56,    58,    21,    -1,    -1,    60,    56,    -1,    -1,
      68,    -1,    79,    59,    -1,    -1,    79,    59,    -1,    -1,
      -1,    12,     6,    61,    62,    63,    39,    -1,    64,    -1,
      22,     3,    23,    -1,    26,    65,    -1,    89,    -1,    20,
      66,    21,    -1,     3,    67,    -1,    -1,    38,     3,    67,
      -1,    -1,     9,     6,    69,    24,    70,    25,    20,    71,
      21,    75,    -1,    -1,    77,    -1,    72,    73,    -1,    -1,
      60,    72,    -1,    79,    74,    -1,    -1,    79,    74,    -1,
      76,    -1,    -1,    68,    -1,    12,     6,    78,    -1,    -1,
      38,    77,    -1,    81,    80,    -1,    96,    -1,   100,    -1,
     103,    80,    -1,   106,    80,    -1,    39,    -1,     6,    82,
      26,    89,    -1,    -1,    22,    89,    23,    -1,    86,    84,
      -1,    -1,    44,    85,    -1,    45,    85,    -1,    86,    -1,
     110,    -1,    -1,    89,    87,    88,    89,    -1,    28,    -1,
      31,    -1,    29,    -1,    30,    -1,    27,    -1,    33,    -1,
      91,    90,    -1,    -1,    34,    89,    -1,    35,    89,    -1,
      93,    92,    -1,    -1,    36,    91,    -1,    37,    91,    -1,
      94,    -1,   103,    -1,    24,    89,    25,    -1,     6,    95,
      -1,     3,    -1,     4,    -1,     7,    -1,    42,    -1,    43,
      -1,    -1,    22,    89,    23,    -1,    10,    24,    83,    25,
      20,    97,    21,    99,    -1,    79,    98,    -1,    -1,    79,
      98,    -1,    -1,    11,    20,    97,    21,    -1,    14,    24,
      83,    25,    20,   101,    21,    -1,    79,   102,    -1,    -1,
      79,   102,    -1,   109,    24,   104,    25,    -1,    89,   105,
      -1,    -1,    38,    89,   105,    -1,    13,    24,   107,    25,
      -1,    94,   108,    -1,    -1,    34,    94,   108,    -1,    15,
      -1,    16,    -1,    18,    -1,    50,    -1,    19,    -1,    51,
      -1,     6,    -1,    46,    -1,    47,    -1,    48,    -1,    49,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
<<<<<<< HEAD
       0,    98,    98,    99,    98,   100,   100,   101,   101,   102,
     103,   103,   105,   105,   105,   106,   106,   107,   108,   108,
     109,   110,   110,   112,   112,   114,   114,   115,   116,   116,
     117,   118,   118,   119,   120,   120,   122,   123,   123,   125,
     125,   125,   125,   125,   126,   128,   129,   129,   132,   133,
     133,   133,   134,   134,   136,   136,   137,   137,   137,   137,
     137,   137,   139,   140,   140,   140,   142,   143,   143,   143,
     145,   145,   145,   147,   148,   149,   150,   151,   152,   153,
     153,   155,   156,   157,   157,   158,   158,   160,   161,   162,
     162,   164,   165,   166,   166,   168,   169,   170,   170,   172,
     172,   172,   172,   172,   172,   172,   174,   174,   174,   174
=======
       0,    45,    45,    45,    45,    46,    46,    47,    47,    48,
      49,    49,    51,    51,    52,    52,    53,    54,    54,    55,
      56,    56,    58,    58,    61,    61,    62,    63,    63,    64,
      65,    65,    66,    67,    67,    69,    70,    70,    72,    72,
      72,    72,    72,    73,    75,    76,    76,    79,    80,    80,
      80,    81,    81,    83,    84,    84,    84,    84,    84,    84,
      86,    87,    87,    87,    89,    90,    90,    90,    92,    92,
      92,    94,    95,    96,    97,    98,    99,   100,   100,   102,
     103,   104,   104,   105,   105,   107,   108,   109,   109,   111,
     112,   113,   113,   115,   116,   117,   117,   119,   119,   119,
     119,   119,   119,   119,   121,   121,   121,   121
>>>>>>> 2ba6f4a1d1bdeac977880976c76ab6a9a2a8c1f1
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CINT", "CFLOAT", "IDE", "ID", "STRING",
  "PROGRAMA", "FUNC", "SI", "SINO", "VAR", "IMPRIMIR", "MIENTRAS",
  "DETENER", "MOVER_ADELANTE", "MOVER_ATRAS", "ROTAR", "CARGAR_MAPA",
  "LLO", "LLC", "COO", "COC", "PAO", "PAC", "ASIGNACION", "IGUAL", "MAY",
  "MAYIG", "MENIG", "MEN", "NOT", "DIF", "MAS", "MENOS", "POR", "ENTRE",
  "C", "PC", "PUNTO", "DP", "TRUE", "FALSE", "AND", "OR",
  "CAMINO_DESPEJADO", "CAMINO_BLOQUEADO", "INTERSECCION_OBJ",
  "TENER_TODOS_OBJS", "RECOGER_OBJ", "TERMINAR", "$accept", "programa",
  "$@1", "$@2", "p1", "p2", "p3", "p4", "var", "$@3", "$@4", "v1", "v2",
  "v3", "v4", "v5", "modulo", "$@5", "m1", "m2", "m3", "m4", "m5", "m6",
  "m7", "param", "pa", "cuerpo", "C1", "asignacion", "as", "logico", "l1",
  "l2", "expresion", "$@6", "expr", "exp", "exp1", "termino", "te",
  "factor", "varcte", "varcte1", "condicion", "co1", "co2", "co3", "ciclo",
  "ci1", "ci2", "predef", "pred1", "pred2", "imprimir", "imp1", "imp2",
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
     305,   306
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    54,    55,    53,    56,    56,    57,    57,    58,
      59,    59,    61,    62,    60,    63,    63,    64,    65,    65,
      66,    67,    67,    69,    68,    70,    70,    71,    72,    72,
      73,    74,    74,    75,    76,    76,    77,    78,    78,    79,
      79,    79,    79,    79,    80,    81,    82,    82,    83,    84,
      84,    84,    85,    85,    87,    86,    88,    88,    88,    88,
      88,    88,    89,    90,    90,    90,    91,    92,    92,    92,
      93,    93,    93,    94,    94,    94,    94,    94,    94,    95,
      95,    96,    97,    98,    98,    99,    99,   100,   101,   102,
     102,   103,   104,   105,   105,   106,   107,   108,   108,   109,
     109,   109,   109,   109,   109,   109,   110,   110,   110,   110
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     9,     0,     2,     0,     1,     2,
       0,     2,     0,     0,     6,     1,     3,     2,     1,     3,
       2,     0,     3,     0,    10,     0,     1,     2,     0,     2,
       2,     0,     2,     1,     0,     1,     3,     0,     2,     2,
       1,     1,     2,     2,     1,     4,     0,     3,     2,     0,
       2,     2,     1,     1,     0,     4,     1,     1,     1,     1,
       1,     1,     2,     0,     2,     2,     2,     0,     2,     2,
       1,     1,     3,     2,     1,     1,     1,     1,     1,     0,
       3,     8,     2,     0,     2,     0,     4,     7,     2,     0,
       2,     4,     2,     0,     3,     4,     2,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     5,     1,     0,     7,     5,    12,     0,     0,
       8,     6,    13,    23,     3,     0,     0,     0,     0,     0,
       0,    15,    25,     5,     0,    74,    75,    79,    76,    99,
     100,   101,   103,     0,     0,    77,    78,   102,   104,    17,
      18,    63,    67,    70,    71,     0,    14,     0,     0,    26,
       0,    16,     0,    73,    21,     0,     0,     0,     0,    62,
       0,     0,    66,     0,    37,     0,    46,     0,     0,     0,
       0,    10,     0,    40,    41,     0,     0,     0,     0,    20,
      19,    72,    64,    65,    68,    69,    93,     0,     0,    36,
      28,     0,     0,     0,     0,     0,     4,     9,    10,    44,
      39,    42,    43,    80,    21,     0,    92,    91,    38,    28,
       0,     0,     0,     0,     0,    49,    54,    79,    97,     0,
       0,    11,    22,    93,    29,    34,    27,    31,    47,    45,
       0,     0,     0,    48,     0,     0,    96,    95,     0,    94,
      35,    24,    33,    30,    31,     0,   106,   107,   108,   109,
      50,    52,    53,    51,    60,    56,    58,    59,    57,    61,
       0,    97,     0,    32,    83,     0,    55,    98,    89,     0,
      83,    82,    85,    89,    88,    87,    84,     0,    81,    90,
       0,     0,    86
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    17,     5,     9,    70,    97,     6,    12,
      15,    20,    21,    39,    55,    79,    10,    16,    48,   110,
     111,   126,   143,   141,   142,    49,    89,    98,   100,    72,
      92,   114,   133,   150,   115,   134,   160,   116,    59,    41,
      62,    42,    43,    53,    73,   165,   171,   178,    74,   169,
     174,    44,    87,   106,    76,   119,   136,    45,   152
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -93
static const yytype_int16 yypact[] =
{
     -93,    19,    14,   -93,    24,    33,    14,   -93,    44,    20,
     -93,   -93,   -93,   -93,   -93,    -9,    42,    49,    81,    61,
      48,   -93,    76,    14,    66,   -93,   -93,   -17,   -93,   -93,
     -93,   -93,   -93,    87,   132,   -93,   -93,   -93,   -93,   -93,
     -93,   -31,     0,   -93,   -93,    68,   -93,    91,    73,   -93,
     139,   -93,   132,   -93,    55,    78,    75,   132,   132,   -93,
     132,   132,   -93,   132,    63,    82,    -6,    83,    86,    90,
      84,   139,    67,   -93,   -93,    67,    67,    93,   114,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,    80,    95,    76,   -93,
      14,   132,    96,   132,    28,   132,   -93,   -93,   139,   -93,
     -93,   -93,   -93,   -93,    55,   132,   -93,   -93,   -93,    14,
     102,   139,   104,   132,   100,    -4,   -93,   107,    99,   105,
     115,   -93,   -93,    80,   -93,    33,   -93,   139,   -93,   -93,
     122,     5,     5,   -93,    30,    28,   -93,   -93,   123,   -93,
     -93,   -93,   -93,   -93,   139,   139,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     132,    99,   139,   -93,   139,   125,   -93,   -93,   139,   138,
     139,   -93,   149,   139,   -93,   -93,   -93,   141,   -93,   -93,
     139,   142,   -93
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -93,   -93,   -93,   -93,     4,   -93,   -93,    64,   -84,   -93,
     -93,   -93,   -93,   -93,   -93,    60,    40,   -93,   -93,   -93,
      57,   -93,    23,   -93,   -93,    85,   -93,   -36,   -30,   -93,
     -93,    74,   -93,    36,   -58,   -93,   -93,   -19,   -93,    22,
     -93,   -93,   -92,   -93,   -93,   -10,     1,   -93,   -93,   -93,
      -1,   -49,   -93,    53,   -93,   -93,    16,   -93,   -93
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -106
static const yytype_int16 yytable[] =
{
      40,    75,   118,    57,    58,    52,   109,  -105,    25,    26,
      11,    27,    28,    18,    71,    56,    91,    19,  -105,     3,
      29,    30,    75,    31,    32,   109,     4,    50,    14,    34,
       7,    25,    26,    77,   117,    28,    60,    61,    82,    83,
     131,   132,     8,   161,    86,   101,   102,    35,    36,    75,
      13,   146,   147,   148,   149,    37,    38,   154,   155,   156,
     157,   158,    75,   159,    25,    26,    22,    27,    28,    23,
      35,    36,   112,   151,   151,   127,    29,    30,    75,    31,
      32,    33,    84,    85,    24,    34,   123,    46,    47,    51,
      54,   144,    63,    78,   129,    75,    75,    64,    65,    80,
      81,    88,    90,    35,    36,    96,    99,    93,   144,   164,
      94,    37,    38,    75,    95,    75,   103,   104,   105,    75,
     107,    75,   113,   125,    75,   130,   168,   128,   170,    52,
     137,    75,   173,   135,   170,    25,    26,   173,    27,    28,
     138,   166,   145,   162,   164,    66,   172,    29,    30,    67,
      31,    32,    68,    69,    29,    30,    34,    31,    32,   175,
     177,   180,   121,   182,   122,   140,   124,   163,   153,   120,
     181,   176,   179,   108,    35,    36,   139,   167,     0,     0,
       0,     0,    37,    38,     0,     0,     0,     0,     0,    37,
      38
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-93))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      19,    50,    94,    34,    35,    22,    90,    24,     3,     4,
       6,     6,     7,    22,    50,    34,    22,    26,    24,     0,
      15,    16,    71,    18,    19,   109,    12,    23,     8,    24,
       6,     3,     4,    52,     6,     7,    36,    37,    57,    58,
      44,    45,     9,   135,    63,    75,    76,    42,    43,    98,
       6,    46,    47,    48,    49,    50,    51,    27,    28,    29,
      30,    31,   111,    33,     3,     4,    24,     6,     7,    20,
      42,    43,    91,   131,   132,   111,    15,    16,   127,    18,
      19,    20,    60,    61,     3,    24,   105,    39,    12,    23,
       3,   127,    24,    38,   113,   144,   145,     6,    25,    21,
      25,    38,    20,    42,    43,    21,    39,    24,   144,   145,
      24,    50,    51,   162,    24,   164,    23,     3,    38,   168,
      25,   170,    26,    21,   173,    25,   162,    23,   164,    22,
      25,   180,   168,    34,   170,     3,     4,   173,     6,     7,
      25,   160,    20,    20,   180,     6,    21,    15,    16,    10,
      18,    19,    13,    14,    15,    16,    24,    18,    19,    21,
      11,    20,    98,    21,   104,   125,   109,   144,   132,    95,
     180,   170,   173,    88,    42,    43,   123,   161,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    50,
      51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    53,    54,     0,    12,    56,    60,     6,     9,    57,
      68,    56,    61,     6,     8,    62,    69,    55,    22,    26,
      63,    64,    24,    20,     3,     3,     4,     6,     7,    15,
      16,    18,    19,    20,    24,    42,    43,    50,    51,    65,
      89,    91,    93,    94,   103,   109,    39,    12,    70,    77,
      56,    23,    22,    95,     3,    66,    89,    34,    35,    90,
      36,    37,    92,    24,     6,    25,     6,    10,    13,    14,
      58,    79,    81,    96,   100,   103,   106,    89,    38,    67,
      21,    25,    89,    89,    91,    91,    89,   104,    38,    78,
      20,    22,    82,    24,    24,    24,    21,    59,    79,    39,
      80,    80,    80,    23,     3,    38,   105,    25,    77,    60,
      71,    72,    89,    26,    83,    86,    89,     6,    94,   107,
      83,    59,    67,    89,    72,    21,    73,    79,    23,    89,
      25,    44,    45,    84,    87,    34,   108,    25,    25,   105,
      68,    75,    76,    74,    79,    20,    46,    47,    48,    49,
      85,    86,   110,    85,    27,    28,    29,    30,    31,    33,
      88,    94,    20,    74,    79,    97,    89,   108,    79,   101,
      79,    98,    21,    79,   102,    21,    98,    11,    99,   102,
      20,    97,    21
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
<<<<<<< HEAD
#line 98 "sintax.y"
=======
#line 45 "sintax.y"
>>>>>>> 2ba6f4a1d1bdeac977880976c76ab6a9a2a8c1f1
    { addFunc((char*)"global", contFunc); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
<<<<<<< HEAD
#line 99 "sintax.y"
=======
#line 45 "sintax.y"
>>>>>>> 2ba6f4a1d1bdeac977880976c76ab6a9a2a8c1f1
    { addFunc((char*)"main", ++contFunc); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
<<<<<<< HEAD
#line 105 "sintax.y"
    {cout << "HOL";}
=======
#line 51 "sintax.y"
    { contVars++; nameVar = (yyvsp[(2) - (2)].id); addVar(nameVar); }
>>>>>>> 2ba6f4a1d1bdeac977880976c76ab6a9a2a8c1f1
    break;

  case 13:

/* Line 1806 of yacc.c  */
<<<<<<< HEAD
#line 105 "sintax.y"
    { contVars++; nameVar = (yyvsp[(2) - (3)].id); addVar(nameVar); }
=======
#line 58 "sintax.y"
    { 
	if( findFunc((yyvsp[(2) - (2)].id)) ){ cout << "hey"; addFunc((yyvsp[(2) - (2)].id), ++contFunc); }
}
>>>>>>> 2ba6f4a1d1bdeac977880976c76ab6a9a2a8c1f1
    break;

  case 23:

/* Line 1806 of yacc.c  */
<<<<<<< HEAD
#line 112 "sintax.y"
    { if( findFunc((yyvsp[(2) - (2)].id)) ) addFunc((yyvsp[(2) - (2)].id), ++contFunc); }
=======
#line 95 "sintax.y"
    { if(nameVar != NULL){ addTypeVar( nameVar, 1); nameVar = NULL;}}
>>>>>>> 2ba6f4a1d1bdeac977880976c76ab6a9a2a8c1f1
    break;

  case 54:

/* Line 1806 of yacc.c  */
<<<<<<< HEAD
#line 136 "sintax.y"
    {e = (char*)"Non logical expretion";}
=======
#line 96 "sintax.y"
    { if(nameVar != NULL){ addTypeVar( nameVar, 2); nameVar = NULL;}}
>>>>>>> 2ba6f4a1d1bdeac977880976c76ab6a9a2a8c1f1
    break;

  case 74:

/* Line 1806 of yacc.c  */
<<<<<<< HEAD
#line 148 "sintax.y"
    { if(nameVar != NULL){ addTypeVar( nameVar, 1); nameVar = NULL;}}
=======
#line 97 "sintax.y"
    { if(nameVar != NULL){ addTypeVar( nameVar, 3); nameVar = NULL;}}
>>>>>>> 2ba6f4a1d1bdeac977880976c76ab6a9a2a8c1f1
    break;

  case 75:

/* Line 1806 of yacc.c  */
<<<<<<< HEAD
#line 149 "sintax.y"
    { if(nameVar != NULL){ addTypeVar( nameVar, 2); nameVar = NULL;}}
=======
#line 98 "sintax.y"
    { if(nameVar != NULL){ addTypeVar( nameVar, 4); nameVar = NULL;}}
>>>>>>> 2ba6f4a1d1bdeac977880976c76ab6a9a2a8c1f1
    break;

  case 76:

/* Line 1806 of yacc.c  */
<<<<<<< HEAD
#line 150 "sintax.y"
    { if(nameVar != NULL){ addTypeVar( nameVar, 3); nameVar = NULL;}}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 151 "sintax.y"
    { if(nameVar != NULL){ addTypeVar( nameVar, 4); nameVar = NULL;}}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 152 "sintax.y"
=======
#line 99 "sintax.y"
>>>>>>> 2ba6f4a1d1bdeac977880976c76ab6a9a2a8c1f1
    { if(nameVar != NULL){ addTypeVar( nameVar, 4); nameVar = NULL;}}
    break;



/* Line 1806 of yacc.c  */
<<<<<<< HEAD
#line 1739 "sintax.cpp"
=======
#line 1676 "sintax.cpp"
>>>>>>> 2ba6f4a1d1bdeac977880976c76ab6a9a2a8c1f1
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
<<<<<<< HEAD
#line 176 "sintax.y"
=======
#line 123 "sintax.y"
>>>>>>> 2ba6f4a1d1bdeac977880976c76ab6a9a2a8c1f1

main() {
	if (yyparse()==0)
		printf("PROGRAMA ACEPTADO\n");
	else
		printf("ERROR\n");
	
}

void yyerror(const char *s) {
	cout << "Parse error!  Message: " << e << endl;
	// might as well halt now:
	exit(-1);
}

