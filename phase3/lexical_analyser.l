%{
#include<stdio.h>
#include "y.tab.h"
extern YYSTYPE yylval;
int flag=0;
int count = 0;
%}
%option yylineno
%%
"//"[' 'a-zA-Z0-9.]* ;
\/\*(.*\n)*.*\*\/ ;
"cout<<\""[' 'a-zA-Z0-9.]*"\";" {}
"cout<<"[' 'a-zA-Z0-9.]*";" {}

"#include<"[' 'a-zA-Z0-9.]*">" {}
"#include \""[' 'a-zA-Z0-9.]*"\"" {}
int { yylval.var_type=strdup(yytext);return T_INT;}
float { yylval.var_type=strdup(yytext);return T_FLOAT;}
char { yylval.var_type=strdup(yytext);return T_CHAR;}
case {  return T_CASE;}
switch {return T_SWITCH;}
default {return T_DEFAULT;}
"'" {return T_SINGLE;}
"," {return T_COMMA;}
":" {return T_COLON;}
";" { return T_SC;}
[0-9]+((\.[0-9]+)?) {yylval.text=strdup(yytext);return T_NUM;}
"."  { return T_DOT;}


"+=" { yylval.text=strdup(yytext); return T_SPLUS;}
"-=" { yylval.text=strdup(yytext); return T_SMINUS;}
"*=" { yylval.text=strdup(yytext); return T_SMULT;}
"/=" { yylval.text=strdup(yytext); return T_SDIV;}
"++" { yylval.text=strdup(yytext); return T_INC;}
"--" { yylval.text=strdup(yytext); return T_DEC;}
"("  {return T_OPEN;}
")"  {return T_CLOSE;}
"<=" {yylval.text=strdup(yytext); return T_LESEQ; }
">=" {yylval.text=strdup(yytext); return T_GRTEQ;}
"!=" { yylval.text=strdup(yytext); return T_NOTEQ;}
"==" { yylval.text=strdup(yytext); return T_EQEQ; }
"<"  { yylval.text=strdup(yytext); return T_LESS;}
">"	 { yylval.text=strdup(yytext); return T_GREAT;}
"{"	 { return T_OPBRACE;}
"}"  {return T_CLBRACE;}
"+"  {yylval.text=strdup(yytext); return T_PLUS;}
"-"  {yylval.text=strdup(yytext); return T_MINUS;}
"="	{yylval.text=strdup(yytext); return T_ASSIGN; }
"*"	 {yylval.text=strdup(yytext); return T_MULT;}
"/"	 {yylval.text=strdup(yytext); return T_DIV;}
"^"	 {yylval.text=strdup(yytext); return T_POW;}
"||" {yylval.text=strdup(yytext); return T_OR;}
"&&" {yylval.text=strdup(yytext); return T_AND;}
[' '\n\t\s] {}
continue  {return T_CONTINUE;}
break  {return T_BREAK;}
return  {return T_RETURN;}
if  {return T_IF;}
while  {return T_WHILE;}
else  {return T_ELSE;}
main	{ return T_MAIN;}
for { return T_FOR;}

[a-zA-Z]+[a-zA-Z0-9]* {yylval.text=strdup(yytext); return T_ID;}
#					  return 0;
%%