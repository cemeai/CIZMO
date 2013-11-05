#!/bin/bash
bison -d -o sintax.cpp sintax.y
flex -o tokens.cpp lexical.l
g++ -o parser sintax.cpp tokens.cpp -lfl
