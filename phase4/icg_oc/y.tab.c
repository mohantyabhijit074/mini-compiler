/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

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


<<<<<<< HEAD
#line 145 "y.tab.c"
=======
#line 113 "y.tab.c"
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
<<<<<<< HEAD
#line 77 "parser.y"
=======
#line 45 "parser.y"
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
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
	char* temp;
	float val;
	int is_dig;
	}A;

<<<<<<< HEAD
#line 309 "y.tab.c"
=======
#line 276 "y.tab.c"
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
<<<<<<< HEAD
#define YYLAST   157
=======
#define YYLAST   151
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
<<<<<<< HEAD
#define YYNSTATES  135
=======
#define YYNSTATES  133
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7

#define YYUNDEFTOK  2
#define YYMAXUTOK   303


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
<<<<<<< HEAD
       0,   100,   100,   119,   119,   122,   124,   130,   131,   131,
     131,   134,   134,   134,   137,   138,   139,   144,   144,   155,
     156,   157,   160,   173,   180,   183,   215,   216,   219,   220,
     224,   264,   265,   266,   267,   268,   269,   272,   277,   278,
     279,   283,   324,   384,   420,   471,   513,   562,   580,   598,
     601,   620,   638,   641,   642,   643,   644,   645,   648,   655,
     662,   670,   671,   672,   673,   676,   684,   690,   696,   702,
     708
=======
       0,    67,    67,    90,    90,    93,    95,   101,   102,   102,
     102,   105,   105,   105,   108,   109,   110,   115,   115,   125,
     126,   127,   130,   138,   145,   148,   170,   171,   174,   175,
     179,   212,   213,   214,   215,   216,   217,   220,   221,   226,
     227,   230,   235,   245,   281,   329,   366,   411,   436,   457,
     460,   480,   501,   504,   505,   506,   507,   508,   511,   518,
     524,   532,   533,   534,   535,   538,   544,   550,   556,   562,
     568
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_DOT", "T_SINGLE", "T_SC", "T_COMMA",
  "T_LETTER", "T_OPBRACE", "T_CLBRACE", "T_CONTINUE", "T_BREAK", "T_POW",
  "T_OPEN", "T_CLOSE", "T_COMMENT", "T_SQ_OPEN", "T_SQ_CLOSE", "T_INT",
  "T_FLOAT", "T_CHAR", "T_ID", "T_NUM", "T_PLUS", "T_MINUS", "T_MULT",
  "T_DIV", "T_AND", "T_OR", "T_LESS", "T_GREAT", "T_LESEQ", "T_GRTEQ",
  "T_NOTEQ", "T_EQEQ", "T_ASSIGN", "T_SPLUS", "T_SMINUS", "T_SMULT",
  "T_SDIV", "T_INC", "T_DEC", "T_SWITCH", "T_FOR", "T_MAIN", "T_RETURN",
  "T_DEFAULT", "T_CASE", "T_COLON", "$accept", "start", "comp_stat", "$@1",
  "stat", "$@2", "$@3", "$@4", "$@5", "ST", "$@6", "B", "C", "D",
  "select_stat", "iter_stat", "jump_stat", "cond", "relexp", "relOp",
<<<<<<< HEAD
  "decl", "Type", "assign_expr", "assign_expr1", "assign_expr_for", "E",
  "T", "F", "s_operation", "s_op", "unary_expr", YY_NULLPTR
=======
  "decl", "Type", "Varlist", "assign_expr", "assign_expr1", "E", "T", "F",
  "s_operation", "s_op", "unary_expr", YY_NULLPTR
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

<<<<<<< HEAD
#define YYPACT_NINF (-33)
=======
#define YYPACT_NINF (-62)
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-17)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
<<<<<<< HEAD
     -11,   -32,    15,    27,   -33,    33,    11,   -33,   -33,     5,
      44,    17,   -33,   -33,   -33,    89,   -33,   -12,    32,    34,
      17,    53,    50,    40,    49,    53,    53,    80,    53,    60,
       6,   -33,   -33,   -33,   -33,    95,    55,    17,   -33,   -33,
     -33,   -33,   -33,   -33,    22,   -33,   -33,   -33,   -33,    62,
     -33,   -33,    63,   -33,   -33,   105,   -33,   -33,   -33,    35,
     -33,   -33,    53,    17,    17,    17,    17,   -33,    -2,    17,
     -33,   -33,   -33,   118,    53,    84,    53,    17,   -33,     6,
       6,   -33,   -33,   -33,   119,    76,   127,   -33,   121,   -33,
      28,   108,   -33,   -33,   136,   110,    17,   -33,    80,   -33,
      17,    92,   -33,    83,   -33,    99,    57,    -4,   -33,   -33,
     -33,   -33,   -33,   -33,    17,   125,   139,    42,   -33,   121,
      68,   135,    96,   102,   -33,   103,   -33,   -33,   -33,    11,
      53,     5,   -33,   -33,   -33
=======
     -11,   -35,    24,    20,   -62,    32,    42,   -62,   -62,     4,
      49,    52,   -62,   -62,    78,   -62,   -18,    35,    51,    52,
      40,    54,    33,    34,    40,    40,    63,    40,    11,    41,
     -62,   -62,   -62,   -62,    86,    18,    52,   -62,   -62,   -62,
     -62,   -62,   -62,    90,   -62,   -62,   -62,   -62,    47,   -62,
     -62,    89,   -62,   -62,   107,   -62,   -62,   -62,    56,    81,
     -62,   -62,    40,    52,    52,    52,    52,   -62,    13,    52,
     -62,   -62,   -62,   109,    40,    82,    40,    52,   -62,   112,
     -62,    41,    41,   -62,   -62,   -62,   115,    55,   123,   -62,
     117,   -62,    15,   -62,   104,   -62,   -62,   132,    56,    52,
     -62,   117,   -62,   136,   -62,    65,   -62,    95,   -10,   -62,
     -62,   -62,   -62,   -62,   -62,    52,   121,   135,    58,    67,
     131,   105,    98,   -62,    99,   -62,   -62,    42,    40,     4,
     -62,   -62,   -62
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     3,     2,     8,
<<<<<<< HEAD
       0,     0,    38,    39,    40,    53,    54,     0,     0,     0,
       0,    16,     0,     0,     0,    16,    16,     0,    16,     0,
      49,    52,    57,    56,    26,    53,     0,     0,    61,    62,
      63,    64,    66,    68,     0,    69,    70,    65,    67,     0,
       7,     4,     0,    24,     9,     0,    12,    14,    15,     0,
      37,     6,    16,     0,     0,     0,     0,    55,     0,     0,
      58,    59,    27,     0,    16,     0,    16,     0,     5,    47,
      48,    50,    51,    42,     0,     0,     0,    10,     0,    13,
       0,     0,    41,    60,     0,     0,     0,    44,     0,    17,
       0,     0,    28,    29,    43,     0,     0,     0,    35,    36,
      31,    32,    33,    34,     0,     0,     0,    19,    46,     0,
       0,     0,    30,     0,    18,     0,    21,    20,    45,     0,
      16,     8,    25,    22,    23
=======
       0,     0,    39,    40,    53,    54,     0,     0,     0,     0,
      16,     0,     0,     0,    16,    16,     0,    16,     0,    49,
      52,    57,    56,    26,    53,     0,     0,    61,    62,    63,
      64,    66,    68,     0,    69,    70,    65,    67,     0,     7,
       4,     0,    24,     9,     0,    12,    14,    15,    42,     0,
      38,     6,    16,     0,     0,     0,     0,    55,     0,     0,
      58,    59,    27,     0,    16,     0,    16,     0,    37,     0,
       5,    47,    48,    50,    51,    44,     0,     0,     0,    10,
       0,    13,     0,    41,     0,    43,    60,     0,     0,     0,
      46,     0,    17,     0,    28,    29,    45,     0,     0,    35,
      36,    31,    32,    33,    34,     0,     0,     0,    19,     0,
       0,    30,     0,    18,     0,    21,    20,     0,    16,     8,
      25,    22,    23
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
<<<<<<< HEAD
     -33,   -33,    -6,   -33,   -20,   -33,   -33,   -33,   -33,   -33,
     -33,    36,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,    77,    70,    59,    37,    -9,    58,    72,   -33,   -33,
      48
=======
     -62,   -62,    -6,   -62,   -19,   -62,   -62,   -62,   -62,   -62,
     -62,    30,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,    74,   -62,    64,   -61,    -9,    68,    69,   -62,   -62,
      43
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
<<<<<<< HEAD
      -1,     2,    21,     9,    22,    23,    74,    24,    76,    53,
     105,   116,   117,   127,    54,    56,    25,   101,   102,   114,
      26,    27,    28,    60,    96,    29,    30,    31,    32,    44,
      33
