#include <stdio.h>
//#include "cuadruplos.c"
#include "structures.c"

int main (){
	Cuadruplo cuad;
	cuad.operador=1;
	cuad.dirOperando1=2000;
	cuad.dirOperando2=2001;
	cuad.temporal=3000;
	cuad.ptr=NULL;
	
	addCuad(&cuad,2,2002,2003,3002);
	addCuad(&cuad,3,2003,2004,3003);

	printAllCuads(&cuad);
	return 0;
}
