#include "../headers/funcdirectory.h"

void addFunc( char* nameFunc, int scope ){
	if( functionsL.empty() && strcmp( nameFunc, "global") != 0 ){
		funcion = (functions*) malloc( sizeof (functions));
		funcion->scope = scope++;
		funcion->name = (char*)"global";
		functionsL.push_back(*funcion);
	}
	funcion = (functions*) malloc( sizeof (functions));
	funcion->scope = scope;
	funcion->name = nameFunc;
	functionsL.push_back(*funcion);
}

void addVar( char* nameVar ){
	functionsL.rbegin()->vars[nameVar] = 0;
}

bool findVar( char* nameVar){
	bool exist = false;
	//checa si la variable existe globalmente
	map<char*, int> tempVars = functionsL.begin()->vars;
	for( map<char*, int>::iterator it = tempVars.begin(); it != tempVars.end(); it++)
		if(strcmp(it->first, nameVar) == 0)
			exist = true;
	//checa si la variable existe en la funcion actual
	tempVars = functionsL.rbegin()->vars;
	for( map<char*, int>::iterator it = tempVars.begin(); it != tempVars.end(); it++)
		if(strcmp(it->first, nameVar) == 0)
			exist = true;
	//regresa  exist true si existe y false si no
	return exist;
}

void addTypeVar(char* nameVar, int type){
	functionsL.rbegin()->vars[nameVar] = type;
}

bool findFunc( char* nameFunc){
	for( list<functions>::iterator it = functionsL.begin(); it != functionsL.end(); it++)
		if( strcmp(it->name, nameFunc) == 0 ){
			cout << "founded";
			return false;
		}
	return true;
}