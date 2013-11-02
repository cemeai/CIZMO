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

void addFunc( char* nameFunc, int id );
void addVar( char* nameVar );
bool findVar( char* nameVar);
void addTypeVar(char* nameVar, int type);
bool findFunc( char* nameFunc );