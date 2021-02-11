%option noyywrap
%{

#include<stdio.h>
#include <strings.h>

%}
start \/\*
end \*\/
%%
"#include"(.)*"\n" {fprintf(yyout, "%s", "");}
"using"(.)*"\n" {fprintf(yyout, "%s", "");}
"#define"(.)*"\n" {fprintf(yyout,"%s","");}			
"/*"+([^*]|\*+[^/])*\*+\/.*\n			{fprintf(yyout,"%s","");printf("\n The Comment Present in The input file - %s\n", yytext);}
"//"(.)*(\n)		{fprintf(yyout,"%s", "");}


.			{fprintf(yyout, "%s", yytext);}
%%
int main() 
{ 
  
    
    extern FILE *yyin, *yyout; 
  
    
    yyin = fopen("test.cpp", "r"); 
    yyout = fopen("preprocessed.cpp", "w"); 
  
    yylex(); 
    return 0; 
} 
