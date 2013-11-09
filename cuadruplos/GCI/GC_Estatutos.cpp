/***** ( 1 ) *****/
void GC_Estatutos_gotoF(){
	if(!PilaO.empty()){
		int tipoLogico = PilaT.top(); PilaT.pop();
		if( tipoLogico == 4 ){
			int dir = PilaO.top(); PilaO.pop();
			addCuad(15,dir,-1,-1);
			PilaS.push(cuadActual-1);
		} else
			cout << "ERROR: no es expresion logica\n";
	}
}

/***** ( 2 ) *****/
void GC_Estatutos_IF_2(){
	if(!PilaS.empty()){
		addCuad(14,-1,-1,-1);
		int salto = PilaS.top(); PilaS.pop();
		editCuad(salto);
		PilaS.push(cuadActual-1);
	}
}

/***** ( 3 ) *****/
void GC_Estatutos_IF_3(){
	if(!PilaS.empty()){
		int salto = PilaS.top(); PilaS.pop();
		editCuad(salto);
	}
}

/***** ( 4 ) *****/
void GC_Estatutos_WHILE_1(){
	PilaS.push(cuadActual);
}

/***** ( 6 ) *****/
void GC_Estatutos_WHILE_2(){
	if(!PilaS.empty()){
		int salto = PilaS.top(); PilaS.pop();
		int ciclo = PilaS.top(); PilaS.pop();
		addCuad(14,-1,-1,ciclo);
		editCuad(salto);
	}
}