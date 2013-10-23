#include "../headers/funcdirectory.h"

struct functions{
	int scope;
	char* name;
	int parametros;
	map<char*, int> vars;
};

list<functions> functionsL;
functions* funcion;

void agregaFunc( char* nameFunc, int scope ){
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

void agregaVar( char* nameVar ){
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

	/*if(tempVars.find(nameVar) == tempVars.end()){
		cout << "No encontre la variable";
		functionsL.rbegin()->vars[nameVar] = 0;
	}else{
		cout << "La variable ya existe :( ";
	}

	if( functionsL.begin()->vars.count(nameVar) == 0 &&
		functionsL.rbegin()->vars.count(nameVar) == 0){
		cout << "ENTRO";
		functionsL.rbegin()->vars.insert( pair<char*,int> (nameVar, 0));
		cout << functionsL.rbegin()->vars.size();
	}else cout << "TONTO ya existe";*/
}

void agregaTipoVar(int scope, char* nameVar, int type){
	//checar que sea el primero o el ultimo func si type es cero cambiar sino marcar error
	//if( functionsL.begin()->vars.find(nameVar) != functionsL->vars.end() ){
	//}

	//functionsL.rbegin();
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