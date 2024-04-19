%token DIGITOS DIGITOS_HEX SIGNO FACTOR ENTERO_SIN_SIGNO NUMERO_SIN_SIGNO CONSTANTE_CADENA LINEA TABULADOR ESPACIO ELEMENTOS, NUMERO_CON_SIGNO 

%{
#include <stdio.h>
#pragma warning(disable: 4996 6385 6011 4267 4244 4013 4312 4005 6387 26451)

extern int columna;
extern FILE *yyin;

int yylex();
void yyerror(const char *s);

%}

%union YYSTYPE {
    char *cadena;
    int numero;
}

%code requires {
    #include <stdlib.h>
}

%%

identificador: cadena  {$$ = $1;}
              | identificador identificador_2;
identificador_2: identificador_2 | "_";

secuencia_digito: secuencia_digito DIGITOS {$$ = $1;}
                | DIGITOS {$$ = $1;}
                ;

secuencia_digito_hex: secuencia_digito_hex DIGITOS_HEX {$$ = $1;}
                     | DIGITOS_HEX {$$ = $1;}
                     ;
string_caracter:CONSTANTE_CADENA  {$$ = $1;}
                | \' \';

quoted_string_constant: string_caracter {$$ = $1;}
                      ;

quoted_character_constant:  \' string_caracter \'
			|;

constant_declaration: identificador '=' constant ';'
			|;

constant: SIGNO identificador
	| NUMERO_CON_SIGNO
	| quoted_string_constant
	| quoted_character_constant;
block: 

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
	std::ofstream myfile;
	int i = 1;
	myfile.open ("palabras_reservadas.csv");
	for(auto it = palabras_reservadas.begin(); it != palabras_reservadas.end(); ++it)
	{
		
		myfile <<i++<<","<< it->first << "," << it->second << "\n";
	}
	myfile.close();

	myfile.open ("constantes_cadena.csv");
	i = 1;
	for(auto it = constantes_cadena.begin(); it != constantes_cadena.end(); ++it)
	{
		myfile <<i++<<","<< it->first << "," << it->second << "\n";
	}
	myfile.close();

	myfile.open ("simbolos.csv");
	i = 1;
	for(auto it = simbolos.begin(); it != simbolos.end(); ++it)
	{
		myfile <<i++<<","<< it->first << "," << it->second << "\n";
	}
	myfile.close();

	myfile.open ("numeros.csv");
	i = 1;
	for(auto it = numeros.begin(); it != numeros.end(); ++it)
	{
		myfile <<i++<<","<< it->first << "," << it->second << "\n";
	}
	myfile.close();

	return 0;
}
