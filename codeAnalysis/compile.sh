#!/bin/bash
flex -o tokens.cpp lexical.l
bison -d -o sintax.cpp sintax.y
g++ -o parser sintax.cpp tokens.cpp -lfl
