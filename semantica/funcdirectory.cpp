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
	bool exist = 0;
	map<char*, int> tempVars = functionsL.begin()->vars;
	for( map<char*, int>::iterator it = tempVars.begin(); it != tempVars.end(); it++)
		if(strcmp(it->first, nameVar) == 0)
			exist = true;
	tempVars = functionsL.rbegin()->vars;
	for( map<char*, int>::iterator it = tempVars.begin(); it != tempVars.end(); it++)
		if(strcmp(it->first, nameVar) == 0)
			exist = true;
	if( !exist )functionsL.rbegin()->vars[nameVar] = 0;
	else cout << "Ya existe la variable";
}

void addTypeVar(char* nameVar, int type){
	//checar que sea el primero o el ultimo func si type es cero cambiar sino marcar error

	functionsL.rbegin()->vars[nameVar] = type;
	//if( it == scope && it->vars[nameVar] == 0 )
	//	it->vars[nameVar] = type;
}

bool findFunc( char* nameFunc){
	for( list<functions>::iterator it = functionsL.begin(); it != functionsL.end(); it++)
		if( strcmp(it->name, nameFunc) == 0 ){
			cout << "founded";
			return false;
		}
	return true;
}