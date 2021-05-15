%{
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <stdarg.h>
#include <ctype.h>
void yyerror(const char*);
int yylex();
int scope[100];
int scope_ctr;
int scope_ind;
int flag1 = 1;
FILE *fp_oc;
FILE *fp_ic;
FILE *fp_sym;
FILE *fp;
FILE *fp_lex;
FILE *fp_ic_quad;
FILE *fp_oc_quad;

FILE *fp_oc;
FILE *fp_ic;
FILE *fp_sym;
FILE *fp;
FILE *fp_lex;

extern int yylineno;

int t=0;
int lab=0;
char stack[100][100];
char st[100][100];
char st_oc[100][100];
char *begin;
char *begin_for;
char end_for[6]; 
char end_for_begin[6]; 
char cont[6];
char buffer[10];
char assign[10];
int top=0;
int num_iter[10];
int iter_init[10];
int iter_top=0;
int number_of_iterations=0;
int return_flag=0;
char typ[10]="nothing";
char symbol_table_value[10];
extern FILE *yyin;
char* code_gen(int arg_count,...);
char* gen_addr(char* string);
char* new_temp();
char* code_concatenate(int arg_count,...);
char* code_gen_oc(int arg_count,...);
char* new_label();
int is_int(char *,int);
void remove_rest(char *, char *);
char break_lab[20];
char switch_id[10];
typedef struct quadruples
{
	char *op;
	char *arg1;
	char *arg2;
	char *res;
}quad;
int quadlen = 0;
quad q[100];

typedef struct Quad
{
	char *op;
	char *arg1;
	char *arg2;
	char *res;
}Quad;
int qlen = 0;
quad Q[100];

%}

%token T_DOT T_SINGLE T_SC  T_COMMA T_LETTER  T_OPBRACE T_CLBRACE T_CONTINUE T_BREAK T_POW T_OPEN T_CLOSE T_COMMENT T_SQ_OPEN T_SQ_CLOSE
%union {char* var_type; 
	char* text; 
	struct attributes{
	char* code; 
	char* optimized_code;
	char* true;
	char* false;
	char* next_lab;
	char* next;
	char* addr;
	char* temp;
	float val;
	int is_dig;
	}A;
}
%token <var_type> T_INT T_FLOAT T_CHAR 
%token <text> T_ID T_NUM T_PLUS T_MINUS T_MULT T_DIV T_AND T_OR T_LESS T_GREAT T_LESEQ T_GRTEQ T_NOTEQ T_EQEQ T_ASSIGN T_SPLUS T_SMINUS T_SMULT T_SDIV T_INC T_DEC T_SWITCH T_FOR
%token <A> T_MAIN T_RETURN T_DEFAULT T_CASE T_COLON
%type <var_type> Type 
%type <text> relOp s_op
<<<<<<< HEAD
%type <A> F T E assign_expr1 assign_expr relexp cond decl s_operation unary_expr iter_stat stat comp_stat start jump_stat select_stat ST C B D assign_expr_for 
%% 

