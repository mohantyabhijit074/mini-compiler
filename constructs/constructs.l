digit [0-9]
letters [a-zA-Z]
%%
[ \t\n]
"if" { return t_if; }
"else" { return t_else; }
"cout" { return t_cout; }
"endl" { return t_endl; }
"break" { return t_break; }
"int" { return t_int; }
"float" { return t_float; }
"#include" { return t_include; }
{letters}({letters}|{digit})* {  return id; }
{letters}({letters}|{digit})*"\.h"? {  return t_header; }
"main()" { return t_main; }
\".*\" { return t_string; }
{digit}+ { return t_num; }
"<"   { return t_lt; }
">"   {  return t_gt; }
"="   {  return t_eq; }
"<="  {  return t_lteq; }
">="  {  return t_gteq; }
"=="  { return t_eqeq; }
"!="  {  return t_neq; }
"+"   {  return t_pl; }
"-"     return t_min;
"*"     return t_mul;
"/"     return t_div;
"++"    return t_incr;
"--"    return t_decr;
"!"     return t_neq;
"||"    return t_or;
"&&"    return t_and;

. return yytext[0];
%%
