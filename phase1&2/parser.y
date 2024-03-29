%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern int  scope_var;
extern int* line;
int flag_id=0;
FILE *fp;
FILE *fp_lex;
FILE *fp_symtbl;
char current_scope[30];
int  count[30]={0};

struct symbol_table{
	
	char  name[31];
	char  scope[30];
	int   line; 

	union value{
					float  f;
					int    i;
					double d;
					char   c;
				}val;
	int data_type;
	struct symbol_table *next;

}*first=NULL,*current=NULL,*tmp;
typedef struct symbol_table symtbl;
symtbl* find(char* id_name);
symtbl* addTemp(char* id_name);

%}

%union
{
	int          ival;
	float        fval;
	double       dval;
	char 	     cval;
	struct symbol_table* ptr;
}

%token T_double T_main T_return T_void T_break T_continue T_string T_fltEval T_for T_cout T_ostream T_switch T_case T_colon T_incr T_decr T_default
%token T_relop
%token <ival> T_intval
%token <fval> T_fltval
%token <ptr>  T_id
%token <ival> T_int T_char T_float
%token <cval> T_charval
%type  <ptr>  E F
%type  <ival> datatype


%left '+' '-'
%left '/' '*' '%' 
%%
 

start : main 
        { 
				printf("\033[1;32m");
				printf("\n\nParsing Done.\n\n");
				printf("\033[0m");
				print_symboltable();
				free_mem();
				return 0;
	    }

main   : T_void T_main '(' ')' block
	   | T_int T_main '(' ')' block_r
	   | decl main
	   | function main 

           ;

function   : T_void  T_id '(' params ')' block   { $2->data_type=3; strcpy($2->scope,"global");}
	   | T_int   T_id '(' params ')' block_r { $2->data_type=0; strcpy($2->scope,"global");}
	   | T_float T_id '(' params ')' block_r { $2->data_type=1; strcpy($2->scope,"global");}
	   | T_char  T_id '(' params ')' block_r { $2->data_type=2; strcpy($2->scope,"global");}
	   ;

params     : datatype T_id {if($1==0){assignInt($2,$1,0);} if($1==2){assignChar($2,$1,0);} if($1==1){assignFloat($2,$1,0);}}		
           | params ',' datatype T_id {if($3==0){assignInt($4,$3,0);} if($3==2){assignChar($4,$3,'\0');} if($3==1){assignFloat($4,$3,0);}}	
           | ; 

datatype   : T_int {$$=$1;}| T_float {$$=$1;} | T_char {$$=$1;}; 

block      : '{' statements '}'
	   | '{' '}'
	   ;

block_r    : '{' statements T_return returnval ';' '}'
	   | '{' T_return returnval ';' '}'
	   ;

returnval  : T_intval | T_fltval | T_charval;

statements : statements statement
	   | statement 
           ;
statement  : decl | block | expression | print | switch | case | for_st | default |';' ;

print      : T_cout T_ostream T_string ';'  | T_cout T_ostream T_string T_ostream T_string ';' ;

switch : T_switch '(' values ')' block;

values : T_id|T_char|T_string;


case : T_case T_intval T_colon 
	| loop_keywrd
    ;

default : T_default T_colon
		; 

for_st : T_for '(' inside_for ')' block;
    ;

inside_for : Assign_int ';' condition ';' una_op
    |';'';'';'
	| ';' condition ';' una_op
	|';'';'una_op 
	|Assign_int ';'';' una_op
	| Assign_int ';' condition ';'
    ;

una_op : T_id T_incr
    | T_id T_decr
    | expression
    ;

loop_keywrd : T_break ';'  | T_continue ';' ;

condition  : compare | expression  ;

compare    : E T_relop E;

expression : T_id '=' E ';' 
                {					
				symtbl* id = find($1->name);
				if(id==NULL)
                    {
                        printf("\033[1;31m");
						printf("\nerror : ");
						printf("\033[0m");
						printf("a Line :%d Variable '%s' undeclared .\n\n",*line,$1->name);
				   	}
				else if(id->data_type==0)
                    {
                        if($3->data_type==0)
                                id->val.i=$3->val.i;
                        else
                                id->val.i=(int)$3->val.f;
                    }
                    else if(id->data_type==1){
                            if($3->data_type==1)
                                    id->val.f=$3->val.f;
                            else
                                id->val.f=(float)$3->val.i;
                    }
                    free($1);
			       free($3);
			   }
	
	| T_id '=' T_charval ';' {
			        symtbl* id = find($1->name);
				
					if(id==NULL)
                    {   printf("\033[1;31m");
						printf("\nerror : ");
						printf("\033[0m");
						printf("bLine :%d Variable '%s' undeclared .\n\n",*line,$1->name);
				   	}
					else if(id->data_type==0)
                        			id->val.c=(int)$3;
               				else if(id->data_type==2)
                        			{id->val.c=$3;}
					else if(id->data_type==1){
						id->val.c=(float)$3;						
						}
					
					free($1);}
        ;