start:T_INT T_MAIN T_OPEN T_CLOSE comp_stat                                             
									{ 
=======
%type <A> F T E assign_expr1 assign_expr relexp cond decl s_operation unary_expr iter_stat stat comp_stat start jump_stat select_stat ST C B D Varlist 
%% 

start:T_INT T_MAIN T_OPEN T_CLOSE comp_stat                                             
									{ //printf("Here\n");
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
										$$=$5; print_sym_tab(); 
										char* code1 = (char*)malloc(strlen($$.code)); 
										char* code2 = (char*)malloc(strlen($$.optimized_code));
										int a = remove_blank($$.code,code1); 
										a = remove_blank($$.optimized_code,code2);
										char* code3 = (char*)malloc(strlen(code1)); 
										char* code4 = (char*)malloc(strlen(code2));
										remove_rest(code1,code3);
										remove_rest(code2,code4);
										fprintf(fp_ic,"\n\nIC\n\n");
										print_IC(code3);
										fprintf(fp_oc,"\n\nOC\n\n");
										print_OC(code4);
										YYACCEPT;
										}   
     ;

comp_stat: T_OPBRACE {scope_ctr++;scope[scope_ind++]=scope_ctr;} stat T_CLBRACE {$$=$3; scope[scope_ind++]=0; $$.optimized_code = $3.optimized_code;}
		 ;
<<<<<<< HEAD
	
=======
		 
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
stat:E T_SC stat               {$$.code = code_concatenate(2,$1.code,$3.code); 
                               $$.optimized_code = code_concatenate(2,$1.optimized_code, $3.optimized_code);}
    | assign_expr stat        {$$.code = code_concatenate(2,$1.code,$2.code); 
    						
    							$$.optimized_code = code_concatenate(2,$1.optimized_code, $2.optimized_code); 
    							$$.is_dig=$1.is_dig;
    						
    						  }
    |comp_stat stat          {$$.code = code_concatenate(2,$1.code,$2.code); $$.optimized_code = code_concatenate(2,$1.optimized_code, $2.optimized_code);}
    |{char * lab = new_label(); push(lab);} select_stat {pop();} stat         {$$.code = code_concatenate(2,$2.code,$4.code); 
    																		$$.optimized_code = code_concatenate(2,$2.optimized_code, $4.optimized_code);
    																			}   
    | {char * lab = new_label(); push(lab);} iter_stat {pop();} stat           {$$.code = code_concatenate(2,$2.code,$4.code); 
    																			$$.optimized_code = code_concatenate(2,$2.optimized_code, $4.optimized_code);
    																			}   
    | jump_stat stat           {$$.code = code_concatenate(2,$1.code,$2.code); $$.optimized_code = code_concatenate(2,$1.optimized_code, $2.optimized_code);}
    |decl stat   {$$.code = code_concatenate(2,$1.code,$2.code); $$.optimized_code = code_concatenate(2,$1.optimized_code, $2.optimized_code);}
    |%empty				{$$.code = " "; $$.optimized_code = $$.code;}
    ;



ST  : T_SWITCH T_OPEN T_ID T_CLOSE T_OPBRACE {scope_ctr++;scope[scope_ind++]=scope_ctr;} B T_CLBRACE 
											{	
												scope[scope_ind++]=0;
												if(!look_up_sym_tab($3)){printf("Undeclared variable %s\n", $3); YYERROR;}
												//printf("%s\n",stack[top]);
												$$.code = code_concatenate(2, $7.code, code_gen(2,stack[top],"Label"));
												$$.optimized_code = code_concatenate(2, $7.optimized_code, code_gen_oc(2,stack[top],"Label"));
											}
    ; 

    
B   : C         {$$=$1;}
    | C D       {$$.code = code_concatenate(2,$1.code, $2.code); $$.optimized_code = code_concatenate(2,$1.optimized_code, $2.optimized_code);}
    | C B       {$$.code = code_concatenate(2,$1.code, $2.code); $$.optimized_code = code_concatenate(2,$1.optimized_code, $2.optimized_code);}
    ;
    
<<<<<<< HEAD
C   : T_CASE T_NUM T_COLON stat      {
								
								char* lab1 = new_label();
								char* lab2 = new_label(); 
							
								$$.code = code_concatenate(6, " goto ",lab2, code_gen(2,lab1,"Label"),code_gen(2,"goto", lab1),code_gen(4,"if ",$<text>-2," == ",$2),$4.code);
								$$.optimized_code =code_concatenate(6,code_gen_oc(2, lab2,"Label"),code_gen_oc(2, lab2,"goto"), " goto ",lab2,$4.optimized_code,code_gen_oc(4,"if ",$<text>-2," == ",$2), code_gen_oc(2,lab1,"Label"));
								
								 code_gen(2,"goto ",stack[top]);
=======
C   : T_CASE T_NUM T_COLON stat      {char* lab1 = new_label();
								char* lab2 = new_label(); 
								$$.code = code_concatenate(6,code_gen(4,"if ",$<text>-2," == ",$2," goto ", lab1), " goto ",lab2, code_gen(2,lab1,": "),$4.code, code_gen(2,lab2,": "));
								$$.optimized_code =code_concatenate(6,code_gen(6,"if ",$<text>-2," == ",$2," goto ", lab1), " goto ",lab2, code_gen(2, lab1,": "),$4.optimized_code, code_gen(2,lab2,": "));
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
								}
    ;


D   : T_DEFAULT T_COLON stat       {char* lab = new_label(); $$.code = code_concatenate(1,$3.code); $$.optimized_code = $3.optimized_code;}
    ;





select_stat : ST   {$$=$1;}
		   ;

iter_stat : T_FOR T_OPEN Type assign_expr_for cond T_SC unary_expr T_CLOSE comp_stat  
								{
								  char* begin_for = new_label(); 	
								  //printf("%s\n",begin_for);				 						
								  $5.true = new_label(); 
						          $9.next = stack[top];
								  $5.false = $9.next;   
								 strcpy(break_lab,$9.next);
								 
							         $$.code = code_concatenate(8,code_gen(6,"if ", $5.addr, $5.true,"","",""),code_gen(6,"goto ", $5.true,"","","",""), 
									   code_gen(6,"goto ", $5.false,"","","","",""), code_gen(6,$5.true,"Label","","","",""),$9.code,code_gen(6,"if ", $5.addr, $5.true,"","",""),code_gen(6,"goto ", $5.true,"","","",""),code_gen(6,$9.next,"Label","","","",""));
									
								 if(num_iter)
								 {
								   $$.optimized_code = " ";
								   int i;
						                   for(i=0;i<number_of_iterations;i++)
								   {				
			                                              $$.optimized_code = code_concatenate(2,$$.optimized_code,$9.optimized_code);
								   }
			                                         }
								else
							        {
								    $$.optimized_code = $$.code;
							        }
									
									code_gen(2,"goto",end_for);
									code_gen(2,"Label",end_for_begin);
									
									}
		 ;

jump_stat : T_BREAK T_SC                                        { $$.optimized_code = $$.code;}
		 |T_RETURN E T_SC                              {$$.code = code_gen(3,"return ",$2.addr,"\ngoto end\n");  $$.optimized_code = $$.code; return_flag=1;}
		 ;		

cond :relexp        					       {$$=$1;}
	|E          						{$$=$1;}
	;


relexp	:E relOp E    {$$.addr = new_temp();
					$$.code = code_gen(3,$1.code,$3.code,code_gen(5,$$.addr," = ",$1.addr,$2,$3.addr)); 
					if(strcmp($2,"<")==0)
					{
						num_iter[iter_top++]=atoi($3.addr);
						
						number_of_iterations = num_iter[--iter_top]-iter_init[iter_top];
						$$.temp = new_temp();
						code_gen(3,"not",$$.addr,$$.temp);
						char * lab = new_label();
						code_gen(3,"if",$$.temp,lab);
						char *end = new_label();
						strcpy(end_for_begin,lab);
						strcpy(cont,end);	
						code_gen(2,"goto",end);
					}
					
					if(strcmp($2,"<=")==0)
					{
						num_iter[iter_top++]=atoi($3.addr);
						//printf("TOP : %d\n",iter_top);
						number_of_iterations = num_iter[--iter_top]-iter_init[iter_top]+1;
					}
					if(strcmp($2,">")==0)
					{
						num_iter[iter_top++]=atoi($3.addr);
						//printf("TOP : %d\n",iter_top);
						number_of_iterations = iter_init[--iter_top] - num_iter[iter_top];
					}
					if(strcmp($2,">=")==0)
					{
						num_iter[iter_top++]=atoi($3.addr);
						//printf("TOP : %d\n",iter_top);
						number_of_iterations = iter_init[--iter_top] - num_iter[iter_top]+1;
					}
					
					}
	  ;


relOp :T_LESEQ     			{$$=$1;}
     |T_GRTEQ     			{$$=$1;}
     |T_NOTEQ    			 {$$=$1;} 
     |T_EQEQ     			 {$$=$1;}
	 |T_LESS     			 {$$=$1;}
	 |T_GREAT   			 {$$=$1;}
	 ;

decl :Type assign_expr1  		 {$$.code = code_gen(1,$2.code); $$.optimized_code = $2.optimized_code; }

    ;

 
Type:T_INT 				{ $$=$1; strcpy(typ,$1);}
	|T_FLOAT     			 {$$=$1;strcpy(typ,$1);}
	| T_CHAR				{$$=$1;strcpy(typ,$1);}
	;


assign_expr	: T_ID T_ASSIGN E T_COMMA assign_expr {
										$$.addr = gen_addr($1);  
			   							$$.code = code_concatenate(3,$3.code,code_gen(3,$$.addr," = ",$3.addr),$5.code);
			   							char buf[10];
			   							int scop=get_scope();
			   							int ret=is_int($1,scop);
			   							if(ret)
			   							{
			   								if(is_digit($3.addr))
			   								{
			   									float val=atof($3.addr);
			   									int val1=(int)val;
			   									char buf1[10];
			   									gcvt(val1, 6, buf1);
			   									$$.code = code_concatenate(3,$3.code,code_gen(3,$$.addr," = ",buf1),$5.code);
			   								}
			   								else
			   									$$.code = code_concatenate(3,$3.code,code_gen(3,$$.addr," = ",$3.addr),$5.code);
			   							} 
			   							else
			   								$$.code = code_concatenate(3,$3.code,code_gen(3,$$.addr," = ",$3.addr),$5.code);
			   							
			   							
			   							if(ret)
			   							{
			   								int val=(int)$3.val;
			   								float f = val;
			   								gcvt(val, 6, buf);
			   							}
			   							else
											gcvt($3.val, 6, buf);
										if($3.is_dig)
			   							{
											   $$.optimized_code = code_concatenate(2,code_gen_oc(3,$$.addr," = ",buf),$5.optimized_code);
										}
			   							else
			   							{		
											   $$.optimized_code = code_concatenate(3,$3.optimized_code,code_gen_oc(3,$$.addr," = ",$3.addr),$5.optimized_code);
										}
			   							if(!look_up_sym_tab($1)){printf("Undeclared variable %s\n", $1); YYERROR;}flag1=1;
			   							}
		   |	T_ID T_ASSIGN E T_SC     {
			   							
		  								$$.addr = gen_addr($1); 
		  								int scop=get_scope(); 
		  								int ret=is_int($1,scop);
		  								if(ret)
			   							{	
			   								if(is_digit($3.addr))
			   								{
			   									float val=atof($3.addr);
			   									int val1=(int)val;
			   									char buf1[10];
			   									gcvt(val1, 6, buf1);
												
			   									$$.code = code_concatenate(2,$3.code,code_gen(3,buf1," = ",$$.addr));
			   								}
			   								else
			   									$$.code = code_concatenate(2,$3.code,code_gen(3,$3.addr," = ",$$.addr));
			   							} 
			   							else
										   {
											 
			   								$$.code = code_concatenate(2,$3.code,code_gen(3,$$.addr," = ",$3.addr));
										   }
			   							char buf[10];
			   							
										
			   							if(ret)
			   							{
			   								int val=(int)$3.val;
			   								float f = val;
			   								gcvt(val, 6, buf);
			   							}
			   							else
											gcvt($3.val, 6, buf);
										
										if($3.is_dig)
										{	

											strcpy(assign,buf);
											strcpy(symbol_table_value,buf);

			   								$$.optimized_code = code_concatenate(1,code_gen_oc(7,$$.addr," = ",assign,"","","","")); 
			   							
			   							}
			   							else
			   							{
											
			   								$$.optimized_code = code_concatenate(2,$3.optimized_code,code_gen_oc(3,$$.addr," = ",$3.addr)); 
			   								
			   							}
			   							
			   							if(!look_up_sym_tab($1)){printf("Undeclared variable %s\n", $1); YYERROR;}
										else
										{
										if(scope[scope_ind-1]>0){update_sym_tab(typ,$1,yylineno,scope[scope_ind-1],symbol_table_value);}else{int scop=get_scope();update_sym_tab(typ,$1,yylineno,scop,symbol_table_value);}}
			   							flag1=1;												
			   							}
		   ;

assign_expr1:T_ID T_ASSIGN E T_COMMA assign_expr1    {$$.addr = gen_addr($1);  
									
										if(strcmp(typ,"int")==0)
		   								{
		   									if(is_digit($3.addr))
		   									{
		   										float val=atof($3.addr);
		   										int val1=(int)val;
		   										char buf1[10];
		   										gcvt(val1, 6, buf1);
		   										$$.code = code_concatenate(3,$3.code,code_gen(4," ",$$.addr," = ",buf1),$5.code); 
		   									}
		   									else
		   										$$.code = code_concatenate(3,$3.code,code_gen(4," ",$$.addr," = ",$3.addr),$5.code); 

		   								}
		   								else
			   								$$.code = code_concatenate(3,$3.code,code_gen(4," ",$$.addr," = ",$3.addr),$5.code); 
			   							
			   							char buf[10];
			   							if(strcmp(typ,"int")==0)
			   							{
			   								int val=(int)$3.val;
			   								float f = val;
			   								gcvt(val, 6, buf);
			   							}
										else
											gcvt($3.val, 6, buf);
										if($3.is_dig)
			   								$$.optimized_code = code_concatenate(2,code_gen_oc(3,$$.addr," = ",buf),$5.optimized_code);
			   							else
<<<<<<< HEAD
			   								$$.optimized_code = code_concatenate(3,$3.optimized_code,code_gen_oc(3,$$.addr," = ",$3.addr),$5.optimized_code);
=======
			   								$$.optimized_code = code_concatenate(3,$3.optimized_code,code_gen(3,$$.addr," = ",$3.addr),$5.optimized_code);
			   							//$$.optimized_code = code_concatenate(2,code_gen(5,typ," ",$$.addr," = ",buf),$5.optimized_code);
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
			   							if(look_up_sym_tab_dec($1,scope[scope_ind-1])){ yyerror("Redeclaration\n");  YYERROR;flag1=1; }

if(scope[scope_ind-1]>0){update_sym_tab(typ,$1,yylineno,scope[scope_ind-1]);}else{int scop=get_scope();update_sym_tab(typ,$1,yylineno,scop);}
			   							}
		   |T_ID T_ASSIGN E T_SC          {  $$.addr = gen_addr($1);  
<<<<<<< HEAD
		   								char symbol_buffer[10];
=======
		   								
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
		   								if(strcmp(typ,"int")==0)
		   								{
		   									if(is_digit($3.addr))
		   									{
		   										float val=atof($3.addr);
		   										int val1=(int)val;
		   										char buf1[10];
		   										gcvt(val1, 6, buf1);
												strcpy(symbol_buffer,buf1);
												   //printf("%s\n",buf1);
		   										$$.code = code_concatenate(2,$3.code,code_gen(4," ",$$.addr," = ",buf1)); 
		   									}
		   									else
		   										$$.code = code_concatenate(2,$3.code,code_gen(4," ",$$.addr," = ",$3.addr)); 

		   								}
		   								else
			   								$$.code = code_concatenate(2,$3.code,code_gen(4," ",$$.addr," = ",$3.addr)); 
			   							char buf[10];
			   							if(strcmp(typ,"int")==0)
			   							{
			   								int val=(int)$3.val;
			   								float f = val;
			   								gcvt(val, 6, buf);
											strcpy(symbol_buffer,buf);
			   							}
										else
										{gcvt($3.val, 6, buf);
										strcpy(symbol_buffer,buf);
										}
										if($3.is_dig)
										{
											strcpy(buffer,buf);
											strcpy(symbol_buffer,buf);
			   								$$.optimized_code = code_concatenate(1,code_gen_oc(4,$$.addr," = ",buf," ")); 
			   							}
			   							else
			   							{
			   								$$.optimized_code = code_concatenate(2,$3.optimized_code,code_gen_oc(3,$$.addr," = ",$3.addr)); 
			   							}
										//printf("%s\n",symbol_buffer);
										strcpy(symbol_table_value,symbol_buffer);
			   							 if(look_up_sym_tab_dec($1,scope[scope_ind-1])){ yyerror("Redeclaration\n");  YYERROR; } if(scope[scope_ind-1]>0){update_sym_tab(typ,$1,yylineno,scope[scope_ind-1],symbol_table_value);}else{ strcpy(symbol_table_value,""); int scop=get_scope();update_sym_tab(typ,$1,yylineno,scop,symbol_table_value);} 
			   							iter_init[iter_top]=atoi($3.addr);
			   						 }
		   ;



assign_expr_for :T_ID T_ASSIGN E T_COMMA assign_expr_for    {
										code_gen(2,lab,"Labellsada");
										$$.addr = gen_addr($1);  
										
										if(strcmp(typ,"int")==0)
		   								{
		   									if(is_digit($3.addr))
		   									{
		   										float val=atof($3.addr);
		   										int val1 = (int)val;
		   										char buf1[10];
		   										gcvt(val1, 6, buf1);
		   										$$.code = code_concatenate(3,$3.code,code_gen(4," ",$$.addr," = ",buf1),$5.code); 
												char* begin = new_label();
												code_gen(2,begin,"LABEL");
												strcpy(end_for,begin);
											
		   									}
		   									else
		   										$$.code = code_concatenate(3,$3.code,code_gen(4," ",$$.addr," = ",$3.addr),$5.code); 

		   								}
		   								else
			   								$$.code = code_concatenate(3,$3.code,code_gen(4," ",$$.addr," = ",$3.addr),$5.code); 
			   							
			   							char buf[10];
			   							if(strcmp(typ,"int")==0)
			   							{
			   								int val=(int)$3.val;
			   								float f = val;
			   								gcvt(val, 6, buf);
			   							}
										else
											gcvt($3.val, 6, buf);
										if($3.is_dig)
			   								$$.optimized_code = code_concatenate(2,code_gen_oc(3,$$.addr," = ",buf),$5.optimized_code);
			   							else
			   								$$.optimized_code = code_concatenate(3,$3.optimized_code,code_gen_oc(3,$$.addr," = ",$3.addr),$5.optimized_code);
			   							if(look_up_sym_tab_dec($1,scope[scope_ind-1])){ yyerror("Redeclaration\n");  YYERROR;flag1=1; }

if(scope[scope_ind-1]>0){update_sym_tab(typ,$1,yylineno,scope[scope_ind-1],symbol_table_value);}else{int scop=get_scope();update_sym_tab(typ,$1,yylineno,scop,	symbol_table_value);}
			   							}
		   |T_ID T_ASSIGN E T_SC          {  
			   														   
										strcpy(symbol_table_value,"NA");
									   $$.addr = gen_addr($1);  
		   								
		   								if(strcmp(typ,"int")==0)
		   								{
		   									if(is_digit($3.addr))
		   									{	
		   										float val=atof($3.addr);
		   										int val1=(int)val;
		   										char buf1[10];
		   										gcvt(val1, 6, buf1);
		   										$$.code = code_concatenate(2,$3.code,code_gen(4," ",$$.addr," = ",buf1));
												char* begin = new_label();
												code_gen(2,"Label",begin);
												
								  				strcpy(end_for,begin);	
		   									}
		   									else
		   										$$.code = code_concatenate(2,$3.code,code_gen(4," ",$$.addr," = ",$3.addr)); 

		   								}
		   								else
			   								$$.code = code_concatenate(2,$3.code,code_gen(4," ",$$.addr," = ",$3.addr)); 
			   							char buf[10];
			   							if(strcmp(typ,"int")==0)
			   							{
			   								int val=(int)$3.val;
			   								float f = val;
			   								gcvt(val, 6, buf);
			   							}
										else
											gcvt($3.val, 6, buf);
										if($3.is_dig)
										{
											
			   								$$.optimized_code = code_concatenate(1,code_gen_oc(3,$$.addr," = ",buf)); 
			   							}
			   							else
			   							{
						
			   								$$.optimized_code = code_concatenate(2,$3.optimized_code,code_gen_oc(4,$$.addr," = ",$3.addr,"")); 
			   							}
			   							 if(look_up_sym_tab_dec($1,scope[scope_ind-1])){ yyerror("Redeclaration\n");  YYERROR; } if(scope[scope_ind-1]>0){update_sym_tab(typ,$1,yylineno,scope[scope_ind-1],symbol_table_value);}else{int scop=get_scope();update_sym_tab(typ,$1,yylineno,scop,symbol_table_value);} 
			   							iter_init[iter_top]=atoi($3.addr);
			   						 }
		   ;

E:E T_PLUS T    {$$.addr = new_temp(); $$.code = code_concatenate(3,$1.code,$3.code,code_gen(5,$$.addr," = ",$1.addr," + ",$3.addr)); 
				if(($1.is_dig) && ($3.is_dig))
				{
					$$.is_dig=1;
					float temp = $1.val+$3.val;
					char buf[10];
					gcvt(temp, 6, buf);
					$$.optimized_code = code_concatenate(3,$1.optimized_code,$3.optimized_code,code_gen_oc(3,$$.addr," = ",buf));
					$$.val = temp;
					flag1 &= 1;
				}
				else
				{
					$$.is_dig=0;
					$$.optimized_code = $$.code;
					flag1=0;
				}
				}
 |E T_MINUS T                    {$$.addr = new_temp(); $$.code = code_concatenate(3,$1.code,$3.code,code_gen(5,$$.addr," = ",$1.addr," - ",$3.addr));
 				if(($1.is_dig) && ($3.is_dig))
				{
					$$.is_dig=1;
					float temp = $1.val-$3.val;
					char buf[10];
					gcvt(temp, 6, buf);
					$$.optimized_code = code_concatenate(3,$1.optimized_code,$3.optimized_code,code_gen_oc(3,$$.addr," = ",buf));
					$$.val = temp;
					flag1 &=1;
				}
				else
				{
					$$.is_dig=0;
					$$.optimized_code = $$.code;
					flag1=0;
				}
 				}
 |T                            {$$=$1;}
 ;
 
T:T T_MULT F    {$$.addr = new_temp(); $$.code = code_concatenate(3,$1.code,$3.code,code_gen(5,$$.addr," = ",$1.addr," * ",$3.addr)); 
				if(($1.is_dig) && ($3.is_dig))
				{
					$$.is_dig=1;
					float temp = $1.val*$3.val;
					char buf[10];
					gcvt(temp, 6, buf);
					$$.optimized_code = code_concatenate(3,$1.optimized_code,$3.optimized_code,code_gen_oc(3,$$.addr," = ",buf));
					$$.val = temp;
					flag1 &=1;
				}

				else
				{
					$$.is_dig=0;
					$$.optimized_code = $$.code;
					flag1=0;
				}
				}
 |T T_DIV F                       {$$.addr = new_temp(); $$.code = code_concatenate(3,$1.code,$3.code,code_gen(5,$$.addr," = ",$1.addr," / ",$3.addr)); 
 				if(($1.is_dig) && ($3.is_dig))
				{
					$$.is_dig=1;
					float temp = $1.val/$3.val;
					char buf[10];
					gcvt(temp, 6, buf);
					$$.optimized_code = code_concatenate(3,$1.optimized_code,$3.optimized_code,code_gen_oc(3,$$.addr," = ",buf));
					$$.val = temp;
					flag1 &=1;
				}
				else
				{
					$$.is_dig=0;
					$$.optimized_code = $$.code;
					flag1=0;
				}
 				}
 |F                            {$$.addr = $1.addr; $$.code = $1.code; $$.optimized_code = $1.optimized_code; $$.val = $1.val;$$.is_dig=$1.is_dig;}
 ;
 
F:T_ID  {$$.addr = gen_addr($1); $$.code = code_gen(1," ");if(!look_up_sym_tab($1)){printf("Type mismatch error at %d\n", yylineno); YYERROR;} $$.optimized_code = $$.code;$$.is_dig=0;}
 |T_NUM     {$$.addr = gen_addr($1); $$.code = code_gen(1," ");$$.optimized_code = $$.code; $$.val = atof($1);$$.is_dig=1;}       
 |T_OPEN E T_CLOSE   {$$= $2;}
 |unary_expr      {$$=$1;}
 |s_operation     {$$=$1;}
 ;
 
s_operation : T_ID s_op T_ID  {$$.addr = new_temp(); 
								$$.code = code_concatenate(2,code_gen(5,$$.addr,"=",$1,$2,$3), code_gen(3,$1,"=",$$.addr)); 
								if(!look_up_sym_tab($1)){printf("Undeclared variable %s\n", $1); YYERROR;}
								if(!look_up_sym_tab($3)){printf("Undeclared variable %s\n", $3); YYERROR;}
								$$.optimized_code = $$.code;
								$$.is_dig=0;
								}
			   | T_ID s_op T_NUM {$$.addr = new_temp();
			   //printf("HELLO\n"); 
								$$.code = code_concatenate(2,code_gen(5,$$.addr,"=",$1,$2,$3), code_gen(3,$1,"=",$$.addr)); 
								if(!look_up_sym_tab($1)){printf("Undeclared variable %s\n", $1); YYERROR;}
								$$.optimized_code = $$.code;
								$$.is_dig=0;
								}
			   | T_ID s_op T_OPEN E T_CLOSE {$$.addr = new_temp(); 
								$$.code = code_concatenate(3,$4.code,code_gen(5,$$.addr,"=",$1,$2,$4.addr), code_gen(3,$1,"=",$$.addr)); 
								if(!look_up_sym_tab($1)){printf("Undeclared variable %s\n", $1); YYERROR;}
								$$.optimized_code = $$.code;
								$$.is_dig=0;
								}
			   ;

s_op :T_SPLUS   {$$="+";}
	|T_SMINUS  {$$="-";}
	|T_SMULT   {$$="*";}
	|T_SDIV    {$$="/";}
	;

unary_expr :        T_INC T_ID 			{ $$.addr = new_temp(); 
								
								$$.code = code_concatenate(2,code_gen(3,$2,"=",$$.addr),code_gen(5,$$.addr,"=",$2,"+","1"));
								code_gen(2,"Label",cont); 
								if(!look_up_sym_tab($2)){printf("Undeclared variable %s\n", $2); YYERROR;}
								$$.optimized_code = $$.code;
								$$.is_dig=0;
							}
		  |T_ID T_INC  			{ $$.addr = new_temp(); 
								$$.code = code_concatenate(2,code_gen(5,$$.addr,"=",$2,"+","1"),code_gen(3,$1,"=",$$.addr));
								if(!look_up_sym_tab($1)){printf("Undeclared variable %s\n", $1); YYERROR;}
								$$.optimized_code = $$.code;
								$$.is_dig=0;
							}
		  |T_DEC T_ID           {  $$.addr = new_temp(); 
								$$.code = code_concatenate(2,code_gen(5,$$.addr,"=",$2,"-","1"),code_gen(3,$2,"=",$$.addr));
								if(!look_up_sym_tab($2)){printf("Undeclared variable %s\n", $2); YYERROR;}
								$$.optimized_code = $$.code;
								$$.is_dig=0;
							}
		  |T_ID T_DEC 			{  $$.addr = new_temp(); 
								$$.code = code_concatenate(2,code_gen(5,$$.addr,"=",$2,"-","1"),code_gen(3,$1,"=",$$.addr));
								if(!look_up_sym_tab($1)){printf("Undeclared variable %s\n", $1); YYERROR;}
								$$.optimized_code = $$.code;
								$$.is_dig=0;
							}
		  | T_MINUS T_ID       {  $$.addr = new_temp(); 
								$$.code = code_gen(4,$$.addr,"=",$1,$2); 
								if(!look_up_sym_tab($1)){printf("Undeclared variable %s\n", $1); YYERROR;}
								$$.optimized_code = $$.code;
								$$.is_dig=0;
							}
		  | T_MINUS T_NUM      {  $$.addr = new_temp(); 
								$$.code = code_gen(4,$$.addr,"=",$1,$2); 
								$$.optimized_code = $$.code;
								$$.is_dig=1;
							}
		  ;
%%
void yyerror(const char* arg)
{
	printf("%s\n",arg);
}

struct entry
{
	char name[30];
	char type[10];
	int width;
	int line_num;
	int scope;
	char symbol_table_value[10];
};

struct entry sym_tab[100];
int ctr = 0;

void update_sym_tab(char* typ, char* nam, int line, int scope,char* symbol_table_value)
{
	strcpy(sym_tab[ctr].name,nam);
	//printf("%s\n",symbol_table_value);
	if(strcmp(typ,"int")==0)
	{
		strcpy(sym_tab[ctr].type,typ);
		sym_tab[ctr].width=4;
	}

	else if(strcmp(typ,"float")==0)
	{
		strcpy(sym_tab[ctr].type,typ);
		sym_tab[ctr].width=8;
	}
	else if(strcmp(typ,"char")==0)
	{
		strcpy(sym_tab[ctr].type,typ);
		sym_tab[ctr].width=1;	
	}
	sym_tab[ctr].line_num=line;
	sym_tab[ctr].scope=scope;
	strcpy(sym_tab[ctr].symbol_table_value ,symbol_table_value);
	//printf("%f\n",sym_tab[ctr].symbol_table_value);
	ctr++;
	

}

void print_sym_tab()
 { 	
 		int i; 	
		fprintf(fp_sym,"\n\nSymbol Table: \n"); 
		for(i=0;i<ctr;i++) 	
		{ 		
<<<<<<< HEAD
			fprintf(fp_sym,"Token: %s, Type: %s, Size: %d, Line Number: %d, Scope: %d Value: %s\n \n",sym_tab[i].name, sym_tab[i].type, sym_tab[i].width,sym_tab[i].line_num,sym_tab[i].scope,sym_tab[i].symbol_table_value); 	
=======
			fprintf(fp_sym,"Token: %s, Type: %s, Size: %d, Line Number: %d, Scope: %d\n \n",sym_tab[i].name, sym_tab[i].type, sym_tab[i].width,sym_tab[i].line_num,sym_tab[i].scope); 	
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
		} 

}

int look_up_sym_tab(char* nam)
{
	int i; 
	for(i=0;i<ctr;i++)
	{
		if(strcmp(sym_tab[i].name,nam)==0)
		{

			int scop=sym_tab[i].scope;
			int flag=0;
			int zero_ctr=0;
			int j=scope_ind-1;
			while(j>=0)
			{
				if(scope[j]==0)
					zero_ctr++;
				else if(scope[j]!=0 && zero_ctr>0)
					zero_ctr--;
				else if(scope[j]!=0 && zero_ctr==0)
				{
					if(scope[j]==scop)
					{
						flag=1;
						return 1;
					}
				}
				j--;
			}
		}
	}
	return 0;
}
int is_int (char *nam, int scop)
{
	int i;
	for(i=0;i<ctr;i++)
	{
		if(strcmp(sym_tab[i].name,nam)==0 && scop==sym_tab[i].scope)
		{
			if(strcmp(sym_tab[i].type,"int")==0)
				return 1;
			else
				return 0;
		}
	}
	return 1;
}

int look_up_sym_tab_dec(char* nam, int scop)
{
	int i; 
	for(i=0;i<ctr;i++)
	{
		//printf("#### %s ### %s ### %d ### %d \n",sym_tab[i].name,nam,scop,sym_tab[i].scope);
		if(strcmp(sym_tab[i].name,nam)==0 && sym_tab[i].scope==scop)
		{
			return 1;
		}
	}
	return 0;
}

int get_scope()
{
	int i=scope_ind-1;
	int zero_ctr=0;
	int flag=1;
	while(flag && i>0)
	{
		if(scope[i]!=0)
			zero_ctr--;
		else
			zero_ctr++;
		if(zero_ctr==0)
		{
			i--;
			flag=0;
			break;
		}
		i--;
	}
	return scope[i];
}





void push(char* string)
{

	strcpy(stack[++top],string); 
	
}

void pop()
{
	top--;
}
int remove_blank(char *text, char* blank)
{
	int c=0; int d=0;
       while (text[c] != '\0') {
      if (text[c] == ' ') {
         int temp = c + 1;
         if (text[temp] != '\0') {
            while (text[temp] == ' ' && text[temp] != '\0') {
               if (text[temp] == ' ') {
                  c++;
               }  
               temp++;
            }
         }
      }
      blank[d] = text[c];
      c++;
      d++;
   }
 
   blank[d] = '\0';
 
   //printf("Text after removing blanks\n%s\n", blank);
 
   return 0;
}

void remove_rest(char *text, char* blank)
{
	char *tok=strtok(text,"\n");
	while(tok!=NULL)
	{
		if(strlen(tok)>1)
		{
			if(strcmp(tok," goto ")==0)
			{
				strcat(blank,"goto");
				strcat(blank," ");
				tok=strtok(NULL,"\n");
				strcat(blank,tok);
				strcat(blank,"\n");
			}
			else			
			{
				strcat(blank,tok);
				strcat(blank,"\n");
			}
		}
		tok=strtok(NULL,"\n");
	}
}

int is_digit(char* tmp)
{
  int j=0;
  int isDigit = 1;
  while(j<strlen(tmp))
  {
  	if(isdigit(tmp[j])|| tmp[j]=='.')
  	{
  		j++;
  		continue;
  	}
  	else
  	{
  		isDigit = 0;
  		break;
  	}
  	j++;
  }
  return isDigit;
}

void print_IC(char* str)
{
	// Returns first token 
    char *token = strtok(str, "\n");
   
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL)
    {
        fprintf(fp_ic,"%s\n", token);
        token = strtok(NULL, "\n");
    }
 
}

void print_OC(char* str)
{
	// Returns first token 
    char *token = strtok(str, "\n");
   
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL)
    {
        fprintf(fp_oc,"%s\n", token);
        token = strtok(NULL, "\n");
    }
 
}

