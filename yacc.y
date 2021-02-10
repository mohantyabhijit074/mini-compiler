%{
	
#include<stdio.h>

%}

%token INT FLOAT CHAR WHILE DO IF FOR ELSE NUMBER SWITCH CASE BREAK DEFAULT 
%%
statements: statement | statements statement
;
statement: keyword 
;
keyword : INT {printf(">KEYWORD INT\n");}
|FLOAT {printf(">KEYWORD FLOAT\n");}
|CHAR {printf(">KEYWORD CHAR\n");}
|WHILE {printf(">KEYWORD WHILE\n");}
|DO {printf(">KEYWORD DO\n");}
|IF {printf(">KEYWORD IF\n");}
|FOR {printf(">KEYWORD FOR\n");}
|ELSE {printf(">KEYWORD ELSE\n");}
|NUMBER {printf(">KEYWORD NUMBER\n");}
|SWITCH {printf(">KEYWORD SWITCH\n");}
|CASE {printf(">KEYWORD CASE\n");}
|BREAK {printf(">KEYWORD BREAK\n");}
|DEFAULT {printf(">KEYWORD DEFAULT\n");}
|"\n"
;
%%



void yyerror(){
	printf("Invalid\n");
	
}