E :      E '+' E {	
		    printf("evaluating+\n");	
            tmp=addTemp("tmp");
    

            if(($1->data_type)!=($3->data_type)) {
                    tmp->data_type=1;
                    printf("Datatype mismatch in line : %d\nTrying to perform error correction\n",*line);
                    if(($1->data_type)==1) {
                            tmp->val.f=($1->val.f)+($3->val.i);
                    }
                    else {
                            tmp->val.f=($1->val.i)+($3->val.f);
                    }
                    $1->val.f=tmp->val.f;
            }
            else {
                    if($1->data_type==0) {
                            tmp->data_type=0;
                            tmp->val.i=($1->val.i)+($3->val.i);
            $1->val.i=tmp->val.i;
                    }
                    else if($1->data_type==1) {
                            tmp->data_type=1;
                            tmp->val.f=($1->val.f)+($3->val.f);
                $1->val.f=tmp->val.f;
                    }
                    else
                            printf("Invalid Datatype\n");
                }

		 
		  free($3);
		  free(tmp);	
                }

      | E '-' E {	
		    printf("Evaluating -\n");
            tmp=addTemp("tmp");

            if(($1->data_type)!=($3->data_type)) {
                    tmp->data_type=1;
                    printf("Datatype mismatch in line : %d\nTrying to perform error correction\n",*line);
                    if(($1->data_type)==1) {
                            tmp->val.f=($1->val.f)-($3->val.i);
                    }
                    else {
                            tmp->val.f=($1->val.i)-($3->val.f);
                    }
                    $1->val.f=tmp->val.f;
            }
            else {
                    if($1->data_type==0) {
                            tmp->data_type=0;
                            tmp->val.i=($1->val.i)-($3->val.i);
            $1->val.i=tmp->val.i;
                    }
                    else if($1->data_type==1) {
                            tmp->data_type=1;
                            tmp->val.f=($1->val.f)-($3->val.f);
            $1->val.f=tmp->val.f;
                    }
                    else
                            printf("Invalid Datatype\n");
                    
                }
		
		free($3);
		free(tmp);
                }


      | E '*' E 
            {
            printf("Evaluating *\n");        
            tmp=addTemp("tmp");
        
            if(($1->data_type)!=($3->data_type)) {
                    tmp->data_type=1;
                    printf("Datatype mismatch in line : %d\nTrying to perform error correction\n",*line);
                    if(($1->data_type)==1) {
                            tmp->val.f=($3->val.f)*($1->val.i);
                    }
                    else {
                            tmp->val.f=($3->val.i)*($1->val.f);
                    }
                    $1->val.f=tmp->val.f;
            }
            else {
                    if($1->data_type==0) {
                            tmp->data_type=0;
                            tmp->val.i=($3->val.i)*($1->val.i);$1->val.i=tmp->val.i;
                    }
                    else if($1->data_type==1) {
                            tmp->data_type=1;
                            tmp->val.f=($3->val.f)*($1->val.f); $1->val.f=tmp->val.f;
                    }
                    else
                            printf("Invalid Datatype\n");
                    
                }
		
		free($3);
		free(tmp);
                }

      | E '%' E {
	           printf("Evaluating %\n");        
		   tmp=addTemp("tmp");
		    
                   tmp->data_type=0;
                   if($1->data_type!=0 && $3->data_type!=0){
		   	printf("\033[1;31m");
			printf("\nerror : ");
			printf("\033[0m");
			printf("Line :%d Invalid operands to operator % .\n\n",*line);
		   }
		   else{		
                   tmp->val.i=($1->val.i)%($3->val.i);
                   $1->val.i=tmp->val.i;
	           }
		free($3);
		free(tmp);
                }

      | E '/' E {
		   printf("Evaluating /\n");
		   tmp=addTemp("tmp");

                   	if(($1->data_type)!=($3->data_type)) {
                            tmp->data_type=1;
                            printf("Datatype mismatch in line : %d\nTrying to perform error correction\n",*line);
                            if(($1->data_type)==1) 
							{
								if($3->val.i!=0)
												tmp->val.f=($1->val.f)/($3->val.i);
								else{
								printf("\033[1;31m");
								printf("\nerror : ");
								printf("\033[0m");
								printf("Line :%d Division By ZERO .\n\n",*line);
								}
                            }
                            else {
								if($3->val.f!=0)
												tmp->val.f=($1->val.i)/($3->val.f);
								else{
								printf("\033[1;31m");
								printf("\nerror : ");
								printf("\033[0m");
								printf("Line :%d Division By ZERO .\n\n",*line);
								}
                            }
                            $3->val.f=tmp->val.f;
                    }
                    else {
                            if($1->data_type==0) {
                                    tmp->data_type=0;
							if($3->val.i!=0)
											{tmp->val.i=($1->val.i)/($3->val.i);$3->val.i=tmp->val.i;}

							else{
							printf("\033[1;31m");
							printf("\nerror : ");
							printf("\033[0m");
							printf("Line :%d Division By ZERO .\n\n",*line);
							}
											
									}
									else if($1->data_type==1) {
											tmp->data_type=1;
							if($1->val.i!=0)
											{tmp->val.f=($3->val.f)/($1->val.f);$1->val.f=tmp->val.f;}
							else{
							printf("\033[1;31m");
							printf("\nerror : ");
							printf("\033[0m");
							printf("Line :%d Division By ZERO .\n\n",*line);
							}                                    
					
                            }
                            else
                                    printf("Invalid Datatype\n");
                            
                    	}
		
		free($3);
		free(tmp);
                }

        | F	{ $$=$1; }
        ;