void tostring(char str[], int num)
{
    int i, rem, len = 0, n;
 
    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';
}
 
char* new_temp()
{
	t++;
	char* num = (char*)malloc(sizeof(int));
	tostring(num,t);
	char* temp = (char*)malloc(sizeof(int));
	strcat(temp,"t");
	strcat(temp,num);
	return temp;
}


char* new_label()
{
	lab++;
	char* num = (char*)malloc(sizeof(int));
	tostring(num,lab);
	char* temp = (char*)malloc(sizeof(int));
	strcat(temp,"L");
	strcat(temp,num);
	return temp;
}

char* code_concatenate(int arg_count,...)
{
	//printf("\nConcatenating\n");
	int i;
	va_list ap;
	va_start(ap, arg_count);
	char* temp = malloc(1000);
	for (i = 1; i <= arg_count; i++)
    {   
     	char* a = va_arg(ap, char*);
     	temp = (char*)realloc(temp,(strlen(temp)+strlen(a)+10));
     	strcat(temp,"\n");
     	strcat(temp,a);
     }
     return temp;     
}


char* gen_addr(char* string)
{
	char* addr = (char*)malloc(sizeof(string));
	strcpy(addr, string);
	return addr;
}

char* code_gen(int arg_count,...)
{
	int i;
	va_list ap;
	va_start(ap, arg_count);
	//printf("	%d	\n",arg_count);
	char* temp = malloc(1000);
	for (i = 1; i <= arg_count; i++)
    {   
     	char* a = va_arg(ap, char*);
		strcpy(st[i-1],a);
     	temp = (char*)realloc(temp,(strlen(temp)+strlen(a)+10));
     	strcat(temp,a);
    }
	if(arg_count==2)
	{	
			//printf("%s	%s\n",st[0],st[1]);
			char temp[6] = "Label";
			if(strcmp(st[1],temp)==0)
			{
				q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st[1]));
				q[quadlen].arg1 = NULL;
				q[quadlen].arg2 = NULL;
				q[quadlen].res = (char*)malloc(sizeof(char)*strlen(st[0]));
				strcpy(q[quadlen].op,st[1]);
				strcpy(q[quadlen].res,st[0]);
				quadlen++;
			}
			//printf("%s	%s	%s	%s\n",st[0],st[1],st[2],st[3]);
			else
			{
				q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st[0]));
				q[quadlen].arg1 = NULL;
				q[quadlen].arg2 = NULL;
				q[quadlen].res = (char*)malloc(sizeof(char)*strlen(st[1]));
				strcpy(q[quadlen].op,st[0]);
				strcpy(q[quadlen].res,st[1]);
				quadlen++;
			}

		
	}
	else if(arg_count==3)
	{	
		//printf("%s %s %s %s\n",st[0],st[1],st[2]);
		if(strlen(st[2])<=2)
		{
			if(strlen(st[1])==1)
			{
				q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st[1]));
				q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[2]));
				q[quadlen].arg2 = NULL;
				q[quadlen].res = (char*)malloc(sizeof(char)*strlen(st[0]));
				strcpy(q[quadlen].op,st[1]);
				strcpy(q[quadlen].arg1,st[2]);
				strcpy(q[quadlen].res,st[0]);
				quadlen++;
			}
			else
			{
				q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st[0]));
				q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[1]));
				q[quadlen].arg2 = NULL;
				q[quadlen].res = (char*)malloc(sizeof(char)*strlen(st[2]));
				strcpy(q[quadlen].op,st[0]);
				strcpy(q[quadlen].arg1,st[1]);
				strcpy(q[quadlen].res,st[2]);
				quadlen++;
			}
			
		}
	}
		if(arg_count==4)
		{	
		q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st[2]));
		q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[3]));
		if(strcmp(st[0]," ")==0)
			q[quadlen].arg2 = NULL;
		else
		{	
			q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[0]));
			strcpy(q[quadlen].arg2,st[0]);
		}
		q[quadlen].res = (char*)malloc(sizeof(char)*strlen(st[1]));
		strcpy(q[quadlen].op,st[2]);
		strcpy(q[quadlen].arg1,st[3]);
		
		strcpy(q[quadlen].res,st[1]);
		quadlen++;
		//printf("%s	%s	%s	%s\n",st[0],st[1],st[2],st[3]);
	}

	else if(arg_count==5)
	{	
		q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st[3]));
		q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[2]));
		q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[4]));
		q[quadlen].res = (char*)malloc(sizeof(char)*strlen(st[0]));
		strcpy(q[quadlen].op,st[3]);
		strcpy(q[quadlen].arg1,st[2]);
		strcpy(q[quadlen].arg2,st[4]);
		strcpy(q[quadlen].res,st[0]);
		quadlen++;
		//printf("%s	%s	%s	%s %s\n",st[0],st[1],st[2],st[3],st[4]);
	}
	
	
		
		//printf("%s	%s	%s	%s\n",st[0],st[1],st[2],st[3]);
	
	
    strcat(temp,"   ");
	
     return temp;  
}

