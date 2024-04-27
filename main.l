%{ 
#include <stdio.h>
#include "parser.tab.h"
extern int yyerror(const char *s);
#pragma warning(disable: 4996 6385 6011 4267 4244 4013 4312 4005 6387 26451)
%}

INCIO_COMENTARIO \{|(\(\*)
FIN_COMENTARIO \}|(\*\))
PALABRA [^}]+
PALABRAS_RESERVADAS (program)|(begin)|(uses)|(unit)|(interface)|(implementation)|(label)|(const)|(type)|(real)|(integer)|(longint)|(word)|(char)|(boolean)|(true)|(false)|(string)|(packed)|(array)|(record)|(end)|(case)|(otherwise)|(of)|(set)|(var)|(forward)|(external)|(function)|(procedure)|(file)|(goto)|(if)|(then)|(else)|(repeat)|(until)|(while)|(do)|(for)|(to)|(downto)|(with)|(nil)|(read)|(readln)|(write)|(writeln)|(in)|(or)|(div)|(mod)|(and)|(not)

SIMBOLOS_ESCRITURA \@|\#|\<\>|\<\=|\>\=|\+|\-|\*|\/|\<|\>|\^|\;|\=|\,|\(|\)|\[|\]|\:|\:\=|\.\.

IDENTIFICADOR [a-zA-Z][a-zA-Z0-9_]*

ORDINAL_TYPE_IDENTIFIER (integer)|(char)|(boolean)|(longint)

SIMPLE_EXPRESSION_OPERANDS -|<|>|<=|>=|<>|in;

DIGIT [0-9]+
DIGITOS_HEX [0-9a-fA-F]+
SIGNO \+|\-
FACTOR [eE]{SIGNO}?{DIGIT}
ENTERO_SIN_SIGNO {DIGIT}|${DIGITOS_HEX}
REAL_SIN_SIGNO {DIGIT}(.{DIGIT}|{FACTOR})
NUMERO_SIN_SIGNO {ENTERO_SIN_SIGNO}|{REAL_SIN_SIGNO}
NUMERO_CON_SIGNO {SIGNO}?{NUMERO_SIN_SIGNO}
CONSTANTE_CADENA \"[^\"]+\"|\'[^\']+\'
COMILLA \'

LINEA [\n]
TABULADOR [\t]
ESPACIO [ ]
ELEMENTOS [a-zA-Z][a-zA-Z0-9]*



%s comentario

%option noyywrap
%option case-insensitive

%%

{COMILLA} {
	return comilla;
}

{SIMPLE_EXPRESSION_OPERANDS} {
	return simpleexpressionoperands;
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

{PALABRAS_RESERVADAS} {
	return *yytext;
}

{IDENTIFICADOR} {
	return identifier;
}

{ESPACIO} {
	return space;
}

{LINEA} 	{
	return newline;
		}

{TABULADOR} 	{
	return tab;
		}

{INCIO_COMENTARIO} BEGIN(comentario);

<comentario>{FIN_COMENTARIO} {
    BEGIN(INITIAL);
}

<comentario>{PALABRA} {
}

{SIMBOLOS_ESCRITURA} {
	return *yytext;

}

{CONSTANTE_CADENA} {
}

. {
	printf("Caracter no valido: %s\n", yytext);
	yyerror("Caracter no valido");
}



%%