a.out 	 : lex.yy.c y.tab.c
		   gcc lex.yy.c y.tab.c -lfl -w -lm


y.tab.c  : parser.y
		   yacc -d parser.y

lex.yy.c : lexical_analyser.l y.tab.c
		   lex lexical_analyser.l