char* code_gen_oc(int arg_count,...)
{
	int i;
	va_list ap;
	va_start(ap, arg_count);
	char* temp = malloc(1000);
	for (i = 1; i <= arg_count; i++)
    {   
     	char* a = va_arg(ap, char*);
		//printf("%d\n",arg_count);
		strcpy(st_oc[i-1],a);
     	temp = (char*)realloc(temp,(strlen(temp)+strlen(a)+10));
     	strcat(temp,a);
    }
	if(arg_count==2)
	{	
			//printf("%s	%s\n",st_oc[0],st_oc[1]);
				Q[qlen].op = (char*)malloc(sizeof(char)*strlen(st_oc[1]));
				Q[qlen].arg1 = NULL;
				Q[qlen].arg2 = NULL;
				Q[qlen].res = (char*)malloc(sizeof(char)*strlen(st_oc[0]));
				strcpy(Q[qlen].op,st_oc[1]);
				strcpy(Q[qlen].res,st_oc[0]);
				qlen++;
			//printf("%s	%s	%s	%s\n",st_oc[0],st_oc[1],st_oc[2],st_oc[3]);


		
	}
	if(arg_count==6)
	{	
		printf("%s	%s %s %s %s %s\n",st_oc[0],st_oc[1],st_oc[2],st_oc[3],st_oc[4],st_oc[5]);
		Q[qlen].op = (char*)malloc(sizeof(char)*strlen(st_oc[1]));
		Q[qlen].arg1 = (char*)malloc(sizeof(char)*strlen(st_oc[2]));
		Q[qlen].arg2 = NULL;
		Q[qlen].res = (char*)malloc(sizeof(char)*strlen(st_oc[0]));
		strcpy(Q[qlen].op,st_oc[1]);
		strcpy(Q[qlen].arg1,st_oc[2]);
		strcpy(Q[qlen].res,st_oc[0]);
		qlen++;
		
	}
		if(arg_count==4)
		{	
		Q[qlen].op = (char*)malloc(sizeof(char)*strlen(st_oc[1]));
		Q[qlen].arg1 = (char*)malloc(sizeof(char)*strlen(buffer));
		Q[qlen].arg2 = NULL;
		Q[qlen].res = (char*)malloc(sizeof(char)*strlen(st_oc[0]));
		strcpy(Q[qlen].op,st_oc[1]);
		strcpy(Q[qlen].arg1,buffer);
		strcpy(Q[qlen].res,st_oc[0]);
		qlen++;
		//printf("%s	%s	%s	%s \n",st_oc[0],st_oc[1],st_oc[2],st_oc[3]);
	}
	if(arg_count==7)
		{	
		Q[qlen].op = (char*)malloc(sizeof(char)*strlen(st_oc[1]));
		Q[qlen].arg1 = (char*)malloc(sizeof(char)*strlen(assign));
		Q[qlen].arg2 = NULL;
		Q[qlen].res = (char*)malloc(sizeof(char)*strlen(st_oc[0]));
		strcpy(Q[qlen].op,st_oc[1]);
		strcpy(Q[qlen].arg1,assign);
		strcpy(Q[qlen].res,st_oc[0]);
		qlen++;
		//printf("%s	%s	%s	%s \n",st_oc[0],st_oc[1],st_oc[2],st_oc[3]);
	}
	
    strcat(temp,"   ");
     return temp;  
}