decl :   T_int  T_id commaint {
                  	    if(check_mult_dec($2,$1)==0)
							assignInt($2,$1,0);
					 	else
							{find($2->name);}
                    			    }	
                
        
	    | T_int T_id '=' E commaint  {
                    	    if(check_mult_dec($2,$1)==0){
							if($4->data_type==0){assignInt($2,$1,$4->val.i);}
							if($4->data_type==1){assignInt($2,$1,$4->val.f);}
							if($4->data_type==2){assignInt($2,$1,$4->val.c);}
						}
					  	else
							{find($2->name);}
						free($4);
                			    }

        | T_float T_id commaflt {
					if(check_mult_dec($2,$1)==0)
						assignFloat($2,$1,0);
					else
						{find($2->name);}
                    		
                	        }
		| T_float T_id '=' E commaflt  {
                    	if(check_mult_dec($2,$1)==0){
							if($4->data_type==0){assignFloat($2,$1,$4->val.i);}
							if($4->data_type==1){assignFloat($2,$1,$4->val.f);}
							if($4->data_type==2){assignFloat($2,$1,$4->val.c);}
						}
					  	else
							{find($2->name);}
						free($4);
                			    }
        | T_char T_id commachar{
                        if(check_mult_dec($2,$1)==0)
						    assignChar($2,$1,0);
					    else
						    {find($2->name);}
               		       }
        | T_char T_id '=' T_charval commachar{
                   		if(check_mult_dec($2,$1)==0)
							assignChar($2,$1,$4);
					  	else
							{find($2->name);}
                			     }
	    | T_char T_id '=' E commachar  {
                    	if(check_mult_dec($2,$1)==0){
							if($4->data_type==0){assignChar($2,$1,$4->val.i);}
							if($4->data_type==1){assignChar($2,$1,$4->val.f);}
							if($4->data_type==2){assignChar($2,$1,$4->val.c);}
						}
					  	else
							{find($2->name);}
						free($4);
                			    }
        ;
commaint :    ',' T_id commaint{
                    if(check_mult_dec($2,0)==0)
						assignInt($2,0,0);
					else
						{find($2->name);}
                }
		| ',' T_id '=' E commaint{
                    				
                    if(check_mult_dec($2,0)==0){
							if($4->data_type==0){assignInt($2,0,$4->val.i);}
							if($4->data_type==1){assignInt($2,0,$4->val.f);}
							if($4->data_type==2){assignInt($2,0,$4->val.c);}
						}
					  	else
							{find($2->name);}
						free($4);
                }
        | ';'
        ;
