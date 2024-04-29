%{ 
#include <stdio.h>
#include "parser.tab.h"
extern int yyerror(const char *s);
#pragma warning(disable: 4996 6385 6011 4267 4244 4013 4312 4005 6387 26451)
int linea=1;
%}

INCIO_COMENTARIO \{|(\(\*)
FIN_COMENTARIO \}|(\*\))
PALABRA [^}]+

SIMBOLOS_ESCRITURA \@|\#|\+|\-|\*|\/|\<|\>|\^|\;|\=|\,|\(|\)|\[|\]|\:

IDENTIFICADOR [a-zA-Z][a-zA-Z0-9_]*

ORDINAL_TYPE_IDENTIFIER (integer)|(char)|(boolean)|(longint)

STRINGCHARACTER \'[^\'\n]*\'
STRINGQUOTES \'\'\'\'
SINGLESTRINGCHARACTER \'[^\'\n]\'

DIGIT [0-9]+
DIGITOS_HEX [0-9a-fA-F]+
SIGNO \+|\-
FACTOR [eE]{SIGNO}?{DIGIT}
ENTERO_SIN_SIGNO {DIGIT}|${DIGITOS_HEX}
REAL_SIN_SIGNO {DIGIT}(.{DIGIT}|{FACTOR})
NUMERO_SIN_SIGNO {ENTERO_SIN_SIGNO}|{REAL_SIN_SIGNO}
NUMERO_CON_SIGNO {SIGNO}?{NUMERO_SIN_SIGNO}
CONSTANTE_CADENA \"[^\"]+\"|\'[^\']+\'

LINEA [\n]
TABULADOR [\t]
ESPACIO [ ]
ELEMENTOS [a-zA-Z][a-zA-Z0-9]*



%s comentario

%option noyywrap
%option case-insensitive

%%

{SINGLESTRINGCHARACTER} {
  return quotedcharacterconstant;
}

{STRINGCHARACTER} {
  return quotedstringconstant;
}

{STRINGQUOTES} {
  return quotedstringconstant;
}


{ORDINAL_TYPE_IDENTIFIER} {
	return ordinaltypeidentifier;
}

{DIGIT} {
	return digitsequence;
}

{REAL_SIN_SIGNO} {
	return constantidentifier;
}

{NUMERO_SIN_SIGNO} {
	return unsignednumber;
}

{NUMERO_CON_SIGNO} {
	return signednumber;
}

"program" { return tk_program; }
"begin" { return tk_begin; }
"uses" { return tk_uses; }
"unit" { return tk_unit; }
"interface" { return tk_interface; }
"implementation" { return tk_implementation; }
"label" { return tk_label; }
"const" { return tk_const; }
"type" { return tk_type; }
"real" { return tk_real; }
"word" { return tk_word; }
"true" { return tk_true; }
"false" { return tk_false; }
"string" { return tk_string; }
"packed" { return tk_packed;}
"array" { return tk_array; }
"record" { return tk_record; }
"end" { return tk_end; }
"case" { return tk_case; }
"otherwise" { return tk_otherwise; }
"of" { return tk_of; }
"set" { return tk_set; }
"var" { return tk_var; }
"forward" { return tk_forward; }
"external" { return tk_external; }
"function" { return tk_function; }
"procedure" { return tk_procedure; }
"file" { return tk_file; }
"goto" { return tk_goto; }
"if" { return tk_if; }
"then" { return tk_then; }
"else" { return tk_else; }
"repeat" { return tk_repeat; }
"until" { return tk_until; }
"while" { return tk_while; }
"do" { return tk_do; }
"for" { return tk_for; }
"to" { return tk_to; }
"downto" { return tk_downto; }
"with" { return tk_with; }
"nil" { return tk_nil; }
"read" { return tk_read; }
"readln" { return tk_readln; }
"write" { return tk_write; }
"writeln" { return tk_writeln; }
"in" { return tk_in; }
"or" { return tk_or; }
"div" { return tk_div; }
"mod" { return tk_mod; }
"and" { return tk_and; }
"not" { return tk_not; }

{IDENTIFICADOR} {
	return identifier;
}

{LINEA} {
	linea++;
		}

[ \t] ;

{INCIO_COMENTARIO} BEGIN(comentario);

<comentario>{FIN_COMENTARIO} {
    BEGIN(INITIAL);
}

<comentario>{PALABRA} {
}

{SIMBOLOS_ESCRITURA} {
	return *yytext;
}

"<>"|"<="|">=" { return comparison_op; }
":=" { return assignment_op; }
".." { return range_op; }

. {
	yyerror("Caracter no valido");
}



%%
