#pragma once
#include <list>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;

struct cuadruplo {
	int operador;
	int dirOperando1;
	int dirOperando2;
	int res;
};

list<cuadruplo> cuadL;
cuadruplo* cuad;
stack<int> PilaO;
stack<int> Poper;
stack<int> PilaT;
stack<int> PilaS;

void addCuad(int operador, int dirOp1, int dirOp2, int res);
void printAllCuads();
int getActualCuad();
