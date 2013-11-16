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
int cuadActual = 1;

void addCuad(int operador, int dirOp1, int dirOp2, int res);
void editCuad(int cuad);
void addCuadPredef(int func);
void printAllCuads();
int getActualCuad();
