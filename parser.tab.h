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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union
#line 76 "parser.y"
YYSTYPE {
    char *cadena;
    int numero;
}
/* Line 1529 of yacc.c.  */
#line 182 "parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

