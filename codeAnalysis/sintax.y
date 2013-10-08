%{
#include <stdio.h>
#include <string.h>
%}
%token PROGRAMA FUNC COND SI SINO VAR IMPRIMIR MIENTRAS DETENER MOVER_ADELANTE MOVER_ATRAS VERDADERO FALSO IDE ROTAR CARGARMAPA ABRECORCH CIERRACORCH ABREPAREN CIERRAPAREN ID ASIGNACION IGUAL MAYOR MENOR DIFERENTE MAS MENOS POR ENTRE COMA PUNTOCOMA CTEENTERA CTEFLOTANTE CTESTRING TOF Y O 
%%
PROGRAMA0: PROGRAMA ID ABRECORCH P1 P3 CIERRACORCH P2;
P1: /* empty */ | VAR0;
P2: /* empty */ | MODULO0;
P3: CUERPO0 P4;
P4: /* empty */ | CUERPO0 P4;

VAR0: VAR id V1 V3;
V1: /* empty */ | V2; 
V2: IGUAL VARCTE0;
V3: PCOMA V4;
V4: /* empty */ | VAR0;

MODULO0: FUNC IDE ABREPAREN M1 CIERRAPAREN ABRECORCH M2 M6;
M1: /* empty */ | PARAM0;
M2: M3 M4;
M3: /* empty */ | V0;
M4: CUERPO0 M5;
M5: /* empty */ | CUERPO0 M5;
M6: CIERRACORCH M7;
M7: /* empty */ | MODULO0;

PARAM0: VAR ID Pa0;
Pa0: /* empty */|COMA PARAM0;

CUERPO0: ASIGNACION0 C1 | CONDICION0 | CICLO0 | PREDEF0 C1 | IMPRIMIR0 C1;
C1: PCOMA;

ASIGN0: id As1 ASIGNACION EXP0;
As1: /* empty */ | ABRECORCH EXP0 CIERRACORCH;


LOGICO0: EXPRESION0 L1;
L1: /* empty */ | Y EXPRESION0 | O EXPRESION0;

EXPRESION0: EXP0 Expr1 EXP0;
Expr1: MAYOR | MENOR | IGUAL | DIFERENTE;

EXP0: TERMINO0 Exp1;
Exp1: /* empty */ | MAS EXP0 | MENOS EXP0;

TERMINO0: FACTOR0 Te1;
Te1: /* empty */ | POR TERMINO0 | ENTRE TERMINO0;

FACTOR0: VARCTE0 | PREDEF0 | ABREPAREN EXP0 CIERRAPAREN;

VARCTE0: ID VarC1 | int | float | string | ToF;
Varc1: /* empty */ |  ABRECORCH EXP0 CIERRACORCH;

COND0: SI ABREPAREN LOGICO0 CIERRAPAREN ABRECORCH Co1 CIERRACORCH Co3;
Co1: CUERPO0 Co2;
Co2: /* empty */ | CUERPO0 Co2;
Co3: /* empty */ | SINO ABRECORCH Co1 CIERRACORCH;

CICLO0: MIENTRAS ABREPAREN LOGIC0 CIERRAPAREN ABRECORCH Ci1 CIERRACORCH;
Ci1: CUERPO0 Ci2;
Ci2: /* empty */ | CUERPO0 Ci2;

PREDEF0: PDFUNC0 ABRECORCH Prdf1 CIERRACORCH;
Prdf1: EXP0 Prdf2;
Prdf2: /* empty */ | COMA EXP0 Prdf2;

IMPRIMIR0: IMPRIMIR ABREPAREN Imp1 CIERRAPAREN;
Imp1: VARCTE0 Imp2;
Imp2: /* empty */ | MAS VARCTE0 Imp2;


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
