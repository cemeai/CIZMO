%{
#include <stdio.h>
#include <string.h>
%}
%token PROGRAMA FUNC COND SI SINO VAR IMPRIMIR MIENTRAS DETENER MOVER_ADELANTE MOVER_ATRAS IDE ROTAR CARGAR_MAPA LLO LLC COO COC PAO PAC ID ASIGNACION IGUAL MAY MEN DIF MAS MENOS POR ENTRE C PC PUNTO DP CINT CFLOAT STRING TRUE FALSE AND OR CAMINO_DESPEJADO CAMINO_BLOQUEADO INTERSECCION_OBJ TENER_TODOS_OBJS RECOGER_OBJ TERMINAR
%%
programa: PROGRAMA ID LLO p1 p3 LLC p2;
p1: /* empty */ | var;
p2: /* empty */ | modulo;
p3: cuerpo p4;
p4: /* empty */ | cuerpo p4;

var: VAR ID v1 PC;
v1: v2 | COO CINT COC;
v2: IGUAL v3;
v3: exp | LLO v4 LLC;
v4: CINT v5;
v5: /* empty */ | C CINT v5;

modulo: FUNC IDE PAO m1 PAC LLO m2 m6;
m1: /* empty */ | param;
m2: m3 m4;
m3: /* empty */ | var;
m4: cuerpo m5;
m5: /* empty */ | cuerpo m5;
m6: LLO m7;
m7: /* empty */ | modulo;

param: VAR ID pa;
pa: /* empty */|C param;

cuerpo: asignacion C1 | condicion | ciclo | predef C1 | imprimir C1;
C1: PC;

asignacion: ID as ASIGNACION exp;
as: /* empty */ | COO exp COC;


logico: expresion l1;
l1: /* empty */ | AND l2 | OR l2;
l2: expresion | pruebas;

expresion: exp expr exp;
expr: MAY | MEN | IGUAL | DIF;

exp: termino exp1;
exp1: /* empty */ | MAS exp | MENOS exp;

termino: factor te;
te: /* empty */ | POR termino | ENTRE termino;

factor: varcte | predef | PAO exp PAC;

varcte: ID varcte1 | CINT | CFLOAT | STRING | TRUE | FALSE;
varcte1: /* empty */ |  COO exp COC;

condicion: SI PAO logico PAC LLO co1 LLC co3;
co1: cuerpo co2;
co2: /* empty */ | cuerpo co2;
co3: /* empty */ | SINO LLO co1 LLC;

ciclo: MIENTRAS PAO logico PAC LLO ci1 LLC;
ci1: cuerpo ci2;
ci2: /* empty */ | cuerpo ci2;

predef: pdfunc PAO pred1 PAC;
pred1: exp pred2;
pred2: /* empty */ | C exp pred2;

imprimir: IMPRIMIR PAO imp1 PAC;
imp1: varcte imp2;
imp2: /* empty */ | MAS varcte imp2;

pdfunc:DETENER | MOVER_ADELANTE | ROTAR | RECOGER_OBJ | CARGAR_MAPA | TERMINAR | IDE;

pruebas: CAMINO_DESPEJADO | CAMINO_BLOQUEADO | INTERSECCION_OBJ | TENER_TODOS_OBJS;

%%

main()
{
	if (yyparse()==0)
		printf("PROGRAMA ACEPTADO\n");
	else
		printf("ERROR\n");
}
yyerror(s){
	char *;
	fprintf(stderr, "%s\n",s);
}
