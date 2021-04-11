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
    T_DOT = 258,
    T_SINGLE = 259,
    T_SC = 260,
    T_COMMA = 261,
    T_LETTER = 262,
    T_OPBRACE = 263,
    T_CLBRACE = 264,
    T_CONTINUE = 265,
    T_BREAK = 266,
    T_POW = 267,
    T_OPEN = 268,
    T_CLOSE = 269,
    T_COMMENT = 270,
    T_SQ_OPEN = 271,
    T_SQ_CLOSE = 272,
    T_INT = 273,
    T_FLOAT = 274,
    T_CHAR = 275,
    T_ID = 276,
    T_NUM = 277,
    T_PLUS = 278,
    T_MINUS = 279,
    T_MULT = 280,
    T_DIV = 281,
    T_AND = 282,
    T_OR = 283,
    T_LESS = 284,
    T_GREAT = 285,
    T_LESEQ = 286,
    T_GRTEQ = 287,
    T_NOTEQ = 288,
    T_EQEQ = 289,
    T_ASSIGN = 290,
    T_SPLUS = 291,
    T_SMINUS = 292,
    T_SMULT = 293,
    T_SDIV = 294,
    T_INC = 295,
    T_DEC = 296,
    T_SWITCH = 297,
    T_FOR = 298,
    T_MAIN = 299,
    T_RETURN = 300,
    T_DEFAULT = 301,
    T_CASE = 302,
    T_COLON = 303
  };
#endif
/* Tokens.  */
#define T_DOT 258
#define T_SINGLE 259
#define T_SC 260
#define T_COMMA 261
#define T_LETTER 262
#define T_OPBRACE 263
#define T_CLBRACE 264
#define T_CONTINUE 265
#define T_BREAK 266
#define T_POW 267
#define T_OPEN 268
#define T_CLOSE 269
#define T_COMMENT 270
#define T_SQ_OPEN 271
#define T_SQ_CLOSE 272
#define T_INT 273
#define T_FLOAT 274
#define T_CHAR 275
#define T_ID 276
#define T_NUM 277
#define T_PLUS 278
#define T_MINUS 279
#define T_MULT 280
#define T_DIV 281
#define T_AND 282
#define T_OR 283
#define T_LESS 284
#define T_GREAT 285
#define T_LESEQ 286
#define T_GRTEQ 287
#define T_NOTEQ 288
#define T_EQEQ 289
#define T_ASSIGN 290
#define T_SPLUS 291
#define T_SMINUS 292
#define T_SMULT 293
#define T_SDIV 294
#define T_INC 295
#define T_DEC 296
#define T_SWITCH 297
#define T_FOR 298
#define T_MAIN 299
#define T_RETURN 300
#define T_DEFAULT 301
#define T_CASE 302
#define T_COLON 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 45 "parser.y"
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

#line 168 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
