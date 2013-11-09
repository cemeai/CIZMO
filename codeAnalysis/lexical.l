%{
#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#define YY_DECL extern "C" int yylex()

#include "sintax.tab.h"  // to get the token types that we return

%}
%%
PROGRAMA 	{return PROGRAMA;}
FUNC 		{return FUNC;}
SI			{return SI;}
SINO 		{return SINO;}
IMPRIMIR 	{return IMPRIMIR;}
MIENTRAS 	{return MIENTRAS;}
RETORNA 	{return RETURN;}
DETENER 	{return DETENER;}
MOVER_ADELANTE 		{return MOVER_ADELANTE;}
CARGAR_MAPA 		{return CARGAR_MAPA;}
MOVER_ATRAS 		{return MOVER_ATRAS;}
TERMINAR 			{return TERMINAR;}
CAMINO_DESPEJADO 	{return CAMINO_DESPEJADO;}
CAMINO_BLOQUEADO 	{return CAMINO_BLOQUEADO;}
INTERSECCION_OBJ 	{return INTERSECCION_OBJ;}
TENER_TODOS_OBJS 	{return TENER_TODOS_OBJS;}
RECOGER_OBJ 		{return RECOGER_OBJ;}
VERDAD	 	{return TRUE;}
FALSO		{return FALSE;}
ROTAR 		{return ROTAR;}
VAR 		{return VAR;}
":" 		{return DP;}
"," 		{return C;}
";" 		{return PC;}
"." 		{return PUNTO;}
"{" 		{return LLO;}
"}" 		{return LLC;}
"(" 		{return PAO;}
")" 		{return PAC;}
"["			{return COO;}
"]" 		{return COC;}
"+" 		{return MAS;}
"-" 		{return MENOS;}
"*" 		{return POR;}
"/" 		{return ENTRE;}
"&&" 		{return AND;}
"||" 		{return OR;}
"!" 		{return NOT;}
"=" 		{return ASIGNACION;}
"==" 		{return IGUAL;}
"!=" 		{return DIF;}
">" 		{return MAY;}
">=" 		{return MAYIG;}
"<" 		{return MEN;}
"<=" 		{return MENIG;}
[A-Z][a-z|A-z|0-9]* 	{yylval.ide = (char*) strdup(yytext); return IDE;}
[a-z|][a-z|A-z|0-9]* 	{yylval.id = (char*) strdup(yytext); return ID;}
[0-9]* 					{yylval.ival = atoi(yytext); return CINT;}
[0-9][0-9]*"."[0-9][0-9]* {yylval.fval = atof(yytext); return CFLOAT;}
%%
