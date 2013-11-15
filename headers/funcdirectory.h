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
	int params;
	int inCuad;
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
void addTypeParam(char* nameVar, char* type);
bool findFunc( char* nameFunc );
int getFuncScope(char* nameFunc);
int getFuncVarType(int iFunc, int iVar);
int getFuncParamsCount(int iFunc);
int getFuncInCuad(int iFunc);
void addInCuadAndParams(int p, int c);
