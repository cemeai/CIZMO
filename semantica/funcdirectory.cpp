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

void addType(char* nameVar, int dir){
	functionsL.rbegin()->vars[nameVar] = dir;
}

void addType(char* nameVar, char* type){
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
}

void addType(char* nameVar, char* type, int size){
	int dir;
	int scope = functionsL.rbegin()->scope;
	if(strcmp(type, "i") == 0){
		if(scope > 0){ dir= iL; iL+=size; }
		else { dir= iG; iG+=size; }
	}else if(strcmp(type, "f") == 0){ 
		if(scope > 0){ dir= fL; fL+=size; }
		else { dir= fG; fG+=size; }
	}else if(strcmp(type, "s") == 0){
		if(scope > 0){ dir= sL; sL+=size; }
		else { dir= sG; sG+=size; }
	}else if(strcmp(type, "b") == 0){
		if(scope > 0){ dir= bL; bL+=size; }
		else { dir= bG; bG+=size; }
	}else printf("NO ES UN TIPO DE DATO\n");

	functionsL.rbegin()->vars[nameVar] = dir;
}

int addType(char* nameVar, int type, int size){
	int dir;
	int scope = functionsL.rbegin()->scope;
	if( type == 1 ){
		if(scope > 0){ dir= iL; iL+=size; }
		else { dir= iG; iG+=size; }
	}else if( type == 2 ){ 
		if(scope > 0){ dir= fL; fL+=size; }
		else { dir= fG; fG+=size; }
	}else if( type == 3 ){
		if(scope > 0){ dir= sL; sL+=size; }
		else { dir= sG; sG+=size; }
	}else if( type == 4 ){
		if(scope > 0){ dir= bL; bL+=size; }
		else { dir= bG; bG+=size; }
	}else printf("NO ES UN TIPO DE DATO\n");

	functionsL.rbegin()->vars[nameVar] = dir;
	return dir;
}

bool findFunc(char* nameFunc){
	for( list<functions>::iterator it = functionsL.begin(); it != functionsL.end(); it++)
		if( strcmp(it->name, nameFunc) == 0 ){
			return true;
		}
	return false;
}

int findArrSize(char* nameVar){
	int size = 0;
	for( map<char*, int>::iterator it = sizeArr.begin(); it != sizeArr.end(); it++)
		if(strcmp(it->first, nameVar) == 0)
			size = it->second;
	return size;
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