commaflt :    ',' T_id commaflt{
                    			if(check_mult_dec($2,1)==0)
						assignFloat($2,1,0);
					else
						{find($2->name);}
                	      }
		| ',' T_id '=' E commaflt{
                    				if(check_mult_dec($2,1)==0){
							if($4->data_type==0){assignFloat($2,1,$4->val.i);}
							if($4->data_type==1){assignFloat($2,1,$4->val.f);}
							if($4->data_type==2){assignFloat($2,1,$4->val.c);}
						}
					  	else
							{find($2->name);}
						free($4);
                			}
        | ';'
        ;
commachar :    ',' T_id commachar{
                    			if(check_mult_dec($2,2)==0)
						assignChar($2,2,0);
					else
						{find($2->name);}
                }
        | ',' T_id '=' T_charval commachar{
                    				if(check_mult_dec($2,2)==0)
							assignChar($2,2,$4);
					  	else
							{find($2->name);}
                			  }
		| ',' T_id '=' E commachar{
                    				if(check_mult_dec($2,2)==0){
							if($4->data_type==0){assignChar($2,2,$4->val.i);}
							if($4->data_type==1){assignChar($2,2,$4->val.f);}
							if($4->data_type==2){assignChar($2,2,$4->val.c);}
						}
					  	else
							{find($2->name);}
						free($4);
                		}
        | ';'
        ;
F :  	T_id	     {  
			symtbl* id = find($1->name);

		    	if(id==NULL){

                    	printf("\033[1;31m");
			printf("\nerror : ");
			printf("\033[0m");
			printf("Line :%d Variable '%s' undeclared .\n\n",*line,$1->name);
		   	}
                	else{
				tmp = addTemp("tmp");
				tmp->val.i=id->val.i;
				tmp->data_type=0;
                        	$$=tmp;
			    }
			
                     }
        | T_intval	   
                {	
                tmp=addTemp("tmp");                		
				tmp->val.i=$1;
                		tmp->data_type=0;
				$$=tmp;
				printf("$$:%s intval captured - %d\n",$$->name,$1);
	
                }

        | T_fltval	   {
                    		tmp=addTemp("tmp");                		
				tmp->val.f=$1;
                		tmp->data_type=1;
				$$=tmp;
				printf("$$:%s fltval captured - %d\n",$$->name,$1);
                	   }
		|'('E')'          {$$=$2;}
        ;

Assign_int : T_id '=' E {					
				symtbl* id = find($1->name);
				if(id==NULL)
                    {

                        printf("\033[1;31m");
						printf("\nerror : ");
						printf("\033[0m");
						printf("at Line :%d Variable '%s' undeclared .\n\n",*line,$1->name);
				   	}
				else if(id->data_type==0)
                    {
                        if($3->data_type==0)
                            id->val.i=$3->val.i;
                        else
                            id->val.i=(int)$3->val.f;
                    }
                else if(id->data_type==1)
                    {
                            if($3->data_type==1)
                                    id->val.f=$3->val.f;
                            else
                                id->val.f=(float)$3->val.i;
                    }
                    free($1);
			        free($3);
			   }  
%%

int yyerror(char* err){
	printf("\nLine:%d %s\n",*line,err);
}

void free_mem(){
	printf("\033[1;32m");printf("Memory freed.\n\n");printf("\033[0m");
	symtbl *ptr,*temp;
	ptr=first;
	while(ptr!=NULL){
	temp=ptr;	
	ptr=ptr->next;
	free(temp);	
	}
}
void print(){
	symtbl *ftp;
    	ftp=first;
    	while(ftp!=NULL) {
       		write_(ftp,1);
   		ftp=ftp->next;
        }
}
void print_symboltable(){
	fprintf(fp_symtbl,"\t\t\t\t\t\t SYMBOL TABLE\n\n");
	symtbl *ftp;
    	ftp=first;
    	while(ftp!=NULL) {
       		write_(ftp,fp_symtbl);
   		ftp=ftp->next;
        }
	
}

