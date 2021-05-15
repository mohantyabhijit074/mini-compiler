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
int scope[100];
int scope_ctr;
int scope_ind;
int flag1 =1;

extern int yylineno;

int t=0;
int lab=0;
char stack[100][100];
int top=0;
int num_iter[10];
int iter_init[10];
int iter_top=0;
int number_of_iterations=0;
int return_flag=0;
char typ[10]="nothing";
extern FILE *yyin;
char* code_gen(int arg_count,...);
char* gen_addr(char* string);
char* new_temp();
char* code_concatenate(int arg_count,...);
char* new_label();
int is_int(char *,int);
void remove_rest(char *, char *);
char break_lab[20];
char switch_id[10];

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


#line 133 "y.tab.c"

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

#line 260 "y.tab.c"

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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   297

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  199

#define YYUNDEFTOK  2
#define YYMAXUTOK   282


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
       2,     2,     2,     2,     2,     2,     2,    32,     2,     2,
      33,    34,    31,    28,    35,    29,     2,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    38,
       2,    39,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,    37,     2,     2,     2,     2,
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
      25,    26,    27
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   103,   103,   113,   114,   115,   116,   120,   121,   122,
     123,   126,   127,   128,   130,   130,   130,   132,   133,   136,
     137,   140,   140,   140,   142,   143,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   147,   147,   149,   151,   151,
     151,   154,   155,   158,   161,   164,   165,   166,   167,   168,
     169,   172,   173,   174,   177,   177,   179,   179,   181,   183,
     210,   230,   266,   302,   336,   355,   420,   422,   430,   441,
     448,   458,   464,   470,   481,   487,   498,   500,   506,   516,
     518,   524,   530,   540,   542,   560,   570,   577,   580
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_double", "T_void", "T_break",
  "T_continue", "T_string", "T_fltEval", "T_for", "T_cout", "T_ostream",
  "T_switch", "T_incr", "T_decr", "T_relop", "T_intval", "T_fltval",
  "T_id", "T_int", "T_char", "T_float", "T_charval", "T_main", "T_return",
  "T_default", "T_case", "T_colon", "'+'", "'-'", "'/'", "'*'", "'%'",
  "'('", "')'", "','", "'{'", "'}'", "';'", "'='", "$accept", "start",
  "main", "function", "params", "datatype", "block", "block_r",
  "returnval", "statements", "statement", "print", "switch", "values",
  "case", "default", "for_st", "inside_for", "una_op", "loop_keywrd",
  "condition", "compare", "expression", "E", "decl", "commaint",
  "commaflt", "commachar", "F", "Assign_int", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,    43,    45,
      47,    42,    37,    40,    41,    44,   123,   125,    59,    61
};
# endif

