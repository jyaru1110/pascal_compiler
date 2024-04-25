%{ 
#include <stdio.h>
#include <iostream>
#include <unordered_map> 
#include <string>
#include <fstream>
#include "parser.tab.h"
#pragma warning(disable: 4996 6385 6011 4267 4244 4013 4312 4005 6387 26451)

using namespace std;
%}

INCIO_COMENTARIO \{|(\(\*)
FIN_COMENTARIO \}|(\*\))
PALABRA [^}]+
PALABRAS_RESERVADAS (program)|(begin)|(uses)|(unit)|(interface)|(implementation)|(label)|(const)|(type)|(real)|(integer)|(longint)|(word)|(char)|(boolean)|(true)|(false)|(string)|(packed)|(array)|(record)|(end)|(case)|(otherwise)|(of)|(set)|(var)|(forward)|(external)|(function)|(procedure)|(file)|(goto)|(if)|(then)|(else)|(repeat)|(until)|(while)|(do)|(for)|(to)|(downto)|(with)|(nil)|(read)|(readln)|(write)|(writeln)|(in)|(or)|(div)|(mod)|(and)|(not)

SIMBOLOS_ESCRITURA \@|\#|\<\>|\<\=|\>\=|\+|\-|\*|\/|\<|\>|\^|\;|\=|\,|\(|\)|\[|\]|\:|\:\=|\.\.

IDENTIFICADOR [a-zA-Z][a-zA-Z0-9_]*

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
ESPACIO [" "]
ELEMENTOS [a-zA-Z][a-zA-Z0-9]*

%s comentario

%option noyywrap
%option case-insensitive

%%

{PALABRAS_RESERVADAS} {
	return *yytext;
}

{IDENTIFICADOR} {
	return identifier
}

{ESPACIO} {
}

{LINEA} 	{
		}

{TABULADOR} 	{
		}

{ELEMENTOS}	{
		}


{INCIO_COMENTARIO} BEGIN(comentario);

<comentario>{FIN_COMENTARIO} {
    BEGIN(INITIAL);   
}

<comentario>{PALABRA} {
}

{SIMBOLOS_ESCRITURA} {

}

{NUMERO_CON_SIGNO} {

}

{CONSTANTE_CADENA} {
}

. {
	return *yytext;
}



%%