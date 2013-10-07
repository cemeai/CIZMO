%{
#include <stdio.h>
#include <string.h>
%}
%token PROGRAMA FUNC COND SI SINO VAR IMPRIMIR MIENTRAS DETENER MOVER_ADELANTE MOVER_ATRAS VERDADERO FALSO ARREGLO ROTAR CARGARMAPA ABRECORCH CIERRACORCH ABREPAREN CIERRAPAREN ID ASIGNACION IGUAL MAYOR MENOR DIFERENTE MAS MENOS POR ENTRE COMA PUNTOCOMA CTEENTERA CTEFLOTANTE CTESTRING TOF Y O
%%
PROGRAMA0: PROGRAMA id ABRECORCH P1 P2 P3 CIERRACORCH;
P1: /* empty */ | VAR0;
P2: /* empty */ | MODULO0;
P3: CUERPO0 P4;
P4: /* empty */ | CUERPO0 P4;

VAR0: VAR id V1 V3;
V1: /* empty */ | V2; 
V2: IGUAL VARCTE0;
V3: PCOMA V4;
V4: /* empty */ | VAR0;

MODULO0: FUNC id ABRECORCH M1 CIERRACORCH ABRECORCH M2 M6;
M1: /* empty */ | PARAM0;
M2: M3 M4;
M3: /* empty */ | V0;
M4: CUERPO0 M5;
M5: /* empty */ | CUERPO0 M5;
M6: CIERRACORCH M7;
M7: /* empty */ | MODULO0;

PARAM0: id IGUAL Pa0;
Pa0: VARCTE0 Pa1;
Pa2: /* empty */ | COMA PARAM0;

CUERPO0: ASIGNACION0 C1 | CONDICION0 | CICLO0 | PREDEF0 C1 | IMPRIMIR0 C1 | LLAMARFUNC0 C1;
C1: PCOMA;

ARR0: ;

ASIGN0: id IGUAL EXP0;

COND0: SI ABREPAREN LOGICO0 CIERRAPAREN ABRECORCH Co1 CIERRACORCH;
Co1: CUERPO0 Co2;
Co2: /* empty */ | Co1;

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
