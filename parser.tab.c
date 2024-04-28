/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     identifier = 258,
     anychar = 259,
     signednumber = 260,
     digitsequence = 261,
     constantidentifier = 262,
     unsignednumber = 263,
     ordinaltypeidentifier = 264,
     comilla = 265,
     tk_program = 266,
     tk_begin = 267,
     tk_uses = 268,
     tk_unit = 269,
     tk_interface = 270,
     tk_implementation = 271,
     tk_label = 272,
     tk_const = 273,
     tk_type = 274,
     tk_real = 275,
     tk_word = 276,
     tk_true = 277,
     tk_false = 278,
     tk_string = 279,
     tk_packed = 280,
     tk_array = 281,
     tk_record = 282,
     tk_end = 283,
     tk_case = 284,
     tk_otherwise = 285,
     tk_of = 286,
     tk_set = 287,
     tk_var = 288,
     tk_forward = 289,
     tk_external = 290,
     tk_function = 291,
     tk_procedure = 292,
     tk_file = 293,
     tk_goto = 294,
     tk_if = 295,
     tk_then = 296,
     tk_else = 297,
     tk_repeat = 298,
     tk_until = 299,
     tk_while = 300,
     tk_do = 301,
     tk_for = 302,
     tk_to = 303,
     tk_downto = 304,
     tk_with = 305,
     tk_nil = 306,
     tk_read = 307,
     tk_readln = 308,
     tk_write = 309,
     tk_writeln = 310,
     tk_in = 311,
     tk_or = 312,
     tk_div = 313,
     tk_mod = 314,
     tk_and = 315,
     tk_not = 316,
     comparison_op = 317,
     assignment_op = 318,
     range_op = 319
   };
#endif
/* Tokens.  */
#define identifier 258
#define anychar 259
#define signednumber 260
#define digitsequence 261
#define constantidentifier 262
#define unsignednumber 263
#define ordinaltypeidentifier 264
#define comilla 265
#define tk_program 266
#define tk_begin 267
#define tk_uses 268
#define tk_unit 269
#define tk_interface 270
#define tk_implementation 271
#define tk_label 272
#define tk_const 273
#define tk_type 274
#define tk_real 275
#define tk_word 276
#define tk_true 277
#define tk_false 278
#define tk_string 279
#define tk_packed 280
#define tk_array 281
#define tk_record 282
#define tk_end 283
#define tk_case 284
#define tk_otherwise 285
#define tk_of 286
#define tk_set 287
#define tk_var 288
#define tk_forward 289
#define tk_external 290
#define tk_function 291
#define tk_procedure 292
#define tk_file 293
#define tk_goto 294
#define tk_if 295
#define tk_then 296
#define tk_else 297
#define tk_repeat 298
#define tk_until 299
#define tk_while 300
#define tk_do 301
#define tk_for 302
#define tk_to 303
#define tk_downto 304
#define tk_with 305
#define tk_nil 306
#define tk_read 307
#define tk_readln 308
#define tk_write 309
#define tk_writeln 310
#define tk_in 311
#define tk_or 312
#define tk_div 313
#define tk_mod 314
#define tk_and 315
#define tk_not 316
#define comparison_op 317
#define assignment_op 318
#define range_op 319




/* Copy the first part of user declarations.  */
#line 64 "parser.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable: 4996 6385 6011 4267 4244 4013 4312 4005 6387 26451)