void write_(symtbl * id, FILE* fp){
	
	char data_type[10];	
	if(id->data_type==0) strcpy(data_type,"integer");
       	if(id->data_type==1) strcpy(data_type,"float\t");
       	if(id->data_type==2) strcpy(data_type,"char\t");
	if(id->data_type==3) strcpy(data_type,"pointer");
        fprintf(fp,"name=%s\t\t\tdatatype=%s\t\tline=%d\t\t",id->name,data_type, id->line);
        if(id->data_type==0) fprintf(fp,"value= %d\t\t",id->val.i);
        else if(id->data_type==1) fprintf(fp,"value=%f\t",id->val.f);
	    else if (id->data_type==2) fprintf(fp,"value='%c'\t\t",id->val.c);
        else 
        fprintf(fp,"value='%s'\t\t","NA");

	fprintf(fp,"scope=%s\n",id->scope);
         
}

void assignInt(symtbl *id,int type,int val){
	id->data_type = type;
        id->val.i     = val;
}

void assignChar(symtbl *id,int type,char val){
	id->data_type = type;
    	id->val.c     = val;
}    

void assignFloat(symtbl *id,int type,float val){
	id->data_type = type;
    	id->val.f     = val;
}       

void addsym(symtbl* sym, char* id_name){
	printf(" >> adding symbol '%s'..\n",id_name);
	strcpy(sym->name,id_name);
	strcpy(sym->scope,current_scope);
	sym->data_type = -1;
	sym->line      = *line;
	sym->next      = NULL;

}
symtbl* addTemp(char* id_name){
	symtbl* new_sym;

	if(first==NULL){
		new_sym = (symtbl*)malloc(sizeof(symtbl));
		addsym(new_sym,id_name);
		first = new_sym;	
	}
	else{		
		new_sym = (symtbl*)malloc(sizeof(symtbl));
		addsym(new_sym,id_name);

	}
	
	return new_sym ;
}
void checksym(char* id_name, YYSTYPE* id){
	//printf("Checking symbol table .. for %s\n",id_name);
	symtbl* new_sym;

	if(first==NULL){
		new_sym = (symtbl*)malloc(sizeof(symtbl));
		addsym(new_sym,id_name);
		first = new_sym;	
	}
	else{		
		new_sym = (symtbl*)malloc(sizeof(symtbl));
		addsym(new_sym,id_name);
		current->next = new_sym;

	}
	current = new_sym;
	id->ptr = current;
	return ;
}

int check_mult_dec(symtbl* id, int data_type){
	symtbl* ptr =first;
	int line_ = 0;
	while(ptr!=NULL){
		if(strcmp(id->name,ptr->name)==0){
			if(strcmp(ptr->scope,current_scope)==0){
		
				if(line_!=0){
				printf("\033[1;31m");
				printf("\nerror: ");
				printf("\033[0m");
				printf("Line:%d Multiple Declaration of '%s'.",*line,id->name);
				printf(" Previous Declaration at Line:%d\n\n",line_);					
				return 1;}
				line_ = ptr->line;
			}
			
		}
						
		ptr=ptr->next;	
		}
	return 0;
}

symtbl* find(char* id_name){
	//printf("%s,,current:%s\n",id_name,current->name);
	symtbl* ptr = first, *res=NULL;
	if(ptr==current){first=NULL; return NULL;}
	while(ptr!=NULL){
		//printf("--%s\n",ptr->name);
		if(strcmp(ptr->name,id_name)==0 && within_scope(ptr->scope)==1){
			res=ptr;					
		}	
		if(ptr->next==current)
			break;
		ptr=ptr->next;
	}
	if(res!=NULL)
		while(ptr->next!=current){ptr=ptr->next;}
	//printf("last:%s\n",ptr->next->name);
	ptr->next=NULL;
	current = ptr;
	
	return res;
}

int within_scope(char* id_scope){
	int len_c = strlen(current_scope), len_id = strlen(id_scope);
	if(len_id>len_c)
		return 0;
	if(len_id==len_c)
		if(strcmp(id_scope,current_scope)==0) return 1;
	for(int i=0;i<len_id;i++){
		if(current_scope[i]!=id_scope[i])
			return 0;	
	}
	return 1;

}

int main(){
	printf("\033[1;32m");
	printf("\n\nLex and Parser started..\n\n");
	printf("\033[0m");
	fp        = fopen("output_compiler.cpp","w");
	fp_symtbl = fopen("symbol_table.txt","w");
	fp_lex    = fopen("tokens.txt","w"); 
	fprintf(fp_lex,"\n\t\t TOKENS LIST\n\n") ;
	
	yyparse();

	fclose(fp);
	fclose(fp_symtbl);
	fclose(fp_lex);

	return 0;	

}