#define YYPACT_NINF (-135)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      61,     8,    43,    10,    19,    51,  -135,    61,    61,   -14,
      60,    21,    70,   155,   208,  -135,  -135,  -135,   246,    73,
     246,    95,  -135,   136,  -135,    85,   246,   114,  -135,   150,
    -135,   246,   122,  -135,   136,  -135,  -135,  -135,  -135,    53,
     128,   126,   121,   166,  -135,  -135,  -135,   136,   168,  -135,
     137,   147,   177,   112,   179,   210,   188,   190,   126,   246,
    -135,    58,  -135,   137,   136,  -135,   206,   136,   136,   136,
     136,   136,  -135,    80,  -135,   137,   162,  -135,  -135,  -135,
     137,   136,  -135,  -135,  -135,   156,   151,   175,   159,   213,
     209,   232,   241,   254,   255,   248,   258,  -135,  -135,  -135,
     105,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,   168,  -135,   238,   238,  -135,  -135,  -135,   154,   139,
    -135,   112,   179,  -135,   190,  -135,  -135,  -135,    -9,   269,
       7,   169,   218,   223,   225,  -135,   250,  -135,  -135,  -135,
    -135,  -135,  -135,   240,   154,  -135,  -135,  -135,   242,     5,
     245,   244,     1,  -135,  -135,  -135,   249,   251,   201,  -135,
     243,   252,   136,   232,     2,   253,  -135,  -135,   106,   126,
      17,   277,  -135,   126,  -135,  -135,  -135,   256,   220,     3,
    -135,  -135,  -135,   267,   136,  -135,   267,   257,   259,  -135,
    -135,  -135,  -135,  -135,   220,  -135,   267,  -135,  -135
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     6,     5,    13,     0,
      13,     0,    76,     0,    67,     0,    13,     0,    83,     0,
      71,    13,     0,    79,     0,    69,    14,    16,    15,     0,
       0,     0,     0,     0,    85,    86,    84,     0,     0,    66,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,     0,     3,     0,     0,    74,     0,     0,     0,     0,
       0,     0,    68,     0,     4,     0,     0,    80,    72,    73,
       0,     0,    77,    70,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,    34,    27,
       0,    25,    29,    30,    31,    33,    32,    42,    28,    26,
       8,     0,    87,    61,    62,    65,    63,    64,     0,     0,
      10,     0,     0,     9,     0,    12,    54,    55,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    17,    24,    75,
      21,    22,    23,     0,     0,    81,    82,    78,     0,     0,
       0,     0,     0,    40,    38,    39,     0,     0,     0,    41,
       0,     0,     0,    84,     0,     0,    56,    57,     0,     0,
       0,     0,    35,     0,    60,    59,    20,     0,    88,     0,
      46,    48,    53,     0,     0,    44,     0,     0,     0,    37,
      19,    51,    52,    47,    58,    49,    50,    36,    45
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -135,  -135,   247,  -135,    71,   227,   -40,    -6,   143,   215,
     -87,  -135,  -135,  -135,  -135,  -135,  -135,  -135,   -74,  -135,
     124,  -135,  -134,   -23,   120,   -38,   -49,   -50,  -135,  -135
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,    39,    40,    99,    74,   143,   100,
     101,   102,   103,   156,   104,   105,   106,   150,   181,   107,
     165,   166,   108,   168,   109,    24,    35,    30,    49,   151
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      48,    62,    77,    78,    79,    65,    54,    82,    83,   148,
      72,    57,   171,   138,   153,   167,   191,   192,    84,    18,
     179,    44,    45,   163,    66,   154,     9,   155,    13,   149,
     182,    10,   138,    44,    45,   163,   167,    14,    47,   172,
     180,   111,   131,   164,   113,   114,   115,   116,   117,   182,
      47,    15,   182,   122,    20,   186,    21,   110,   124,    22,
      23,    11,   182,    86,    87,     1,    12,    88,    89,   120,
      90,   145,   146,   139,   123,   147,    91,    92,    93,    94,
       2,     3,     4,    95,    96,    86,    87,    58,    59,    88,
      89,    42,    90,    19,    61,    97,    98,    51,    91,    92,
      93,    94,    55,    25,   118,    95,    96,    41,   158,   193,
      86,    87,   195,    43,    88,    89,    61,    90,    98,    50,
       8,   184,   198,    91,    92,    93,    94,     8,     8,   185,
      95,    96,    52,   189,    67,    68,    69,    70,    71,   178,
      56,    61,   137,    98,    86,    87,    60,    27,    88,    89,
      28,    90,    44,    45,    46,    63,    59,    91,    92,    93,
      94,   194,    61,   144,    95,    96,    44,    45,    46,    47,
     140,   141,    53,    73,   125,    61,   142,    98,    44,    45,
      46,    75,    59,    47,   121,    44,    45,    46,    26,   126,
      27,   157,   128,    28,    29,    47,    67,    68,    69,    70,
      71,    21,    47,    21,    22,    64,    22,    67,    68,    69,
      70,    71,    27,   127,    27,    28,    76,    28,    67,    68,
      69,    70,    71,    32,   129,    32,    33,    81,    33,    67,
      68,    69,    70,    71,    67,    68,    69,    70,    71,   175,
     112,    31,   130,    32,    80,    59,    33,    34,    67,    68,
      69,    70,    71,    21,    16,    17,    22,    23,    27,   132,
      32,    28,    29,    33,    34,    36,    37,    38,    69,    70,
      71,   131,   133,   134,   136,   135,   152,   159,   160,   169,
     176,   162,   170,   173,   188,   179,    85,   161,   119,   174,
     177,   183,     0,   190,   187,   196,     0,   197
};

