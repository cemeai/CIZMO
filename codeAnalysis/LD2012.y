%{
#include <stdio.h>
#include <string.h>
%}
%token PROGRAM DP C PC INT FLOAT LLO LLC IGUAL MAY MEN DIF PAO PAC MAS MENOS POR ENTRE ID CINT CFLOAT CSTRING IF ELSE PRINT VAR
%%
p0: PROGRAM p1;
p1: ID p2;
p2: PC vars bloque;

vars: /* empty */ | VAR v1;
v1: ID v2;
v2: C v1 | DP tipo v3;
v3: PC v1 | PC ;

tipo: INT | FLOAT;

bloque: LLO b1 estatuto LLC | LLO LLC;
b1: /* empty */ | b1 estatuto;

estatuto: asignacion | condicion | escritura;

asignacion: ID a1;
a1: IGUAL expresion PC;

escritura: PRINT PAO esc1;
esc1: expresion esc2 | CSTRING esc2;
esc2: C esc1 | PAC PC;

expresion: exp e1;
e1:  /* empty */ | MAY exp | MEN exp| DIF exp;

exp: termino exp2;
exp2:  /* empty */  | MAS exp | MENOS exp;

termino: factor t1;
t1:  /* empty */ | ENTRE termino | POR termino;

factor: PAO expresion PAC | varcte | MAS varcte | MENOS varcte;

varcte: ID | CINT | CFLOAT;

condicion: IF c1;
c1: PAO expresion PAC bloque PC | PAO expresion PAC bloque ELSE bloque PC;
%%

main()
{
	if (yyparse()==0)
		printf("PROGRAMA ACEPTADO\n");
	else
		printf("ERROR\n");
}
yyerror(s)
char *s;
	{
		fprintf(stderr, "%s\n",s);
	}
