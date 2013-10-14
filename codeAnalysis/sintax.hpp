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
     PROGRAMA = 258,
     FUNC = 259,
     COND = 260,
     SI = 261,
     SINO = 262,
     VAR = 263,
     IMPRIMIR = 264,
     MIENTRAS = 265,
     DETENER = 266,
     MOVER_ADELANTE = 267,
     MOVER_ATRAS = 268,
     IDE = 269,
     ROTAR = 270,
     CARGAR_MAPA = 271,
     LLO = 272,
     LLC = 273,
     COO = 274,
     COC = 275,
     PAO = 276,
     PAC = 277,
     ID = 278,
     ASIGNACION = 279,
     IGUAL = 280,
     MAY = 281,
     MEN = 282,
     DIF = 283,
     MAS = 284,
     MENOS = 285,
     POR = 286,
     ENTRE = 287,
     C = 288,
     PC = 289,
     PUNTO = 290,
     DP = 291,
     CINT = 292,
     CFLOAT = 293,
     STRING = 294,
     TRUE = 295,
     FALSE = 296,
     AND = 297,
     OR = 298,
     CAMINO_DESPEJADO = 299,
     CAMINO_BLOQUEADO = 300,
     INTERSECCION_OBJ = 301,
     TENER_TODOS_OBJS = 302,
     RECOGER_OBJ = 303,
     TERMINAR = 304
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