int main()
{
<<<<<<< HEAD

	
	printf("\033[1;32m");
	printf("\n\nParsing Started\n\n");
	printf("\n\nTokens Generated\n\n");
	printf("\n\nIntermediate Code generation started\n\n");
=======
	//printf("Enter a string\n");

	//yyin=fopen("Input.txt","r");
	printf("\033[1;32m");
	printf("\n\nParsing Started\n\n");
	printf("\n\nTokens Generated\n\n");
	printf("\n\nIntermediate Code generated\n\n");
	printf("\n\nOptimized Code generated\n\n");
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
	printf("\033[0m");
	fp_ic        = fopen("Intermediate_code.txt","w");
	fp_oc		 = fopen("optimized_code.txt","w");
	fp_sym		 = fopen("symbol_table.txt","w");
	fp_lex    	 = fopen("tokens.txt","w"); 
	fp    	 	 = fopen("output.cpp","w"); 
<<<<<<< HEAD
	fp_ic_quad   = fopen("Intermediate_quadruple.txt","w"); 
	fprintf(fp_ic_quad,"INTERMEDIATE CODE QUADRUPLE FORMAT\n");
	fp_oc_quad   = fopen("Code_optimized_quadruple.txt","w"); 
	fprintf(fp_oc_quad,"OPTIMIZED CODE QUADRUPLE FORMAT\n");

=======
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
	fprintf(fp_lex,"\n\t\t TOKENS LIST\n\n") ;
	if(!yyparse())
	{
		printf("\033[1;32m");
<<<<<<< HEAD
		for(int i=0;i<quadlen;i++)
		{	if(q[i].op!=" ")
			printf("%s	%s	%s	%s\n",q[i].op,q[i].arg1,q[i].arg2,q[i].res);
			fprintf(fp_ic_quad,"%s	%s	%s	%s\n",q[i].op,q[i].arg1,q[i].arg2,q[i].res);
		}
		printf("____________________________\n");
		printf("\n\nOptimizing the code\n\n");
		for(int i=0;i<qlen;i++)
		{	if(Q[i].op!=" ")
			printf("%s	%s	%s	%s\n",Q[i].op,Q[i].arg1,Q[i].arg2,Q[i].res);
			fprintf(fp_oc_quad,"%s \t\t\t%s \t\t\t%s \t\t\t%s\n",Q[i].op,Q[i].arg1,Q[i].arg2,Q[i].res);
		}
		printf("\033[1;32m");
		printf("\n\nParsing Completed\n\n");
		printf("\033[0m");
		
		
	}
	else
	{	
		
		printf("\033[1;31m");
		printf("\nerror: \n");
		printf("\033[0m");
		
	}
=======
		printf("\n\nParsing Completed\n\n");
		printf("\033[0m");

	}
	else
		{printf("\033[1;31m");
			printf("\nerror: ");
			printf("\033[0m");
		}
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
	fclose(fp_ic);
	fclose(fp_oc);
	
}