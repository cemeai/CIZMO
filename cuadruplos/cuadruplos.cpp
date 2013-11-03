#include "../headers/cuadruplos.h"

void addCuad(int operador, int dirOp1, int dirOp2, int res) {
	cuad = (cuadruplo*) malloc( sizeof (cuadruplo));
	cuad->operador = operador;
	cuad->dirOperando1 = dirOp1;
	cuad->dirOperando2 = dirOp2;
	cuad->res = res;
	cuadL.push_back(*cuad);
}

void printAllCuads() {
	for( list<cuadruplo>::iterator it = cuadL.begin(); it != cuadL.end(); it++)
		printf("%d,%d,%d,%d\n", it->operador, it->dirOperando1, it->dirOperando2, it->res);
}

int getActualCuad(){
	return cuadL.size();
}