extern FILE *yyin;
extern int yylex(void);
extern int linea;
int yyerror(const char *s);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union
#line 76 "parser.y"
YYSTYPE {
    char *cadena;
    int numero;
}
/* Line 193 of yacc.c.  */
#line 241 "parser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 254 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   479

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  128
/* YYNRULES -- Number of rules.  */
#define YYNRULES  262
/* YYNRULES -- Number of states.  */
#define YYNSTATES  434

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      72,    73,    78,    67,    69,    68,    76,    79,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    74,    65,
      81,    66,    80,     2,    77,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    70,     2,    71,    75,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    12,    14,    18,    20,    22,
      24,    26,    28,    30,    32,    34,    36,    38,    41,    45,
      50,    52,    55,    58,    60,    62,    64,    66,    69,    72,
      75,    78,    80,    84,    86,    90,    93,    95,    98,   101,
     103,   106,   109,   111,   114,   116,   118,   121,   124,   126,
     131,   133,   135,   137,   139,   141,   143,   145,   147,   149,
     151,   153,   158,   160,   162,   164,   168,   172,   174,   176,
     178,   180,   183,   186,   189,   192,   194,   201,   203,   206,
     208,   211,   215,   217,   221,   226,   228,   231,   233,   235,
     239,   243,   248,   255,   257,   261,   266,   272,   274,   278,
     280,   284,   286,   290,   293,   295,   297,   302,   304,   307,
     309,   313,   315,   318,   320,   322,   324,   326,   328,   332,
     334,   338,   341,   343,   345,   348,   350,   352,   354,   356,
     360,   363,   365,   367,   369,   371,   373,   377,   381,   385,
     389,   393,   396,   399,   401,   405,   409,   413,   415,   419,
     423,   427,   431,   435,   437,   439,   442,   446,   448,   452,
     454,   456,   458,   460,   462,   466,   469,   471,   475,   477,
     481,   485,   489,   492,   494,   496,   497,   499,   501,   503,
     507,   511,   513,   516,   519,   521,   523,   525,   527,   531,
     533,   537,   539,   541,   546,   553,   559,   566,   573,   581,
     585,   587,   591,   595,   597,   601,   603,   605,   607,   612,
     617,   626,   635,   637,   639,   641,   646,   648,   652,   654,
     659,   661,   663,   665,   669,   671,   672,   677,   679,   681,
     683,   689,   691,   693,   695,   697,   699,   701,   706,   710,
     714,   716,   720,   723,   724,   728,   732,   733,   735,   738,
     745,   748,   755,   761,   763,   764,   766,   767,   769,   770,
     772,   773,   775
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      83,     0,    -1,    84,    -1,   201,    -1,   197,    65,   196,
      96,    -1,     6,    -1,    10,    92,    10,    -1,     3,    -1,
       3,    -1,    52,    -1,    53,    -1,    54,    -1,    55,    -1,
       3,    -1,     3,    -1,     3,    -1,     4,    -1,    10,    10,
      -1,    10,    92,    10,    -1,     3,    66,    95,    65,    -1,
       3,    -1,    67,     7,    -1,    68,     7,    -1,     5,    -1,
      86,    -1,    93,    -1,   106,    -1,   105,    96,    -1,   103,
      96,    -1,   101,    96,    -1,    99,    96,    -1,    97,    -1,
      17,    98,    65,    -1,    85,    -1,    85,    69,    98,    -1,
      18,   100,    -1,    94,    -1,    94,   100,    -1,    19,   102,
      -1,   107,    -1,   107,   102,    -1,    33,   104,    -1,   136,
      -1,   136,   104,    -1,   184,    -1,   188,    -1,   105,   188,
      -1,   105,   184,    -1,   166,    -1,     3,    66,   108,    65,
      -1,   109,    -1,   118,    -1,   134,    -1,   112,    -1,   110,
      -1,   113,    -1,   111,    -1,    20,    -1,   117,    -1,   116,
      -1,     9,    -1,    24,    70,   115,    71,    -1,   114,    -1,
       3,    -1,     8,    -1,    72,   138,    73,    -1,    95,    64,
      95,    -1,   119,    -1,   132,    -1,   133,    -1,   122,    -1,
      25,   119,    -1,    25,   132,    -1,    25,   133,    -1,    25,
     122,    -1,    90,    -1,    26,    70,   120,    71,    31,   108,
      -1,   121,    -1,   121,   120,    -1,   112,    -1,    27,    28,
      -1,    27,   123,    28,    -1,   124,    -1,   124,    65,   127,
      -1,   124,    65,   127,    65,    -1,   127,    -1,   127,    65,
      -1,   125,    -1,   126,    -1,   126,    65,   125,    -1,   138,
      74,   108,    -1,    29,   131,    31,   128,    -1,    29,     3,
      74,   131,    31,   128,    -1,   129,    -1,   129,    65,   128,
      -1,   130,    74,    72,    73,    -1,   130,    74,    72,   123,
      73,    -1,    95,    -1,    95,    69,   130,    -1,     9,    -1,
      32,    31,   112,    -1,    38,    -1,    38,    31,   108,    -1,
      75,   135,    -1,    91,    -1,    89,    -1,   138,    74,   108,
      65,    -1,   140,    -1,   140,   139,    -1,     3,    -1,     3,
      69,   138,    -1,   141,    -1,   141,   139,    -1,     3,    -1,
     142,    -1,   144,    -1,   145,    -1,   146,    -1,    70,   143,
      71,    -1,   152,    -1,   152,    69,   143,    -1,    76,     3,
      -1,    75,    -1,    75,    -1,    77,   137,    -1,   137,    -1,
     148,    -1,   153,    -1,   157,    -1,    72,   152,    73,    -1,
      61,   147,    -1,     8,    -1,    86,    -1,    51,    -1,     7,
      -1,   147,    -1,   147,    78,   149,    -1,   147,    79,   149,
      -1,   147,    58,   149,    -1,   147,    59,   149,    -1,   147,
      60,   149,    -1,    67,   151,    -1,    68,   151,    -1,   151,
      -1,   149,    67,   151,    -1,   149,    68,   151,    -1,   149,
      57,   151,    -1,   149,    -1,   150,    62,   150,    -1,   150,
      66,   150,    -1,   150,    56,   150,    -1,   150,    80,   150,
      -1,   150,    81,   150,    -1,   150,    -1,    87,    -1,    87,
     154,    -1,    72,   155,    73,    -1,   156,    -1,   155,    69,
     156,    -1,   152,    -1,   137,    -1,    88,    -1,    87,    -1,
      86,    -1,    70,   158,    71,    -1,    70,    71,    -1,   159,
      -1,   159,    69,   158,    -1,   152,    -1,   152,    64,   152,
      -1,    85,    64,   161,    -1,    85,    64,   165,    -1,    85,
      64,    -1,   161,    -1,   165,    -1,    -1,   162,    -1,   163,
      -1,   164,    -1,   137,    63,   152,    -1,    87,    63,   152,
      -1,    88,    -1,    88,   154,    -1,    39,    85,    -1,   166,
      -1,   168,    -1,   174,    -1,   181,    -1,    12,   167,    28,
      -1,   160,    -1,   167,    65,   160,    -1,   169,    -1,   170,
      -1,    40,   152,    41,   160,    -1,    40,   152,    41,   160,
      42,   160,    -1,    29,   152,    31,   171,    28,    -1,    29,
     152,    31,   171,   173,    28,    -1,    29,   152,    31,   171,
      65,    28,    -1,    29,   152,    31,   171,   173,    65,    28,
      -1,   172,    69,   171,    -1,   172,    -1,   130,    74,   160,
      -1,    95,    69,   130,    -1,    95,    -1,    65,    30,   160,
      -1,   175,    -1,   176,    -1,   177,    -1,    43,   167,    44,
     152,    -1,    45,   152,    46,   160,    -1,    47,   178,    63,
     179,    48,   180,    46,   160,    -1,    47,   178,    63,   179,
      49,   180,    46,   160,    -1,   140,    -1,   152,    -1,   152,
      -1,    50,   182,    46,   160,    -1,   183,    -1,   183,    69,
     182,    -1,   137,    -1,   186,    65,   185,    65,    -1,    96,
      -1,    34,    -1,    35,    -1,    37,     3,   187,    -1,   195,
      -1,    -1,   190,    65,   189,    65,    -1,    96,    -1,    34,
      -1,    35,    -1,    36,     3,   187,    74,   191,    -1,     9,
      -1,   111,    -1,    91,    -1,   193,    -1,   186,    -1,   190,
      -1,    33,   138,    74,    89,    -1,   138,    74,    89,    -1,
     192,    65,   194,    -1,   192,    -1,    72,   194,    73,    -1,
     200,    65,    -1,    -1,    11,     3,   198,    -1,    72,   199,
      73,    -1,    -1,   138,    -1,    13,   138,    -1,   202,    65,
     203,   204,    28,    76,    -1,    14,     3,    -1,    15,   205,
     206,   207,   208,   209,    -1,    16,   206,   207,   208,   209,
      -1,   200,    -1,    -1,    99,    -1,    -1,   101,    -1,    -1,
     103,    -1,    -1,   105,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    83,    83,    83,    85,    89,    92,    95,    98,    99,
     100,   101,   102,   105,   108,   111,   114,   115,   118,   121,
     124,   125,   126,   127,   128,   129,   132,   133,   134,   135,
     136,   137,   140,   143,   144,   147,   150,   151,   154,   157,
     158,   161,   164,   165,   168,   169,   170,   171,   175,   178,
     181,   182,   183,   186,   187,   188,   191,   194,   197,   198,
     199,   202,   203,   206,   210,   213,   216,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   230,   233,   234,   237,
     240,   241,   244,   245,   246,   247,   248,   251,   254,   255,
     258,   261,   262,   265,   266,   269,   270,   273,   274,   277,
     280,   283,   284,   287,   288,   291,   294,   297,   298,   302,
     303,   306,   307,   310,   313,   314,   315,   316,   319,   322,
     323,   326,   329,   332,   335,   336,   337,   338,   339,   340,
     341,   344,   345,   346,   347,   350,   351,   352,   353,   354,
     355,   358,   359,   360,   363,   364,   365,   366,   369,   370,
     371,   372,   373,   374,   377,   378,   381,   384,   385,   388,
     389,   390,   391,   392,   395,   396,   399,   400,   402,   403,
     406,   407,   408,   409,   410,   411,   414,   415,   416,   419,
     420,   422,   423,   426,   429,   430,   431,   432,   435,   437,
     438,   441,   442,   445,   446,   449,   450,   451,   452,   455,
     456,   459,   461,   462,   465,   468,   469,   470,   473,   476,
     479,   480,   483,   486,   489,   492,   495,   496,   499,   502,
     505,   506,   507,   510,   513,   514,   517,   520,   521,   522,
     525,   528,   529,   530,   533,   534,   535,   538,   539,   542,
     543,   546,   549,   550,   553,   556,   557,   560,   563,   566,
     569,   572,   575,   578,   579,   582,   583,   586,   587,   590,
     591,   594,   595
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "identifier", "anychar", "signednumber",
  "digitsequence", "constantidentifier", "unsignednumber",
  "ordinaltypeidentifier", "comilla", "tk_program", "tk_begin", "tk_uses",
  "tk_unit", "tk_interface", "tk_implementation", "tk_label", "tk_const",
  "tk_type", "tk_real", "tk_word", "tk_true", "tk_false", "tk_string",
  "tk_packed", "tk_array", "tk_record", "tk_end", "tk_case",
  "tk_otherwise", "tk_of", "tk_set", "tk_var", "tk_forward", "tk_external",
  "tk_function", "tk_procedure", "tk_file", "tk_goto", "tk_if", "tk_then",
  "tk_else", "tk_repeat", "tk_until", "tk_while", "tk_do", "tk_for",
  "tk_to", "tk_downto", "tk_with", "tk_nil", "tk_read", "tk_readln",
  "tk_write", "tk_writeln", "tk_in", "tk_or", "tk_div", "tk_mod", "tk_and",
  "tk_not", "comparison_op", "assignment_op", "range_op", "';'", "'='",
  "'+'", "'-'", "','", "'['", "']'", "'('", "')'", "':'", "'^'", "'.'",
  "'@'", "'*'", "'/'", "'>'", "'<'", "$accept", "s", "program", "label",
  "quotedstringconstant", "functionidentifier", "procedureidentifier",
  "typeidentifier", "structuredtypeidentifier", "pointertypeidentifier",
  "stringcharacter", "quotedcharacterconstant", "constantdeclaration",
  "constant", "block", "labeldeclarationpart", "labels",
  "constantdeclarationpart", "constantdeclarations", "typedeclarationpart",
  "typedeclarations", "variabledeclarationpart", "variabledeclarations",
  "procedureandfunctiondeclarationpart", "statementpart",
  "typedeclaration", "type", "simpletype", "realtype",
  "realtypeidentifier", "ordinaltype", "stringtype",
  "stringtypeidentifier", "sizeattribute", "enumeratedtype",
  "subrangetype", "structuredtype", "arraytype", "indextypes", "indextype",
  "recordtype", "fieldlist", "fixedpart", "fielddeclarations",
  "fielddeclaration", "variantpart", "variants", "variant", "constants",
  "tagfieldtype", "settype", "filetype", "pointertype", "basetype",
  "variabledeclaration", "variablereference", "identifierlist",
  "qualifiers", "variableidentifier", "qualifier", "index", "expressions",
  "fielddesignator", "filebuffersymbol", "pointerobjectsymbol", "factor",
  "unsignedconstant", "term", "simpleexpression", "unsignedexpression",
  "expression", "functioncall", "actualparameterlist",
  "actualparametergroup", "actualparameter", "setconstructor",
  "membergroups", "membergroup", "statement", "simplestatement",
  "assignmentstatement", "procedurestatement", "gotostatement",
  "structuredstatement", "compoundstatement", "statements",
  "conditionalstatement", "ifstatement", "casestatement", "cases", "case",
  "otherwiseclause", "repetitivestatement", "repeatstatement",
  "whilestatement", "forstatement", "controlvariable", "initialvalue",
  "finalvalue", "withstatement", "recordvariablereferences",
  "recordvariablereference", "proceduredeclaration", "procedurebody",
  "procedureheading", "optionalformalparameterlist", "functiondeclaration",
  "functionbody", "functionheading", "resulttype", "formalparameter",
  "parameterdeclaration", "formalparameters", "formalparameterlist",
  "optionalprogramuseclause", "programheading",
  "optionalprogramheadingparameters", "programparameters", "usesclause",
  "regularunit", "unitheading", "interfacepart", "implementationpart",
  "optionalunituseclause", "optionalunitconstantdeclarationpart",
  "optionalunittypedeclarationpart", "optionalunitvariabledeclarationpart",
  "optionalunitprocedureandfunctiondeclarationpart", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,    59,    61,    43,    45,    44,
      91,    93,    40,    41,    58,    94,    46,    64,    42,    47,
      62,    60
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    83,    83,    84,    85,    86,    87,    88,    88,
      88,    88,    88,    89,    90,    91,    92,    92,    93,    94,
      95,    95,    95,    95,    95,    95,    96,    96,    96,    96,
      96,    96,    97,    98,    98,    99,   100,   100,   101,   102,
     102,   103,   104,   104,   105,   105,   105,   105,   106,   107,
     108,   108,   108,   109,   109,   109,   110,   111,   112,   112,
     112,   113,   113,   114,   115,   116,   117,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   119,   120,   120,   121,
     122,   122,   123,   123,   123,   123,   123,   124,   125,   125,
     126,   127,   127,   128,   128,   129,   129,   130,   130,   131,
     132,   133,   133,   134,   134,   135,   136,   137,   137,   138,
     138,   139,   139,   140,   141,   141,   141,   141,   142,   143,
     143,   144,   145,   146,   147,   147,   147,   147,   147,   147,
     147,   148,   148,   148,   148,   149,   149,   149,   149,   149,
     149,   150,   150,   150,   151,   151,   151,   151,   152,   152,
     152,   152,   152,   152,   153,   153,   154,   155,   155,   156,
     156,   156,   156,   156,   157,   157,   158,   158,   159,   159,
     160,   160,   160,   160,   160,   160,   161,   161,   161,   162,
     162,   163,   163,   164,   165,   165,   165,   165,   166,   167,
     167,   168,   168,   169,   169,   170,   170,   170,   170,   171,
     171,   172,   130,   130,   173,   174,   174,   174,   175,   176,
     177,   177,   178,   179,   180,   181,   182,   182,   183,   184,
     185,   185,   185,   186,   187,   187,   188,   189,   189,   189,
     190,   191,   191,   191,   192,   192,   192,   193,   193,   194,
     194,   195,   196,   196,   197,   198,   198,   199,   200,   201,
     202,   203,   204,   205,   205,   206,   206,   207,   207,   208,
     208,   209,   209
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     4,
       1,     2,     2,     1,     1,     1,     1,     2,     2,     2,
       2,     1,     3,     1,     3,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     1,     1,     2,     2,     1,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     2,     2,     2,     2,     1,     6,     1,     2,     1,
       2,     3,     1,     3,     4,     1,     2,     1,     1,     3,
       3,     4,     6,     1,     3,     4,     5,     1,     3,     1,
       3,     1,     3,     2,     1,     1,     4,     1,     2,     1,
       3,     1,     2,     1,     1,     1,     1,     1,     3,     1,
       3,     2,     1,     1,     2,     1,     1,     1,     1,     3,
       2,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     2,     2,     1,     3,     3,     3,     1,     3,     3,
       3,     3,     3,     1,     1,     2,     3,     1,     3,     1,
       1,     1,     1,     1,     3,     2,     1,     3,     1,     3,
       3,     3,     2,     1,     1,     0,     1,     1,     1,     3,
       3,     1,     2,     2,     1,     1,     1,     1,     3,     1,
       3,     1,     1,     4,     6,     5,     6,     6,     7,     3,
       1,     3,     3,     1,     3,     1,     1,     1,     4,     4,
       8,     8,     1,     1,     1,     4,     1,     3,     1,     4,
       1,     1,     1,     3,     1,     0,     4,     1,     1,     1,
       5,     1,     1,     1,     1,     1,     1,     4,     3,     3,
       1,     3,     2,     0,     3,     3,     0,     1,     2,     6,
       2,     6,     5,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     2,     0,     3,     0,   246,   250,
       1,   243,     0,     0,   244,     0,     0,     0,   254,     0,
     109,   247,     0,   248,   175,     0,     0,     0,     0,     0,
       0,     4,    31,     0,     0,     0,     0,    26,    48,    44,
       0,    45,     0,   242,   253,   256,   256,     0,     0,   245,
       7,     5,     0,     0,     0,   175,     0,     0,     0,     9,
      10,    11,    12,     0,     0,   181,     0,   107,   189,   173,
     176,   177,   178,   174,   184,     0,   185,   191,   192,   186,
     205,   206,   207,   187,    33,     0,     0,    36,    35,     0,
      38,    39,    41,    42,     0,   225,   225,    30,    29,    28,
      27,    44,    45,     0,     0,   255,   258,   258,     0,   110,
       7,   134,   131,     0,   133,     0,     0,     0,     0,     0,
       0,   132,   154,   125,   135,   126,   147,   153,   143,     0,
     127,   128,   183,     0,     0,     0,   113,   212,     0,   218,
       0,   216,   172,     0,     0,   182,     0,     0,   122,     0,
     108,   111,   114,   115,   116,   117,   188,   175,     0,    32,
       0,    37,     0,    40,    43,     0,     0,     0,   224,   223,
     221,   222,   220,     0,   228,   229,   227,     0,   257,   260,
     260,   249,    16,     0,     0,   130,   141,   142,   165,   168,
       0,   166,     0,   124,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   175,
       0,   175,     0,   175,     0,   170,   171,   180,   132,   154,
     161,   125,   159,     0,   157,   179,     0,   119,   121,   112,
     190,    34,    20,    23,     0,     0,     0,    24,    25,     0,
      14,    60,    57,     0,     0,     0,     0,     0,   101,     0,
       0,    75,   104,     0,     0,    50,    54,    56,    53,    55,
      62,    59,    58,    51,    67,    70,    68,    69,    52,     0,
       0,     0,   235,   236,   240,   234,     0,     0,   219,   226,
     259,   262,   262,    17,     6,     0,   164,     0,   129,   138,
     139,   140,   136,   137,   146,   144,   145,   150,   148,   149,
     151,   152,    97,     0,     0,   200,   193,   208,   209,   213,
       0,   215,   217,     0,   156,   118,     0,     0,    21,    22,
      19,     0,    71,    74,    72,    73,     0,    80,     0,     0,
      82,    87,    88,    85,     0,     0,     0,     0,    13,   105,
     103,     0,    49,   106,     0,     0,     0,   241,    15,   231,
     233,   232,   230,   261,   251,   252,   169,   167,     0,   175,
     195,     0,     0,     0,   175,     0,     0,   158,   120,     6,
      64,     0,    79,     0,    77,     0,    99,     0,    81,     0,
       0,    86,     0,   100,   102,    65,    66,     0,   238,   239,
      47,    46,    98,   201,   197,   175,   196,     0,   199,   194,
     214,     0,     0,    61,     0,    78,     0,     0,    83,    89,
      90,   237,   204,   198,   175,   175,     0,     0,    91,    93,
       0,    84,   210,   211,    76,     0,     0,     0,    92,    94,
       0,    95,     0,    96
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    63,   121,   122,    65,   339,   251,   252,
     184,   238,    87,   253,    31,    32,    85,    33,    88,    34,
      90,    35,    92,    36,    37,    91,   254,   255,   256,   257,
     258,   259,   260,   371,   261,   262,   263,   264,   373,   374,
     265,   329,   330,   331,   332,   333,   418,   419,   420,   377,
     266,   267,   268,   340,    93,   123,   334,   150,    67,   151,
     152,   226,   153,   154,   155,   124,   125,   126,   127,   128,
     189,   130,   194,   223,   224,   131,   190,   191,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,   304,
     305,   362,    79,    80,    81,    82,   138,   310,   401,    83,
     140,   141,    39,   173,    40,   167,    41,   177,    42,   352,
     274,   275,   276,   168,    16,     5,    14,    22,    17,     6,
       7,    19,    47,    45,   106,   179,   281,   354
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -329
static const yytype_int16 yypact[] =
{
     103,    46,    58,    74,  -329,    95,  -329,    98,    96,  -329,
    -329,   158,   171,   206,  -329,   206,   231,   155,   158,   205,
     154,  -329,   151,  -329,   355,   220,   225,   227,   206,   228,
     229,  -329,  -329,   231,   231,   231,   231,  -329,  -329,  -329,
     170,  -329,   173,  -329,  -329,   222,   222,   213,   206,  -329,
      83,  -329,   226,   220,   226,   355,   226,   242,   242,  -329,
    -329,  -329,  -329,   183,   191,   184,   194,     3,  -329,  -329,
    -329,  -329,  -329,  -329,  -329,    -8,  -329,  -329,  -329,  -329,
    -329,  -329,  -329,  -329,   190,   195,   203,   225,  -329,   208,
    -329,   227,  -329,   206,   201,   204,   204,  -329,  -329,  -329,
    -329,  -329,  -329,   416,   424,  -329,   259,   259,   214,  -329,
     136,  -329,  -329,   160,  -329,   127,   127,   127,   105,   226,
     242,  -329,   184,  -329,   193,  -329,    42,    99,  -329,   248,
    -329,  -329,  -329,   250,     7,   246,  -329,  -329,   236,  -329,
     254,   232,   377,   226,    16,  -329,   226,   226,  -329,   299,
    -329,     3,  -329,  -329,  -329,  -329,  -329,   355,   220,  -329,
      77,  -329,   306,  -329,  -329,   306,   113,   230,  -329,  -329,
    -329,  -329,  -329,   240,  -329,  -329,  -329,   243,  -329,   277,
     277,  -329,  -329,   302,   303,  -329,  -329,  -329,  -329,   253,
     247,   245,   251,  -329,  -329,   127,   127,   127,   127,   127,
     127,   127,   127,   226,   226,   226,   226,   226,    77,   355,
     226,   355,   226,   355,   242,  -329,  -329,  -329,  -329,   184,
    -329,  -329,  -329,    21,  -329,  -329,   249,   256,  -329,  -329,
    -329,  -329,  -329,  -329,   160,   320,   321,  -329,  -329,   264,
     272,  -329,  -329,   267,   176,   269,    37,   311,   312,   206,
     342,  -329,  -329,   288,   289,  -329,  -329,  -329,  -329,  -329,
    -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,   290,
     206,   279,  -329,  -329,   291,  -329,   284,    30,  -329,  -329,
    -329,     8,     8,  -329,  -329,   226,  -329,   226,  -329,  -329,
    -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,
    -329,  -329,   293,   285,    10,   294,   318,  -329,  -329,  -329,
      43,  -329,  -329,    16,  -329,  -329,   226,   354,  -329,  -329,
    -329,   357,  -329,  -329,  -329,  -329,   133,  -329,   216,   338,
     304,  -329,   305,   307,   301,   133,   306,   295,  -329,  -329,
    -329,    77,  -329,  -329,   308,   342,   113,  -329,  -329,  -329,
    -329,  -329,  -329,     8,  -329,  -329,  -329,  -329,    77,   355,
    -329,    91,    20,    77,   355,   226,   226,  -329,  -329,  -329,
    -329,   314,  -329,   315,   133,   309,  -329,   345,  -329,   350,
     206,  -329,   306,  -329,  -329,  -329,  -329,   342,  -329,  -329,
    -329,  -329,  -329,  -329,  -329,   355,  -329,   359,  -329,  -329,
    -329,   346,   347,  -329,   368,  -329,   379,    77,   336,  -329,
    -329,  -329,  -329,  -329,   355,   355,   306,   372,  -329,   339,
     337,  -329,  -329,  -329,  -329,    77,    77,   340,  -329,  -329,
      29,  -329,   341,  -329
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -329,  -329,  -329,   -11,  -119,   -18,  -139,  -328,  -329,   138,
     179,  -329,  -329,  -145,    -6,  -329,   260,    86,   332,    22,
     330,   -39,   333,  -130,  -329,  -329,  -155,  -329,  -329,   146,
    -279,  -329,  -329,  -329,  -329,  -329,  -329,   181,    63,  -329,
     196,     9,  -329,    64,  -329,    59,  -242,  -329,  -201,    39,
     202,   210,  -329,  -329,  -329,   -24,   -12,   296,   391,  -329,
    -329,   139,  -329,  -329,  -329,   348,  -329,    87,   144,   -95,
     -43,  -329,   397,  -329,   143,  -329,   177,  -329,  -149,   323,
    -329,  -329,  -329,   324,    19,   412,  -329,  -329,  -329,   106,
    -329,  -329,  -329,  -329,  -329,  -329,  -329,  -329,   102,  -329,
     257,  -329,   -34,  -329,  -154,   374,   -32,  -329,  -148,  -329,
    -329,  -329,   126,  -329,  -329,  -329,  -329,  -329,   455,  -329,
    -329,  -329,  -329,  -329,   428,   369,   297,   197
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -114
static const yytype_int16 yytable[] =
{
      66,    21,   101,    23,   102,   220,    64,   303,   230,   129,
     269,   133,   272,   135,    84,   239,    94,   388,   273,    50,
     156,   186,   187,   111,   112,   218,   113,    97,    98,    99,
     100,    66,    20,   348,   139,    38,   109,    64,   360,   349,
      20,   237,   132,   237,    29,    30,   237,   372,   396,     8,
     242,   210,    38,    38,    38,    38,   383,   157,   328,   411,
     306,     9,   308,   302,   311,   327,   328,   114,    59,    60,
      61,    62,   157,   147,    10,   361,   192,   115,   148,   149,
     232,    94,   233,   116,   117,   397,   118,   234,   119,   237,
     313,   365,   366,   120,   314,   372,   193,   172,   176,   200,
     217,   222,   431,   225,   227,   294,   295,   296,   110,   201,
     202,    -8,   111,   112,     1,   113,    20,     2,    66,   394,
     221,   395,    38,    38,    64,    -8,   219,    -8,   178,   178,
     110,   105,   105,    66,   111,   112,   232,   113,   233,    64,
     280,   280,   241,   234,   235,   236,   270,    84,    -8,    29,
      30,   353,   353,  -113,   271,   203,   114,   392,  -113,  -113,
      11,   204,   303,    12,   182,   205,   115,   307,    13,   309,
     183,    15,   116,   117,   220,   118,   188,   119,   114,   206,
     207,   384,   120,   428,   429,    66,    18,    66,   115,    66,
     139,    64,   272,    64,   218,    64,   386,   118,   273,   119,
     235,   236,   245,   246,   120,   249,  -113,   237,   247,    20,
     393,  -113,  -113,   302,   248,   399,   237,   237,   302,   375,
      43,    46,   237,    48,    49,   376,    51,   410,    86,   110,
      89,    95,    96,   111,   112,   103,   113,   337,   104,   237,
      26,   108,   356,    24,   237,   136,   412,   142,    25,    26,
      27,   195,   196,   197,   143,   237,   144,   146,   344,   158,
     159,   424,   302,   237,    28,   422,   423,    29,    30,   160,
     222,   198,   199,   227,   162,   165,   166,   114,    27,   208,
     302,   302,   289,   290,   291,   292,   293,   115,   237,   221,
     181,   209,   211,   116,   117,   219,   118,   237,   119,   212,
     213,   214,   228,   120,   277,   278,   237,   237,   279,   240,
      28,   233,   283,   284,   287,   241,   234,   285,   286,   390,
     315,   391,   400,   400,   288,   316,   242,   318,   319,   320,
     243,   244,   245,   246,   271,    66,   -20,   321,   247,   326,
      66,    64,   335,   336,   248,   338,    64,   297,   298,   299,
     300,   301,   341,   345,   342,   343,   346,   347,    50,   359,
     364,    51,   358,   363,   369,   370,   378,    24,   385,   379,
     380,    66,   381,   235,   236,   382,   407,    64,   249,   328,
      50,   250,   387,   406,    52,   403,   404,   413,   376,    24,
      66,    66,   414,   415,    53,    54,    64,    64,    55,   416,
      56,   421,    57,   425,   426,    58,    52,    59,    60,    61,
      62,   427,   430,   317,   433,   350,    53,    54,   231,   161,
      55,   163,    56,   351,    57,   322,   164,    58,    24,    59,
      60,    61,    62,    25,    26,    27,    24,   405,   408,   432,
     323,    25,    26,    27,   409,   417,   324,   229,   137,    28,
     170,   171,    29,    30,   325,   368,   367,    28,   174,   175,
      29,    30,   145,   185,   357,   215,   216,   134,   402,   398,
     169,   312,   389,    44,   107,     0,   180,   282,     0,   355
};

static const yytype_int16 yycheck[] =
{
      24,    13,    36,    15,    36,   144,    24,   208,   157,    52,
     165,    54,   166,    56,    25,   160,    28,   345,   166,     3,
      28,   116,   117,     7,     8,   144,    10,    33,    34,    35,
      36,    55,     3,     3,    58,    16,    48,    55,    28,     9,
       3,   160,    53,   162,    36,    37,   165,   326,    28,     3,
      20,    44,    33,    34,    35,    36,   335,    65,    29,   387,
     209,     3,   211,   208,   213,    28,    29,    51,    52,    53,
      54,    55,    65,    70,     0,    65,   119,    61,    75,    76,
       3,    93,     5,    67,    68,    65,    70,    10,    72,   208,
      69,    48,    49,    77,    73,   374,   120,   103,   104,    57,
     143,   144,    73,   146,   147,   200,   201,   202,     3,    67,
      68,    28,     7,     8,    11,    10,     3,    14,   142,    28,
     144,    30,   103,   104,   142,    42,   144,    44,   106,   107,
       3,    45,    46,   157,     7,     8,     3,    10,     5,   157,
     179,   180,     9,    10,    67,    68,    33,   158,    65,    36,
      37,   281,   282,    70,   166,    56,    51,   358,    75,    76,
      65,    62,   363,    65,     4,    66,    61,   210,    72,   212,
      10,    13,    67,    68,   313,    70,    71,    72,    51,    80,
      81,   336,    77,   425,   426,   209,    15,   211,    61,   213,
     214,   209,   346,   211,   313,   213,   341,    70,   346,    72,
      67,    68,    26,    27,    77,    72,    70,   326,    32,     3,
     359,    75,    76,   358,    38,   364,   335,   336,   363,     3,
      65,    16,   341,    69,    73,     9,     6,   382,     3,     3,
       3,     3,     3,     7,     8,    65,    10,   249,    65,   358,
      18,    28,   285,    12,   363,     3,   395,    64,    17,    18,
      19,    58,    59,    60,    63,   374,    72,    63,   270,    69,
      65,   416,   407,   382,    33,   414,   415,    36,    37,    66,
     313,    78,    79,   316,    66,    74,    72,    51,    19,    31,
     425,   426,   195,   196,   197,   198,   199,    61,   407,   313,
      76,    41,    46,    67,    68,   313,    70,   416,    72,    63,
      46,    69,     3,    77,    74,    65,   425,   426,    65,     3,
      33,     5,    10,    10,    69,     9,    10,    64,    71,   353,
      71,   353,   365,   366,    73,    69,    20,     7,     7,    65,
      24,    25,    26,    27,   346,   359,    64,    70,    32,    70,
     364,   359,    31,    31,    38,     3,   364,   203,   204,   205,
     206,   207,    64,    74,    65,    65,    65,    73,     3,    74,
      42,     6,    69,    69,    10,     8,    28,    12,    73,    65,
      65,   395,    65,    67,    68,    74,    31,   395,    72,    29,
       3,    75,    74,    74,    29,    71,    71,    28,     9,    12,
     414,   415,    46,    46,    39,    40,   414,   415,    43,    31,
      45,    65,    47,    31,    65,    50,    29,    52,    53,    54,
      55,    74,    72,   234,    73,   277,    39,    40,   158,    87,
      43,    91,    45,   277,    47,   244,    93,    50,    12,    52,
      53,    54,    55,    17,    18,    19,    12,   374,   379,   430,
     244,    17,    18,    19,   380,   406,   244,   151,    57,    33,
      34,    35,    36,    37,   244,   316,   313,    33,    34,    35,
      36,    37,    65,   115,   287,   142,   142,    55,   366,   363,
      96,   214,   346,    18,    46,    -1,   107,   180,    -1,   282
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    14,    83,    84,   197,   201,   202,     3,     3,
       0,    65,    65,    72,   198,    13,   196,   200,    15,   203,
       3,   138,   199,   138,    12,    17,    18,    19,    33,    36,
      37,    96,    97,    99,   101,   103,   105,   106,   166,   184,
     186,   188,   190,    65,   200,   205,    16,   204,    69,    73,
       3,     6,    29,    39,    40,    43,    45,    47,    50,    52,
      53,    54,    55,    85,    87,    88,   137,   140,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   174,
     175,   176,   177,   181,    85,    98,     3,    94,   100,     3,
     102,   107,   104,   136,   138,     3,     3,    96,    96,    96,
      96,   184,   188,    65,    65,    99,   206,   206,    28,   138,
       3,     7,     8,    10,    51,    61,    67,    68,    70,    72,
      77,    86,    87,   137,   147,   148,   149,   150,   151,   152,
     153,   157,    85,   152,   167,   152,     3,   140,   178,   137,
     182,   183,    64,    63,    72,   154,    63,    70,    75,    76,
     139,   141,   142,   144,   145,   146,    28,    65,    69,    65,
      66,   100,    66,   102,   104,    74,    72,   187,   195,   187,
      34,    35,    96,   185,    34,    35,    96,   189,   101,   207,
     207,    76,     4,    10,    92,   147,   151,   151,    71,   152,
     158,   159,   152,   137,   154,    58,    59,    60,    78,    79,
      57,    67,    68,    56,    62,    66,    80,    81,    31,    41,
      44,    46,    63,    46,    69,   161,   165,   152,    86,    87,
      88,   137,   152,   155,   156,   152,   143,   152,     3,   139,
     160,    98,     3,     5,    10,    67,    68,    86,    93,    95,
       3,     9,    20,    24,    25,    26,    27,    32,    38,    72,
      75,    90,    91,    95,   108,   109,   110,   111,   112,   113,
     114,   116,   117,   118,   119,   122,   132,   133,   134,   108,
      33,   138,   186,   190,   192,   193,   194,    74,    65,    65,
     103,   208,   208,    10,    10,    64,    71,    69,    73,   149,
     149,   149,   149,   149,   151,   151,   151,   150,   150,   150,
     150,   150,    95,   130,   171,   172,   160,   152,   160,   152,
     179,   160,   182,    69,    73,    71,    69,    92,     7,     7,
      65,    70,   119,   122,   132,   133,    70,    28,    29,   123,
     124,   125,   126,   127,   138,    31,    31,   138,     3,    89,
     135,    64,    65,    65,   138,    74,    65,    73,     3,     9,
      91,   111,   191,   105,   209,   209,   152,   158,    69,    74,
      28,    65,   173,    69,    42,    48,    49,   156,   143,    10,
       8,   115,   112,   120,   121,     3,     9,   131,    28,    65,
      65,    65,    74,   112,   108,    73,    95,    74,    89,   194,
     184,   188,   130,   160,    28,    30,    28,    65,   171,   160,
     152,   180,   180,    71,    71,   120,    74,    31,   127,   125,
     108,    89,   160,    28,    46,    46,    31,   131,   128,   129,
     130,    65,   160,   160,   108,    31,    65,    74,   128,   128,
      72,    73,   123,    73
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      
/* Line 1267 of yacc.c.  */
#line 1924 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 598 "parser.y"


int yyerror(const char *s) 
{
   char mensaje[100];

   if ( !strcmp( s, "parse error" ) )
      strcpy( mensaje, "Error de sintaxis" );
   else
      strcpy( mensaje, s );

   printf("Error en linea %d: %s\n", linea, mensaje);
   return 1;

}

int main(int argc, char* argv[]) {
	if ( argc > 1 ){
        printf("Archivo: %s\n", argv[1]);
        yyin = fopen( argv[1], "r" );
    }
            
    else{
        printf("Archivo: stdin\n");
        yyin = stdin;
    }

    yyparse();
	return 0;
}

