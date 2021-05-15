/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_double = 258,
    T_void = 259,
    T_break = 260,
    T_continue = 261,
    T_string = 262,
    T_fltEval = 263,
    T_for = 264,
    T_cout = 265,
    T_ostream = 266,
    T_switch = 267,
    T_incr = 268,
    T_decr = 269,
    T_relop = 270,
    T_intval = 271,
    T_fltval = 272,
    T_id = 273,
    T_int = 274,
    T_char = 275,
    T_float = 276,
    T_charval = 277,
    T_main = 278,
    T_return = 279,
    T_default = 280,
    T_case = 281,
    T_colon = 282
  };
#endif
/* Tokens.  */
#define T_double 258
#define T_void 259
#define T_break 260
#define T_continue 261
#define T_string 262
#define T_fltEval 263
#define T_for 264
#define T_cout 265
#define T_ostream 266
#define T_switch 267
#define T_incr 268
#define T_decr 269
#define T_relop 270
#define T_intval 271
#define T_fltval 272
#define T_id 273
#define T_int 274
#define T_char 275
#define T_float 276
#define T_charval 277
#define T_main 278
#define T_return 279
#define T_default 280
#define T_case 281
#define T_colon 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 65 "parser.y"

	int          ival;
	float        fval;
	double       dval;
	char 	     cval;
	struct symbol_table* ptr;
	char* var_type; 
	char* text;
	struct attributes{
	char* code; 
	char* optimized_code;
	char* true;
	char* false;
	char* next_lab;
	char* next;
	char* addr;
	float val;
	int is_dig;
}A;

#line 132 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
