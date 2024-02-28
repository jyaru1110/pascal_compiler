
%{ 
#include <stdio.h>
%}

INCIO_COMENTARIO \{|(\(\*)
FIN_COMENTARIO \}|(\*\))
PALABRA [a-zA-Z0-9:; ]+

PALABRAS_RESERVADAS (program)|(begin)|(uses)|(unit)|(interface)|(implementation)|(label)|(const)|(type)|(real)|(integer)|(longint)|(word)|(char)|(boolean)|(true)|(false)|(string)|(packed)|(array)|(record)|(end)|(case)|(otherwise)|(of)|(set)|(var)|(forward)|(external)|(function)|(procedure)|(file)|(goto)|(if)|(then)|(else)|(repeat)|(until)|(while)|(do)|(for)|(to)|(downto)|(with)|(nil)|(read)|(readln)|(write)|(writeln)|(in)|(or)|(div)|(mod)|(and)|(not)
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

