/***** ( 1 ) *****/
void GC_Asignaciones_1(){
	PilaO.push(-1);
	PilaT.push(-1);
	nameVar = $2;
	if(findVar(nameVar) == -1) 
		addVar(nameVar); 
}

/***** ( 2 ) *****/
void GC_Asignaciones_2(){
	Poper.push(5);
}

/***** ( 3 ) *****/
void GC_Asignaciones_3(){
	int dir; 
	if(scope==0)
	switch (PilaT.top()){
		case 1: if(iG<2000) dir= iG++; else printf("ERROR\n"); addTypeVar( nameVar, dir); break;
		case 2: if(fG<4000) dir= fG++; else printf("ERROR\n"); addTypeVar( nameVar, dir); break;
		case 3: if(sG<6000) dir= sG++; else printf("ERROR\n"); addTypeVar( nameVar, dir); break;
		case 4: if(bG<8000) dir= bG++; else printf("ERROR\n"); addTypeVar( nameVar, dir); break;
	}else
	switch (PilaT.top()){
		case 1: if(iL<10000) dir= iL++; else printf("ERROR\n"); addTypeVar( nameVar, dir); break;
		case 2: if(fL<12000) dir= fL++; else printf("ERROR\n"); addTypeVar( nameVar, dir); break;
		case 3: if(sL<14000) dir= sL++; else printf("ERROR\n"); addTypeVar( nameVar, dir); break;
		case 4: if(bL<16000) dir= bL++; else printf("ERROR\n"); addTypeVar( nameVar, dir); break;
		}
	addTypeVar( nameVar, dir);
	PilaT.pop();
	PilaT.pop();
	addCuad(Poper.top(),PilaO.top(),-1,dir);
	Poper.pop();
	PilaO.pop();
	PilaO.pop();
	printAllCuads(); /***** TESTING *****/
}

/***** ( 4 ) *****/
void GC_Asignaciones_4(){
	nameVar = $1;
	dirV = findVar(nameVar);
	if(dirV == -1) 
		printf("Error\n");
	else{
		PilaO.push(dirV);
		if(dirV<2000 || (dirV>=8000 && dirV<10000)) PilaT.push(1); else
		if((dirV>=2000 && dirV<4000) || (dirV>=8000 && dirV<10000)) PilaT.push(2); else
		if((dirV>=4000 && dirV<6000) || (dirV>=10000 && dirV<12000)) PilaT.push(3); else
		if((dirV>=6000 && dirV<8000) || (dirV>=12000 && dirV<14000)) PilaT.push(4); else printf("Direccion no valida\n");
	}
}

/***** ( 5 ) *****/
void GC_Asignaciones_5(){
Poper.push(5);
}

/***** ( 6 ) *****/
void GC_Asignaciones_6(){
}
