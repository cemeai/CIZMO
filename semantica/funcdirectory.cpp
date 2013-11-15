#include "../headers/funcdirectory.h"

void addFunc( char* nameFunc, int scope ){
	/*if( functionsL.empty() && strcmp( nameFunc, "global") != 0 ){
		funcion = (functions*) malloc( sizeof (functions));
		funcion->scope = scope++;
		funcion->name = (char*)"global";
		functionsL.push_back(*funcion);
	}*/
	funcion = (functions*) malloc( sizeof (functions));
	funcion->scope = scope;
	funcion->name = nameFunc;
	functionsL.push_back(*funcion);
}

void addVar( char* nameVar ){
	functionsL.rbegin()->vars[nameVar] = 0;
}

int findVar( char* nameVar){
	int dir = -1;
	//checa si la variable existe globalmente
	map<char*, int> tempVars = functionsL.begin()->vars;
	for( map<char*, int>::iterator it = tempVars.begin(); it != tempVars.end(); it++)
		if(strcmp(it->first, nameVar) == 0)
			dir = it->second;
	//checa si la variable existe en la funcion actual
	tempVars = functionsL.rbegin()->vars;
	for( map<char*, int>::iterator it = tempVars.begin(); it != tempVars.end(); it++)
		if(strcmp(it->first, nameVar) == 0)
			dir = it->second;
	//regresa  exist true si existe y false si no
	return dir;
}

void addTypeVar(char* nameVar, int dir){
	functionsL.rbegin()->vars[nameVar] = dir;
}

void addTypeParam(char* nameVar, char* type){
	int dir;
		 if(strcmp(type, "i") == 0) 
		dir= iL++;
	else if(strcmp(type, "f") == 0) 
		dir= fL++;
	else if(strcmp(type, "s") == 0) 
		dir= sL++;
	else if(strcmp(type, "b") == 0) 
		dir= bL++; 
	else printf("NO ES UN TIPO DE DATO\n");

	functionsL.rbegin()->vars[nameVar] = dir;
	params++;
}

bool findFunc(char* nameFunc){
	for( list<functions>::iterator it = functionsL.begin(); it != functionsL.end(); it++)
		if( strcmp(it->name, nameFunc) == 0 ){
			return true;
		}
	return false;
}

int getFuncScope(char* nameFunc){
	for( list<functions>::iterator it = functionsL.begin(); it != functionsL.end(); it++)
		if( strcmp(it->name, nameFunc) == 0 )
			return it->scope;
	return -1;
}

int getFuncVarType(int iFunc, int iVar){
	int type = -1;
	int dir = 0;
	int i = 0;
	//checa si la variable existe globalmente
	map<char*, int> tempVars;
	for( list<functions>::iterator it = functionsL.begin(); it != functionsL.end(); it++){
		if( i == iFunc ){
			tempVars = it->vars; break; }
		i++;
	}
	i = 0;
	for( map<char*, int>::iterator it = tempVars.begin(); it != tempVars.end(); it++){
		if( i == iVar ){
			dir = it->second; break; }
		i++;
	}
		 if(dir>=8000  && dir<10000){ type = 1; } 
	else if(dir>=10000 && dir<12000){ type = 2; } 
	else if(dir>=12000 && dir<14000){ type = 3; } 
	else if(dir>=14000 && dir<16000){ type = 4; } 
	//regresa  exist true si existe y false si no
	return type;
}

int getFuncParamsCount(int iFunc){
	int i = 0;
	for( list<functions>::iterator it = functionsL.begin(); it != functionsL.end(); it++){
		if( i == iFunc )
			return it->params;
		i++;
	}
	return -1;
}

int getFuncInCuad(int iFunc){
	int i = 0;
	for( list<functions>::iterator it = functionsL.begin(); it != functionsL.end(); it++){
		if( i == iFunc )
			return it->inCuad;
		i++;
	}
	return -1;
}

void addInCuadAndParams(int p, int c){
	functionsL.rbegin()->params = p;
	functionsL.rbegin()->inCuad = c;
}