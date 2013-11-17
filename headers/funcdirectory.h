#pragma once
#include <map>
#include <list>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
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
map<int, char*> Constants;
map<int, char*> Temps;
map<char*, int> sizeArr;

void addFunc( char* nameFunc, int id );
void addVar( char* nameVar );
int findVar( char* nameVar);
void addType(char* nameVar, int dir);
void addType(char* nameVar, char* type);
void addType(char* nameVar, char* type, int i);
int addType(char* nameVar, int type, int size);
bool findFunc( char* nameFunc );
int getFuncScope(char* nameFunc);
int getFuncVarType(int iFunc, int iVar);
int getFuncParamsCount(int iFunc);
int getFuncInCuad(int iFunc);
int getSizeArr(char* nameVar);
void addInCuadAndParams(int p, int c);
