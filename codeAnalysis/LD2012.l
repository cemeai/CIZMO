%{
#include "LD2012.tab.h"
%}
%%option noyywrap
	digit	[0-9]
	upper_l	[A-Z]
	lower_l	[a-z]
	id = {lower_l}{lower_l | upper_l | digit}* 
	cteInt = {digit}{digit}*
	cteFloat = digit {digit}*"."digit{digit}*
	cteString = "\"".*"\""
%%
	[\t \n]+ /* CaracteresEnBlanco*/ ;
	"program" {return (PROGRAM);}
	"var" {return (VAR);}
	":" {return (DP);}
	"," {return (C);}
	";" {return (PC);}
	"int" {return (INT);}
	"float" {return (FLOAT);}
	"{" {return (LLO);}
	"}" {return (LLC);}
	"=" {return (IGUAL);}
	">" {return (MAY);}
	"<" {return (MEN);}
	"<>" {return (DIF);}
	"if" {return (IF);}
	"(" {return (PAO);}
	")" {return (PAC);}
	"else" {return (ELSE);}
	"+" {return (MAS);}
	"-" {return (MENOS);}
	"*" {return (POR);}
	"/" {return (ENTRE);}
	"print" {return (PRINT);}
	{id} {return (ID);}
	{cteInt} {return (CINT);}
	{cteFloat} {return (CFLOAT);}
	{cteString}}return (STRING);}
%%