%{
#include<stdio.h>
#include "y.tab.h"
extern YYSTYPE yylval;
int flag=0;
int count = 0;
int* line = &yylineno;
extern FILE * fp;
extern FILE * fp_lex;
%}
%option yylineno
%%
"#include"(.)*"\n" {;}
"using"(.)*"\n" {fprintf(yyout, "%s", "");}
"#define"(.)*"\n" {fprintf(yyout,"%s","");}			
<<<<<<< HEAD
"/*"+([^*]|\*+[^/])*\*+\/.*\n			{fprintf(yyout,"%s","");}
=======
"/*"+([^*]|\*+[^/])*\*+\/.*\n			{fprintf(yyout,"%s","");printf("\nThe Comment Present in The input file - \n%s\n", yytext);}
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
"//"(.)*(\n)		{;}

"//"[' 'a-zA-Z0-9.]* ;
\/\*(.*\n)*.*\*\/ ;

"#include<"[' 'a-zA-Z0-9.]*">" {;}
"#include \""[' 'a-zA-Z0-9.]*"\"" {;}
int {fprintf(fp_lex,"<%s,T_INT>\n",yytext);   fprintf(fp,"%s",yytext); yylval.var_type=strdup(yytext);return T_INT;}
float {fprintf(fp_lex,"<%s,T_FLOAT>\n",yytext);   fprintf(fp,"%s",yytext); yylval.var_type=strdup(yytext);return T_FLOAT;}
char { fprintf(fp_lex,"<%s,T_CHAR>\n",yytext);   fprintf(fp,"%s",yytext);yylval.var_type=strdup(yytext);return T_CHAR;}
case { fprintf(fp_lex,"<%s,T_CASE>\n",yytext);   fprintf(fp,"%s",yytext); return T_CASE;}
switch {fprintf(fp_lex,"<%s,T_SWITCH>\n",yytext);   fprintf(fp,"%s",yytext);return T_SWITCH;}
default {fprintf(fp_lex,"<%s,T_DEFAULT>\n",yytext);   fprintf(fp,"%s",yytext);return T_DEFAULT;}
"'" {fprintf(fp_lex,"<%s,T_SINGLE>\n",yytext);   fprintf(fp,"%s",yytext);return T_SINGLE;}
"," {fprintf(fp_lex,"<%s,T_COMMA>\n",yytext);   fprintf(fp,"%s",yytext);return T_COMMA;}
":" {fprintf(fp_lex,"<%s,T_COLON>\n",yytext);   fprintf(fp,"%s",yytext);return T_COLON;}
";" { fprintf(fp_lex,"<%s,T_SC>\n",yytext);   fprintf(fp,"%s",yytext);return T_SC;}
[0-9]+((\.[0-9]+)?) {fprintf(fp_lex,"<%s,T_NUM>\n",yytext);   fprintf(fp,"%s",yytext);yylval.text=strdup(yytext);return T_NUM;}
"."  { fprintf(fp_lex,"<%s,T_DOT>\n",yytext);   fprintf(fp,"%s",yytext);return T_DOT;}


