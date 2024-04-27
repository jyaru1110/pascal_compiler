
%token identifier

%{
#include <stdio.h>
#pragma warning(disable: 4996 6385 6011 4267 4244 4013 4312 4005 6387 26451)

extern FILE *yyin;

extern int yylex();
extern int yyerror(char *s);

%}

%union YYSTYPE {
    char *cadena;
    int numero;
}

%%

proceduredeclaration: procedureheading ';' procedurebody ';' 
;

procedurebody: block
  | 'forward'
  | 'external'
;

procedureheading: 'procedure' identifer optionalformalparameterlist
;

optionalformalparameterlist: formalparameterlist
  |
;

functiondeclaration: functionheading ';' functionbody ';'
;

functionbody: block
  | 'forward'
  | 'external'
;

functionheading: 'function' identifier optionalformalparameterlist ':' resulttype 
;

resulttype: ordinaltypeidentifier 
  | realtypeidentifier 
  | pointertypeidentifier /*CHECAR ESTA AL FINAL*/
;

formalparameter: parameterdeclaration
  | procedureheading
  | functionheading
;

parameterdeclaration: 'var' identifierlist ':' typeidentifier 
  | identifierlist ':' typeidentifier
;

formalparameters: formalparameter ';' formalparameters 
  | formalparameter
;

formalparameterlist: '(' formalparameters ')'
;

program: programheading ';' optionalprogramuseclause block
;

optionalprogramuseclause: usesclause ';' 
  |
;

programheading: 'program' identifier optionalprogramheadingparameters
;

optionalprogramheadingparameters: '(' programparameters ')' 
  |
;

programparameters: identifierlist
;

usesclause: 'uses' identifierlist
;

regularunit: unitheading ';' interfacepart implementationpart 'end' '.'
;

unitheading: 'unit' identifier
;

interfacepart: 'interface' optionalunituseclause optionalunitconstantdeclarationpart optionalunittypedeclarationpart optionalunitvariabledeclarationpart optionalunitprocedureandfunctiondeclarationpart
;

implementationpart: 'implementation' optionalunitconstantdeclarationpart optionalunittypedeclarationpart optionalunitvariabledeclarationpart optionalunitprocedureandfunctiondeclarationpart
;

optionalunituseclause: usesclause 
  |
;

optionalunitconstantdeclarationpart: constantdeclarationpart 
  |
;

optionalunittypedeclarationpart: typedeclarationpart 
  |
;

optionalunitvariabledeclarationpart: variabledeclarationpart 
  |
;

optionalunitprocedureandfunctiondeclarationpart: procedureandfunctiondeclarationpart 
  |
;

%%

int main(int argc, char* argv[])
{
	if ( argc > 0 ){
    yyin = fopen( argv[0], "r" );
  }
  else yyin = stdin;
  yyparse();
	return 0;
}
