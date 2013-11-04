%{
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

%}
%union {
	int ival;
	float fval;
	char *id;
	char *ide;
}
%token <ival> CINT
%token <fval> CFLOAT
%token <ide> IDE
%token <id> ID 
%token STRING
%token PROGRAMA FUNC COND SI SINO VAR IMPRIMIR MIENTRAS 
		DETENER MOVER_ADELANTE MOVER_ATRAS ROTAR 
		CARGAR_MAPA LLO LLC COO COC PAO PAC  ASIGNACION 
		IGUAL MAY MAYIG MENIG MEN NOT DIF MAS MENOS POR 
		ENTRE C PC PUNTO DP TRUE FALSE AND OR 
		CAMINO_DESPEJADO CAMINO_BLOQUEADO INTERSECCION_OBJ
		TENER_TODOS_OBJS RECOGER_OBJ TERMINAR
%%
programa: { addFunc((char*)"global", contFunc); } p1 p2 PROGRAMA 
		  { addFunc((char*)"main", ++contFunc); } LLO p1 p3 LLC;
p1: /* empty */ | var p1;
p2: /* empty */ | modulo;
p3: cuerpo p4;
p4: /* empty */ | cuerpo p4;


var: VAR ID { nameVar = $2; GC_Asignaciones_1();} v1 PC;
v1: v2 | COO CINT COC;
v2: ASIGNACION {GC_Asignaciones_2();} v3;
v3: exp {GC_Asignaciones_3();} | LLO v4 LLC;
v4: CINT v5;
v5: /* empty */ | C CINT v5;


modulo: FUNC ID { if( findFunc($2) ){ addFunc($2, ++contFunc); } } 
			PAO m1 PAC LLO m2 LLC m6;
m1: /* empty */ | param;
m2: m3 m4;
m3: /* empty */ | var m3;
m4: cuerpo m5;
m5: /* empty */ | cuerpo m5;
m6: m7;
m7: /* empty */ | modulo;


param: VAR ID pa;
pa: /* empty */|C param;


cuerpo: asignacion C1 | condicion | ciclo | predef C1 | imprimir C1;
C1: PC;


asignacion: ID {nameVar = $1; GC_getDirAndType();} as ASIGNACION {GC_Asignaciones_2();} exp {GC_Asignaciones_5();};
as: /* empty */ | COO exp COC;


logico: expresion {GC_Expresiones_11();} l1;
l1: /* empty */ | AND {GC_Expresiones_8(12);} l2 | OR {GC_Expresiones_8(13);} l2;
l2: expresion | pruebas;


expresion: exp expr {GC_Expresiones_9(); } exp;
expr: MAY {GC_Expresiones_8(10);} | MEN { GC_Expresiones_8(8);} | MAYIG {GC_Expresiones_8(11);} | MENIG {GC_Expresiones_8(9);} | IGUAL {GC_Expresiones_8(7);} | DIF {GC_Expresiones_8(6);};


exp: termino {GC_Expresiones_4();} exp1;
exp1: /* empty */ | MAS {GC_Expresiones_2(1);} exp | MENOS {GC_Expresiones_2(2);} exp;


termino: factor { GC_Expresiones_5(); } te;
te: /* empty */ | POR { GC_Expresiones_3(3); } termino | ENTRE { GC_Expresiones_3(4); } termino;


factor: varcte | predef | PAO {GC_Expresiones_6();} expresion PAC {GC_Expresiones_7();};


varcte: ID {nameVar = $1; GC_getDirAndType();} varcte1 |
			CINT   {char* buf = (char*)malloc( sizeof (int)); sprintf(buf,"%d", $1); 
					Constantes[iC] = buf; PilaT.push(1); PilaO.push(iC++); }| // 1 int
			CFLOAT {char* buf = (char*)malloc( sizeof (float)); sprintf(buf,"%f", $1); 
					Constantes[fC] = buf; PilaT.push(2); PilaO.push(fC++);}| // 2 float
			STRING {PilaT.push(3); PilaO.push(sC++);}| // 3 string
			TRUE   {Constantes[bC] = (char *)"TRUE"; PilaT.push(4); PilaO.push(bC++);}| // 4 bool
			FALSE  {Constantes[bC] = (char *)"FALSE"; PilaT.push(5); PilaO.push(bC++);}  // 0 noType
varcte1: /* empty */ |  COO exp COC;


condicion: SI PAO logico PAC { GC_Estatutos_gotoF(); } LLO co1 LLC co3 { GC_Estatutos_IF_3(); };
co1: cuerpo co2;
co2: /* empty */ | cuerpo co2;
co3: /* empty */ | SINO { GC_Estatutos_IF_2(); } LLO co1 LLC;


ciclo: MIENTRAS { GC_Estatutos_WHILE_1();} PAO logico PAC 
				{ GC_Estatutos_gotoF();} LLO ci1 LLC
				{ GC_Estatutos_WHILE_2(); };
ci1: cuerpo ci2;
ci2: /* empty */ | cuerpo ci2;


predef: pdfunc PAO pred1 PAC;
pred1: exp pred2;
pred2: /* empty */ | C exp pred2;


imprimir: IMPRIMIR PAO imp1 PAC;
imp1: varcte imp2;
imp2: /* empty */ | MAS varcte imp2;


pdfunc:DETENER | MOVER_ADELANTE | ROTAR | RECOGER_OBJ | CARGAR_MAPA | TERMINAR | ID;


pruebas: CAMINO_DESPEJADO | CAMINO_BLOQUEADO | INTERSECCION_OBJ | TENER_TODOS_OBJS;

%%
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
