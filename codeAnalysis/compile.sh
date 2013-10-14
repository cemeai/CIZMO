#!/bin/bash
bison -d sintax.y
flex lexical.l
g++ sintax.tab.c lex.yy.c -lfl -o parser
