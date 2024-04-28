/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union
#line 76 "parser.y"
YYSTYPE {
    char *cadena;
    int numero;
}
/* Line 1529 of yacc.c.  */
#line 188 "parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

