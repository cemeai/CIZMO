/***** ( 1 ) *****/
void GC_Estatutos__gotoF_1(){
	int tipoLogico = PilaT.top(); Pilat.pop();
	if( tipoLogico == 4 ){
		int dir = PilaO.top(); PilaO.pop();
		addCuad(15,dir,-1,-1);
		PilaS.push(cuadActual-1);
	} else
		cout << "ERROR: no es expresion logica";
}

/***** ( 2 ) *****/
void GC_Estatutos_IF_2(){
	addCuad(14,-1,-1,-1);
	int salto = PilaO.top(); Pila.pop();
	editCuad(salto, cuadActual);
	PilaS.push(cuadActual-1);
}

/***** ( 3 ) *****/
void GC_Estatutos_IF_3(int p){
	int salto = PilaS.top(); PilaS.pop();
	editCuad(salto);
}

/***** ( 4 ) *****/
void GC_Estatutos__WHILE_1(){
	PilaS.push(cuadActual);
}

/***** ( 6 ) *****/
void GC_Estatutos_WHILE_2(int p){
	int salto = PilaS.top(); PilaS.pop();
	int ciclo = PilaS.top(); PilaS.pop();
	addCuad(14,-1,-1,ciclo);
	editCuad(salto);
}