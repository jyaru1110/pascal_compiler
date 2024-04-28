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
     space = 265,
     newline = 266,
     tab = 267,
     comilla = 268,
     tk_program = 269,
     tk_begin = 270,
     tk_uses = 271,
     tk_unit = 272,
     tk_interface = 273,
     tk_implementation = 274,
     tk_label = 275,
     tk_const = 276,
     tk_type = 277,
     tk_real = 278,
     tk_word = 279,
     tk_true = 280,
     tk_false = 281,
     tk_string = 282,
     tk_packed = 283,
     tk_array = 284,
     tk_record = 285,
     tk_end = 286,
     tk_case = 287,
     tk_otherwise = 288,
     tk_of = 289,
     tk_set = 290,
     tk_var = 291,
     tk_forward = 292,
     tk_external = 293,
     tk_function = 294,
     tk_procedure = 295,
     tk_file = 296,
     tk_goto = 297,
     tk_if = 298,
     tk_then = 299,
     tk_else = 300,
     tk_repeat = 301,
     tk_until = 302,
     tk_while = 303,
     tk_do = 304,
     tk_for = 305,
     tk_to = 306,
     tk_downto = 307,
     tk_with = 308,
     tk_nil = 309,
     tk_read = 310,
     tk_readln = 311,
     tk_write = 312,
     tk_writeln = 313,
     tk_in = 314,
     tk_or = 315,
     tk_div = 316,
     tk_mod = 317,
     tk_and = 318,
     tk_not = 319,
     comparison_op = 320,
     assignment_op = 321,
     range_op = 322
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
#define space 265
#define newline 266
#define tab 267
#define comilla 268
#define tk_program 269
#define tk_begin 270
#define tk_uses 271
#define tk_unit 272
#define tk_interface 273
#define tk_implementation 274
#define tk_label 275
#define tk_const 276
#define tk_type 277
#define tk_real 278
#define tk_word 279
#define tk_true 280
#define tk_false 281
#define tk_string 282
#define tk_packed 283
#define tk_array 284
#define tk_record 285
#define tk_end 286
#define tk_case 287
#define tk_otherwise 288
#define tk_of 289
#define tk_set 290
#define tk_var 291
#define tk_forward 292
#define tk_external 293
#define tk_function 294
#define tk_procedure 295
#define tk_file 296
#define tk_goto 297
#define tk_if 298
#define tk_then 299
#define tk_else 300
#define tk_repeat 301
#define tk_until 302
#define tk_while 303
#define tk_do 304
#define tk_for 305
#define tk_to 306
#define tk_downto 307
#define tk_with 308
#define tk_nil 309
#define tk_read 310
#define tk_readln 311
#define tk_write 312
#define tk_writeln 313
#define tk_in 314
#define tk_or 315
#define tk_div 316
#define tk_mod 317
#define tk_and 318
#define tk_not 319
#define comparison_op 320
#define assignment_op 321
#define range_op 322




/* Copy the first part of user declarations.  */
#line 67 "parser.y"

#include <stdio.h>
#pragma warning(disable: 4996 6385 6011 4267 4244 4013 4312 4005 6387 26451)

