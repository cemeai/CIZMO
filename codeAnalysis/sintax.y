%{
#include <stdio.h>
#include <string.h>
%}
%token PROGRAMA COND FUNC SINO IMPRIMIR MIENTRAS DETENER MOVER_ADELANTE MOVER_ATRAS VERDAD FALSO ARREGLO ROTAR CARGARMAPA VAR DP C PC PUNTO LLO LLC PAO PAC MAS MENOS POR ENTRE AND OR NOT DIF IGUAL MAY MAYIG MEN MENIG ID CINT CFLOAT STRING
%%
p0: PROGRAMA p1;
p1: ID p2;
p2: PC;


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
