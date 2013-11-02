#include "../headers/cuadruplos.h"

void addCuad(int index, int operador, int dirOp1, int dirOp2, int temp) {
	cuad = (cuadruplo*) malloc( sizeof (cuadruplo));
	cuad->numCuad = index;
	cuad->operador = operador;
	cuad->dirOperando1 = dirOp1;
	cuad->dirOperando2 = dirOp2;
	cuad->temp = temp;
	cuad->ptr = NULL;

	if( Cuad_ptr == NULL ){
		return *cuad_temp;
	}else{
	Cuadruplo *c;
	c = Cuad_ptr;
	while(c->ptr != NULL) {
		c = c->ptr;
	}
		c->ptr = cuad_temp;
	}
		return *cuad_temp;
	}
	
void getAllCuads(Cuadruplo *cuadruplo) {
	Cuadruplo *cuad;
	cuad = cuadruplo;
	int contador = 1;
	
	while(cuad != NULL) {
		printf("%d,%d,%d,%d\n", cuad->operador, cuad->dirOperando1, cuad->dirOperando2, cuad->temp);
		contador++;
		cuad = cuad->ptr;
	}
	
}