=======
      -1,     2,    20,     9,    21,    22,    74,    23,    76,    52,
     107,   117,   118,   126,    53,    55,    24,   103,   104,   115,
      25,    26,    59,    27,    60,    28,    29,    30,    31,    43,
      32
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
<<<<<<< HEAD
       8,    50,    36,    83,    84,    57,    58,     1,    61,    45,
      46,    49,     3,     7,   -16,     4,    10,   120,    11,     7,
      17,    63,    64,    12,    13,    14,    15,    16,    68,    17,
      11,    65,    66,    97,    98,    69,    18,    19,    35,    16,
       5,    17,    78,    70,    71,    18,    19,     6,   -11,    34,
      20,    63,    64,    47,    87,    48,    89,    18,    19,    51,
      85,     7,   118,   119,    10,    62,    11,    72,    90,    67,
      77,    12,    13,    14,    15,    16,    73,    17,    63,    64,
      63,    64,    52,    63,    64,    63,    64,   103,   125,   115,
      93,   106,    55,    18,    19,    -8,   -11,   107,    20,    63,
      64,    59,    12,    13,    14,   122,    63,    64,    42,    43,
     133,   134,   108,   109,   110,   111,   112,   113,    75,    63,
      64,    79,    80,   132,    37,    38,    39,    40,    41,    42,
      43,    38,    39,    40,    41,    42,    43,    81,    82,    86,
      91,    94,    95,    37,    99,   100,   115,   123,   124,   129,
     130,   131,    88,   126,    92,   121,   128,   104
=======
       8,    49,    35,    44,    45,    56,    57,     1,    61,     3,
      48,   119,     7,   -16,    16,    10,    62,    11,    85,    86,
     100,   101,    12,    13,     4,    14,    15,    68,    16,    99,
      17,    18,    67,     5,    63,    64,    63,    64,    63,    64,
     106,    63,    64,    80,    17,    18,     6,   -11,     7,    19,
       7,    10,    72,    11,    33,    89,    46,    91,    12,    13,
      87,    14,    15,    50,    16,    11,    65,    66,    92,    96,
      63,    64,    47,    34,    15,    51,    16,    54,    63,    64,
      17,    18,    -8,   -11,    58,    19,    78,    79,    63,    64,
     105,    77,    17,    18,   109,   110,   111,   112,   113,   114,
      12,    13,    73,    69,   124,   116,   121,    41,    42,   131,
     132,    70,    71,    36,    37,    38,    39,    40,    41,    42,
      75,   130,    37,    38,    39,    40,    41,    42,    63,    64,
      88,    81,    82,    93,    83,    84,    94,    97,    98,    36,
     102,   108,   116,   122,   123,   127,   128,   129,   125,    90,
      95,   120
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
};

