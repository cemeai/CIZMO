#pragma once
#include <map>
#include <list>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct functions{
	int scope;
	char* name;
	int parametros;
	map<char*, int> vars;
};

list<functions> functionsL;
functions* funcion;
map<int, char*> Constantes;
map<int, char*> Temporales;

void addFunc( char* nameFunc, int id );
void addVar( char* nameVar );
int findVar( char* nameVar);
void addTypeVar(char* nameVar, int dir);
bool findFunc( char* nameFunc );
