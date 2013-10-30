#pragma once
#include <list>
#include <stdlib.h>
#include <iostream>
using namespace std;

typedef struct cuadruplo {
	int numCuad;
	int operador;
	int dirOperando1;
	int dirOperando2;
	int temp;
};

list<cuadruplo> cuadL;
cuadruplo* cuad;

void addCuad(cuadruplo *cuad, int operador, int dirOp1, int dirOp2, int temp);
void getAllCuads(cuadruplo *cuad);
