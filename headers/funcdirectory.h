#pragma once
#include <map>
#include <list>
#include <stdlib.h>
#include <iostream>
#include <cstring>
using namespace std;

struct functions;
void agregaFunc( char* nameFunc, int id );
void agregaVar( char* nameVar );
void agregaTipoVar(char* nameVar, int type);
bool findFunc( char* nameFunc );