"+=" { fprintf(fp_lex,"<%s,T_SPLUS>\n",yytext);   fprintf(fp,"%s",yytext);yylval.text=strdup(yytext); return T_SPLUS;}
"-=" { fprintf(fp_lex,"<%s,T_SMINUS>\n",yytext);   fprintf(fp,"%s",yytext);yylval.text=strdup(yytext); return T_SMINUS;}
"*=" { fprintf(fp_lex,"<%s,T_SMULT>\n",yytext);   fprintf(fp,"%s",yytext);yylval.text=strdup(yytext); return T_SMULT;}
"/=" { fprintf(fp_lex,"<%s,T_SDIV>\n",yytext);   fprintf(fp,"%s",yytext);yylval.text=strdup(yytext); return T_SDIV;}
"++" { fprintf(fp_lex,"<%s,T_INC>\n",yytext);   fprintf(fp,"%s",yytext);yylval.text=strdup(yytext); return T_INC;}
"--" { fprintf(fp_lex,"<%s,T_DEC>\n",yytext);   fprintf(fp,"%s",yytext);yylval.text=strdup(yytext); return T_DEC;}
"("  {fprintf(fp_lex,"<%s,T_OPEN>\n",yytext);   fprintf(fp,"%s",yytext);return T_OPEN;}
")"  {fprintf(fp_lex,"<%s,T_CLOSE>\n",yytext);   fprintf(fp,"%s",yytext);return T_CLOSE;}
"<=" {fprintf(fp_lex,"<%s,T_LESEQ>\n",yytext);   fprintf(fp,"%s",yytext);yylval.text=strdup(yytext); return T_LESEQ; }
">=" {fprintf(fp_lex,"<%s,T_GRTEQ>\n",yytext);   fprintf(fp,"%s",yytext);yylval.text=strdup(yytext); return T_GRTEQ;}
"!=" { fprintf(fp_lex,"<%s,T_NOTEQ>\n",yytext);   fprintf(fp,"%s",yytext);yylval.text=strdup(yytext); return T_NOTEQ;}
"==" { fprintf(fp_lex,"<%s,T_EQEQ>\n",yytext);   fprintf(fp,"%s",yytext);yylval.text=strdup(yytext); return T_EQEQ; }
"<"  {fprintf(fp_lex,"<%s,T_LESS>\n",yytext);   fprintf(fp,"%s",yytext); yylval.text=strdup(yytext); return T_LESS;}
">"	 { fprintf(fp_lex,"<%s,T_GREAT>\n",yytext);   fprintf(fp,"%s",yytext);yylval.text=strdup(yytext); return T_GREAT;}
"{"	 { fprintf(fp_lex,"<%s,T_OPBRACE>\n",yytext);   fprintf(fp,"%s",yytext);return T_OPBRACE;}
"}"  {fprintf(fp_lex,"<%s,T_CLBRACE>\n",yytext);   fprintf(fp,"%s",yytext);return T_CLBRACE;}
"+"  {fprintf(fp_lex,"<%s,T_PLUS>\n",yytext);   fprintf(fp,"%s",yytext);yylval.text=strdup(yytext); return T_PLUS;}
"-"  {fprintf(fp_lex,"<%s,T_MINUS>\n",yytext);   fprintf(fp,"%s",yytext);yylval.text=strdup(yytext); return T_MINUS;}
"="	{fprintf(fp_lex,"<%s,T_ASSIGN>\n",yytext);   fprintf(fp,"%s",yytext);yylval.text=strdup(yytext); return T_ASSIGN; }
"*"	 {fprintf(fp_lex,"<%s,T_MULT>\n",yytext);   fprintf(fp,"%s",yytext);yylval.text=strdup(yytext); return T_MULT;}
"/"	 {fprintf(fp_lex,"<%s,T_DIV>\n",yytext);   fprintf(fp,"%s",yytext);yylval.text=strdup(yytext); return T_DIV;}
"^"	 {fprintf(fp_lex,"<%s,T_POW>\n",yytext);   fprintf(fp,"%s",yytext);yylval.text=strdup(yytext); return T_POW;}
"||" {fprintf(fp_lex,"<%s,T_OR>\n",yytext);   fprintf(fp,"%s",yytext);yylval.text=strdup(yytext); return T_OR;}
"&&" {fprintf(fp_lex,"<%s,T_AND>\n",yytext);   fprintf(fp,"%s",yytext);yylval.text=strdup(yytext); return T_AND;}
[' '\n\t\s] { fprintf(fp,"%s",yytext);}
continue  {fprintf(fp_lex,"<%s,T_CONTINUE>\n",yytext);   fprintf(fp,"%s",yytext);return T_CONTINUE;}
break  {fprintf(fp_lex,"<%s,T_BREAK>\n",yytext);   fprintf(fp,"%s",yytext);return T_BREAK;}
return  {fprintf(fp_lex,"<%s,T_RETURN>\n",yytext);   fprintf(fp,"%s",yytext);return T_RETURN;}
main	{ fprintf(fp_lex,"<%s,T_MAIN>\n",yytext);   fprintf(fp,"%s",yytext);return T_MAIN;}
for { fprintf(fp_lex,"<%s,T_FOR>\n",yytext);   fprintf(fp,"%s",yytext);return T_FOR;}

[a-zA-Z]+[a-zA-Z0-9]* {fprintf(fp_lex,"<%s,T_ID>\n",yytext);   fprintf(fp,"%s",yytext);yylval.text=strdup(yytext); return T_ID;}
#					  return 0;
%%