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

// 14 gotoF 15 goto 16 return 17 endF 18 endP 
// 19 era 20 param 21 gosub

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

void yyerror(const char *s);

#include "../semantica/funcdirectory.cpp"
#include "../semantica/cubo.cpp"
#include "../cuadruplos/cuadruplos.cpp"
#include "../cuadruplos/GCI/GC_Expresiones.cpp"
#include "../cuadruplos/GCI/GC_Asignaciones.cpp"
#include "../cuadruplos/GCI/GC_Estatutos.cpp"



/* Line 268 of yacc.c  */
#line 156 "sintax.cpp"

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
#line 84 "sintax.y"

	int ival;
	float fval;
	char *id;
	char *ide;



/* Line 293 of yacc.c  */
#line 254 "sintax.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 266 "sintax.cpp"

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
#define YYLAST   217

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNRULES -- Number of states.  */
#define YYNSTATES  208

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
      24,    26,    29,    30,    33,    34,    40,    42,    46,    47,
      51,    53,    57,    60,    61,    65,    66,    67,    68,    81,
      82,    83,    86,    89,    90,    93,    96,    97,   100,   102,
     103,   105,   106,   112,   113,   116,   119,   121,   123,   126,
     129,   131,   133,   136,   137,   138,   145,   146,   150,   151,
     155,   156,   157,   161,   162,   166,   168,   170,   174,   176,
     178,   180,   182,   184,   186,   187,   191,   192,   193,   197,
     198,   202,   203,   207,   208,   209,   213,   214,   218,   220,
     222,   223,   228,   229,   233,   235,   237,   239,   241,   243,
     244,   248,   249,   259,   262,   263,   266,   267,   268,   274,
     275,   276,   286,   289,   290,   293,   298,   299,   303,   304,
     305,   308,   313,   316,   317,   320,   322,   324,   326,   328,
     330,   332,   334,   336,   338,   340
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      55,     0,    -1,    -1,    -1,    -1,    -1,    56,    57,    60,
      61,     8,    58,    59,    21,    60,    62,    22,    -1,    -1,
      64,    60,    -1,    -1,    72,    -1,    87,    63,    -1,    -1,
      87,    63,    -1,    -1,    13,     6,    65,    66,    40,    -1,
      67,    -1,    23,     3,    24,    -1,    -1,    27,    68,    69,
      -1,   102,    -1,    21,    70,    22,    -1,     3,    71,    -1,
      -1,    39,     3,    71,    -1,    -1,    -1,    -1,     9,     6,
      73,    25,    76,    74,    26,    21,    78,    22,    75,    82,
      -1,    -1,    -1,    77,    84,    -1,    79,    80,    -1,    -1,
      64,    79,    -1,    87,    81,    -1,    -1,    87,    81,    -1,
      83,    -1,    -1,    72,    -1,    -1,     6,    42,     6,    85,
      86,    -1,    -1,    39,    84,    -1,    90,    88,    -1,   117,
      -1,   123,    -1,   128,    88,    -1,   132,    88,    -1,    89,
      -1,    40,    -1,    53,   102,    -1,    -1,    -1,     6,    91,
      93,    27,    92,   102,    -1,    -1,    23,   102,    24,    -1,
      -1,   100,    95,    96,    -1,    -1,    -1,    45,    97,    99,
      -1,    -1,    46,    98,    99,    -1,   100,    -1,   136,    -1,
     102,   101,   102,    -1,    29,    -1,    32,    -1,    30,    -1,
      31,    -1,    28,    -1,    34,    -1,    -1,   107,   103,   104,
      -1,    -1,    -1,    35,   105,   102,    -1,    -1,    36,   106,
     102,    -1,    -1,   112,   108,   109,    -1,    -1,    -1,    37,
     110,   107,    -1,    -1,    38,   111,   107,    -1,   114,    -1,
     128,    -1,    -1,    25,   113,   100,    26,    -1,    -1,     6,
     115,   116,    -1,     3,    -1,     4,    -1,     7,    -1,    43,
      -1,    44,    -1,    -1,    23,   102,    24,    -1,    -1,    11,
      25,    94,    26,   118,    21,   119,    22,   121,    -1,    87,
     120,    -1,    -1,    87,   120,    -1,    -1,    -1,    12,   122,
      21,   119,    22,    -1,    -1,    -1,    15,   124,    25,    94,
      26,   125,    21,   126,    22,    -1,    87,   127,    -1,    -1,
      87,   127,    -1,   135,    25,   129,    26,    -1,    -1,   102,
     130,   131,    -1,    -1,    -1,    39,   129,    -1,    14,    25,
     133,    26,    -1,   114,   134,    -1,    -1,    39,   133,    -1,
      16,    -1,    17,    -1,    19,    -1,    51,    -1,    20,    -1,
      52,    -1,     6,    -1,    47,    -1,    48,    -1,    49,    -1,
      50,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   103,   103,   104,   105,   106,   103,   107,   107,   108,
     108,   109,   110,   110,   113,   113,   114,   114,   115,   115,
     116,   116,   117,   118,   118,   121,   123,   124,   121,   125,
     125,   125,   126,   127,   127,   128,   129,   129,   130,   131,
     131,   134,   134,   137,   137,   140,   140,   140,   140,   140,
     140,   141,   144,   147,   147,   147,   148,   148,   151,   151,
     152,   152,   152,   152,   152,   153,   153,   156,   157,   157,
     157,   157,   157,   157,   160,   160,   161,   161,   161,   161,
     161,   164,   164,   165,   165,   165,   165,   165,   168,   168,
     168,   168,   171,   171,   172,   174,   176,   177,   178,   179,
     179,   182,   182,   183,   184,   184,   185,   185,   185,   188,
     189,   188,   191,   192,   192,   195,   197,   197,   200,   201,
     201,   204,   205,   206,   206,   209,   209,   209,   209,   209,
     209,   210,   216,   216,   216,   216
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
  "programa", "$@1", "$@2", "$@3", "$@4", "p1", "p2", "p3", "p4", "var",
  "$@5", "v1", "v2", "$@6", "v3", "v4", "v5", "modulo", "$@7", "$@8",
  "$@9", "m1", "$@10", "m2", "m3", "m4", "m5", "m6", "m7", "param", "$@11",
  "pa", "cuerpo", "C1", "retorno", "asignacion", "$@12", "$@13", "as",
  "logico", "$@14", "l1", "$@15", "$@16", "l2", "expresion", "expr", "exp",
  "$@17", "exp1", "$@18", "$@19", "termino", "$@20", "te", "$@21", "$@22",
  "factor", "$@23", "varcte", "$@24", "varcte1", "condicion", "$@25",
  "co1", "co2", "co3", "$@26", "ciclo", "$@27", "$@28", "ci1", "ci2",
  "predef", "pred1", "$@29", "pred2", "imprimir", "imp1", "imp2", "pdfunc",
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
     305,   306,   307,   308
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    56,    57,    58,    59,    55,    60,    60,    61,
      61,    62,    63,    63,    65,    64,    66,    66,    68,    67,
      69,    69,    70,    71,    71,    73,    74,    75,    72,    76,
      77,    76,    78,    79,    79,    80,    81,    81,    82,    83,
      83,    85,    84,    86,    86,    87,    87,    87,    87,    87,
      87,    88,    89,    91,    92,    90,    93,    93,    95,    94,
      96,    97,    96,    98,    96,    99,    99,   100,   101,   101,
     101,   101,   101,   101,   103,   102,   104,   105,   104,   106,
     104,   108,   107,   109,   110,   109,   111,   109,   112,   112,
     113,   112,   115,   114,   114,   114,   114,   114,   114,   116,
     116,   118,   117,   119,   120,   120,   121,   122,   121,   124,
     125,   123,   126,   127,   127,   128,   130,   129,   129,   131,
     131,   132,   133,   134,   134,   135,   135,   135,   135,   135,
     135,   135,   136,   136,   136,   136
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     0,     0,    11,     0,     2,     0,
       1,     2,     0,     2,     0,     5,     1,     3,     0,     3,
       1,     3,     2,     0,     3,     0,     0,     0,    12,     0,
       0,     2,     2,     0,     2,     2,     0,     2,     1,     0,
       1,     0,     5,     0,     2,     2,     1,     1,     2,     2,
       1,     1,     2,     0,     0,     6,     0,     3,     0,     3,
       0,     0,     3,     0,     3,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     0,     3,     0,     0,     3,     0,
       3,     0,     3,     0,     0,     3,     0,     3,     1,     1,
       0,     4,     0,     3,     1,     1,     1,     1,     1,     0,
       3,     0,     9,     2,     0,     2,     0,     0,     5,     0,
       0,     9,     2,     0,     2,     4,     0,     3,     0,     0,
       2,     4,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     3,     1,     7,     0,     9,     7,    14,     0,
       0,    10,     8,     0,    25,     4,     0,    18,     0,    16,
       0,     5,     0,     0,    15,    29,     0,    17,    94,    95,
      92,    96,   125,   126,   127,   129,     0,    90,    97,    98,
     128,   130,    19,    20,    74,    81,    88,    89,     0,    26,
       0,     7,    99,    23,     0,     0,    76,    83,   118,     0,
       0,    31,     0,     0,    93,     0,    22,    21,     0,     0,
      77,    79,    75,    84,    86,    82,   116,     0,     0,     0,
      53,     0,     0,   109,     0,     0,    12,    50,     0,    46,
      47,     0,     0,     0,    23,    91,    72,    68,    70,    71,
      69,    73,     0,     0,     0,     0,     0,   119,   115,    33,
      41,    56,     0,     0,     0,    52,     6,    11,    12,    51,
      45,    48,    49,   100,    24,    67,    78,    80,    85,    87,
     118,   117,    33,     0,     0,    43,     0,     0,     0,    58,
      92,   123,     0,     0,    13,   120,    34,    27,    32,    36,
       0,    42,     0,    54,   101,    60,     0,   122,   121,     0,
      39,    35,    36,    44,    57,     0,     0,    61,    63,    59,
     124,   110,    40,    28,    38,    37,    55,     0,     0,     0,
       0,   104,     0,   132,   133,   134,   135,    62,    65,    66,
      64,     0,   104,   103,   106,   113,     0,   105,   107,   102,
     113,   112,   111,     0,   114,     0,     0,   108
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    21,    26,     6,    10,    85,   117,
       7,    13,    18,    19,    23,    42,    54,    66,    11,    20,
      59,   160,    49,    50,   133,   134,   148,   161,   173,   174,
      61,   135,   151,   118,   120,    87,    88,   111,   165,   137,
     138,   155,   169,   178,   179,   187,   139,   102,    69,    56,
      72,   103,   104,    44,    57,    75,   105,   106,    45,    55,
      46,    52,    64,    89,   166,   182,   193,   199,   203,    90,
     114,   180,   196,   201,    47,    77,   107,   131,    92,   142,
     157,    48,   189
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -103
static const yytype_int16 yypact[] =
{
    -103,    15,  -103,  -103,    17,    28,    37,    17,  -103,    31,
      47,  -103,  -103,   -15,  -103,  -103,    58,  -103,    22,  -103,
      52,  -103,    54,   145,  -103,    73,    59,  -103,  -103,  -103,
      56,  -103,  -103,  -103,  -103,  -103,    79,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,    63,  -103,
      77,    17,    67,    53,    69,   165,   -22,   -16,   165,    68,
      51,  -103,    12,   165,  -103,    92,  -103,  -103,    70,    39,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,    71,    78,    95,
      56,    80,    81,  -103,   165,    76,    12,  -103,    64,  -103,
    -103,    64,    64,    83,    53,  -103,  -103,  -103,  -103,  -103,
    -103,  -103,   165,   165,   165,   165,   165,    72,  -103,    17,
    -103,    85,   165,    32,    84,  -103,  -103,  -103,    12,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,
     165,  -103,    17,    88,    12,    74,   165,    87,    90,  -103,
    -103,    89,    94,   165,  -103,  -103,  -103,  -103,  -103,    12,
      77,  -103,    98,  -103,  -103,    -4,    32,  -103,  -103,    97,
      37,  -103,    12,  -103,  -103,   165,    82,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,    12,     0,     0,
     105,    12,   112,  -103,  -103,  -103,  -103,  -103,  -103,  -103,
    -103,    12,    12,  -103,   115,    12,   114,  -103,  -103,  -103,
      12,  -103,  -103,   116,  -103,    12,   117,  -103
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -103,  -103,  -103,  -103,  -103,  -103,     2,  -103,  -103,    23,
     -99,  -103,  -103,  -103,  -103,  -103,  -103,    48,   -14,  -103,
    -103,  -103,  -103,  -103,  -103,    18,  -103,    -9,  -103,  -103,
      -6,  -103,  -103,   -60,   -34,  -103,  -103,  -103,  -103,  -103,
      11,  -103,  -103,  -103,  -103,   -24,   -54,  -103,   -18,  -103,
    -103,  -103,  -103,   -46,  -103,  -103,  -103,  -103,  -103,  -103,
    -102,  -103,  -103,  -103,  -103,   -49,   -35,  -103,  -103,  -103,
    -103,  -103,  -103,   -42,   -62,    29,  -103,  -103,  -103,     4,
    -103,  -103,  -103
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -132
static const yytype_int16 yytable[] =
{
      91,    68,    86,    28,    29,    43,    30,    31,    16,    12,
     132,   141,    17,    70,    71,     3,    32,    33,    80,    34,
      35,    73,    74,    81,    91,    37,    82,    83,    32,    33,
       5,    34,    35,   132,     8,    28,    29,    14,   140,    31,
      76,   167,   168,    38,    39,    93,     9,   183,   184,   185,
     186,    40,    41,    62,   141,    15,    91,   121,   122,   128,
     129,    22,    24,    40,    41,    84,   115,    96,    97,    98,
      99,   100,    91,   101,   149,    38,    39,    25,    27,   -30,
      51,  -131,    53,    60,   125,   126,   127,    91,    58,   162,
      63,    67,    65,    79,    78,    94,    95,   108,   116,   109,
      91,   110,   162,   177,   119,   112,   113,   123,   136,   143,
     147,   130,    76,   150,   153,    91,   154,   181,   152,    91,
     158,   192,   164,   171,   188,   188,   191,   198,   156,    91,
      91,   195,   192,    91,   194,   200,   202,   205,    91,   207,
     200,   144,   124,    91,   163,   181,   172,   176,    28,    29,
     146,    30,    31,   175,   159,   190,   206,   197,   204,   145,
     170,    32,    33,     0,    34,    35,    36,     0,    28,    29,
      37,    30,    31,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,     0,    34,    35,     0,     0,    38,    39,
      37,     0,     0,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,    39,
       0,     0,     0,     0,     0,     0,    40,    41
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-103))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      62,    55,    62,     3,     4,    23,     6,     7,    23,     7,
     109,   113,    27,    35,    36,     0,    16,    17,     6,    19,
      20,    37,    38,    11,    86,    25,    14,    15,    16,    17,
      13,    19,    20,   132,     6,     3,     4,     6,     6,     7,
      58,    45,    46,    43,    44,    63,     9,    47,    48,    49,
      50,    51,    52,    51,   156,     8,   118,    91,    92,   105,
     106,     3,    40,    51,    52,    53,    84,    28,    29,    30,
      31,    32,   134,    34,   134,    43,    44,    25,    24,     6,
      21,    25,     3,     6,   102,   103,   104,   149,    25,   149,
      23,    22,    39,    42,    26,     3,    26,    26,    22,    21,
     162,     6,   162,    21,    40,    25,    25,    24,    23,    25,
      22,    39,   130,    39,    27,   177,    26,   177,   136,   181,
      26,   181,    24,    26,   178,   179,    21,    12,    39,   191,
     192,   191,   192,   195,    22,   195,    22,    21,   200,    22,
     200,   118,    94,   205,   150,   205,   160,   165,     3,     4,
     132,     6,     7,   162,   143,   179,   205,   192,   200,   130,
     156,    16,    17,    -1,    19,    20,    21,    -1,     3,     4,
      25,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    19,    20,    -1,    -1,    43,    44,
      25,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    56,     0,    57,    13,    60,    64,     6,     9,
      61,    72,    60,    65,     6,     8,    23,    27,    66,    67,
      73,    58,     3,    68,    40,    25,    59,    24,     3,     4,
       6,     7,    16,    17,    19,    20,    21,    25,    43,    44,
      51,    52,    69,   102,   107,   112,   114,   128,   135,    76,
      77,    21,   115,     3,    70,   113,   103,   108,    25,    74,
       6,    84,    60,    23,   116,    39,    71,    22,   100,   102,
      35,    36,   104,    37,    38,   109,   102,   129,    26,    42,
       6,    11,    14,    15,    53,    62,    87,    89,    90,   117,
     123,   128,   132,   102,     3,    26,    28,    29,    30,    31,
      32,    34,   101,   105,   106,   110,   111,   130,    26,    21,
       6,    91,    25,    25,   124,   102,    22,    63,    87,    40,
      88,    88,    88,    24,    71,   102,   102,   102,   107,   107,
      39,   131,    64,    78,    79,    85,    23,    93,    94,   100,
       6,   114,   133,    25,    63,   129,    79,    22,    80,    87,
      39,    86,   102,    27,    26,    95,    39,   134,    26,    94,
      75,    81,    87,    84,    24,    92,   118,    45,    46,    96,
     133,    26,    72,    82,    83,    81,   102,    21,    97,    98,
     125,    87,   119,    47,    48,    49,    50,    99,   100,   136,
      99,    21,    87,   120,    22,    87,   126,   120,    12,   121,
      87,   127,    22,   122,   127,    21,   119,    22
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
#line 103 "sintax.y"
    { addCuad(15,-1,-1,-1); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 104 "sintax.y"
    { addFunc((char*)"global", contFunc); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 105 "sintax.y"
    { editCuad(1); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 106 "sintax.y"
    { addFunc((char*)"main", ++contFunc); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 106 "sintax.y"
    {printAllCuads();YYACCEPT;}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 113 "sintax.y"
    { nameVar = (yyvsp[(2) - (2)].id); GC_Asignaciones_1();}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 115 "sintax.y"
    {GC_Asignaciones_2();}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 116 "sintax.y"
    {GC_Asignaciones_3();}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 121 "sintax.y"
    { iL = 8000; fL = 10000; sL = 12000; bL = 14000;
			if( !findFunc((yyvsp[(2) - (2)].id)) ){ addFunc((yyvsp[(2) - (2)].id), ++contFunc); addVar((yyvsp[(2) - (2)].id)); } else yyerror("ERROR la funcion ya existe\n"); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 123 "sintax.y"
    { addInCuadAndParams(params, cuadActual); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 124 "sintax.y"
    { addCuad(17,-1,-1,-1); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 125 "sintax.y"
    { params = 0; }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 134 "sintax.y"
    { nameVar = (yyvsp[(1) - (3)].id); 
		if(findVar(nameVar) == -1) addVar(nameVar); 
	    char* type = (yyvsp[(3) - (3)].id); addTypeParam( nameVar, type);}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 144 "sintax.y"
    { addCuad(16,PilaO.top(),-1,-1); PilaO.pop(); PilaT.pop(); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 147 "sintax.y"
    {nameVar = (yyvsp[(1) - (1)].id); GC_getDirAndType();}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 147 "sintax.y"
    {GC_Asignaciones_2();}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 147 "sintax.y"
    {GC_Asignaciones_5();}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 151 "sintax.y"
    {GC_Expresiones_11();}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 152 "sintax.y"
    {GC_Expresiones_8(12);}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 152 "sintax.y"
    {GC_Expresiones_8(13);}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 156 "sintax.y"
    { GC_Expresiones_9();}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 157 "sintax.y"
    {GC_Expresiones_8(10);}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 157 "sintax.y"
    { GC_Expresiones_8(8);}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 157 "sintax.y"
    {GC_Expresiones_8(11);}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 157 "sintax.y"
    {GC_Expresiones_8(9);}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 157 "sintax.y"
    {GC_Expresiones_8(7);}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 157 "sintax.y"
    {GC_Expresiones_8(6);}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 160 "sintax.y"
    { GC_Expresiones_4(); }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 161 "sintax.y"
    {GC_Expresiones_2(1);}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 161 "sintax.y"
    {GC_Expresiones_2(2);}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 164 "sintax.y"
    { GC_Expresiones_5(); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 165 "sintax.y"
    { GC_Expresiones_3(3); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 165 "sintax.y"
    { GC_Expresiones_3(4); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 168 "sintax.y"
    {GC_Expresiones_6();}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 168 "sintax.y"
    {GC_Expresiones_7();}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 171 "sintax.y"
    {nameVar = (yyvsp[(1) - (1)].id); GC_getDirAndType(); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 172 "sintax.y"
    {char* buf = (char*)malloc( sizeof (int)); sprintf(buf,"%d", (yyvsp[(1) - (1)].ival)); 
					Constantes[iC] = buf; PilaT.push(1); PilaO.push(iC++);}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 174 "sintax.y"
    {char* buf = (char*)malloc( sizeof (float)); sprintf(buf,"%f", (yyvsp[(1) - (1)].fval)); 
					Constantes[fC] = buf; PilaT.push(2); PilaO.push(fC++);}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 176 "sintax.y"
    { PilaT.push(3); PilaO.push(sC++);}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 177 "sintax.y"
    {Constantes[bC] = (char *)"TRUE"; PilaT.push(4); PilaO.push(bC++);}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 178 "sintax.y"
    {Constantes[bC] = (char *)"FALSE"; PilaT.push(5); PilaO.push(bC++);}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 182 "sintax.y"
    { GC_Estatutos_gotoF(); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 182 "sintax.y"
    { GC_Estatutos_IF_3();}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 185 "sintax.y"
    { GC_Estatutos_IF_2(); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 188 "sintax.y"
    { GC_Estatutos_WHILE_1();}
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 189 "sintax.y"
    { GC_Estatutos_gotoF();}
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 190 "sintax.y"
    { GC_Estatutos_WHILE_2(); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 195 "sintax.y"
    { if( params != getFuncParamsCount(indexFunc) ) yyerror("ERROR los parametros no concuerda con la funcion definida\n"); 
				addCuad(21,-1,-1,getFuncInCuad(indexFunc));}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 197 "sintax.y"
    { if( PilaT.top() == getFuncVarType(indexFunc,++params)){ 
				addCuad(20,PilaO.top(),-1,params);
			} else  yyerror("ERROR tipos de parametros no son compatibles con la funcion\n");}
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 210 "sintax.y"
    { if( !findFunc((yyvsp[(1) - (1)].id)) ) yyerror("ERROR la funcion no existe\n");
		 	 else indexFunc = getFuncScope((yyvsp[(1) - (1)].id)); 
		 	 addCuad(19,indexFunc,-1,-1); 
		 	 params = 0; }
    break;



/* Line 1806 of yacc.c  */
#line 2066 "sintax.cpp"
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
#line 218 "sintax.y"

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

