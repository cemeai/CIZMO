#include "../headers/funcdirectory.h"
#include <map>

list<functions> functionsL;
functions* funcion;

struct functions{
	int id;
	string name;
	int parametros;
	map<string, int> vars;
};

void agregaFunc( string nameFunc, int id ){
	funcion = (functions*) malloc( sizeof functions);
	funcion->id = id;
	funcion->name = nameFunc;
	functionsL.insert(id, nameFunc);
}

void agregaVars( int id ){

}

bool findFunc( string namefunc){
	for( list<functions>::iterator it = functionsL.begin(); it != functionsL.end(); it++;){
		cout << it;
	}
}