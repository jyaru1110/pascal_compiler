
%{ 
#include <stdio.h>
#include <iostream>
#include <unordered_map> 
#include <string>
#include <fstream>
#pragma warning(disable: 4996 6385 6011 4267 4244 4013 4312 4005 6387 26451)

using namespace std;
unordered_map<string, int> simbolos;
unordered_map<string, int> numeros;
unordered_map<string, int> palabras_reservadas;
unordered_map<string, int> constantes_cadena;

int contador_tab = 0;
int contador_salto = 0;
int columna = 0;
void conteoColumnas(){columna += int(yyleng);}
%}

INCIO_COMENTARIO \{|(\(\*)
FIN_COMENTARIO \}|(\*\))
PALABRA [^}]+
PALABRAS_RESERVADAS (program)|(begin)|(uses)|(unit)|(interface)|(implementation)|(label)|(const)|(type)|(real)|(integer)|(longint)|(word)|(char)|(boolean)|(true)|(false)|(string)|(packed)|(array)|(record)|(end)|(case)|(otherwise)|(of)|(set)|(var)|(forward)|(external)|(function)|(procedure)|(file)|(goto)|(if)|(then)|(else)|(repeat)|(until)|(while)|(do)|(for)|(to)|(downto)|(with)|(nil)|(read)|(readln)|(write)|(writeln)|(in)|(or)|(div)|(mod)|(and)|(not)

SIMBOLOS_ESCRITURA \@|\#|\<\>|\<\=|\>\=|\+|\-|\*|\/|\<|\>|\^|\;|\=|\,|\(|\)|\[|\]|\:|\:\=|\.\.

DIGITOS [0-9]+
DIGITOS_HEX [0-9a-fA-F]+
SIGNO \+|\-
FACTOR [eE]{SIGNO}?{DIGITOS}
ENTERO_SIN_SIGNO {DIGITOS}|${DIGITOS_HEX}
REAL_SIN_SIGNO {DIGITOS}(.{DIGITOS}|{FACTOR})
NUMERO_SIN_SIGNO {ENTERO_SIN_SIGNO}|{REAL_SIN_SIGNO}
NUMERO_CON_SIGNO {SIGNO}?{NUMERO_SIN_SIGNO}
CONSTANTE_CADENA \"[^\"]+\"|\'[^\']+\'

LINEA [\n]
TABULADOR [\t]
ESPACIO [" "]
ELEMENTOS [a-zA-Z][a-zA-Z0-9]*

%s comentario

%option noyywrap
%option outfile="main.cpp"
%option case-insensitive

%%

{PALABRAS_RESERVADAS} {
	if(palabras_reservadas.find(yytext) == palabras_reservadas.end())
		palabras_reservadas[yytext] = 1;
	else
		++palabras_reservadas.at(yytext);
	conteoColumnas();
	columna = columna - yyleng + 1;
	printf("(%d,%d) ES PALABRA RESERVADA: %s\n",yylineno, columna, yytext);
	columna = columna + yyleng -1;
	
}
{ESPACIO} {
		conteoColumnas();		
		printf("(%d,%d) ESPACIO ENCONTRADO: %s\n",yylineno, columna, yytext);
}

{LINEA} 	{
			contador_salto++;
			conteoColumnas();
			printf("(%d,%d) Salto de linea numero %d encontrado: %s\n", columna, yylineno, contador_salto, yytext);
			columna = 0;
		}

{TABULADOR} 	{
			contador_tab++;
			conteoColumnas();
			columna = columna - yyleng + 1;
	
			printf("(%d,%d) Tabulador numero %d encontrado: %s\n", columna, yylineno, contador_tab, yytext);
			columna = columna + yyleng -1;
		}

{ELEMENTOS}	{
			conteoColumnas();
			columna = columna - yyleng + 1;
			printf("(%d,%d) ELEMENTO RECONOCIDO: %s\n",yylineno, columna, yytext);
			columna = columna + yyleng -1;
		}


{INCIO_COMENTARIO} BEGIN(comentario);

<comentario>{FIN_COMENTARIO} {
    BEGIN(INITIAL);   
}

<comentario>{PALABRA} {
	conteoColumnas();
	columna = columna - yyleng + 1;
	printf("(%d,%d) COMENTARIO: %s\n",yylineno, columna, yytext);
	columna = columna + yyleng -1;
}

{SIMBOLOS_ESCRITURA} {
  if (simbolos.find(yytext) == simbolos.end()){
    simbolos[yytext] = 1;
  }
  else{
    simbolos[yytext]++;
  }

	conteoColumnas();
	columna = columna - yyleng + 1;
	printf("(%d,%d) ES UN SIMBOLO: %s\n",yylineno, columna, yytext);
	columna = columna + yyleng -1;
}

{NUMERO_CON_SIGNO} {
  if (numeros.find(yytext) == numeros.end()){
    numeros[yytext] = 1;
  }
  else{
    numeros[yytext]++;
  }

	conteoColumnas();
	columna = columna - yyleng + 1;
	printf("(%d,%d) ES UN NUMERO: %s\n",yylineno, columna, yytext);
	columna = columna + yyleng -1;
}

{CONSTANTE_CADENA} {
	if(constantes_cadena.find(yytext) == constantes_cadena.end())
		constantes_cadena[yytext] = 1;
	else
		++constantes_cadena.at(yytext);

	conteoColumnas();
	columna = columna - yyleng + 1;
	printf("(%d,%d) ES UNA CADENA: %s\n",yylineno, columna, yytext);
	columna = columna + yyleng -1;
}

. {
	conteoColumnas();
}



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