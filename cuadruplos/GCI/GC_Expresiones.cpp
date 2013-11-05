/***** ( 1 ) *****/
void GC_getDirAndType(){
	int dirV = findVar(nameVar);
	if(dirV != -1){
		PilaO.push(dirV);
		     if((dirV>=0    && dirV<2000) || (dirV>=8000  && dirV<10000)){ PilaT.push(1); } 
		else if((dirV>=2000 && dirV<4000) || (dirV>=10000 && dirV<12000)){ PilaT.push(2); } 
		else if((dirV>=4000 && dirV<6000) || (dirV>=12000 && dirV<14000)){ PilaT.push(3); } 
		else if((dirV>=6000 && dirV<8000) || (dirV>=14000 && dirV<16000)){ PilaT.push(4); } 
		else cout << "Direccion no valida\n";
	} else {
		cout << "Error: la variable no existe\n";
	}
}

void constructCuad(){
	int tipo1= PilaT.top() - 1; PilaT.pop();
	int tipo2= PilaT.top() - 1; PilaT.pop();
	int operador = Poper.top() - 1;
	int tipoR= askTheCubo(tipo1,tipo2, operador);
	int dirT;
	if(tipoR!=0){
		Poper.pop();
		int dir1 = PilaO.top(); PilaO.pop();
		int dir2 = PilaO.top(); PilaO.pop();
		switch (tipoR){
			case 1: if(iT<18000) dirT= iT++; else printf("ERROR\n"); break;
			case 2: if(fT<20000) dirT= fT++; else printf("ERROR\n"); break;
			case 3: if(sT<22000) dirT= sT++; else printf("ERROR\n"); break;
			case 4: if(bT<24000) dirT= bT++; else printf("ERROR\n"); break;
		}
		addCuad(operador+1,dir2,dir1,dirT);
		PilaO.push(dirT);
		PilaT.push(tipoR);
	}else{
		printf("Error: sobrepasate la memoria\n");
	}
}

/***** ( 2 ) *****/
void GC_Expresiones_2(int p){
Poper.push(p);
}


/***** ( 3 ) *****/
void GC_Expresiones_3(int p){
Poper.push(p);
}

/***** ( 4 ) *****/
void GC_Expresiones_4(){
	if(!PilaO.empty() && !Poper.empty()){ 
		if(Poper.top()==1 || Poper.top() == 2){
			constructCuad();
		}
	}
}

/***** ( 5 ) *****/
void GC_Expresiones_5(){
	if(!PilaO.empty() && !Poper.empty()){
		if(Poper.top()==3 || Poper.top() == 4){
			constructCuad();
		}
	}
}

/***** ( 6 ) *****/
void GC_Expresiones_6(){
	Poper.push(-1);
}

/***** ( 7 ) *****/
void GC_Expresiones_7(){
	if(Poper.empty()) Poper.pop();
}

/***** ( 8 ) *****/
void GC_Expresiones_8(int p){
	Poper.push(p);
}

/***** ( 9 ) *****/
void GC_Expresiones_9(){
	if(!PilaO.empty() && !Poper.empty()){
		if(Poper.top() == 6 || Poper.top() == 7 || Poper.top() == 8 || 
			Poper.top() == 9 || Poper.top() == 10 || Poper.top() == 11){
			constructCuad();
		}
	}
}
/***** ( 11 ) *****/
void GC_Expresiones_11(){
	if(!PilaO.empty() && !Poper.empty()){
		if(Poper.top() == 12 || Poper.top() == 13){
			constructCuad();
		}
	}
}
