
%{ 
#include <stdio.h>
#include <iostream>

using namespace std;
%}


%option noyywrap
%option outfile="scanner.cpp"
%option case-insensitive

%%

"print" {
  printf("ES UNA PALABRA RESERVADA %s \n", yytext);
}

"abs" {
  printf("ES UNA PALABRA RESERVADA %s \n", yytext);
}

"max" {
  printf("ES UNA PALABRA RESERVADA %s \n", yytext);
}

\"[^\n]*\" {
  printf("ES UNA CADENA DE TEXTO %s \n", yytext);
}

[a-zA-Z][a-zA-Z0-9]* {
  printf("ES UN IDENTIFICADOR %s \n", yytext);
}

[0-9]+ {
  printf("ES UN NUMERO %s \n", yytext);
}

[\+\-\*\/\=\,\;\(\)] {
  printf("ES UN SIMBOLO %s \n", yytext);
}

. {}

%%

int main(int argc, char* argv[])
{
	if(argc > 1)
	{
		++argv;
		yyin = fopen(argv[0], "rt");
		
		if(!yyin)
		{
			printf("El archivo %s no puede ser abierto. Entrada tradicional.\n", argv[0]);
			yyin = stdin;
		}
	}
	else
	{
		yyin = stdin;
	}
	
	yylex();
	return 0;
}
