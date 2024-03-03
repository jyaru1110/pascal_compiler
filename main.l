
%{ 
#include <stdio.h>
#include <iostream>
#include <unordered_map> 
#include <string>
using namespace std;
unordered_map<string, int> simbolos;
unordered_map<string, int> numeros;
%}

INCIO_COMENTARIO \{|(\(\*)
FIN_COMENTARIO \}|(\*\))
PALABRA [a-zA-Z0-9:; ]+

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

%x comentario

%option noyywrap
%option outfile="main.cpp"

%%
{INCIO_COMENTARIO} BEGIN(comentario);

<comentario>{FIN_COMENTARIO} {
    BEGIN(INITIAL);   
}


<comentario>{PALABRA} {
    printf("COMENTARIO: %s\n", yytext);
}

{PALABRAS_RESERVADAS} {
	printf("ES PALABRA RESERVADA %s \n", yytext); 
}

{SIMBOLOS_ESCRITURA} {
  if (simbolos.find(yytext) == simbolos.end()){
    simbolos[yytext] = 1;
  }
  else{
    simbolos[yytext]++;
  }
}

{NUMERO_CON_SIGNO} {
  if (numeros.find(yytext) == numeros.end()){
    numeros[yytext] = 1;
  }
  else{
    numeros[yytext]++;
  }
}

imprimir {
  cout << "maps" << endl;
  for (auto& it: simbolos) {
      cout << it.first << " " << it.second << endl;
  }
  for (auto& it: numeros) {
      cout << it.first << " " << it.second << endl;
  }
}

. {
    printf("NO ES COMENTARIO %s \n", yytext); 
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
}

