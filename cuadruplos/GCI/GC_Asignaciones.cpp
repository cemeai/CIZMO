/***** ( 1 ) *****/
void GC_Asignaciones_1(){
	if(findVar(nameVar) == -1){  	//si la variable no existe mete -1 a las pilas y la creea
		addVar(nameVar);
		PilaO.push(-1);
		PilaT.push(-1);
	} else {						//si si existe manda error de existencia
		yyerror("ERROR la variable ya existe\n");
	}
}

/***** ( 2 ) *****/
void GC_Asignaciones_2(){
	Poper.push(5);
}

/***** ( 3 ) *****/
void GC_Asignaciones_3(){
	int dir; 
	if(contFunc==0)
	switch (PilaT.top()){
		case 1: if(iG<2000) dir= iG++; else printf("ERROR\n"); break;
		case 2: if(fG<4000) dir= fG++; else printf("ERROR\n"); break;
		case 3: if(sG<6000) dir= sG++; else printf("ERROR\n"); break;
		case 4: if(bG<8000) dir= bG++; else printf("ERROR\n"); break;
	}else
	switch (PilaT.top()){
		case 1: if(iL<10000) dir= iL++; else printf("ERROR\n"); break;
		case 2: if(fL<12000) dir= fL++; else printf("ERROR\n"); break;
		case 3: if(sL<14000) dir= sL++; else printf("ERROR\n"); break;
		case 4: if(bL<16000) dir= bL++; else printf("ERROR\n"); break;
		}
	addType( nameVar, dir);
	PilaT.pop();
	PilaT.pop();
	addCuad(Poper.top(),PilaO.top(),-1,dir);
	Poper.pop();
	PilaO.pop();
	PilaO.pop();
	 /***** TESTING *****/
}

/***** ( 5 ) *****/
void GC_Asignaciones_5(){
	if(PilaO.size() > 1){
		int tipo1= PilaT.top(); PilaT.pop();
		int tipo2= PilaT.top(); PilaT.pop();
		int tipoR= askTheCubo(tipo1,tipo2,Poper.top());
		if(tipoR!=0){
			int operador = Poper.top(); Poper.pop();
			int dir1 = PilaO.top(); PilaO.pop();
			int dir2 = PilaO.top(); PilaO.pop();
			addCuad(operador,dir1,-1,dir2);
		}
	}
}