static const yytype_uint8 yycheck[] =
{
<<<<<<< HEAD
       6,    21,    11,     5,     6,    25,    26,    18,    28,    21,
      22,    20,    44,     8,     9,     0,    11,    21,    13,     8,
      24,    23,    24,    18,    19,    20,    21,    22,    37,    24,
      13,    25,    26,     5,     6,    13,    40,    41,    21,    22,
      13,    24,    62,    21,    22,    40,    41,    14,    43,     5,
      45,    23,    24,    21,    74,    21,    76,    40,    41,     9,
      69,     8,     5,     6,    11,     5,    13,     5,    77,    14,
      35,    18,    19,    20,    21,    22,    13,    24,    23,    24,
      23,    24,    42,    23,    24,    23,    24,    96,    46,    47,
      14,   100,    43,    40,    41,    42,    43,     5,    45,    23,
      24,    21,    18,    19,    20,   114,    23,    24,    40,    41,
     130,   131,    29,    30,    31,    32,    33,    34,    13,    23,
      24,    63,    64,   129,    35,    36,    37,    38,    39,    40,
      41,    36,    37,    38,    39,    40,    41,    65,    66,    21,
      21,    14,    21,    35,     8,    35,    47,    22,     9,    14,
      48,    48,    75,   117,    84,   107,   119,    98
=======
       6,    20,    11,    21,    22,    24,    25,    18,    27,    44,
      19,    21,     8,     9,    24,    11,     5,    13,     5,     6,
       5,     6,    18,    19,     0,    21,    22,    36,    24,    90,
      40,    41,    14,    13,    23,    24,    23,    24,    23,    24,
     101,    23,    24,    62,    40,    41,    14,    43,     8,    45,
       8,    11,     5,    13,     5,    74,    21,    76,    18,    19,
      69,    21,    22,     9,    24,    13,    25,    26,    77,    14,
      23,    24,    21,    21,    22,    42,    24,    43,    23,    24,
      40,    41,    42,    43,    21,    45,     5,     6,    23,    24,
      99,    35,    40,    41,    29,    30,    31,    32,    33,    34,
      18,    19,    13,    13,    46,    47,   115,    40,    41,   128,
     129,    21,    22,    35,    36,    37,    38,    39,    40,    41,
      13,   127,    36,    37,    38,    39,    40,    41,    23,    24,
      21,    63,    64,    21,    65,    66,    21,    14,    21,    35,
       8,     5,    47,    22,     9,    14,    48,    48,   118,    75,
      86,   108
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    50,    44,     0,    13,    14,     8,    51,    52,
<<<<<<< HEAD
      11,    13,    18,    19,    20,    21,    22,    24,    40,    41,
      45,    51,    53,    54,    56,    65,    69,    70,    71,    74,
      75,    76,    77,    79,     5,    21,    74,    35,    36,    37,
      38,    39,    40,    41,    78,    21,    22,    21,    21,    74,
      53,     9,    42,    58,    63,    43,    64,    53,    53,    21,
      72,    53,     5,    23,    24,    25,    26,    14,    74,    13,
      21,    22,     5,    13,    55,    13,    57,    35,    53,    75,
      75,    76,    76,     5,     6,    74,    21,    53,    70,    53,
      74,    21,    71,    14,    14,    21,    73,     5,     6,     8,
      35,    66,    67,    74,    72,    59,    74,     5,    29,    30,
      31,    32,    33,    34,    68,    47,    60,    61,     5,     6,
      21,    79,    74,    22,     9,    46,    60,    62,    73,    14,
      48,    48,    51,    53,    53
=======
      11,    13,    18,    19,    21,    22,    24,    40,    41,    45,
      51,    53,    54,    56,    65,    69,    70,    72,    74,    75,
      76,    77,    79,     5,    21,    74,    35,    36,    37,    38,
      39,    40,    41,    78,    21,    22,    21,    21,    74,    53,
       9,    42,    58,    63,    43,    64,    53,    53,    21,    71,
      73,    53,     5,    23,    24,    25,    26,    14,    74,    13,
      21,    22,     5,    13,    55,    13,    57,    35,     5,     6,
      53,    75,    75,    76,    76,     5,     6,    74,    21,    53,
      70,    53,    74,    21,    21,    72,    14,    14,    21,    73,
       5,     6,     8,    66,    67,    74,    73,    59,     5,    29,
      30,    31,    32,    33,    34,    68,    47,    60,    61,    21,
      79,    74,    22,     9,    46,    60,    62,    14,    48,    48,
      51,    53,    53
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    52,    51,    53,    53,    53,    54,    55,
      53,    56,    57,    53,    53,    53,    53,    59,    58,    60,
      60,    60,    61,    62,    63,    64,    65,    65,    66,    66,
<<<<<<< HEAD
      67,    68,    68,    68,    68,    68,    68,    69,    70,    70,
=======
      67,    68,    68,    68,    68,    68,    68,    69,    69,    70,
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
      70,    71,    71,    72,    72,    73,    73,    74,    74,    74,
      75,    75,    75,    76,    76,    76,    76,    76,    77,    77,
      77,    78,    78,    78,    78,    79,    79,    79,    79,    79,
      79
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     0,     4,     3,     2,     2,     0,     0,
       4,     0,     0,     4,     2,     2,     0,     0,     8,     1,
       2,     2,     4,     3,     1,     9,     2,     3,     1,     1,
<<<<<<< HEAD
       3,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     5,     4,     5,     4,     5,     4,     3,     3,     1,
=======
       3,     1,     1,     1,     1,     1,     1,     3,     2,     1,
       1,     3,     1,     5,     4,     5,     4,     3,     3,     1,
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
       3,     3,     1,     1,     1,     3,     1,     1,     3,     3,
       5,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
<<<<<<< HEAD
#line 101 "parser.y"
                                                                        { 
=======
#line 68 "parser.y"
                                                                        { //printf("Here\n");
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
										(yyval.A)=(yyvsp[0].A); print_sym_tab(); 
										char* code1 = (char*)malloc(strlen((yyval.A).code)); 
										char* code2 = (char*)malloc(strlen((yyval.A).optimized_code));
										int a = remove_blank((yyval.A).code,code1); 
										a = remove_blank((yyval.A).optimized_code,code2);
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
<<<<<<< HEAD
#line 1601 "y.tab.c"
    break;

  case 3:
#line 119 "parser.y"
                     {scope_ctr++;scope[scope_ind++]=scope_ctr;}
#line 1607 "y.tab.c"
    break;

  case 4:
#line 119 "parser.y"
                                                                                {(yyval.A)=(yyvsp[-1].A); scope[scope_ind++]=0; (yyval.A).optimized_code = (yyvsp[-1].A).optimized_code;}
#line 1613 "y.tab.c"
    break;

  case 5:
#line 122 "parser.y"
                               {(yyval.A).code = code_concatenate(2,(yyvsp[-2].A).code,(yyvsp[0].A).code); 
                               (yyval.A).optimized_code = code_concatenate(2,(yyvsp[-2].A).optimized_code, (yyvsp[0].A).optimized_code);}
#line 1620 "y.tab.c"
    break;

  case 6:
#line 124 "parser.y"
=======
#line 1572 "y.tab.c"
    break;

  case 3:
#line 90 "parser.y"
                     {scope_ctr++;scope[scope_ind++]=scope_ctr;}
#line 1578 "y.tab.c"
    break;

  case 4:
#line 90 "parser.y"
                                                                                {(yyval.A)=(yyvsp[-1].A); scope[scope_ind++]=0; (yyval.A).optimized_code = (yyvsp[-1].A).optimized_code;}
#line 1584 "y.tab.c"
    break;

  case 5:
#line 93 "parser.y"
                               {(yyval.A).code = code_concatenate(2,(yyvsp[-2].A).code,(yyvsp[0].A).code); 
                               (yyval.A).optimized_code = code_concatenate(2,(yyvsp[-2].A).optimized_code, (yyvsp[0].A).optimized_code);}
#line 1591 "y.tab.c"
    break;

  case 6:
#line 95 "parser.y"
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
                              {(yyval.A).code = code_concatenate(2,(yyvsp[-1].A).code,(yyvsp[0].A).code); 
    						
    							(yyval.A).optimized_code = code_concatenate(2,(yyvsp[-1].A).optimized_code, (yyvsp[0].A).optimized_code); 
    							(yyval.A).is_dig=(yyvsp[-1].A).is_dig;
    						
    						  }
<<<<<<< HEAD
#line 1631 "y.tab.c"
    break;

  case 7:
#line 130 "parser.y"
                             {(yyval.A).code = code_concatenate(2,(yyvsp[-1].A).code,(yyvsp[0].A).code); (yyval.A).optimized_code = code_concatenate(2,(yyvsp[-1].A).optimized_code, (yyvsp[0].A).optimized_code);}
#line 1637 "y.tab.c"
    break;

  case 8:
#line 131 "parser.y"
     {char * lab = new_label(); push(lab);}
#line 1643 "y.tab.c"
    break;

  case 9:
#line 131 "parser.y"
                                                        {pop();}
#line 1649 "y.tab.c"
    break;

  case 10:
#line 131 "parser.y"
=======
#line 1602 "y.tab.c"
    break;

  case 7:
#line 101 "parser.y"
                             {(yyval.A).code = code_concatenate(2,(yyvsp[-1].A).code,(yyvsp[0].A).code); (yyval.A).optimized_code = code_concatenate(2,(yyvsp[-1].A).optimized_code, (yyvsp[0].A).optimized_code);}
#line 1608 "y.tab.c"
    break;

  case 8:
#line 102 "parser.y"
     {char * lab = new_label(); push(lab);}
#line 1614 "y.tab.c"
    break;

  case 9:
#line 102 "parser.y"
                                                        {pop();}
#line 1620 "y.tab.c"
    break;

  case 10:
#line 102 "parser.y"
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
                                                                              {(yyval.A).code = code_concatenate(2,(yyvsp[-2].A).code,(yyvsp[0].A).code); 
    																		(yyval.A).optimized_code = code_concatenate(2,(yyvsp[-2].A).optimized_code, (yyvsp[0].A).optimized_code);
    																			}
<<<<<<< HEAD
#line 1657 "y.tab.c"
    break;

  case 11:
#line 134 "parser.y"
      {char * lab = new_label(); push(lab);}
#line 1663 "y.tab.c"
    break;

  case 12:
#line 134 "parser.y"
                                                       {pop();}
#line 1669 "y.tab.c"
    break;

  case 13:
#line 134 "parser.y"
                                                                               {(yyval.A).code = code_concatenate(2,(yyvsp[-2].A).code,(yyvsp[0].A).code); 
    																			(yyval.A).optimized_code = code_concatenate(2,(yyvsp[-2].A).optimized_code, (yyvsp[0].A).optimized_code);
    																			}
#line 1677 "y.tab.c"
    break;

  case 14:
#line 137 "parser.y"
                               {(yyval.A).code = code_concatenate(2,(yyvsp[-1].A).code,(yyvsp[0].A).code); (yyval.A).optimized_code = code_concatenate(2,(yyvsp[-1].A).optimized_code, (yyvsp[0].A).optimized_code);}
#line 1683 "y.tab.c"
    break;

  case 15:
#line 138 "parser.y"
                 {(yyval.A).code = code_concatenate(2,(yyvsp[-1].A).code,(yyvsp[0].A).code); (yyval.A).optimized_code = code_concatenate(2,(yyvsp[-1].A).optimized_code, (yyvsp[0].A).optimized_code);}
#line 1689 "y.tab.c"
    break;

  case 16:
#line 139 "parser.y"
                                        {(yyval.A).code = " "; (yyval.A).optimized_code = (yyval.A).code;}
#line 1695 "y.tab.c"
    break;

  case 17:
#line 144 "parser.y"
                                             {scope_ctr++;scope[scope_ind++]=scope_ctr;}
#line 1701 "y.tab.c"
    break;

  case 18:
#line 145 "parser.y"
                                                                                        {	
=======
#line 1628 "y.tab.c"
    break;

  case 11:
#line 105 "parser.y"
      {char * lab = new_label(); push(lab);}
#line 1634 "y.tab.c"
    break;

  case 12:
#line 105 "parser.y"
                                                       {pop();}
#line 1640 "y.tab.c"
    break;

  case 13:
#line 105 "parser.y"
                                                                               {(yyval.A).code = code_concatenate(2,(yyvsp[-2].A).code,(yyvsp[0].A).code); 
    																			(yyval.A).optimized_code = code_concatenate(2,(yyvsp[-2].A).optimized_code, (yyvsp[0].A).optimized_code);
    																			}
#line 1648 "y.tab.c"
    break;

  case 14:
#line 108 "parser.y"
                               {(yyval.A).code = code_concatenate(2,(yyvsp[-1].A).code,(yyvsp[0].A).code); (yyval.A).optimized_code = code_concatenate(2,(yyvsp[-1].A).optimized_code, (yyvsp[0].A).optimized_code);}
#line 1654 "y.tab.c"
    break;

  case 15:
#line 109 "parser.y"
                 {(yyval.A).code = code_concatenate(2,(yyvsp[-1].A).code,(yyvsp[0].A).code); (yyval.A).optimized_code = code_concatenate(2,(yyvsp[-1].A).optimized_code, (yyvsp[0].A).optimized_code);}
#line 1660 "y.tab.c"
    break;

  case 16:
#line 110 "parser.y"
                                        {(yyval.A).code = " "; (yyval.A).optimized_code = (yyval.A).code;}
#line 1666 "y.tab.c"
    break;

  case 17:
#line 115 "parser.y"
                                             {scope_ctr++;scope[scope_ind++]=scope_ctr;}
#line 1672 "y.tab.c"
    break;

  case 18:
#line 116 "parser.y"
                                                                                        {
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
												scope[scope_ind++]=0;
												if(!look_up_sym_tab((yyvsp[-5].text))){printf("Undeclared variable %s\n", (yyvsp[-5].text)); YYERROR;}
												//printf("%s\n",stack[top]);
												(yyval.A).code = code_concatenate(2, (yyvsp[-1].A).code, code_gen(2,stack[top],"Label"));
												(yyval.A).optimized_code = code_concatenate(2, (yyvsp[-1].A).optimized_code, code_gen_oc(2,stack[top],"Label"));
											}
<<<<<<< HEAD
#line 1713 "y.tab.c"
    break;

  case 19:
#line 155 "parser.y"
                {(yyval.A)=(yyvsp[0].A);}
#line 1719 "y.tab.c"
    break;

  case 20:
#line 156 "parser.y"
                {(yyval.A).code = code_concatenate(2,(yyvsp[-1].A).code, (yyvsp[0].A).code); (yyval.A).optimized_code = code_concatenate(2,(yyvsp[-1].A).optimized_code, (yyvsp[0].A).optimized_code);}
#line 1725 "y.tab.c"
    break;

  case 21:
#line 157 "parser.y"
                {(yyval.A).code = code_concatenate(2,(yyvsp[-1].A).code, (yyvsp[0].A).code); (yyval.A).optimized_code = code_concatenate(2,(yyvsp[-1].A).optimized_code, (yyvsp[0].A).optimized_code);}
#line 1731 "y.tab.c"
    break;

  case 22:
#line 160 "parser.y"
                                     {
								
								char* lab1 = new_label();
								char* lab2 = new_label(); 
							
								(yyval.A).code = code_concatenate(6, " goto ",lab2, code_gen(2,lab1,"Label"),code_gen(2,"goto", lab1),code_gen(4,"if ",(yyvsp[(-2) - (4)].text)," == ",(yyvsp[-2].text)),(yyvsp[0].A).code);
								(yyval.A).optimized_code =code_concatenate(6,code_gen_oc(2, lab2,"Label"),code_gen_oc(2, lab2,"goto"), " goto ",lab2,(yyvsp[0].A).optimized_code,code_gen_oc(4,"if ",(yyvsp[(-2) - (4)].text)," == ",(yyvsp[-2].text)), code_gen_oc(2,lab1,"Label"));
								
								 code_gen(2,"goto ",stack[top]);
								}
#line 1746 "y.tab.c"
    break;

  case 23:
#line 173 "parser.y"
                                   {char* lab = new_label(); (yyval.A).code = code_concatenate(1,(yyvsp[0].A).code); (yyval.A).optimized_code = (yyvsp[0].A).optimized_code;}
#line 1752 "y.tab.c"
    break;

  case 24:
#line 180 "parser.y"
                   {(yyval.A)=(yyvsp[0].A);}
#line 1758 "y.tab.c"
    break;

  case 25:
#line 184 "parser.y"
                                                                {
								  char* begin_for = new_label(); 	
								  //printf("%s\n",begin_for);				 						
								  (yyvsp[-4].A).true = new_label(); 
						          (yyvsp[0].A).next = stack[top];
								  (yyvsp[-4].A).false = (yyvsp[0].A).next;   
=======
#line 1683 "y.tab.c"
    break;

  case 19:
#line 125 "parser.y"
                {(yyval.A)=(yyvsp[0].A);}
#line 1689 "y.tab.c"
    break;

  case 20:
#line 126 "parser.y"
                {(yyval.A).code = code_concatenate(2,(yyvsp[-1].A).code, (yyvsp[0].A).code); (yyval.A).optimized_code = code_concatenate(2,(yyvsp[-1].A).optimized_code, (yyvsp[0].A).optimized_code);}
#line 1695 "y.tab.c"
    break;

  case 21:
#line 127 "parser.y"
                {(yyval.A).code = code_concatenate(2,(yyvsp[-1].A).code, (yyvsp[0].A).code); (yyval.A).optimized_code = code_concatenate(2,(yyvsp[-1].A).optimized_code, (yyvsp[0].A).optimized_code);}
#line 1701 "y.tab.c"
    break;

  case 22:
#line 130 "parser.y"
                                     {char* lab1 = new_label();
								char* lab2 = new_label(); 
								(yyval.A).code = code_concatenate(6,code_gen(4,"if ",(yyvsp[(-2) - (4)].text)," == ",(yyvsp[-2].text)," goto ", lab1), " goto ",lab2, code_gen(2,lab1,": "),(yyvsp[0].A).code, code_gen(2,lab2,": "));
								(yyval.A).optimized_code =code_concatenate(6,code_gen(6,"if ",(yyvsp[(-2) - (4)].text)," == ",(yyvsp[-2].text)," goto ", lab1), " goto ",lab2, code_gen(2, lab1,": "),(yyvsp[0].A).optimized_code, code_gen(2,lab2,": "));
								}
#line 1711 "y.tab.c"
    break;

  case 23:
#line 138 "parser.y"
                                   {char* lab = new_label(); (yyval.A).code = code_concatenate(1,(yyvsp[0].A).code); (yyval.A).optimized_code = (yyvsp[0].A).optimized_code;}
#line 1717 "y.tab.c"
    break;

  case 24:
#line 145 "parser.y"
                   {(yyval.A)=(yyvsp[0].A);}
#line 1723 "y.tab.c"
    break;

  case 25:
#line 148 "parser.y"
                                                                                   {char* begin = new_label(); 						 						
								 (yyvsp[-4].A).true = new_label(); 
						                 (yyvsp[0].A).next = stack[top];
								 (yyvsp[-4].A).false = (yyvsp[0].A).next;   
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
								 strcpy(break_lab,(yyvsp[0].A).next);
								 
							         (yyval.A).code = code_concatenate(8,code_gen(6,"if ", (yyvsp[-4].A).addr, (yyvsp[-4].A).true,"","",""),code_gen(6,"goto ", (yyvsp[-4].A).true,"","","",""), 
									   code_gen(6,"goto ", (yyvsp[-4].A).false,"","","","",""), code_gen(6,(yyvsp[-4].A).true,"Label","","","",""),(yyvsp[0].A).code,code_gen(6,"if ", (yyvsp[-4].A).addr, (yyvsp[-4].A).true,"","",""),code_gen(6,"goto ", (yyvsp[-4].A).true,"","","",""),code_gen(6,(yyvsp[0].A).next,"Label","","","",""));
									
								 if(num_iter)
								 {
								   (yyval.A).optimized_code = " ";
								   int i;
						                   for(i=0;i<number_of_iterations;i++)
								   {				
			                                              (yyval.A).optimized_code = code_concatenate(2,(yyval.A).optimized_code,(yyvsp[0].A).optimized_code);
								   }
			                                         }
								else
							        {
								    (yyval.A).optimized_code = (yyval.A).code;
<<<<<<< HEAD
							        }
									
									code_gen(2,"goto",end_for);
									code_gen(2,"Label",end_for_begin);
									
									}
#line 1792 "y.tab.c"
    break;

  case 26:
#line 215 "parser.y"
                                                                { (yyval.A).optimized_code = (yyval.A).code;}
#line 1798 "y.tab.c"
    break;

  case 27:
#line 216 "parser.y"
                                                               {(yyval.A).code = code_gen(3,"return ",(yyvsp[-1].A).addr,"\ngoto end\n");  (yyval.A).optimized_code = (yyval.A).code; return_flag=1;}
#line 1804 "y.tab.c"
    break;

  case 28:
#line 219 "parser.y"
                                                               {(yyval.A)=(yyvsp[0].A);}
#line 1810 "y.tab.c"
    break;

  case 29:
#line 220 "parser.y"
                                                                {(yyval.A)=(yyvsp[0].A);}
#line 1816 "y.tab.c"
    break;

  case 30:
#line 224 "parser.y"
                      {(yyval.A).addr = new_temp();
					(yyval.A).code = code_gen(3,(yyvsp[-2].A).code,(yyvsp[0].A).code,code_gen(5,(yyval.A).addr," = ",(yyvsp[-2].A).addr,(yyvsp[-1].text),(yyvsp[0].A).addr)); 
=======
							        }}
#line 1748 "y.tab.c"
    break;

  case 26:
#line 170 "parser.y"
                                                               {(yyval.A).code = code_gen(2,"goto ",stack[top]); (yyval.A).optimized_code = (yyval.A).code;}
#line 1754 "y.tab.c"
    break;

  case 27:
#line 171 "parser.y"
                                                               {(yyval.A).code = code_gen(3,"return ",(yyvsp[-1].A).addr,"\ngoto end\n");  (yyval.A).optimized_code = (yyval.A).code; return_flag=1;}
#line 1760 "y.tab.c"
    break;

  case 28:
#line 174 "parser.y"
                                                               {(yyval.A)=(yyvsp[0].A);}
#line 1766 "y.tab.c"
    break;

  case 29:
#line 175 "parser.y"
                                                                {(yyval.A)=(yyvsp[0].A);}
#line 1772 "y.tab.c"
    break;

  case 30:
#line 179 "parser.y"
                                        {(yyval.A).code = code_gen(3,(yyvsp[-2].A).code,(yyvsp[0].A).code,code_gen(3,(yyvsp[-2].A).addr,(yyvsp[-1].text),(yyvsp[0].A).addr)); 
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
					if(strcmp((yyvsp[-1].text),"<")==0)
					{
						num_iter[iter_top++]=atoi((yyvsp[0].A).addr);
						
						number_of_iterations = num_iter[--iter_top]-iter_init[iter_top];
						(yyval.A).temp = new_temp();
						code_gen(3,"not",(yyval.A).addr,(yyval.A).temp);
						char * lab = new_label();
						code_gen(3,"if",(yyval.A).temp,lab);
						char *end = new_label();
						strcpy(end_for_begin,lab);
						strcpy(cont,end);	
						code_gen(2,"goto",end);
					}
					
					if(strcmp((yyvsp[-1].text),"<=")==0)
					{
						num_iter[iter_top++]=atoi((yyvsp[0].A).addr);
						//printf("TOP : %d\n",iter_top);
						number_of_iterations = num_iter[--iter_top]-iter_init[iter_top]+1;
					}
					if(strcmp((yyvsp[-1].text),">")==0)
					{
						num_iter[iter_top++]=atoi((yyvsp[0].A).addr);
						//printf("TOP : %d\n",iter_top);
						number_of_iterations = iter_init[--iter_top] - num_iter[iter_top];
					}
					if(strcmp((yyvsp[-1].text),">=")==0)
					{
						num_iter[iter_top++]=atoi((yyvsp[0].A).addr);
						//printf("TOP : %d\n",iter_top);
						number_of_iterations = iter_init[--iter_top] - num_iter[iter_top]+1;
					}
					
					}
<<<<<<< HEAD
#line 1858 "y.tab.c"
    break;

  case 31:
#line 264 "parser.y"
                                        {(yyval.text)=(yyvsp[0].text);}
#line 1864 "y.tab.c"
    break;

  case 32:
#line 265 "parser.y"
                                        {(yyval.text)=(yyvsp[0].text);}
#line 1870 "y.tab.c"
    break;

  case 33:
#line 266 "parser.y"
                                         {(yyval.text)=(yyvsp[0].text);}
#line 1876 "y.tab.c"
    break;

  case 34:
#line 267 "parser.y"
                                         {(yyval.text)=(yyvsp[0].text);}
#line 1882 "y.tab.c"
    break;

  case 35:
#line 268 "parser.y"
                                         {(yyval.text)=(yyvsp[0].text);}
#line 1888 "y.tab.c"
    break;

  case 36:
#line 269 "parser.y"
                                         {(yyval.text)=(yyvsp[0].text);}
#line 1894 "y.tab.c"
    break;

  case 37:
#line 272 "parser.y"
                                         {(yyval.A).code = code_gen(1,(yyvsp[0].A).code); (yyval.A).optimized_code = (yyvsp[0].A).optimized_code; }
#line 1900 "y.tab.c"
    break;

  case 38:
#line 277 "parser.y"
                                        { (yyval.var_type)=(yyvsp[0].var_type); strcpy(typ,(yyvsp[0].var_type));}
#line 1906 "y.tab.c"
    break;

  case 39:
#line 278 "parser.y"
                                         {(yyval.var_type)=(yyvsp[0].var_type);strcpy(typ,(yyvsp[0].var_type));}
#line 1912 "y.tab.c"
    break;

  case 40:
#line 279 "parser.y"
                                                {(yyval.var_type)=(yyvsp[0].var_type);strcpy(typ,(yyvsp[0].var_type));}
#line 1918 "y.tab.c"
    break;

  case 41:
#line 283 "parser.y"
                                                      {
										(yyval.A).addr = gen_addr((yyvsp[-4].text));  
=======
#line 1807 "y.tab.c"
    break;

  case 31:
#line 212 "parser.y"
                                        {(yyval.text)=(yyvsp[0].text);}
#line 1813 "y.tab.c"
    break;

  case 32:
#line 213 "parser.y"
                                        {(yyval.text)=(yyvsp[0].text);}
#line 1819 "y.tab.c"
    break;

  case 33:
#line 214 "parser.y"
                                         {(yyval.text)=(yyvsp[0].text);}
#line 1825 "y.tab.c"
    break;

  case 34:
#line 215 "parser.y"
                                         {(yyval.text)=(yyvsp[0].text);}
#line 1831 "y.tab.c"
    break;

  case 35:
#line 216 "parser.y"
                                         {(yyval.text)=(yyvsp[0].text);}
#line 1837 "y.tab.c"
    break;

  case 36:
#line 217 "parser.y"
                                         {(yyval.text)=(yyvsp[0].text);}
#line 1843 "y.tab.c"
    break;

  case 37:
#line 220 "parser.y"
                                         {(yyval.A).code = code_gen(3,(yyvsp[-2].var_type)," ",(yyvsp[-1].A).code); (yyval.A).optimized_code = (yyval.A).code;}
#line 1849 "y.tab.c"
    break;

  case 38:
#line 221 "parser.y"
                                         {(yyval.A).code = code_gen(1,(yyvsp[0].A).code); (yyval.A).optimized_code = (yyvsp[0].A).optimized_code; }
#line 1855 "y.tab.c"
    break;

  case 39:
#line 226 "parser.y"
                                        { (yyval.var_type)=(yyvsp[0].var_type); strcpy(typ,(yyvsp[0].var_type));}
#line 1861 "y.tab.c"
    break;

  case 40:
#line 227 "parser.y"
                                         {(yyval.var_type)=(yyvsp[0].var_type);strcpy(typ,(yyvsp[0].var_type));}
#line 1867 "y.tab.c"
    break;

  case 41:
#line 230 "parser.y"
                                                {if(look_up_sym_tab_dec((yyvsp[0].text),scope[scope_ind-1])){ yyerror("Redeclaration\n");  YYERROR; } 
								if(scope[scope_ind-1]>0){update_sym_tab((yyvsp[-3].var_type),(yyvsp[0].text),yylineno,scope[scope_ind-1]);}else{int scop=get_scope();update_sym_tab((yyvsp[-3].var_type),(yyvsp[0].text),yylineno,scop);} 

								(yyval.A).code = code_gen(3,(yyvsp[-2].A).code,", ",(yyvsp[0].text)); (yyval.A).optimized_code = code_gen(3,(yyvsp[-2].A).optimized_code,", ",(yyvsp[0].text));
								}
#line 1877 "y.tab.c"
    break;

  case 42:
#line 235 "parser.y"
                                                  {(yyval.A).addr=gen_addr((yyvsp[0].text)); 
	   					if(look_up_sym_tab_dec((yyvsp[0].text),scope[scope_ind-1])){ yyerror("Redeclaration\n");  YYERROR; }
	   					if(scope[scope_ind-1]>0){update_sym_tab((yyvsp[-1].var_type),(yyvsp[0].text),yylineno,scope[scope_ind-1]);}else{int scop=get_scope();
                                                update_sym_tab ((yyvsp[-1].var_type),(yyvsp[0].text),yylineno,scop);} 
	   					(yyval.A).code = (yyvsp[0].text); (yyval.A).optimized_code = (yyvsp[0].text);
	   					//printf("%s T_ID\n",$1);
	   					}
#line 1889 "y.tab.c"
    break;

  case 43:
#line 245 "parser.y"
                                                                                     {(yyval.A).addr = gen_addr((yyvsp[-4].text));  
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
			   							(yyval.A).code = code_concatenate(3,(yyvsp[-2].A).code,code_gen(3,(yyval.A).addr," = ",(yyvsp[-2].A).addr),(yyvsp[0].A).code);
			   							char buf[10];
			   							int scop=get_scope();
			   							int ret=is_int((yyvsp[-4].text),scop);
			   							if(ret)
			   							{
			   								if(is_digit((yyvsp[-2].A).addr))
			   								{
			   									float val=atof((yyvsp[-2].A).addr);
			   									int val1=(int)val;
			   									char buf1[10];
			   									gcvt(val1, 6, buf1);
			   									(yyval.A).code = code_concatenate(3,(yyvsp[-2].A).code,code_gen(3,(yyval.A).addr," = ",buf1),(yyvsp[0].A).code);
			   								}
			   								else
			   									(yyval.A).code = code_concatenate(3,(yyvsp[-2].A).code,code_gen(3,(yyval.A).addr," = ",(yyvsp[-2].A).addr),(yyvsp[0].A).code);
			   							} 
			   							else
			   								(yyval.A).code = code_concatenate(3,(yyvsp[-2].A).code,code_gen(3,(yyval.A).addr," = ",(yyvsp[-2].A).addr),(yyvsp[0].A).code);
			   							
			   							
			   							if(ret)
			   							{
			   								int val=(int)(yyvsp[-2].A).val;
			   								float f = val;
			   								gcvt(val, 6, buf);
			   							}
			   							else
											gcvt((yyvsp[-2].A).val, 6, buf);
										if((yyvsp[-2].A).is_dig)
			   							{
											   (yyval.A).optimized_code = code_concatenate(2,code_gen_oc(3,(yyval.A).addr," = ",buf),(yyvsp[0].A).optimized_code);
										}
			   							else
			   							{		
											   (yyval.A).optimized_code = code_concatenate(3,(yyvsp[-2].A).optimized_code,code_gen_oc(3,(yyval.A).addr," = ",(yyvsp[-2].A).addr),(yyvsp[0].A).optimized_code);
										}
			   							if(!look_up_sym_tab((yyvsp[-4].text))){printf("Undeclared variable %s\n", (yyvsp[-4].text)); YYERROR;}flag1=1;
			   							}
<<<<<<< HEAD
#line 1964 "y.tab.c"
    break;

  case 42:
#line 324 "parser.y"
                                                 {
			   							
=======
#line 1930 "y.tab.c"
    break;

  case 44:
#line 281 "parser.y"
                                                        {
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
		  								(yyval.A).addr = gen_addr((yyvsp[-3].text)); 
		  								int scop=get_scope(); 
		  								int ret=is_int((yyvsp[-3].text),scop);
		  								if(ret)
			   							{	
			   								if(is_digit((yyvsp[-1].A).addr))
			   								{
			   									float val=atof((yyvsp[-1].A).addr);
			   									int val1=(int)val;
			   									char buf1[10];
			   									gcvt(val1, 6, buf1);
												
			   									(yyval.A).code = code_concatenate(2,(yyvsp[-1].A).code,code_gen(3,buf1," = ",(yyval.A).addr));
			   								}
			   								else
			   									(yyval.A).code = code_concatenate(2,(yyvsp[-1].A).code,code_gen(3,(yyvsp[-1].A).addr," = ",(yyval.A).addr));
			   							} 
			   							else
										   {
											 
			   								(yyval.A).code = code_concatenate(2,(yyvsp[-1].A).code,code_gen(3,(yyval.A).addr," = ",(yyvsp[-1].A).addr));
										   }
			   							char buf[10];
			   							
										
			   							if(ret)
			   							{
			   								int val=(int)(yyvsp[-1].A).val;
			   								float f = val;
			   								gcvt(val, 6, buf);
			   							}
			   							else
											gcvt((yyvsp[-1].A).val, 6, buf);
										
										if((yyvsp[-1].A).is_dig)
										{	

											strcpy(assign,buf);
											strcpy(symbol_table_value,buf);

			   								(yyval.A).optimized_code = code_concatenate(1,code_gen_oc(7,(yyval.A).addr," = ",assign,"","","","")); 
			   							
			   							}
			   							else
			   							{
											
			   								(yyval.A).optimized_code = code_concatenate(2,(yyvsp[-1].A).optimized_code,code_gen_oc(3,(yyval.A).addr," = ",(yyvsp[-1].A).addr)); 
			   								
			   							}
			   							
			   							if(!look_up_sym_tab((yyvsp[-3].text))){printf("Undeclared variable %s\n", (yyvsp[-3].text)); YYERROR;}
										else
										{
										if(scope[scope_ind-1]>0){update_sym_tab(typ,(yyvsp[-3].text),yylineno,scope[scope_ind-1],symbol_table_value);}else{int scop=get_scope();update_sym_tab(typ,(yyvsp[-3].text),yylineno,scop,symbol_table_value);}}
			   							flag1=1;												
			   							}
<<<<<<< HEAD
#line 2027 "y.tab.c"
    break;

  case 43:
#line 384 "parser.y"
=======
#line 1981 "y.tab.c"
    break;

  case 45:
#line 329 "parser.y"
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
                                                     {(yyval.A).addr = gen_addr((yyvsp[-4].text));  
									
										if(strcmp(typ,"int")==0)
		   								{
		   									if(is_digit((yyvsp[-2].A).addr))
		   									{
		   										float val=atof((yyvsp[-2].A).addr);
		   										int val1=(int)val;
		   										char buf1[10];
		   										gcvt(val1, 6, buf1);
		   										(yyval.A).code = code_concatenate(3,(yyvsp[-2].A).code,code_gen(4," ",(yyval.A).addr," = ",buf1),(yyvsp[0].A).code); 
		   									}
		   									else
		   										(yyval.A).code = code_concatenate(3,(yyvsp[-2].A).code,code_gen(4," ",(yyval.A).addr," = ",(yyvsp[-2].A).addr),(yyvsp[0].A).code); 

		   								}
		   								else
			   								(yyval.A).code = code_concatenate(3,(yyvsp[-2].A).code,code_gen(4," ",(yyval.A).addr," = ",(yyvsp[-2].A).addr),(yyvsp[0].A).code); 
			   							
			   							char buf[10];
			   							if(strcmp(typ,"int")==0)
			   							{
			   								int val=(int)(yyvsp[-2].A).val;
			   								float f = val;
			   								gcvt(val, 6, buf);
			   							}
										else
											gcvt((yyvsp[-2].A).val, 6, buf);
										if((yyvsp[-2].A).is_dig)
			   								(yyval.A).optimized_code = code_concatenate(2,code_gen_oc(3,(yyval.A).addr," = ",buf),(yyvsp[0].A).optimized_code);
			   							else
<<<<<<< HEAD
			   								(yyval.A).optimized_code = code_concatenate(3,(yyvsp[-2].A).optimized_code,code_gen_oc(3,(yyval.A).addr," = ",(yyvsp[-2].A).addr),(yyvsp[0].A).optimized_code);
=======
			   								(yyval.A).optimized_code = code_concatenate(3,(yyvsp[-2].A).optimized_code,code_gen(3,(yyval.A).addr," = ",(yyvsp[-2].A).addr),(yyvsp[0].A).optimized_code);
			   							//$$.optimized_code = code_concatenate(2,code_gen(5,typ," ",$$.addr," = ",buf),$5.optimized_code);
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
			   							if(look_up_sym_tab_dec((yyvsp[-4].text),scope[scope_ind-1])){ yyerror("Redeclaration\n");  YYERROR;flag1=1; }

if(scope[scope_ind-1]>0){update_sym_tab(typ,(yyvsp[-4].text),yylineno,scope[scope_ind-1]);}else{int scop=get_scope();update_sym_tab(typ,(yyvsp[-4].text),yylineno,scop);}
			   							}
<<<<<<< HEAD
#line 2068 "y.tab.c"
    break;

  case 44:
#line 420 "parser.y"
                                                  {  (yyval.A).addr = gen_addr((yyvsp[-3].text));  
		   								char symbol_buffer[10];
=======
#line 2023 "y.tab.c"
    break;

  case 46:
#line 366 "parser.y"
                                                  {  (yyval.A).addr = gen_addr((yyvsp[-3].text));  
		   								
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
		   								if(strcmp(typ,"int")==0)
		   								{
		   									if(is_digit((yyvsp[-1].A).addr))
		   									{
		   										float val=atof((yyvsp[-1].A).addr);
		   										int val1=(int)val;
		   										char buf1[10];
		   										gcvt(val1, 6, buf1);
												strcpy(symbol_buffer,buf1);
												   //printf("%s\n",buf1);
		   										(yyval.A).code = code_concatenate(2,(yyvsp[-1].A).code,code_gen(4," ",(yyval.A).addr," = ",buf1)); 
		   									}
		   									else
		   										(yyval.A).code = code_concatenate(2,(yyvsp[-1].A).code,code_gen(4," ",(yyval.A).addr," = ",(yyvsp[-1].A).addr)); 

		   								}
		   								else
			   								(yyval.A).code = code_concatenate(2,(yyvsp[-1].A).code,code_gen(4," ",(yyval.A).addr," = ",(yyvsp[-1].A).addr)); 
			   							char buf[10];
			   							if(strcmp(typ,"int")==0)
			   							{
			   								int val=(int)(yyvsp[-1].A).val;
			   								float f = val;
			   								gcvt(val, 6, buf);
											strcpy(symbol_buffer,buf);
			   							}
										else
										{gcvt((yyvsp[-1].A).val, 6, buf);
										strcpy(symbol_buffer,buf);
										}
										if((yyvsp[-1].A).is_dig)
										{
											strcpy(buffer,buf);
											strcpy(symbol_buffer,buf);
			   								(yyval.A).optimized_code = code_concatenate(1,code_gen_oc(4,(yyval.A).addr," = ",buf," ")); 
			   							}
			   							else
			   							{
			   								(yyval.A).optimized_code = code_concatenate(2,(yyvsp[-1].A).optimized_code,code_gen_oc(3,(yyval.A).addr," = ",(yyvsp[-1].A).addr)); 
			   							}
										//printf("%s\n",symbol_buffer);
										strcpy(symbol_table_value,symbol_buffer);
			   							 if(look_up_sym_tab_dec((yyvsp[-3].text),scope[scope_ind-1])){ yyerror("Redeclaration\n");  YYERROR; } if(scope[scope_ind-1]>0){update_sym_tab(typ,(yyvsp[-3].text),yylineno,scope[scope_ind-1],symbol_table_value);}else{ strcpy(symbol_table_value,""); int scop=get_scope();update_sym_tab(typ,(yyvsp[-3].text),yylineno,scop,symbol_table_value);} 
			   							iter_init[iter_top]=atoi((yyvsp[-1].A).addr);
			   						 }
#line 2120 "y.tab.c"
    break;

  case 45:
#line 471 "parser.y"
                                                            {
										code_gen(2,lab,"Labellsada");
										(yyval.A).addr = gen_addr((yyvsp[-4].text));  
										
										if(strcmp(typ,"int")==0)
		   								{
		   									if(is_digit((yyvsp[-2].A).addr))
		   									{
		   										float val=atof((yyvsp[-2].A).addr);
		   										int val1 = (int)val;
		   										char buf1[10];
		   										gcvt(val1, 6, buf1);
		   										(yyval.A).code = code_concatenate(3,(yyvsp[-2].A).code,code_gen(4," ",(yyval.A).addr," = ",buf1),(yyvsp[0].A).code); 
												char* begin = new_label();
												code_gen(2,begin,"LABEL");
												strcpy(end_for,begin);
											
		   									}
		   									else
		   										(yyval.A).code = code_concatenate(3,(yyvsp[-2].A).code,code_gen(4," ",(yyval.A).addr," = ",(yyvsp[-2].A).addr),(yyvsp[0].A).code); 

		   								}
		   								else
			   								(yyval.A).code = code_concatenate(3,(yyvsp[-2].A).code,code_gen(4," ",(yyval.A).addr," = ",(yyvsp[-2].A).addr),(yyvsp[0].A).code); 
			   							
			   							char buf[10];
			   							if(strcmp(typ,"int")==0)
			   							{
			   								int val=(int)(yyvsp[-2].A).val;
			   								float f = val;
			   								gcvt(val, 6, buf);
			   							}
										else
											gcvt((yyvsp[-2].A).val, 6, buf);
										if((yyvsp[-2].A).is_dig)
			   								(yyval.A).optimized_code = code_concatenate(2,code_gen_oc(3,(yyval.A).addr," = ",buf),(yyvsp[0].A).optimized_code);
			   							else
			   								(yyval.A).optimized_code = code_concatenate(3,(yyvsp[-2].A).optimized_code,code_gen_oc(3,(yyval.A).addr," = ",(yyvsp[-2].A).addr),(yyvsp[0].A).optimized_code);
			   							if(look_up_sym_tab_dec((yyvsp[-4].text),scope[scope_ind-1])){ yyerror("Redeclaration\n");  YYERROR;flag1=1; }

if(scope[scope_ind-1]>0){update_sym_tab(typ,(yyvsp[-4].text),yylineno,scope[scope_ind-1],symbol_table_value);}else{int scop=get_scope();update_sym_tab(typ,(yyvsp[-4].text),yylineno,scop,	symbol_table_value);}
			   							}
#line 2167 "y.tab.c"
    break;

  case 46:
#line 513 "parser.y"
                                                  {  
			   														   
										strcpy(symbol_table_value,"NA");
									   (yyval.A).addr = gen_addr((yyvsp[-3].text));  
		   								
		   								if(strcmp(typ,"int")==0)
		   								{
		   									if(is_digit((yyvsp[-1].A).addr))
		   									{	
		   										float val=atof((yyvsp[-1].A).addr);
		   										int val1=(int)val;
		   										char buf1[10];
		   										gcvt(val1, 6, buf1);
		   										(yyval.A).code = code_concatenate(2,(yyvsp[-1].A).code,code_gen(4," ",(yyval.A).addr," = ",buf1));
												char* begin = new_label();
												code_gen(2,"Label",begin);
												
								  				strcpy(end_for,begin);	
		   									}
		   									else
		   										(yyval.A).code = code_concatenate(2,(yyvsp[-1].A).code,code_gen(4," ",(yyval.A).addr," = ",(yyvsp[-1].A).addr)); 

		   								}
		   								else
			   								(yyval.A).code = code_concatenate(2,(yyvsp[-1].A).code,code_gen(4," ",(yyval.A).addr," = ",(yyvsp[-1].A).addr)); 
			   							char buf[10];
			   							if(strcmp(typ,"int")==0)
			   							{
			   								int val=(int)(yyvsp[-1].A).val;
			   								float f = val;
			   								gcvt(val, 6, buf);
			   							}
										else
											gcvt((yyvsp[-1].A).val, 6, buf);
										if((yyvsp[-1].A).is_dig)
										{
											
			   								(yyval.A).optimized_code = code_concatenate(1,code_gen_oc(3,(yyval.A).addr," = ",buf)); 
			   							}
			   							else
			   							{
						
			   								(yyval.A).optimized_code = code_concatenate(2,(yyvsp[-1].A).optimized_code,code_gen_oc(4,(yyval.A).addr," = ",(yyvsp[-1].A).addr,"")); 
			   							}
			   							 if(look_up_sym_tab_dec((yyvsp[-3].text),scope[scope_ind-1])){ yyerror("Redeclaration\n");  YYERROR; } if(scope[scope_ind-1]>0){update_sym_tab(typ,(yyvsp[-3].text),yylineno,scope[scope_ind-1],symbol_table_value);}else{int scop=get_scope();update_sym_tab(typ,(yyvsp[-3].text),yylineno,scop,symbol_table_value);} 
			   							iter_init[iter_top]=atoi((yyvsp[-1].A).addr);
			   						 }
<<<<<<< HEAD
#line 2219 "y.tab.c"
    break;

  case 47:
#line 562 "parser.y"
=======
#line 2071 "y.tab.c"
    break;

  case 47:
#line 411 "parser.y"
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
                {(yyval.A).addr = new_temp(); (yyval.A).code = code_concatenate(3,(yyvsp[-2].A).code,(yyvsp[0].A).code,code_gen(5,(yyval.A).addr," = ",(yyvsp[-2].A).addr," + ",(yyvsp[0].A).addr)); 
				if(((yyvsp[-2].A).is_dig) && ((yyvsp[0].A).is_dig))
				{
					(yyval.A).is_dig=1;
					float temp = (yyvsp[-2].A).val+(yyvsp[0].A).val;
					char buf[10];
					gcvt(temp, 6, buf);
					(yyval.A).optimized_code = code_concatenate(3,(yyvsp[-2].A).optimized_code,(yyvsp[0].A).optimized_code,code_gen_oc(3,(yyval.A).addr," = ",buf));
					(yyval.A).val = temp;
					flag1 &= 1;
				}
				else
				{
					(yyval.A).is_dig=0;
					(yyval.A).optimized_code = (yyval.A).code;
					flag1=0;
				}
				}
<<<<<<< HEAD
#line 2242 "y.tab.c"
    break;

  case 48:
#line 580 "parser.y"
=======
#line 2101 "y.tab.c"
    break;

  case 48:
#line 436 "parser.y"
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
                                 {(yyval.A).addr = new_temp(); (yyval.A).code = code_concatenate(3,(yyvsp[-2].A).code,(yyvsp[0].A).code,code_gen(5,(yyval.A).addr," = ",(yyvsp[-2].A).addr," - ",(yyvsp[0].A).addr));
 				if(((yyvsp[-2].A).is_dig) && ((yyvsp[0].A).is_dig))
				{
					(yyval.A).is_dig=1;
					float temp = (yyvsp[-2].A).val-(yyvsp[0].A).val;
					char buf[10];
					gcvt(temp, 6, buf);
					(yyval.A).optimized_code = code_concatenate(3,(yyvsp[-2].A).optimized_code,(yyvsp[0].A).optimized_code,code_gen_oc(3,(yyval.A).addr," = ",buf));
					(yyval.A).val = temp;
					flag1 &=1;
				}
				else
				{
					(yyval.A).is_dig=0;
					(yyval.A).optimized_code = (yyval.A).code;
					flag1=0;
				}
 				}
<<<<<<< HEAD
#line 2265 "y.tab.c"
    break;

  case 49:
#line 598 "parser.y"
                               {(yyval.A)=(yyvsp[0].A);}
#line 2271 "y.tab.c"
    break;

  case 50:
#line 601 "parser.y"
=======
#line 2127 "y.tab.c"
    break;

  case 49:
#line 457 "parser.y"
                               {(yyval.A)=(yyvsp[0].A);}
#line 2133 "y.tab.c"
    break;

  case 50:
#line 460 "parser.y"
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
                {(yyval.A).addr = new_temp(); (yyval.A).code = code_concatenate(3,(yyvsp[-2].A).code,(yyvsp[0].A).code,code_gen(5,(yyval.A).addr," = ",(yyvsp[-2].A).addr," * ",(yyvsp[0].A).addr)); 
				if(((yyvsp[-2].A).is_dig) && ((yyvsp[0].A).is_dig))
				{
					(yyval.A).is_dig=1;
					float temp = (yyvsp[-2].A).val*(yyvsp[0].A).val;
					char buf[10];
					gcvt(temp, 6, buf);
					(yyval.A).optimized_code = code_concatenate(3,(yyvsp[-2].A).optimized_code,(yyvsp[0].A).optimized_code,code_gen_oc(3,(yyval.A).addr," = ",buf));
					(yyval.A).val = temp;
					flag1 &=1;
				}

				else
				{
					(yyval.A).is_dig=0;
					(yyval.A).optimized_code = (yyval.A).code;
					flag1=0;
				}
				}
<<<<<<< HEAD
#line 2295 "y.tab.c"
    break;

  case 51:
#line 620 "parser.y"
=======
#line 2158 "y.tab.c"
    break;

  case 51:
#line 480 "parser.y"
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
                                  {(yyval.A).addr = new_temp(); (yyval.A).code = code_concatenate(3,(yyvsp[-2].A).code,(yyvsp[0].A).code,code_gen(5,(yyval.A).addr," = ",(yyvsp[-2].A).addr," / ",(yyvsp[0].A).addr)); 
 				if(((yyvsp[-2].A).is_dig) && ((yyvsp[0].A).is_dig))
				{
					(yyval.A).is_dig=1;
					float temp = (yyvsp[-2].A).val/(yyvsp[0].A).val;
					char buf[10];
					gcvt(temp, 6, buf);
					(yyval.A).optimized_code = code_concatenate(3,(yyvsp[-2].A).optimized_code,(yyvsp[0].A).optimized_code,code_gen_oc(3,(yyval.A).addr," = ",buf));
					(yyval.A).val = temp;
					flag1 &=1;
				}
				else
				{
					(yyval.A).is_dig=0;
					(yyval.A).optimized_code = (yyval.A).code;
					flag1=0;
				}
 				}
<<<<<<< HEAD
#line 2318 "y.tab.c"
    break;

  case 52:
#line 638 "parser.y"
                               {(yyval.A).addr = (yyvsp[0].A).addr; (yyval.A).code = (yyvsp[0].A).code; (yyval.A).optimized_code = (yyvsp[0].A).optimized_code; (yyval.A).val = (yyvsp[0].A).val;(yyval.A).is_dig=(yyvsp[0].A).is_dig;}
#line 2324 "y.tab.c"
    break;

  case 53:
#line 641 "parser.y"
        {(yyval.A).addr = gen_addr((yyvsp[0].text)); (yyval.A).code = code_gen(1," ");if(!look_up_sym_tab((yyvsp[0].text))){printf("Type mismatch error at %d\n", yylineno); YYERROR;} (yyval.A).optimized_code = (yyval.A).code;(yyval.A).is_dig=0;}
#line 2330 "y.tab.c"
    break;

  case 54:
#line 642 "parser.y"
            {(yyval.A).addr = gen_addr((yyvsp[0].text)); (yyval.A).code = code_gen(1," ");(yyval.A).optimized_code = (yyval.A).code; (yyval.A).val = atof((yyvsp[0].text));(yyval.A).is_dig=1;}
#line 2336 "y.tab.c"
    break;

  case 55:
#line 643 "parser.y"
                     {(yyval.A)= (yyvsp[-1].A);}
#line 2342 "y.tab.c"
    break;

  case 56:
#line 644 "parser.y"
                  {(yyval.A)=(yyvsp[0].A);}
#line 2348 "y.tab.c"
    break;

  case 57:
#line 645 "parser.y"
                  {(yyval.A)=(yyvsp[0].A);}
#line 2354 "y.tab.c"
    break;

  case 58:
#line 648 "parser.y"
=======
#line 2184 "y.tab.c"
    break;

  case 52:
#line 501 "parser.y"
                               {(yyval.A).addr = (yyvsp[0].A).addr; (yyval.A).code = (yyvsp[0].A).code; (yyval.A).optimized_code = (yyvsp[0].A).optimized_code; (yyval.A).val = (yyvsp[0].A).val;(yyval.A).is_dig=(yyvsp[0].A).is_dig;}
#line 2190 "y.tab.c"
    break;

  case 53:
#line 504 "parser.y"
        {(yyval.A).addr = gen_addr((yyvsp[0].text)); (yyval.A).code = code_gen(1," ");if(!look_up_sym_tab((yyvsp[0].text))){printf("Undeclared variable %s\n", (yyvsp[0].text)); YYERROR;} (yyval.A).optimized_code = (yyval.A).code;(yyval.A).is_dig=0;}
#line 2196 "y.tab.c"
    break;

  case 54:
#line 505 "parser.y"
            {(yyval.A).addr = gen_addr((yyvsp[0].text)); (yyval.A).code = code_gen(1," ");(yyval.A).optimized_code = (yyval.A).code; (yyval.A).val = atof((yyvsp[0].text));(yyval.A).is_dig=1;}
#line 2202 "y.tab.c"
    break;

  case 55:
#line 506 "parser.y"
                     {(yyval.A)= (yyvsp[-1].A);}
#line 2208 "y.tab.c"
    break;

  case 56:
#line 507 "parser.y"
                  {(yyval.A)=(yyvsp[0].A);}
#line 2214 "y.tab.c"
    break;

  case 57:
#line 508 "parser.y"
                  {(yyval.A)=(yyvsp[0].A);}
#line 2220 "y.tab.c"
    break;

  case 58:
#line 511 "parser.y"
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
                              {(yyval.A).addr = new_temp(); 
								(yyval.A).code = code_concatenate(2,code_gen(5,(yyval.A).addr,"=",(yyvsp[-2].text),(yyvsp[-1].text),(yyvsp[0].text)), code_gen(3,(yyvsp[-2].text),"=",(yyval.A).addr)); 
								if(!look_up_sym_tab((yyvsp[-2].text))){printf("Undeclared variable %s\n", (yyvsp[-2].text)); YYERROR;}
								if(!look_up_sym_tab((yyvsp[0].text))){printf("Undeclared variable %s\n", (yyvsp[0].text)); YYERROR;}
								(yyval.A).optimized_code = (yyval.A).code;
								(yyval.A).is_dig=0;
								}
<<<<<<< HEAD
#line 2366 "y.tab.c"
    break;

  case 59:
#line 655 "parser.y"
                                             {(yyval.A).addr = new_temp();
			   //printf("HELLO\n"); 
=======
#line 2232 "y.tab.c"
    break;

  case 59:
#line 518 "parser.y"
                                             {(yyval.A).addr = new_temp(); 
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
								(yyval.A).code = code_concatenate(2,code_gen(5,(yyval.A).addr,"=",(yyvsp[-2].text),(yyvsp[-1].text),(yyvsp[0].text)), code_gen(3,(yyvsp[-2].text),"=",(yyval.A).addr)); 
								if(!look_up_sym_tab((yyvsp[-2].text))){printf("Undeclared variable %s\n", (yyvsp[-2].text)); YYERROR;}
								(yyval.A).optimized_code = (yyval.A).code;
								(yyval.A).is_dig=0;
								}
<<<<<<< HEAD
#line 2378 "y.tab.c"
    break;

  case 60:
#line 662 "parser.y"
=======
#line 2243 "y.tab.c"
    break;

  case 60:
#line 524 "parser.y"
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
                                                        {(yyval.A).addr = new_temp(); 
								(yyval.A).code = code_concatenate(3,(yyvsp[-1].A).code,code_gen(5,(yyval.A).addr,"=",(yyvsp[-4].text),(yyvsp[-3].text),(yyvsp[-1].A).addr), code_gen(3,(yyvsp[-4].text),"=",(yyval.A).addr)); 
								if(!look_up_sym_tab((yyvsp[-4].text))){printf("Undeclared variable %s\n", (yyvsp[-4].text)); YYERROR;}
								(yyval.A).optimized_code = (yyval.A).code;
								(yyval.A).is_dig=0;
								}
<<<<<<< HEAD
#line 2389 "y.tab.c"
    break;

  case 61:
#line 670 "parser.y"
                {(yyval.text)="+";}
#line 2395 "y.tab.c"
    break;

  case 62:
#line 671 "parser.y"
                   {(yyval.text)="-";}
#line 2401 "y.tab.c"
    break;

  case 63:
#line 672 "parser.y"
                   {(yyval.text)="*";}
#line 2407 "y.tab.c"
    break;

  case 64:
#line 673 "parser.y"
                   {(yyval.text)="/";}
#line 2413 "y.tab.c"
    break;

  case 65:
#line 676 "parser.y"
=======
#line 2254 "y.tab.c"
    break;

  case 61:
#line 532 "parser.y"
                {(yyval.text)="+";}
#line 2260 "y.tab.c"
    break;

  case 62:
#line 533 "parser.y"
                   {(yyval.text)="-";}
#line 2266 "y.tab.c"
    break;

  case 63:
#line 534 "parser.y"
                   {(yyval.text)="*";}
#line 2272 "y.tab.c"
    break;

  case 64:
#line 535 "parser.y"
                   {(yyval.text)="/";}
#line 2278 "y.tab.c"
    break;

  case 65:
#line 538 "parser.y"
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
                                                { (yyval.A).addr = new_temp(); 
								
								(yyval.A).code = code_concatenate(2,code_gen(3,(yyvsp[0].text),"=",(yyval.A).addr),code_gen(5,(yyval.A).addr,"=",(yyvsp[0].text),"+","1"));
								code_gen(2,"Label",cont); 
								if(!look_up_sym_tab((yyvsp[0].text))){printf("Undeclared variable %s\n", (yyvsp[0].text)); YYERROR;}
								(yyval.A).optimized_code = (yyval.A).code;
								(yyval.A).is_dig=0;
							}
<<<<<<< HEAD
#line 2426 "y.tab.c"
    break;

  case 66:
#line 684 "parser.y"
=======
#line 2289 "y.tab.c"
    break;

  case 66:
#line 544 "parser.y"
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
                                                { (yyval.A).addr = new_temp(); 
								(yyval.A).code = code_concatenate(2,code_gen(5,(yyval.A).addr,"=",(yyvsp[0].text),"+","1"),code_gen(3,(yyvsp[-1].text),"=",(yyval.A).addr));
								if(!look_up_sym_tab((yyvsp[-1].text))){printf("Undeclared variable %s\n", (yyvsp[-1].text)); YYERROR;}
								(yyval.A).optimized_code = (yyval.A).code;
								(yyval.A).is_dig=0;
							}
<<<<<<< HEAD
#line 2437 "y.tab.c"
    break;

  case 67:
#line 690 "parser.y"
=======
#line 2300 "y.tab.c"
    break;

  case 67:
#line 550 "parser.y"
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
                                        {  (yyval.A).addr = new_temp(); 
								(yyval.A).code = code_concatenate(2,code_gen(5,(yyval.A).addr,"=",(yyvsp[0].text),"-","1"),code_gen(3,(yyvsp[0].text),"=",(yyval.A).addr));
								if(!look_up_sym_tab((yyvsp[0].text))){printf("Undeclared variable %s\n", (yyvsp[0].text)); YYERROR;}
								(yyval.A).optimized_code = (yyval.A).code;
								(yyval.A).is_dig=0;
							}
<<<<<<< HEAD
#line 2448 "y.tab.c"
    break;

  case 68:
#line 696 "parser.y"
=======
#line 2311 "y.tab.c"
    break;

  case 68:
#line 556 "parser.y"
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
                                                {  (yyval.A).addr = new_temp(); 
								(yyval.A).code = code_concatenate(2,code_gen(5,(yyval.A).addr,"=",(yyvsp[0].text),"-","1"),code_gen(3,(yyvsp[-1].text),"=",(yyval.A).addr));
								if(!look_up_sym_tab((yyvsp[-1].text))){printf("Undeclared variable %s\n", (yyvsp[-1].text)); YYERROR;}
								(yyval.A).optimized_code = (yyval.A).code;
								(yyval.A).is_dig=0;
							}
<<<<<<< HEAD
#line 2459 "y.tab.c"
    break;

  case 69:
#line 702 "parser.y"
=======
#line 2322 "y.tab.c"
    break;

  case 69:
#line 562 "parser.y"
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
                                       {  (yyval.A).addr = new_temp(); 
								(yyval.A).code = code_gen(4,(yyval.A).addr,"=",(yyvsp[-1].text),(yyvsp[0].text)); 
								if(!look_up_sym_tab((yyvsp[-1].text))){printf("Undeclared variable %s\n", (yyvsp[-1].text)); YYERROR;}
								(yyval.A).optimized_code = (yyval.A).code;
								(yyval.A).is_dig=0;
							}
<<<<<<< HEAD
#line 2470 "y.tab.c"
    break;

  case 70:
#line 708 "parser.y"
=======
#line 2333 "y.tab.c"
    break;

  case 70:
#line 568 "parser.y"
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7
                                       {  (yyval.A).addr = new_temp(); 
								(yyval.A).code = code_gen(4,(yyval.A).addr,"=",(yyvsp[-1].text),(yyvsp[0].text)); 
								(yyval.A).optimized_code = (yyval.A).code;
								(yyval.A).is_dig=1;
							}
<<<<<<< HEAD
#line 2480 "y.tab.c"
    break;


#line 2484 "y.tab.c"
=======
#line 2343 "y.tab.c"
    break;


#line 2347 "y.tab.c"
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
<<<<<<< HEAD
#line 714 "parser.y"
=======
#line 574 "parser.y"
>>>>>>> 067e737240350e5e37158df3478b42bee0c318e7

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
