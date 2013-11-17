%{
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
		TENER_TODOS_OBJS RECOGER_OBJ TERMINAR RETORNO
%%
programa: { addCuad(15,-1,-1,-1); }
		  { addFunc((char*)"global", contFunc); } p1 p2 PROGRAMA 
		  { editCuad(1); }
		  { addFunc((char*)"main", ++contFunc); } LLO p1 p3 LLC {printAllCuads();YYACCEPT;};
p1: /* empty */ | var p1;
p2: /* empty */ | modulo;
p3: /* empty */ | cuerpo p3;


var: VAR ID { nameVar = $2; } v1 PC;
v1: v2 | COO CINT COC DP ID {
			sizeArr[nameVar] = $2; 
			char* type = $5;
			addType( nameVar, type, $2 - 1); };
v2: ASIGNACION { GC_Asignaciones_1(); GC_Asignaciones_2();} v3;
v3: exp {GC_Asignaciones_3();} | 
	LLO exp { sizeByCount++; typeArr = PilaT.top();
			  dataArr.push_back(PilaO.top()); PilaO.pop(); 
			  dataArr.push_back(PilaT.top()); PilaT.pop();
			 } v4 LLC
				{	sizeArr[nameVar] = sizeByCount;
					dirBaseArr = addType( nameVar, typeArr, sizeByCount);
					addCuadsArrInic(nameVar, sizeByCount, dirBaseArr);
				};
v4: /* empty */ | C exp { 
					if( PilaT.top() != typeArr) 
						yyerror("ERROR tipos no compatibles con el arreglo\n");
					else{
						sizeByCount++; dataArr.push_back(PilaO.top()); 
						dataArr.push_back(PilaT.top());
						PilaO.pop(); PilaT.pop(); } 
					} v4;


modulo: FUNC ID { iL = 8000; fL = 10000; sL = 12000; bL = 14000;
			if( !findFunc($2) ){ addFunc($2, ++contFunc); addVar($2); } else yyerror("ERROR la funcion ya existe\n"); } 
			PAO m1 { addInCuadAndParams(params, cuadActual); } 
			PAC LLO m2 LLC { addCuad(17,-1,-1,-1); } m6;
m1: /* empty */ | { params = 0; } param;
m2: m3 m4;
m3: /* empty */ | var m3;
m4: /* empty */ | cuerpo m4;
m6: /* empty */ | modulo;


param: ID DP ID { nameVar = $1; 
		if(findVar(nameVar) == -1) addVar(nameVar); 
	    char* type = $3; addType( nameVar, type); params++;} pa;
pa: /* empty */|C param;


cuerpo: asignacion C1 | condicion | ciclo | predef C1 | imprimir C1 | retorno;
C1: PC;


retorno: RETORNO exp { addCuad(16,PilaO.top(),-1,-1); PilaO.pop(); PilaT.pop(); } PC;


asignacion: ID {nameVar = $1; GC_getDirAndType();} as ASIGNACION {GC_Asignaciones_2();} exp {GC_Asignaciones_5();};
as: /* empty */ | COO exp COC;


logico: expresion {GC_Expresiones_11();} l1 | pruebas l1 | ID l1;
l1: /* empty */ | AND {GC_Expresiones_2(12);} logico | OR {GC_Expresiones_2(13);} logico;


expresion: exp expr exp { GC_Expresiones_9();};
expr: MAY {GC_Expresiones_2(10);} | MEN { GC_Expresiones_2(8);} | MAYIG {GC_Expresiones_2(11);} | MENIG {GC_Expresiones_2(9);} | IGUAL {GC_Expresiones_2(7);} | DIF {GC_Expresiones_2(6);};


exp: termino { GC_Expresiones_4(); } exp1;
exp1: /* empty */ | MAS {GC_Expresiones_2(1);} exp | MENOS {GC_Expresiones_2(2);} exp;


termino: factor { GC_Expresiones_5(); } te;
te: /* empty */ | POR { GC_Expresiones_2(3); } termino | ENTRE { GC_Expresiones_2(4); } termino;


factor: varcte | predef | PAO {GC_Expresiones_6();} exp PAC {GC_Expresiones_7();};


varcte: ID {nameVar = $1; GC_getDirAndType(); } varcte1 |
			CINT   {char* buf = (char*)malloc( sizeof (int)); sprintf(buf,"%d", $1); 
					Constants[iC] = buf; PilaT.push(1); PilaO.push(iC++);}| // 1 int
			CFLOAT {char* buf = (char*)malloc( sizeof (float)); sprintf(buf,"%f", $1); 
					Constants[fC] = buf; PilaT.push(2); PilaO.push(fC++);}| // 2 float
			STRING { PilaT.push(3); PilaO.push(sC++);}| // 3 string
			TRUE   {Constants[bC] = (char *)"TRUE"; PilaT.push(4); PilaO.push(bC++);}| // 4 bool
			FALSE  {Constants[bC] = (char *)"FALSE"; PilaT.push(5); PilaO.push(bC++);}  // 0 noType
varcte1: /* empty */ |  COO exp COC 
			{	
				addCuadsArrInic(nameVar, sizeArr.find(nameVar)->second, getSizeArr((char*)"a"));
			};


condicion: SI PAO logico PAC { GC_Estatutos_gotoF(); } LLO co1 LLC co3 { GC_Estatutos_IF_3();};
co1: cuerpo co2;
co2: /* empty */ | cuerpo co2;
co3: /* empty */ | SINO { GC_Estatutos_IF_2(); } LLO co1 LLC;


ciclo: MIENTRAS { GC_Estatutos_WHILE_1();} PAO logico PAC 
				{ GC_Estatutos_gotoF();} LLO ci1 LLC
				{ GC_Estatutos_WHILE_2(); };
ci1: cuerpo ci2;
ci2: /* empty */ | cuerpo ci2;


predef: pdfunc PAO pred1 PAC { 
			if( predef == false ){
				if( params != getFuncParamsCount(indexFunc) ) yyerror("ERROR los parametros no concuerda con la funcion definida\n"); 
					addCuad(21,-1,-1,getFuncInCuad(indexFunc));
			} else { addCuadPredef(iPredef); predef = false; }
			};
pred1: exp { if( PilaT.top() == getFuncVarType(indexFunc,++params)){ 
				addCuad(20,PilaO.top(),-1,params);
			} else  yyerror("ERROR tipos de parametros no son compatibles con la funcion\n");}
		pred2 | /* empty */;
pred2: /* empty */ | C pred1;


imprimir: IMPRIMIR PAO imp1 PAC;
imp1: varcte { addCuad(24,-1,-1,PilaO.top()); PilaO.pop(); PilaT.pop(); } imp2;
imp2: /* empty */ | C imp1;


pdfunc: DETENER {predef = true; iPredef = 1;}| 
		MOVER_ADELANTE {predef = true; iPredef = 2;}| 
		ROTAR {predef = true; iPredef = 3;}| 
		RECOGER_OBJ {predef = true; iPredef = 4;}| 
		CARGAR_MAPA {predef = true; iPredef = 5;}| 
		TERMINAR {predef = true; iPredef = 6;}| 
		ID { if( !findFunc($1) ) yyerror("ERROR la funcion no existe\n");
		 	 else indexFunc = getFuncScope($1); 
		 	 addCuad(19,indexFunc,-1,-1); 
		 	 params = 0; };


pruebas: CAMINO_DESPEJADO { addCuad(23,-1,-1,1); }| 
		 CAMINO_BLOQUEADO { addCuad(23,-1,-1,2); }| 
		 INTERSECCION_OBJ { addCuad(23,-1,-1,3); }| 
		 TENER_TODOS_OBJS { addCuad(23,-1,-1,4); };

%%
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