extern FILE *yyin;
extern int yylex(void);
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
#line 244 "parser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 257 "parser.tab.c"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   435

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  118
/* YYNRULES -- Number of rules.  */
#define YYNRULES  241
/* YYNRULES -- Number of states.  */
#define YYNSTATES  401

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   322

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      75,    76,    81,    70,    72,    71,    79,    82,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    77,    68,
      85,    69,    84,     2,    80,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    73,     2,    74,    78,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    83,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    10,    14,    16,    18,    20,    22,
      24,    26,    29,    33,    38,    40,    43,    46,    48,    50,
      52,    54,    57,    60,    63,    66,    68,    72,    74,    78,
      81,    83,    86,    89,    91,    94,    97,    99,   102,   104,
     106,   109,   112,   114,   119,   121,   123,   125,   127,   129,
     131,   133,   135,   137,   139,   141,   146,   148,   150,   152,
     156,   160,   162,   164,   166,   168,   171,   174,   177,   180,
     182,   189,   191,   194,   196,   199,   203,   205,   209,   214,
     216,   219,   221,   223,   227,   231,   236,   243,   245,   249,
     254,   260,   262,   266,   268,   272,   274,   278,   281,   283,
     285,   290,   292,   295,   297,   301,   303,   306,   308,   310,
     312,   314,   316,   320,   322,   326,   329,   331,   333,   336,
     338,   340,   342,   344,   348,   351,   353,   355,   357,   359,
     361,   365,   369,   373,   377,   381,   384,   387,   389,   393,
     397,   401,   403,   407,   411,   415,   419,   423,   425,   427,
     430,   434,   436,   440,   442,   444,   446,   448,   452,   455,
     457,   461,   463,   467,   471,   475,   478,   480,   482,   483,
     485,   487,   489,   493,   497,   499,   502,   505,   507,   509,
     511,   513,   517,   519,   523,   525,   527,   532,   539,   545,
     552,   559,   567,   571,   573,   577,   581,   583,   587,   589,
     591,   593,   598,   603,   612,   621,   623,   625,   627,   632,
     634,   638,   640,   645,   647,   649,   651,   655,   657,   658,
     663,   665,   667,   669,   675,   677,   679,   681,   683,   685,
     687,   692,   696,   700,   702,   706,   709,   710,   714,   718,
     719,   721
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      87,     0,    -1,   200,    68,   199,    99,    -1,     6,    -1,
      13,    95,    13,    -1,     3,    -1,     3,    -1,     3,    -1,
       3,    -1,     3,    -1,     4,    -1,    13,    13,    -1,    13,
      95,    13,    -1,     3,    69,    98,    68,    -1,     3,    -1,
      70,     7,    -1,    71,     7,    -1,     5,    -1,    89,    -1,
      96,    -1,   109,    -1,   108,    99,    -1,   106,    99,    -1,
     104,    99,    -1,   102,    99,    -1,   100,    -1,    20,   101,
      68,    -1,    88,    -1,    88,    72,   101,    -1,    21,   103,
      -1,    97,    -1,    97,   103,    -1,    22,   105,    -1,   110,
      -1,   110,   105,    -1,    36,   107,    -1,   139,    -1,   139,
     107,    -1,   187,    -1,   191,    -1,   108,   191,    -1,   108,
     187,    -1,   169,    -1,     3,    69,   111,    68,    -1,   112,
      -1,   121,    -1,   137,    -1,   115,    -1,   113,    -1,   116,
      -1,   114,    -1,    23,    -1,   120,    -1,   119,    -1,     9,
      -1,    27,    73,   118,    74,    -1,   117,    -1,     3,    -1,
       8,    -1,    75,   141,    76,    -1,    98,    67,    98,    -1,
     122,    -1,   135,    -1,   136,    -1,   125,    -1,    28,   122,
      -1,    28,   135,    -1,    28,   136,    -1,    28,   125,    -1,
      93,    -1,    29,    73,   123,    74,    34,   111,    -1,   124,
      -1,   124,   123,    -1,   115,    -1,    30,    31,    -1,    30,
     126,    31,    -1,   127,    -1,   127,    68,   130,    -1,   127,
      68,   130,    68,    -1,   130,    -1,   130,    68,    -1,   128,
      -1,   129,    -1,   129,    68,   128,    -1,   141,    77,   111,
      -1,    32,   134,    34,   131,    -1,    32,     3,    77,   134,
      34,   131,    -1,   132,    -1,   132,    68,   131,    -1,   133,
      77,    75,    76,    -1,   133,    77,    75,   126,    76,    -1,
      98,    -1,    98,    72,   133,    -1,     9,    -1,    35,    34,
     115,    -1,    41,    -1,    41,    34,   111,    -1,    78,   138,
      -1,    94,    -1,    92,    -1,   141,    77,   111,    68,    -1,
     143,    -1,   143,   142,    -1,     3,    -1,     3,    72,   141,
      -1,   144,    -1,   144,   142,    -1,     3,    -1,   145,    -1,
     147,    -1,   148,    -1,   149,    -1,    73,   146,    74,    -1,
     155,    -1,   155,    72,   146,    -1,    79,     3,    -1,    78,
      -1,    78,    -1,    80,   140,    -1,   140,    -1,   151,    -1,
     156,    -1,   160,    -1,    75,   155,    76,    -1,    64,   150,
      -1,     8,    -1,    89,    -1,    54,    -1,     7,    -1,   150,
      -1,   150,    81,   152,    -1,   150,    82,   152,    -1,   150,
      61,   152,    -1,   150,    62,   152,    -1,   150,    63,   152,
      -1,    70,   154,    -1,    71,   154,    -1,   154,    -1,   152,
      70,   154,    -1,   152,    71,   154,    -1,   152,    60,   154,
      -1,   152,    -1,   153,    65,   153,    -1,   153,    69,   153,
      -1,   153,    83,   153,    -1,   153,    84,   153,    -1,   153,
      85,   153,    -1,   153,    -1,    90,    -1,    90,   157,    -1,
      75,   158,    76,    -1,   159,    -1,   159,    72,   158,    -1,
     155,    -1,   140,    -1,    91,    -1,    90,    -1,    73,   161,
      74,    -1,    73,    74,    -1,   162,    -1,   162,    72,   161,
      -1,   155,    -1,   155,    67,   155,    -1,    88,    67,   164,
      -1,    88,    67,   168,    -1,    88,    67,    -1,   164,    -1,
     168,    -1,    -1,   165,    -1,   166,    -1,   167,    -1,   140,
      66,   155,    -1,    90,    66,   155,    -1,    91,    -1,    91,
     157,    -1,    42,    88,    -1,   169,    -1,   171,    -1,   177,
      -1,   184,    -1,    15,   170,    31,    -1,   163,    -1,   163,
      68,   170,    -1,   172,    -1,   173,    -1,    43,   155,    44,
     163,    -1,    43,   155,    44,   163,    45,   163,    -1,    32,
     155,    34,   174,    31,    -1,    32,   155,    34,   174,   176,
      31,    -1,    32,   155,    34,   174,    68,    31,    -1,    32,
     155,    34,   174,   176,    68,    31,    -1,   175,    72,   174,
      -1,   175,    -1,   133,    77,   163,    -1,    98,    72,   133,
      -1,    98,    -1,    68,    33,   163,    -1,   178,    -1,   179,
      -1,   180,    -1,    46,   170,    47,   155,    -1,    48,   155,
      49,   163,    -1,    50,   181,    66,   182,    51,   183,    49,
     163,    -1,    50,   181,    66,   182,    52,   183,    49,   163,
      -1,   143,    -1,   155,    -1,   155,    -1,    53,   185,    49,
     163,    -1,   186,    -1,   186,    72,   185,    -1,   140,    -1,
     189,    68,   188,    68,    -1,    99,    -1,    37,    -1,    38,
      -1,    40,     3,   190,    -1,   198,    -1,    -1,   193,    68,
     192,    68,    -1,    99,    -1,    37,    -1,    38,    -1,    39,
       3,   190,    77,   194,    -1,     9,    -1,   114,    -1,    94,
      -1,   196,    -1,   189,    -1,   193,    -1,    36,   141,    77,
      92,    -1,   141,    77,    92,    -1,   195,    68,   197,    -1,
     195,    -1,    75,   197,    76,    -1,   203,    68,    -1,    -1,
      14,     3,   201,    -1,    75,   202,    76,    -1,    -1,   141,
      -1,    16,   141,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    83,    83,    87,    90,    93,    96,    99,   102,   105,
     108,   109,   112,   115,   118,   119,   120,   121,   122,   123,
     126,   127,   128,   129,   130,   131,   134,   137,   138,   141,
     144,   145,   148,   151,   152,   155,   158,   159,   162,   163,
     164,   165,   169,   172,   175,   176,   177,   180,   181,   182,
     185,   188,   191,   192,   193,   196,   197,   200,   204,   207,
     210,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     224,   227,   228,   231,   234,   235,   238,   239,   240,   241,
     242,   245,   248,   249,   252,   255,   256,   259,   260,   263,
     264,   267,   268,   271,   274,   277,   278,   281,   282,   285,
     288,   291,   292,   296,   297,   300,   301,   304,   307,   308,
     309,   310,   313,   316,   317,   320,   323,   326,   329,   330,
     331,   332,   333,   334,   335,   338,   339,   340,   341,   344,
     345,   346,   347,   348,   349,   352,   353,   354,   357,   358,
     359,   360,   363,   364,   365,   366,   367,   368,   371,   372,
     375,   378,   379,   382,   383,   384,   385,   388,   389,   392,
     393,   395,   396,   399,   400,   401,   402,   403,   404,   407,
     408,   409,   412,   413,   415,   416,   419,   422,   423,   424,
     425,   428,   430,   431,   434,   435,   438,   439,   442,   443,
     444,   445,   448,   449,   452,   454,   455,   458,   461,   462,
     463,   466,   469,   472,   473,   476,   479,   482,   485,   488,
     489,   492,   495,   498,   499,   500,   503,   506,   507,   510,
     513,   514,   515,   518,   521,   522,   523,   526,   527,   528,
     531,   532,   535,   536,   539,   542,   543,   546,   549,   550,
     553,   556
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "identifier", "anychar", "signednumber",
  "digitsequence", "constantidentifier", "unsignednumber",
  "ordinaltypeidentifier", "space", "newline", "tab", "comilla",
  "tk_program", "tk_begin", "tk_uses", "tk_unit", "tk_interface",
  "tk_implementation", "tk_label", "tk_const", "tk_type", "tk_real",
  "tk_word", "tk_true", "tk_false", "tk_string", "tk_packed", "tk_array",
  "tk_record", "tk_end", "tk_case", "tk_otherwise", "tk_of", "tk_set",
  "tk_var", "tk_forward", "tk_external", "tk_function", "tk_procedure",
  "tk_file", "tk_goto", "tk_if", "tk_then", "tk_else", "tk_repeat",
  "tk_until", "tk_while", "tk_do", "tk_for", "tk_to", "tk_downto",
  "tk_with", "tk_nil", "tk_read", "tk_readln", "tk_write", "tk_writeln",
  "tk_in", "tk_or", "tk_div", "tk_mod", "tk_and", "tk_not",
  "comparison_op", "assignment_op", "range_op", "';'", "'='", "'+'", "'-'",
  "','", "'['", "']'", "'('", "')'", "':'", "'^'", "'.'", "'@'", "'*'",
  "'/'", "'in'", "'>'", "'<'", "$accept", "program", "label",
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
  "optionalprogramheadingparameters", "programparameters", "usesclause", 0
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
     315,   316,   317,   318,   319,   320,   321,   322,    59,    61,
      43,    45,    44,    91,    93,    40,    41,    58,    94,    46,
      64,    42,    47,   105,    62,    60
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    95,    96,    97,    98,    98,    98,    98,    98,    98,
      99,    99,    99,    99,    99,    99,   100,   101,   101,   102,
     103,   103,   104,   105,   105,   106,   107,   107,   108,   108,
     108,   108,   109,   110,   111,   111,   111,   112,   112,   112,
     113,   114,   115,   115,   115,   116,   116,   117,   118,   119,
     120,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     122,   123,   123,   124,   125,   125,   126,   126,   126,   126,
     126,   127,   128,   128,   129,   130,   130,   131,   131,   132,
     132,   133,   133,   134,   135,   136,   136,   137,   137,   138,
     139,   140,   140,   141,   141,   142,   142,   143,   144,   144,
     144,   144,   145,   146,   146,   147,   148,   149,   150,   150,
     150,   150,   150,   150,   150,   151,   151,   151,   151,   152,
     152,   152,   152,   152,   152,   153,   153,   153,   154,   154,
     154,   154,   155,   155,   155,   155,   155,   155,   156,   156,
     157,   158,   158,   159,   159,   159,   159,   160,   160,   161,
     161,   162,   162,   163,   163,   163,   163,   163,   163,   164,
     164,   164,   165,   165,   166,   166,   167,   168,   168,   168,
     168,   169,   170,   170,   171,   171,   172,   172,   173,   173,
     173,   173,   174,   174,   175,   133,   133,   176,   177,   177,
     177,   178,   179,   180,   180,   181,   182,   183,   184,   185,
     185,   186,   187,   188,   188,   188,   189,   190,   190,   191,
     192,   192,   192,   193,   194,   194,   194,   195,   195,   195,
     196,   196,   197,   197,   198,   199,   199,   200,   201,   201,
     202,   203
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     2,     3,     4,     1,     2,     2,     1,     1,     1,
       1,     2,     2,     2,     2,     1,     3,     1,     3,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     1,     1,
       2,     2,     1,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     1,     1,     3,
       3,     1,     1,     1,     1,     2,     2,     2,     2,     1,
       6,     1,     2,     1,     2,     3,     1,     3,     4,     1,
       2,     1,     1,     3,     3,     4,     6,     1,     3,     4,
       5,     1,     3,     1,     3,     1,     3,     2,     1,     1,
       4,     1,     2,     1,     3,     1,     2,     1,     1,     1,
       1,     1,     3,     1,     3,     2,     1,     1,     2,     1,
       1,     1,     1,     3,     2,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     2,     2,     1,     3,     3,
       3,     1,     3,     3,     3,     3,     3,     1,     1,     2,
       3,     1,     3,     1,     1,     1,     1,     3,     2,     1,
       3,     1,     3,     3,     3,     2,     1,     1,     0,     1,
       1,     1,     3,     3,     1,     2,     2,     1,     1,     1,
       1,     3,     1,     3,     1,     1,     4,     6,     5,     6,
       6,     7,     3,     1,     3,     3,     1,     3,     1,     1,
       1,     4,     4,     8,     8,     1,     1,     1,     4,     1,
       3,     1,     4,     1,     1,     1,     3,     1,     0,     4,
       1,     1,     1,     5,     1,     1,     1,     1,     1,     1,
       4,     3,     3,     1,     3,     2,     0,     3,     3,     0,
       1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,   239,     1,   236,     0,   237,     0,
       0,     0,   103,   240,     0,   241,   168,     0,     0,     0,
       0,     0,     0,     2,    25,     0,     0,     0,     0,    20,
      42,    38,     0,    39,     0,   235,     0,   238,     5,     3,
       0,     0,     0,   168,     0,     0,     0,     0,     0,   174,
       0,   101,   182,   166,   169,   170,   171,   167,   177,     0,
     178,   184,   185,   179,   198,   199,   200,   180,    27,     0,
       0,    30,    29,     0,    32,    33,    35,    36,     0,   218,
     218,    24,    23,    22,    21,    38,    39,     0,     0,   104,
       5,   128,   125,     0,   127,     0,     0,     0,     0,     0,
       0,   126,   148,   119,   129,   120,   141,   147,   137,     0,
     121,   122,   176,     0,     0,     0,   107,   205,     0,   211,
       0,   209,   165,     0,     0,   175,     0,     0,   116,     0,
     102,   105,   108,   109,   110,   111,   168,   181,     0,    26,
       0,    31,     0,    34,    37,     0,     0,     0,   217,   216,
     214,   215,   213,     0,   221,   222,   220,     0,    10,     0,
       0,   124,   135,   136,   158,   161,     0,   159,     0,   118,
     149,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   168,     0,   168,     0,   168,
       0,   163,   164,   173,   148,   155,   119,   153,     0,   151,
     172,     0,   113,   115,   106,   183,    28,    14,    17,     0,
       0,     0,    18,    19,     0,     8,    54,    51,     0,     0,
       0,     0,     0,    95,     0,     0,    69,    98,     0,     0,
      44,    48,    50,    47,    49,    56,    53,    52,    45,    61,
      64,    62,    63,    46,     0,     0,     0,   228,   229,   233,
     227,     0,     0,   212,   219,    11,     4,     0,   157,     0,
     123,   132,   133,   134,   130,   131,   140,   138,   139,   142,
     143,   144,   145,   146,    91,     0,     0,   193,   186,   201,
     202,   206,     0,   208,   210,   150,     0,   112,     0,     0,
      15,    16,    13,     0,    65,    68,    66,    67,     0,    74,
       0,     0,    76,    81,    82,    79,     0,     0,     0,     0,
       7,    99,    97,     0,    43,   100,     0,     0,     0,   234,
       9,   224,   226,   225,   223,   162,   160,     0,   168,   188,
       0,     0,     0,   168,     0,     0,   152,   114,     4,    58,
       0,    73,     0,    71,     0,    93,     0,    75,     0,     0,
      80,     0,    94,    96,    59,    60,     0,   231,   232,    92,
     194,   190,   168,   189,     0,   192,   187,   207,     0,     0,
      55,     0,    72,     0,     0,    77,    83,    84,   230,   197,
     191,   168,   168,     0,     0,    85,    87,     0,    78,   203,
     204,    70,     0,     0,     0,    86,    88,     0,    89,     0,
      90
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    47,   101,   102,    49,   311,   226,   227,   160,
     213,    71,   228,    23,    24,    69,    25,    72,    26,    74,
      27,    76,    28,    29,    75,   229,   230,   231,   232,   233,
     234,   235,   340,   236,   237,   238,   239,   342,   343,   240,
     301,   302,   303,   304,   305,   385,   386,   387,   346,   241,
     242,   243,   312,    77,   103,   306,   130,    51,   131,   132,
     201,   133,   134,   135,   104,   105,   106,   107,   108,   165,
     110,   170,   198,   199,   111,   166,   167,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,   276,   277,
     331,    63,    64,    65,    66,   118,   282,   368,    67,   120,
     121,    31,   153,    32,   147,    33,   157,    34,   324,   249,
     250,   251,   148,    10,     3,     8,    14,    11
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -368
static const yytype_int16 yypact[] =
{
      31,    43,    64,   -12,    -2,  -368,    61,    60,  -368,    60,
     260,    36,    37,  -368,    35,  -368,   332,   107,   112,   116,
      60,   125,   132,  -368,  -368,   260,   260,   260,   260,  -368,
    -368,  -368,    88,  -368,    92,  -368,    60,  -368,   131,  -368,
      67,   107,    67,   332,    67,   140,   140,   100,   102,   111,
     122,    80,   121,  -368,  -368,  -368,  -368,  -368,  -368,   163,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,   124,   130,
     134,   112,  -368,   136,  -368,   116,  -368,    60,   123,   133,
     133,  -368,  -368,  -368,  -368,  -368,  -368,   379,   387,  -368,
     148,  -368,  -368,    47,  -368,    90,    90,    90,   215,    67,
     140,  -368,   111,  -368,   150,  -368,   -22,   176,  -368,   182,
    -368,  -368,  -368,   180,   183,   189,  -368,  -368,   177,  -368,
     193,   157,   345,    67,    75,  -368,    67,    67,  -368,   243,
    -368,    80,  -368,  -368,  -368,  -368,   332,  -368,   107,  -368,
      63,  -368,   298,  -368,  -368,   298,    56,   170,  -368,  -368,
    -368,  -368,  -368,   186,  -368,  -368,  -368,   187,  -368,   237,
     245,  -368,  -368,  -368,  -368,   197,   191,   184,   192,  -368,
    -368,    90,    90,    90,    90,    90,    90,    90,    90,    67,
      67,    67,    67,    67,    63,   332,    67,   332,    67,   332,
     140,  -368,  -368,  -368,   111,  -368,  -368,  -368,   195,   200,
    -368,   199,   202,  -368,  -368,  -368,  -368,  -368,  -368,    47,
     270,   271,  -368,  -368,   216,   220,  -368,  -368,   210,    95,
     218,    68,   258,   259,    60,   291,  -368,  -368,   235,   236,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,  -368,  -368,   238,    60,   228,  -368,  -368,   240,
    -368,   233,    44,  -368,  -368,  -368,  -368,    67,  -368,    67,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,  -368,  -368,   242,   239,     1,   247,   265,  -368,
    -368,  -368,   -23,  -368,  -368,  -368,    75,  -368,    67,   302,
    -368,  -368,  -368,   312,  -368,  -368,  -368,  -368,    52,  -368,
      82,   293,   254,  -368,   261,   262,   255,    52,   298,   269,
    -368,  -368,  -368,    63,  -368,  -368,   257,   291,    56,  -368,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,    63,   332,  -368,
      74,    13,    63,   332,    67,    67,  -368,  -368,  -368,  -368,
     263,  -368,   275,    52,   273,  -368,   297,  -368,   304,    60,
    -368,   298,  -368,  -368,  -368,  -368,   291,  -368,  -368,  -368,
    -368,  -368,   332,  -368,   320,  -368,  -368,  -368,   305,   306,
    -368,   319,  -368,   347,    63,   289,  -368,  -368,  -368,  -368,
    -368,   332,   332,   298,   324,  -368,   294,   282,  -368,  -368,
    -368,  -368,    63,    63,   286,  -368,  -368,    18,  -368,   287,
    -368
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -368,  -368,    -6,  -126,   -10,  -101,  -304,  -368,   115,   172,
    -368,  -368,  -130,   165,  -368,   232,  -368,   308,  -368,   309,
    -368,   313,  -368,  -368,  -368,  -144,  -368,  -368,   137,  -264,
    -368,  -368,  -368,  -368,  -368,  -368,   164,    49,  -368,   167,
      -1,  -368,    48,  -368,    55,  -367,  -368,  -175,    32,   185,
     194,  -368,  -368,  -368,   -16,    -5,   279,   361,  -368,  -368,
     126,  -368,  -368,  -368,   316,  -368,    62,   161,   -60,   -37,
    -368,   363,   135,  -368,  -368,   169,  -368,  -167,   300,  -368,
    -368,  -368,   307,    14,   -26,  -368,  -368,  -368,    98,  -368,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,    85,  -368,   241,
    -368,   404,  -368,  -138,   353,   406,  -368,  -134,  -368,  -368,
    -368,   117,  -368,  -368,  -368,  -368,  -368,  -368
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -108
static const yytype_int16 yytable[] =
{
      50,   244,    13,   109,    15,   113,    48,   115,   247,   275,
     214,    68,   248,   357,   212,    78,   212,   114,   278,   212,
     280,    12,   283,   195,    30,   395,   396,    50,   334,   335,
     119,    89,   329,    48,   341,   112,   162,   163,   176,    30,
      30,    30,    30,   352,   363,     1,     4,   320,   177,   178,
     300,   158,   378,   321,   274,   207,     6,   208,   212,    12,
     159,   216,   168,    12,     5,   209,   207,   217,   208,   330,
      90,    12,    78,     7,    91,    92,   209,     9,    38,   341,
      93,   364,    91,    92,   169,   344,   193,   197,    93,   200,
     202,   345,   245,    90,   398,    21,    22,    91,    92,   299,
     300,    30,    30,    93,    35,   361,    50,   362,   196,    36,
     205,    37,    48,    39,   194,    70,   266,   267,   268,    73,
      50,    94,   210,   211,   220,   221,    48,   224,    79,    94,
     222,    95,    68,   210,   211,    80,   223,    96,    97,    95,
      98,   246,    99,   116,    94,    96,    97,   100,    98,   279,
      99,   281,   359,   127,    95,   100,    87,   275,   128,   129,
      88,   360,    -6,    98,   353,    99,   366,   122,   123,    50,
     100,    50,   212,    50,   119,    48,    -6,    48,    -6,    48,
     247,   212,   212,   355,   248,   195,   124,   212,   126,   136,
      81,    82,    83,    84,   137,   379,   138,   274,   139,    -6,
     145,   212,   274,   140,  -107,   142,   212,   377,   146,  -107,
    -107,   171,   172,   173,   389,   390,   184,   212,    90,   309,
     325,  -107,    91,    92,   185,   212,  -107,  -107,    93,   190,
     186,   174,   175,   261,   262,   263,   264,   265,   187,   391,
     316,   179,   189,   188,   274,   180,   203,   252,   212,   197,
     255,   202,   152,   156,   253,   254,   259,   212,   256,   181,
     182,   183,   274,   274,   257,   258,   212,   212,   260,    94,
     196,   285,   286,   287,   288,    16,   194,   290,   291,    95,
      17,    18,    19,   293,   292,    96,    97,   -14,    98,   164,
      99,   298,   307,   308,   310,   100,    20,   367,   367,    21,
      22,   215,   313,   208,   314,   317,   315,   216,   318,   319,
     333,   209,    50,   246,   327,   338,   328,    50,    48,   332,
     339,   217,   348,    48,   347,   218,   219,   220,   221,   349,
     350,   374,   351,   222,   356,    38,   300,   370,    39,   223,
     269,   270,   271,   272,   273,   354,    50,    16,    38,   371,
     373,   380,    48,   383,   381,   382,   345,   388,   392,   394,
      16,   397,   393,   400,    40,    50,    50,   322,   210,   211,
     206,    48,    48,   224,    41,    42,   225,    40,    43,   141,
      44,   289,    45,   294,   143,    46,   295,    41,    42,   323,
     144,    43,   372,    44,    16,    45,   399,   376,    46,    17,
      18,    19,    16,   375,   296,   384,   117,    17,    18,    19,
     204,   161,   125,   297,   337,    20,   150,   151,    21,    22,
     369,   336,   191,    20,   154,   155,    21,    22,   326,   192,
     365,   284,    85,   149,    86,   358
};

static const yytype_uint16 yycheck[] =
{
      16,   145,     7,    40,     9,    42,    16,    44,   146,   184,
     140,    17,   146,   317,   140,    20,   142,    43,   185,   145,
     187,     3,   189,   124,    10,   392,   393,    43,    51,    52,
      46,    36,    31,    43,   298,    41,    96,    97,    60,    25,
      26,    27,    28,   307,    31,    14,     3,     3,    70,    71,
      32,     4,   356,     9,   184,     3,    68,     5,   184,     3,
      13,     9,    99,     3,     0,    13,     3,    23,     5,    68,
       3,     3,    77,    75,     7,     8,    13,    16,     3,   343,
      13,    68,     7,     8,   100,     3,   123,   124,    13,   126,
     127,     9,    36,     3,    76,    39,    40,     7,     8,    31,
      32,    87,    88,    13,    68,    31,   122,    33,   124,    72,
     136,    76,   122,     6,   124,     3,   176,   177,   178,     3,
     136,    54,    70,    71,    29,    30,   136,    75,     3,    54,
      35,    64,   138,    70,    71,     3,    41,    70,    71,    64,
      73,   146,    75,     3,    54,    70,    71,    80,    73,   186,
      75,   188,   327,    73,    64,    80,    68,   332,    78,    79,
      68,   328,    31,    73,   308,    75,   333,    67,    66,   185,
      80,   187,   298,   189,   190,   185,    45,   187,    47,   189,
     318,   307,   308,   313,   318,   286,    75,   313,    66,    68,
      25,    26,    27,    28,    31,   362,    72,   327,    68,    68,
      77,   327,   332,    69,    73,    69,   332,   351,    75,    78,
      79,    61,    62,    63,   381,   382,    34,   343,     3,   224,
     257,    73,     7,     8,    44,   351,    78,    79,    13,    72,
      47,    81,    82,   171,   172,   173,   174,   175,    49,   383,
     245,    65,    49,    66,   374,    69,     3,    77,   374,   286,
      13,   288,    87,    88,    68,    68,    72,   383,    13,    83,
      84,    85,   392,   393,    67,    74,   392,   393,    76,    54,
     286,    76,    72,    74,    72,    15,   286,     7,     7,    64,
      20,    21,    22,    73,    68,    70,    71,    67,    73,    74,
      75,    73,    34,    34,     3,    80,    36,   334,   335,    39,
      40,     3,    67,     5,    68,    77,    68,     9,    68,    76,
      45,    13,   328,   318,    72,    13,    77,   333,   328,    72,
       8,    23,    68,   333,    31,    27,    28,    29,    30,    68,
      68,    34,    77,    35,    77,     3,    32,    74,     6,    41,
     179,   180,   181,   182,   183,    76,   362,    15,     3,    74,
      77,    31,   362,    34,    49,    49,     9,    68,    34,    77,
      15,    75,    68,    76,    32,   381,   382,   252,    70,    71,
     138,   381,   382,    75,    42,    43,    78,    32,    46,    71,
      48,   209,    50,   219,    75,    53,   219,    42,    43,   252,
      77,    46,   343,    48,    15,    50,   397,   349,    53,    20,
      21,    22,    15,   348,   219,   373,    45,    20,    21,    22,
     131,    95,    49,   219,   288,    36,    37,    38,    39,    40,
     335,   286,   122,    36,    37,    38,    39,    40,   259,   122,
     332,   190,    28,    80,    28,   318
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    87,   200,     3,     0,    68,    75,   201,    16,
     199,   203,     3,   141,   202,   141,    15,    20,    21,    22,
      36,    39,    40,    99,   100,   102,   104,   106,   108,   109,
     169,   187,   189,   191,   193,    68,    72,    76,     3,     6,
      32,    42,    43,    46,    48,    50,    53,    88,    90,    91,
     140,   143,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   177,   178,   179,   180,   184,    88,   101,
       3,    97,   103,     3,   105,   110,   107,   139,   141,     3,
       3,    99,    99,    99,    99,   187,   191,    68,    68,   141,
       3,     7,     8,    13,    54,    64,    70,    71,    73,    75,
      80,    89,    90,   140,   150,   151,   152,   153,   154,   155,
     156,   160,    88,   155,   170,   155,     3,   143,   181,   140,
     185,   186,    67,    66,    75,   157,    66,    73,    78,    79,
     142,   144,   145,   147,   148,   149,    68,    31,    72,    68,
      69,   103,    69,   105,   107,    77,    75,   190,   198,   190,
      37,    38,    99,   188,    37,    38,    99,   192,     4,    13,
      95,   150,   154,   154,    74,   155,   161,   162,   155,   140,
     157,    61,    62,    63,    81,    82,    60,    70,    71,    65,
      69,    83,    84,    85,    34,    44,    47,    49,    66,    49,
      72,   164,   168,   155,    90,    91,   140,   155,   158,   159,
     155,   146,   155,     3,   142,   170,   101,     3,     5,    13,
      70,    71,    89,    96,    98,     3,     9,    23,    27,    28,
      29,    30,    35,    41,    75,    78,    93,    94,    98,   111,
     112,   113,   114,   115,   116,   117,   119,   120,   121,   122,
     125,   135,   136,   137,   111,    36,   141,   189,   193,   195,
     196,   197,    77,    68,    68,    13,    13,    67,    74,    72,
      76,   152,   152,   152,   152,   152,   154,   154,   154,   153,
     153,   153,   153,   153,    98,   133,   174,   175,   163,   155,
     163,   155,   182,   163,   185,    76,    72,    74,    72,    95,
       7,     7,    68,    73,   122,   125,   135,   136,    73,    31,
      32,   126,   127,   128,   129,   130,   141,    34,    34,   141,
       3,    92,   138,    67,    68,    68,   141,    77,    68,    76,
       3,     9,    94,   114,   194,   155,   161,    72,    77,    31,
      68,   176,    72,    45,    51,    52,   158,   146,    13,     8,
     118,   115,   123,   124,     3,     9,   134,    31,    68,    68,
      68,    77,   115,   111,    76,    98,    77,    92,   197,   133,
     163,    31,    33,    31,    68,   174,   163,   155,   183,   183,
      74,    74,   123,    77,    34,   130,   128,   111,    92,   163,
      31,    49,    49,    34,   134,   131,   132,   133,    68,   163,
     163,   111,    34,    68,    77,   131,   131,    75,    76,   126,
      76
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
#line 1893 "parser.tab.c"
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


#line 591 "parser.y"


int yyerror(const char *s) 
{
   printf('Error %s\n', s);
   return 0;
}

int main(int argc, char* argv[])
{
	if ( argc > 0 ){
      yyin = fopen( argv[0], 'r' );
    }
            
    else
            yyin = stdin;

    yyparse();
	return 0;
}

