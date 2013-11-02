/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
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

/* Line 2068 of yacc.c  */
#line 78 "sintax.y"

	int ival;
	float fval;
	char *id;
	char *ide;
	char *sval;



/* Line 2068 of yacc.c  */
#line 111 "sintax.hpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


