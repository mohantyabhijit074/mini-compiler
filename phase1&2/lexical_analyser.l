%{
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "y.tab.h"

int line_flag = 0;

extern FILE * fp;
extern FILE * fp_lex;
extern char current_scope[30]={'1','\0'};
extern int count[30];
int scope_var=0;

int* line = &yylineno;

%}
%option yylineno

%%

"#include"(.)*"\n" {fprintf(yyout, "%s", "");}
"using"(.)*"\n" {fprintf(yyout, "%s", "");}
"#define"(.)*"\n" {fprintf(yyout,"%s","");}			
"/*"+([^*]|\*+[^/])*\*+\/.*\n			{fprintf(yyout,"%s","");printf("\n The Comment Present in The input file - \n%s\n", yytext);}
"//"(.)*(\n)		{fprintf(yyout,"%s", "");}


"main" 		{ line_flag = 1; fprintf(fp_lex,"<%s,T_main>\n",yytext);   fprintf(fp,"%s",yytext); return T_main;}
"void"		{ line_flag = 1; fprintf(fp_lex,"<%s,T_void>\n",yytext);   fprintf(fp,"%s",yytext); return T_void;}
"int"		{ line_flag = 1; fprintf(fp_lex,"<%s,T_int>\n",yytext);    fprintf(fp,"%s",yytext); yylval.ival=0; return T_int;}
"float"		{ line_flag = 1; fprintf(fp_lex,"<%s,T_float>\n",yytext);  fprintf(fp,"%s",yytext); yylval.ival=1; return T_float;}
"char"		{ line_flag = 1; fprintf(fp_lex,"<%s,T_char>\n",yytext);   fprintf(fp,"%s",yytext); yylval.ival=2; return T_char;}
"double"	{ line_flag = 1; fprintf(fp_lex,"<%s,T_double>\n",yytext); fprintf(fp,"%s",yytext); return T_double;}


("int\*")|(("int\*")" "*\*)  	   { line_flag = 1; fprintf(fp,"%s",yytext);}
("float\*")|(("float\*")" "*\*)	   { line_flag = 1; fprintf(fp,"%s",yytext);}
("char\*")|(("char\*")" "*\*) 	   { line_flag = 1; fprintf(fp,"%s",yytext);}
("double\*")|(("double\*")" "*\*)  { line_flag = 1; fprintf(fp,"%s",yytext);}

"return" 	{ line_flag = 1; fprintf(fp_lex,"<%s,T_return>\n",yytext)  ;fprintf(fp,"%s",yytext); return T_return;}
"for" 		{ line_flag = 1; fprintf(fp_lex,"<%s,T_for>\n",yytext)     ;fprintf(fp,"%s",yytext); return T_for;}
"break" 	{ line_flag = 1; fprintf(fp_lex,"<%s,T_break>\n",yytext)   ;fprintf(fp,"%s",yytext); return T_break;}
"continue" 	{ line_flag = 1; fprintf(fp_lex,"<%s,T_continue>\n",yytext);fprintf(fp,"%s",yytext); return T_continue;}
"cout"	    { line_flag = 1; fprintf(fp_lex,"<%s,T_cout>\n",yytext)  ;fprintf(fp,"%s",yytext); return T_cout;}	
"switch"	{ line_flag = 1; fprintf(fp_lex,"<%s,T_switch>\n",yytext)  ;fprintf(fp,"%s",yytext); return T_switch;}	
"case"	    { line_flag = 1; fprintf(fp_lex,"<%s,T_case>\n",yytext)  ;fprintf(fp,"%s",yytext); return T_case;}	
"default"    { line_flag = 1; fprintf(fp_lex,"<%s,T_default>\n",yytext)  ;fprintf(fp,"%s",yytext); return T_default;} 



[a-zA-Z_][a-zA-Z_0-9]*  { line_flag = 1; fprintf(fp_lex,"<%s,T_id>\n",yytext);fprintf(fp,"%s",yytext);  checksym(yytext,&yylval);   return T_id;}
[0-9]*\.[0-9]+		{ line_flag = 1; fprintf(fp_lex,"<%s,T_fltval>\n",yytext);fprintf(fp,"%s",yytext); yylval.fval = atof(yytext); return T_fltval;}

