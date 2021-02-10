# a.out 	 : lex.yy.c y.tab.c
# 		   gcc lex.yy.c y.tab.c -lfl -w -lm


# y.tab.c  : yacc.y
# 		   yacc -d yacc.y

# lex.yy.c : symbol_table_gen.l y.tab.c
# 		   lex symbol_table_gen.l 

a.out 	 : lex.yy.c y.tab.c
		   gcc lex.yy.c y.tab.c -lfl -w -lm


y.tab.c  : parser.y
		   yacc -d parser.y

lex.yy.c : lexical_analyser.l y.tab.c
		   lex lexical_analyser.l