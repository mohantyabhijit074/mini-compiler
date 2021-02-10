#!/bin/bash

lex constructs.l
yacc constructs.y
gcc y.tab.c -ll -ly -w
./a.out < input.c
