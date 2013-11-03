#include <stdio.h>
#include "cuadruplos.cpp"

int main (){
	addCuad(1,2000,2001,3000);
	addCuad(2,2002,2003,3002);
	addCuad(3,2003,2004,3003);

	printAllCuads();
	cout << getActualCuad();
	return 0;
}