static const yytype_int16 yycheck[] =
{
      23,    41,    52,    53,    54,    43,    29,    56,    57,    18,
      48,    34,    11,   100,     7,   149,    13,    14,    58,    33,
      18,    16,    17,    18,    47,    18,    18,    20,    18,    38,
     164,    23,   119,    16,    17,    18,   170,    18,    33,    38,
      38,    64,    39,    38,    67,    68,    69,    70,    71,   183,
      33,     0,   186,    76,    33,    38,    35,    63,    81,    38,
      39,    18,   196,     5,     6,     4,    23,     9,    10,    75,
      12,   121,   122,   111,    80,   124,    18,    19,    20,    21,
      19,    20,    21,    25,    26,     5,     6,    34,    35,     9,
      10,    20,    12,    33,    36,    37,    38,    26,    18,    19,
      20,    21,    31,    33,    24,    25,    26,    34,   131,   183,
       5,     6,   186,    18,     9,    10,    36,    12,    38,    34,
       0,    15,   196,    18,    19,    20,    21,     7,     8,   169,
      25,    26,    18,   173,    28,    29,    30,    31,    32,   162,
      18,    36,    37,    38,     5,     6,    18,    35,     9,    10,
      38,    12,    16,    17,    18,    34,    35,    18,    19,    20,
      21,   184,    36,    24,    25,    26,    16,    17,    18,    33,
      16,    17,    22,    36,    18,    36,    22,    38,    16,    17,
      18,    34,    35,    33,    22,    16,    17,    18,    33,    38,
      35,    22,    33,    38,    39,    33,    28,    29,    30,    31,
      32,    35,    33,    35,    38,    39,    38,    28,    29,    30,
      31,    32,    35,    38,    35,    38,    39,    38,    28,    29,
      30,    31,    32,    35,    11,    35,    38,    39,    38,    28,
      29,    30,    31,    32,    28,    29,    30,    31,    32,    38,
      34,    33,    33,    35,    34,    35,    38,    39,    28,    29,
      30,    31,    32,    35,     7,     8,    38,    39,    35,    18,
      35,    38,    39,    38,    39,    19,    20,    21,    30,    31,
      32,    39,    18,    18,    16,    27,     7,    27,    38,    34,
      37,    39,    38,    34,     7,    18,    59,   144,    73,    38,
      38,    38,    -1,    37,   170,    38,    -1,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    19,    20,    21,    41,    42,    43,    64,    18,
      23,    18,    23,    18,    18,     0,    42,    42,    33,    33,
      33,    35,    38,    39,    65,    33,    33,    35,    38,    39,
      67,    33,    35,    38,    39,    66,    19,    20,    21,    44,
      45,    34,    44,    18,    16,    17,    18,    33,    63,    68,
      34,    44,    18,    22,    63,    44,    18,    63,    34,    35,
      18,    36,    46,    34,    39,    65,    63,    28,    29,    30,
      31,    32,    65,    36,    47,    34,    39,    67,    67,    67,
      34,    39,    66,    66,    46,    45,     5,     6,     9,    10,
      12,    18,    19,    20,    21,    25,    26,    37,    38,    46,
      49,    50,    51,    52,    54,    55,    56,    59,    62,    64,
      47,    63,    34,    63,    63,    63,    63,    63,    24,    49,
      47,    22,    63,    47,    63,    18,    38,    38,    33,    11,
      33,    39,    18,    18,    18,    27,    16,    37,    50,    65,
      16,    17,    22,    48,    24,    67,    67,    66,    18,    38,
      57,    69,     7,     7,    18,    20,    53,    22,    63,    27,
      38,    48,    39,    18,    38,    60,    61,    62,    63,    34,
      38,    11,    38,    34,    38,    38,    37,    38,    63,    18,
      38,    58,    62,    38,    15,    46,    38,    60,     7,    46,
      37,    13,    14,    58,    63,    58,    38,    38,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    42,    42,    42,    42,    43,    43,    43,
      43,    44,    44,    44,    45,    45,    45,    46,    46,    47,
      47,    48,    48,    48,    49,    49,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    51,    51,    52,    53,    53,
      53,    54,    54,    55,    56,    57,    57,    57,    57,    57,
      57,    58,    58,    58,    59,    59,    60,    60,    61,    62,
      62,    63,    63,    63,    63,    63,    63,    64,    64,    64,
      64,    64,    64,    64,    65,    65,    65,    66,    66,    66,
      67,    67,    67,    67,    68,    68,    68,    68,    69
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     5,     5,     2,     2,     6,     6,     6,
       6,     2,     4,     0,     1,     1,     1,     3,     2,     6,
       5,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     6,     5,     1,     1,
       1,     3,     1,     2,     5,     5,     3,     4,     3,     4,
       4,     2,     2,     1,     2,     2,     1,     1,     3,     4,
       4,     3,     3,     3,     3,     3,     1,     3,     5,     3,
       5,     3,     5,     5,     3,     5,     1,     3,     5,     1,
       3,     5,     5,     1,     1,     1,     1,     3,     3
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
#line 104 "parser.y"
        { 
				printf("\033[1;32m");
				printf("\n\nParsing Done.\n\n");
				printf("\033[0m");
				print_symboltable();
				free_mem();
				return 0;
	    }
#line 1587 "y.tab.c"
    break;

  case 7:
#line 120 "parser.y"
                                                 { (yyvsp[-4].ptr)->data_type=3; strcpy((yyvsp[-4].ptr)->scope,"global");}
#line 1593 "y.tab.c"
    break;

  case 8:
#line 121 "parser.y"
                                                 { (yyvsp[-4].ptr)->data_type=0; strcpy((yyvsp[-4].ptr)->scope,"global");}
#line 1599 "y.tab.c"
    break;

  case 9:
#line 122 "parser.y"
                                                 { (yyvsp[-4].ptr)->data_type=1; strcpy((yyvsp[-4].ptr)->scope,"global");}
#line 1605 "y.tab.c"
    break;

  case 10:
#line 123 "parser.y"
                                                 { (yyvsp[-4].ptr)->data_type=2; strcpy((yyvsp[-4].ptr)->scope,"global");}
#line 1611 "y.tab.c"
    break;

  case 11:
#line 126 "parser.y"
                           {if((yyvsp[-1].ival)==0){assignInt((yyvsp[0].ptr),(yyvsp[-1].ival),0);} if((yyvsp[-1].ival)==2){assignChar((yyvsp[0].ptr),(yyvsp[-1].ival),0);} if((yyvsp[-1].ival)==1){assignFloat((yyvsp[0].ptr),(yyvsp[-1].ival),0);}}
#line 1617 "y.tab.c"
    break;

  case 12:
#line 127 "parser.y"
                                      {if((yyvsp[-1].ival)==0){assignInt((yyvsp[0].ptr),(yyvsp[-1].ival),0);} if((yyvsp[-1].ival)==2){assignChar((yyvsp[0].ptr),(yyvsp[-1].ival),'\0');} if((yyvsp[-1].ival)==1){assignFloat((yyvsp[0].ptr),(yyvsp[-1].ival),0);}}
#line 1623 "y.tab.c"
    break;

  case 14:
#line 130 "parser.y"
                   {(yyval.ival)=(yyvsp[0].ival);}
#line 1629 "y.tab.c"
    break;

  case 15:
#line 130 "parser.y"
                                     {(yyval.ival)=(yyvsp[0].ival);}
#line 1635 "y.tab.c"
    break;

  case 16:
#line 130 "parser.y"
                                                       {(yyval.ival)=(yyvsp[0].ival);}
#line 1641 "y.tab.c"
    break;

  case 59:
#line 184 "parser.y"
                {					
				symtbl* id = find((yyvsp[-3].ptr)->name);
				if(id==NULL)
                    {
                        printf("\033[1;31m");
						printf("\nerror : ");
						printf("\033[0m");
						printf("a Line :%d Variable '%s' undeclared .\n\n",*line,(yyvsp[-3].ptr)->name);
				   	}
				else if(id->data_type==0)
                    {
                        if((yyvsp[-1].ptr)->data_type==0)
                                id->val.i=(yyvsp[-1].ptr)->val.i;
                        else
                                id->val.i=(int)(yyvsp[-1].ptr)->val.f;
                    }
                    else if(id->data_type==1){
                            if((yyvsp[-1].ptr)->data_type==1)
                                    id->val.f=(yyvsp[-1].ptr)->val.f;
                            else
                                id->val.f=(float)(yyvsp[-1].ptr)->val.i;
                    }
                    free((yyvsp[-3].ptr));
			       free((yyvsp[-1].ptr));
			   }
#line 1671 "y.tab.c"
    break;

  case 60:
#line 210 "parser.y"
                                 {
			        symtbl* id = find((yyvsp[-3].ptr)->name);
				
					if(id==NULL)
                    {   printf("\033[1;31m");
						printf("\nerror : ");
						printf("\033[0m");
						printf("bLine :%d Variable '%s' undeclared .\n\n",*line,(yyvsp[-3].ptr)->name);
				   	}
					else if(id->data_type==0)
                        			id->val.c=(int)(yyvsp[-1].cval);
               				else if(id->data_type==2)
                        			{id->val.c=(yyvsp[-1].cval);}
					else if(id->data_type==1){
						id->val.c=(float)(yyvsp[-1].cval);						
						}
					
					free((yyvsp[-3].ptr));}
#line 1694 "y.tab.c"
    break;

  case 61:
#line 230 "parser.y"
                 {	
		    printf("evaluating+\n");	
            tmp=addTemp("tmp");
    

            if(((yyvsp[-2].ptr)->data_type)!=((yyvsp[0].ptr)->data_type)) {
                    tmp->data_type=1;
                    printf("Datatype mismatch in line : %d\nTrying to perform error correction\n",*line);
                    if(((yyvsp[-2].ptr)->data_type)==1) {
                            tmp->val.f=((yyvsp[-2].ptr)->val.f)+((yyvsp[0].ptr)->val.i);
                    }
                    else {
                            tmp->val.f=((yyvsp[-2].ptr)->val.i)+((yyvsp[0].ptr)->val.f);
                    }
                    (yyvsp[-2].ptr)->val.f=tmp->val.f;
            }
            else {
                    if((yyvsp[-2].ptr)->data_type==0) {
                            tmp->data_type=0;
                            tmp->val.i=((yyvsp[-2].ptr)->val.i)+((yyvsp[0].ptr)->val.i);
            (yyvsp[-2].ptr)->val.i=tmp->val.i;
                    }
                    else if((yyvsp[-2].ptr)->data_type==1) {
                            tmp->data_type=1;
                            tmp->val.f=((yyvsp[-2].ptr)->val.f)+((yyvsp[0].ptr)->val.f);
                (yyvsp[-2].ptr)->val.f=tmp->val.f;
                    }
                    else
                            printf("Invalid Datatype\n");
                }

		 
		  free((yyvsp[0].ptr));
		  free(tmp);	
                }
#line 1734 "y.tab.c"
    break;

  case 62:
#line 266 "parser.y"
                {	
		    printf("Evaluating -\n");
            tmp=addTemp("tmp");

            if(((yyvsp[-2].ptr)->data_type)!=((yyvsp[0].ptr)->data_type)) {
                    tmp->data_type=1;
                    printf("Datatype mismatch in line : %d\nTrying to perform error correction\n",*line);
                    if(((yyvsp[-2].ptr)->data_type)==1) {
                            tmp->val.f=((yyvsp[-2].ptr)->val.f)-((yyvsp[0].ptr)->val.i);
                    }
                    else {
                            tmp->val.f=((yyvsp[-2].ptr)->val.i)-((yyvsp[0].ptr)->val.f);
                    }
                    (yyvsp[-2].ptr)->val.f=tmp->val.f;
            }
            else {
                    if((yyvsp[-2].ptr)->data_type==0) {
                            tmp->data_type=0;
                            tmp->val.i=((yyvsp[-2].ptr)->val.i)-((yyvsp[0].ptr)->val.i);
            (yyvsp[-2].ptr)->val.i=tmp->val.i;
                    }
                    else if((yyvsp[-2].ptr)->data_type==1) {
                            tmp->data_type=1;
                            tmp->val.f=((yyvsp[-2].ptr)->val.f)-((yyvsp[0].ptr)->val.f);
            (yyvsp[-2].ptr)->val.f=tmp->val.f;
                    }
                    else
                            printf("Invalid Datatype\n");
                    
                }
		
		free((yyvsp[0].ptr));
		free(tmp);
                }
#line 1773 "y.tab.c"
    break;

  case 63:
#line 303 "parser.y"
            {
            printf("Evaluating *\n");        
            tmp=addTemp("tmp");
        
            if(((yyvsp[-2].ptr)->data_type)!=((yyvsp[0].ptr)->data_type)) {
                    tmp->data_type=1;
                    printf("Datatype mismatch in line : %d\nTrying to perform error correction\n",*line);
                    if(((yyvsp[-2].ptr)->data_type)==1) {
                            tmp->val.f=((yyvsp[0].ptr)->val.f)*((yyvsp[-2].ptr)->val.i);
                    }
                    else {
                            tmp->val.f=((yyvsp[0].ptr)->val.i)*((yyvsp[-2].ptr)->val.f);
                    }
                    (yyvsp[-2].ptr)->val.f=tmp->val.f;
            }
            else {
                    if((yyvsp[-2].ptr)->data_type==0) {
                            tmp->data_type=0;
                            tmp->val.i=((yyvsp[0].ptr)->val.i)*((yyvsp[-2].ptr)->val.i);(yyvsp[-2].ptr)->val.i=tmp->val.i;
                    }
                    else if((yyvsp[-2].ptr)->data_type==1) {
                            tmp->data_type=1;
                            tmp->val.f=((yyvsp[0].ptr)->val.f)*((yyvsp[-2].ptr)->val.f); (yyvsp[-2].ptr)->val.f=tmp->val.f;
                    }
                    else
                            printf("Invalid Datatype\n");
                    
                }
		
		free((yyvsp[0].ptr));
		free(tmp);
                }
#line 1810 "y.tab.c"
    break;

  case 64:
#line 336 "parser.y"
                {
	           printf("Evaluating %\n");        
		   tmp=addTemp("tmp");
		    
                   tmp->data_type=0;
                   if((yyvsp[-2].ptr)->data_type!=0 && (yyvsp[0].ptr)->data_type!=0){
		   	printf("\033[1;31m");
			printf("\nerror : ");
			printf("\033[0m");
			printf("Line :%d Invalid operands to operator % .\n\n",*line);
		   }
		   else{		
                   tmp->val.i=((yyvsp[-2].ptr)->val.i)%((yyvsp[0].ptr)->val.i);
                   (yyvsp[-2].ptr)->val.i=tmp->val.i;
	           }
		free((yyvsp[0].ptr));
		free(tmp);
                }
#line 1833 "y.tab.c"
    break;

  case 65:
#line 355 "parser.y"
                {
		   printf("Evaluating /\n");
		   tmp=addTemp("tmp");

                   	if(((yyvsp[-2].ptr)->data_type)!=((yyvsp[0].ptr)->data_type)) {
                            tmp->data_type=1;
                            printf("Datatype mismatch in line : %d\nTrying to perform error correction\n",*line);
                            if(((yyvsp[-2].ptr)->data_type)==1) 
							{
								if((yyvsp[0].ptr)->val.i!=0)
												tmp->val.f=((yyvsp[-2].ptr)->val.f)/((yyvsp[0].ptr)->val.i);
								else{
								printf("\033[1;31m");
								printf("\nerror : ");
								printf("\033[0m");
								printf("Line :%d Division By ZERO .\n\n",*line);
								}
                            }
                            else {
								if((yyvsp[0].ptr)->val.f!=0)
												tmp->val.f=((yyvsp[-2].ptr)->val.i)/((yyvsp[0].ptr)->val.f);
								else{
								printf("\033[1;31m");
								printf("\nerror : ");
								printf("\033[0m");
								printf("Line :%d Division By ZERO .\n\n",*line);
								}
                            }
                            (yyvsp[0].ptr)->val.f=tmp->val.f;
                    }
                    else {
                            if((yyvsp[-2].ptr)->data_type==0) {
                                    tmp->data_type=0;
							if((yyvsp[0].ptr)->val.i!=0)
											{tmp->val.i=((yyvsp[-2].ptr)->val.i)/((yyvsp[0].ptr)->val.i);(yyvsp[0].ptr)->val.i=tmp->val.i;}

							else{
							printf("\033[1;31m");
							printf("\nerror : ");
							printf("\033[0m");
							printf("Line :%d Division By ZERO .\n\n",*line);
							}
											
									}
									else if((yyvsp[-2].ptr)->data_type==1) {
											tmp->data_type=1;
							if((yyvsp[-2].ptr)->val.i!=0)
											{tmp->val.f=((yyvsp[0].ptr)->val.f)/((yyvsp[-2].ptr)->val.f);(yyvsp[-2].ptr)->val.f=tmp->val.f;}
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
		
		free((yyvsp[0].ptr));
		free(tmp);
                }
#line 1902 "y.tab.c"
    break;

  case 66:
#line 420 "parser.y"
                { (yyval.ptr)=(yyvsp[0].ptr); }
#line 1908 "y.tab.c"
    break;

  case 67:
#line 422 "parser.y"
                              {
                  	    if(check_mult_dec((yyvsp[-1].ptr),(yyvsp[-2].ival))==0)
							assignInt((yyvsp[-1].ptr),(yyvsp[-2].ival),0);
					 	else
							{find((yyvsp[-1].ptr)->name);}
                    			    }
#line 1919 "y.tab.c"
    break;

  case 68:
#line 430 "parser.y"
                                         {
                    	    if(check_mult_dec((yyvsp[-3].ptr),(yyvsp[-4].ival))==0){
							if((yyvsp[-1].ptr)->data_type==0){assignInt((yyvsp[-3].ptr),(yyvsp[-4].ival),(yyvsp[-1].ptr)->val.i);}
							if((yyvsp[-1].ptr)->data_type==1){assignInt((yyvsp[-3].ptr),(yyvsp[-4].ival),(yyvsp[-1].ptr)->val.f);}
							if((yyvsp[-1].ptr)->data_type==2){assignInt((yyvsp[-3].ptr),(yyvsp[-4].ival),(yyvsp[-1].ptr)->val.c);}
						}
					  	else
							{find((yyvsp[-3].ptr)->name);}
						free((yyvsp[-1].ptr));
                			    }
#line 1934 "y.tab.c"
    break;

  case 69:
#line 441 "parser.y"
                                {
					if(check_mult_dec((yyvsp[-1].ptr),(yyvsp[-2].ival))==0)
						assignFloat((yyvsp[-1].ptr),(yyvsp[-2].ival),0);
					else
						{find((yyvsp[-1].ptr)->name);}
                    		
                	        }
#line 1946 "y.tab.c"
    break;

  case 70:
#line 448 "parser.y"
                                               {
                    	if(check_mult_dec((yyvsp[-3].ptr),(yyvsp[-4].ival))==0){
							if((yyvsp[-1].ptr)->data_type==0){assignFloat((yyvsp[-3].ptr),(yyvsp[-4].ival),(yyvsp[-1].ptr)->val.i);}
							if((yyvsp[-1].ptr)->data_type==1){assignFloat((yyvsp[-3].ptr),(yyvsp[-4].ival),(yyvsp[-1].ptr)->val.f);}
							if((yyvsp[-1].ptr)->data_type==2){assignFloat((yyvsp[-3].ptr),(yyvsp[-4].ival),(yyvsp[-1].ptr)->val.c);}
						}
					  	else
							{find((yyvsp[-3].ptr)->name);}
						free((yyvsp[-1].ptr));
                			    }
#line 1961 "y.tab.c"
    break;

  case 71:
#line 458 "parser.y"
                               {
                        if(check_mult_dec((yyvsp[-1].ptr),(yyvsp[-2].ival))==0)
						    assignChar((yyvsp[-1].ptr),(yyvsp[-2].ival),0);
					    else
						    {find((yyvsp[-1].ptr)->name);}
               		       }
#line 1972 "y.tab.c"
    break;

  case 72:
#line 464 "parser.y"
                                             {
                   		if(check_mult_dec((yyvsp[-3].ptr),(yyvsp[-4].ival))==0)
							assignChar((yyvsp[-3].ptr),(yyvsp[-4].ival),(yyvsp[-1].cval));
					  	else
							{find((yyvsp[-3].ptr)->name);}
                			     }
#line 1983 "y.tab.c"
    break;

  case 73:
#line 470 "parser.y"
                                           {
                    	if(check_mult_dec((yyvsp[-3].ptr),(yyvsp[-4].ival))==0){
							if((yyvsp[-1].ptr)->data_type==0){assignChar((yyvsp[-3].ptr),(yyvsp[-4].ival),(yyvsp[-1].ptr)->val.i);}
							if((yyvsp[-1].ptr)->data_type==1){assignChar((yyvsp[-3].ptr),(yyvsp[-4].ival),(yyvsp[-1].ptr)->val.f);}
							if((yyvsp[-1].ptr)->data_type==2){assignChar((yyvsp[-3].ptr),(yyvsp[-4].ival),(yyvsp[-1].ptr)->val.c);}
						}
					  	else
							{find((yyvsp[-3].ptr)->name);}
						free((yyvsp[-1].ptr));
                			    }
#line 1998 "y.tab.c"
    break;

  case 74:
#line 481 "parser.y"
                               {
                    if(check_mult_dec((yyvsp[-1].ptr),0)==0)
						assignInt((yyvsp[-1].ptr),0,0);
					else
						{find((yyvsp[-1].ptr)->name);}
                }
#line 2009 "y.tab.c"
    break;

  case 75:
#line 487 "parser.y"
                                         {
                    				
                    if(check_mult_dec((yyvsp[-3].ptr),0)==0){
							if((yyvsp[-1].ptr)->data_type==0){assignInt((yyvsp[-3].ptr),0,(yyvsp[-1].ptr)->val.i);}
							if((yyvsp[-1].ptr)->data_type==1){assignInt((yyvsp[-3].ptr),0,(yyvsp[-1].ptr)->val.f);}
							if((yyvsp[-1].ptr)->data_type==2){assignInt((yyvsp[-3].ptr),0,(yyvsp[-1].ptr)->val.c);}
						}
					  	else
							{find((yyvsp[-3].ptr)->name);}
						free((yyvsp[-1].ptr));
                }
#line 2025 "y.tab.c"
    break;

  case 77:
#line 500 "parser.y"
                               {
                    			if(check_mult_dec((yyvsp[-1].ptr),1)==0)
						assignFloat((yyvsp[-1].ptr),1,0);
					else
						{find((yyvsp[-1].ptr)->name);}
                	      }
#line 2036 "y.tab.c"
    break;

  case 78:
#line 506 "parser.y"
                                         {
                    				if(check_mult_dec((yyvsp[-3].ptr),1)==0){
							if((yyvsp[-1].ptr)->data_type==0){assignFloat((yyvsp[-3].ptr),1,(yyvsp[-1].ptr)->val.i);}
							if((yyvsp[-1].ptr)->data_type==1){assignFloat((yyvsp[-3].ptr),1,(yyvsp[-1].ptr)->val.f);}
							if((yyvsp[-1].ptr)->data_type==2){assignFloat((yyvsp[-3].ptr),1,(yyvsp[-1].ptr)->val.c);}
						}
					  	else
							{find((yyvsp[-3].ptr)->name);}
						free((yyvsp[-1].ptr));
                			}
#line 2051 "y.tab.c"
    break;

  case 80:
#line 518 "parser.y"
                                 {
                    			if(check_mult_dec((yyvsp[-1].ptr),2)==0)
						assignChar((yyvsp[-1].ptr),2,0);
					else
						{find((yyvsp[-1].ptr)->name);}
                }
#line 2062 "y.tab.c"
    break;

  case 81:
#line 524 "parser.y"
                                          {
                    				if(check_mult_dec((yyvsp[-3].ptr),2)==0)
							assignChar((yyvsp[-3].ptr),2,(yyvsp[-1].cval));
					  	else
							{find((yyvsp[-3].ptr)->name);}
                			  }
#line 2073 "y.tab.c"
    break;

  case 82:
#line 530 "parser.y"
                                          {
                    				if(check_mult_dec((yyvsp[-3].ptr),2)==0){
							if((yyvsp[-1].ptr)->data_type==0){assignChar((yyvsp[-3].ptr),2,(yyvsp[-1].ptr)->val.i);}
							if((yyvsp[-1].ptr)->data_type==1){assignChar((yyvsp[-3].ptr),2,(yyvsp[-1].ptr)->val.f);}
							if((yyvsp[-1].ptr)->data_type==2){assignChar((yyvsp[-3].ptr),2,(yyvsp[-1].ptr)->val.c);}
						}
					  	else
							{find((yyvsp[-3].ptr)->name);}
						free((yyvsp[-1].ptr));
                		}
#line 2088 "y.tab.c"
    break;

  case 84:
#line 542 "parser.y"
                     {  
			symtbl* id = find((yyvsp[0].ptr)->name);

		    	if(id==NULL){

                    	printf("\033[1;31m");
			printf("\nerror : ");
			printf("\033[0m");
			printf("Line :%d Variable '%s' undeclared .\n\n",*line,(yyvsp[0].ptr)->name);
		   	}
                	else{
				tmp = addTemp("tmp");
				tmp->val.i=id->val.i;
				tmp->data_type=0;
                        	(yyval.ptr)=tmp;
			    }
			
                     }
#line 2111 "y.tab.c"
    break;

  case 85:
#line 561 "parser.y"
                {	
                tmp=addTemp("tmp");                		
				tmp->val.i=(yyvsp[0].ival);
                		tmp->data_type=0;
				(yyval.ptr)=tmp;
				printf("$$:%s intval captured - %d\n",(yyval.ptr)->name,(yyvsp[0].ival));
	
                }
#line 2124 "y.tab.c"
    break;

  case 86:
#line 570 "parser.y"
                           {
                    		tmp=addTemp("tmp");                		
				tmp->val.f=(yyvsp[0].fval);
                		tmp->data_type=1;
				(yyval.ptr)=tmp;
				printf("$$:%s fltval captured - %d\n",(yyval.ptr)->name,(yyvsp[0].fval));
                	   }
#line 2136 "y.tab.c"
    break;

  case 87:
#line 577 "parser.y"
                                  {(yyval.ptr)=(yyvsp[-1].ptr);}
#line 2142 "y.tab.c"
    break;

  case 88:
#line 580 "parser.y"
                        {					
				symtbl* id = find((yyvsp[-2].ptr)->name);
				if(id==NULL)
                    {

                        printf("\033[1;31m");
						printf("\nerror : ");
						printf("\033[0m");
						printf("at Line :%d Variable '%s' undeclared .\n\n",*line,(yyvsp[-2].ptr)->name);
				   	}
				else if(id->data_type==0)
                    {
                        if((yyvsp[0].ptr)->data_type==0)
                            id->val.i=(yyvsp[0].ptr)->val.i;
                        else
                            id->val.i=(int)(yyvsp[0].ptr)->val.f;
                    }
                else if(id->data_type==1)
                    {
                            if((yyvsp[0].ptr)->data_type==1)
                                    id->val.f=(yyvsp[0].ptr)->val.f;
                            else
                                id->val.f=(float)(yyvsp[0].ptr)->val.i;
                    }
                    free((yyvsp[-2].ptr));
			        free((yyvsp[0].ptr));
			   }
#line 2174 "y.tab.c"
    break;


#line 2178 "y.tab.c"

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
#line 607 "parser.y"


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
