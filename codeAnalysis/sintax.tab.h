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
     COND = 259,
     FUNC = 260,
     SINO = 261,
     IMPRIMIR = 262,
     MIENTRAS = 263,
     DETENER = 264,
     MOVER_ADELANTE = 265,
     MOVER_ATRAS = 266,
     VERDAD = 267,
     FALSO = 268,
     ARREGLO = 269,
     ROTAR = 270,
     CARGARMAPA = 271,
     VAR = 272,
     DP = 273,
     C = 274,
     PC = 275,
     PUNTO = 276,
     LLO = 277,
     LLC = 278,
     PAO = 279,
     PAC = 280,
     MAS = 281,
     MENOS = 282,
     POR = 283,
     ENTRE = 284,
     AND = 285,
     OR = 286,
     NOT = 287,
     DIF = 288,
     IGUAL = 289,
     MAY = 290,
     MAYIG = 291,
     MEN = 292,
     MENIG = 293,
     ID = 294,
     CINT = 295,
     CFLOAT = 296,
     STRING = 297
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


