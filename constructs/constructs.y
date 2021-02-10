%{
#include <stdio.h>
#include <stdlib.h>
%}
%token t_if t_else t_cout t_endl t_break
%token t_int t_float t_include t_header t_main id t_string t_num t_lt 
%token t_gt t_eq t_lteq t_gteq t_eqeq t_pl t_min t_mul t_div 
%token t_incr t_decr t_neq t_or t_and t_not

%%

S
      : START {printf("Input accepted.\n");exit(0);}
      ;

START
      : t_include t_lt t_header t_gt MAIN
      | t_include "\"" t_header "\"" MAIN
      ;

MAIN
    : t_int t_main BODY
    ;

BODY
      : '{' C '}'
      ;

C
      : C statement ';'
      | C LOOPS
      | statement ';'
      | LOOPS
      ;

LOOPS
      : t_if '(' COND ')' LOOPBODY
      | t_if '(' COND ')' LOOPBODY t_else LOOPBODY
      ;

LOOPBODY
  	  : '{' C '}'
  	  | ';'
  	  | statement ';'
  	  ;

statement
      : ASSIGN_EXPR
      | ARITH_EXPR
      | TERNARY_EXPR
      | PRINT
      ;

COND
      : LIT RELOP LIT
      | LIT
      | LIT RELOP LIT bin_boolop LIT RELOP LIT
      | un_boolop '(' LIT RELOP LIT ')'
      | un_boolop LIT RELOP LIT
      | LIT bin_boolop LIT
      | un_boolop '(' LIT ')'
      | un_boolop LIT
      ;

ASSIGN_EXPR
      : id t_eq ARITH_EXPR
      | TYPE id t_eq ARITH_EXPR
      ;

ARITH_EXPR
      : LIT
      | LIT bin_arop ARITH_EXPR
      | LIT bin_boolop ARITH_EXPR
      | LIT un_arop
      | un_arop ARITH_EXPR
      | un_boolop ARITH_EXPR
      ;

PRINT
      : t_cout t_lt t_lt t_string
      | t_cout t_lt t_lt t_string t_lt t_lt t_endl
      ;
LIT
      : id
      | t_num
      ;
TYPE
      : t_int
      | t_float
      ;


TERNARY_EXPR
      : '(' COND ')' '?' statement ':' statement
      ;

RELOP
      : t_lt
      | t_gt
      | t_lteq
      | t_gteq
      | t_neq
      | t_eqeq
      ;

bin_arop
      : t_pl
      | t_min
      | t_mul
      | t_div
      ;

bin_boolop
      : t_and
      | t_or
      ;

un_arop
      : t_incr
      | t_decr
      ;

un_boolop
      : t_not
      ;

%%

#include "lex.yy.c"

int yyerror() {
    printf("error\n");
}

int main(int argc, char* args[]){
    yyin = fopen(args[1], "r");
    yyparse();
    return 0;
}
