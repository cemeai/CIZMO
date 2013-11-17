#include "../headers/cuadruplos.h"
#include "../headers/GC.h"

void addCuad(int operador, int dirOp1, int dirOp2, int res) {
	cuad = (cuadruplo*) malloc( sizeof (cuadruplo));
	cuad->operador = operador;
	cuad->dirOperando1 = dirOp1;
	cuad->dirOperando2 = dirOp2;
	cuad->res = res;
	cuadL.push_back(*cuad);
	cuadActual++;
}

void editCuad(int cuad) {
	int i = 1;
	for( list<cuadruplo>::iterator it = cuadL.begin(); it != cuadL.end(); it++){
		if( i == cuad) it->res = cuadActual;
		i++;
	}
}

void addCuadPredef(int func){
	addCuad(21,-1,22,func);
}

void addCuadsArrInic(char* nameVar, int sizeByCount, int dirBaseArr){
	int i = 0;
	char* buf = NULL;
	while( !dataArr.empty() ){
		Poper.push(25);
		buf = (char*)malloc( sizeof (int)); sprintf(buf,"%d", 1);
		Constants[iC] = buf; PilaO.push(iC++); PilaT.push(1);
		PilaO.push(dirBaseArr); PilaT.push(1);
		GC_Expresiones_4();

		Poper.push(3);
		buf = (char*)malloc( sizeof (int)); sprintf(buf,"%d", -1); 
		Constants[iC] = buf; PilaO.push(iC++); PilaT.push(1);
		GC_Expresiones_5();

		Poper.push(5);
		PilaO.push(dataArr.front()); dataArr.pop_front();
		PilaT.push(dataArr.front()); dataArr.pop_front();
		GC_Asignaciones_5();
		i++;
	}
	
}

void addCuadsArrAsig(char* nameVar, int sizeByCount, int dirBaseArr){
	char* buf = NULL;
		
	Poper.push(25);
	buf = (char*)malloc( sizeof (int)); sprintf(buf,"%d", 1);
	Constants[iC] = buf; PilaO.push(iC++); PilaT.push(1);
	PilaO.push(dirBaseArr); PilaT.push(1);
	GC_Expresiones_4();

	Poper.push(3);
	buf = (char*)malloc( sizeof (int)); sprintf(buf,"%d", -1); 
	Constants[iC] = buf; PilaO.push(iC++); PilaT.push(1);
	GC_Expresiones_5();
}

void printAllCuads() {
	FILE* f = fopen("CI.txt","w");
	for( list<cuadruplo>::iterator it = cuadL.begin(); it != cuadL.end(); it++)
		fprintf(f,"%d,%d,%d,%d\n", it->operador, it->dirOperando1, it->dirOperando2, it->res);
	fclose(f);
}

int getActualCuad(){
	return cuadL.size();
}