[0-9]*(\.[0-9]+)?[Ee][+-][0-9]+	{ 	line_flag = 1;
					char*  be; 
					if(strchr(yytext,'E')==NULL){be = strtok(yytext,"e");}
					else{be = strtok(yytext,"E");}
					float f = atof(be);
					be= strtok(NULL,"e");
					if(be[0]=='+'){f=f*(float)pow(10,atoi(&be[1]));}
					else{f=f*(float)pow(10,-(atoi(&be[1])));}
					
					fprintf(fp_lex,"<%s,T_fltval>\n",yytext);
					fprintf(fp,"%f",f); 
					yylval.fval= f;
					return T_fltval;
				}

[0-9][0-9]*				{ line_flag = 1; fprintf(fp_lex,"<%s,T_intval>\n",yytext);fprintf(fp,"%s",yytext); yylval.ival = atoi(yytext); return T_intval;}
"'"."'"					{ line_flag = 1; fprintf(fp_lex,"<%s,T_charval>\n",yytext);fprintf(fp,"%s",yytext); yylval.cval = yytext[1] ; return T_charval;}
[\"].*[\"] 				{ line_flag = 1; fprintf(fp_lex,"<%s,T_string>\n",yytext);fprintf(fp,"%s",yytext); return T_string;}
":" 				{ line_flag = 1; fprintf(fp_lex,"<%s,T_colon>\n",yytext);fprintf(fp,"%s",yytext); return T_colon;}

[/][*]	{ printf("\nLine:%d Unclosed comment %s\n",yylineno,yytext);}
[*][/]	{ printf("\nLine:%d Unopened comment %s\n",yylineno,yytext);}

[\+\-\*%/]		{ line_flag = 1; fprintf(fp_lex,"<%s,%s>\n",yytext,yytext);fprintf(fp,"%s",yytext); return yytext[0];}
";"			{ line_flag = 1; fprintf(fp_lex,"<%s,%s>\n",yytext,yytext) ;fprintf(fp,"%s",yytext); return yytext[0];}
"("|")"			{ line_flag = 1; fprintf(fp_lex,"<%s,%s>\n",yytext,yytext) ;fprintf(fp,"%s",yytext); return yytext[0];}
"{"			{
				line_flag = 1; 
				fprintf(fp,"%s",yytext); 
				fprintf(fp_lex,"<%s,%s>\n",yytext,yytext);
				scope_var++;
				if(scope_var==1 )
					{current_scope[0]='1'; current_scope[1]='\0'; 
					}
				else{
				int index = strlen(current_scope);
				if(index==1)
					{
						for(int i =2 ;i<30;i++)
							count[i]=0;
					}
				current_scope[index]='.';
				count[index]=1;
				current_scope[index+1]=count[index] + '0';
				current_scope[index+2]='\0';
				}
				return yytext[0];

			}
"}"			{
				line_flag = 1; 
				fprintf(fp,"%s",yytext);
				fprintf(fp_lex,"<%s,%s>\n",yytext,yytext) ; 
				int index = strlen(current_scope);					
				current_scope[index-2]='\0';
				return yytext[0];
			}

[\[\]]		{ line_flag = 1; fprintf(fp,"%s",yytext); }

"="		{ line_flag = 1; fprintf(fp_lex,"<%s,%s>\n",yytext,yytext) ;fprintf(fp,"%s",yytext); return yytext[0];}
","		{ line_flag = 1; fprintf(fp_lex,"<%s,%s>\n",yytext,yytext) ;fprintf(fp,"%s",yytext); return yytext[0]; }			

"<="|">="|"=="|"<"|">"|"!="  { line_flag = 1; fprintf(fp_lex,"<%s,T_relop>\n",yytext) ; fprintf(fp,"%s",yytext); return T_relop; }
"<<"  { line_flag = 1; fprintf(fp_lex,"<%s,T_ostream>\n",yytext) ; fprintf(fp,"%s",yytext); return T_ostream; }


[&|^]      { line_flag = 1; fprintf(fp_lex,"<%s,%s>\n",yytext,yytext) ;fprintf(fp,"%s",yytext);}
"&&"|"||"  { line_flag = 1; fprintf(fp_lex,"<%s,%s>\n",yytext,yytext) ;fprintf(fp,"%s",yytext);}
"++" { line_flag = 1; fprintf(fp_lex,"<%s,T_incr>\n",yytext) ; fprintf(fp,"%s",yytext); return T_incr; }
"--" { line_flag = 1; fprintf(fp_lex,"<%s,T_decr>\n",yytext) ; fprintf(fp,"%s",yytext); return T_decr; }


^" "+|\t+ { ;}
" "+|\t+  { fprintf(fp," ");}

"\n"      { if(line_flag == 1) 
	       {
	       	fprintf(fp,"%s",yytext);
	       }
	       line_flag = 0;
	 }   
%%
