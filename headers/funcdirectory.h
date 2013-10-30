#pragma once
#include <map>
#include <list>
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

struct functions;
void agregaFunc( char* nameFunc, int id );
void agregaVar( char* nameVar );
void agregaTipoVar(char* nameVar, int type);
bool findFunc( char* nameFunc );