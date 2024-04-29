%token identifier 
%token anychar 
%token signednumber 
%token digitsequence 
%token constantidentifier 
%token unsignednumber 
%token ordinaltypeidentifier
%token comilla
%token tk_program
%token tk_begin
%token tk_uses
%token tk_unit
%token tk_interface
%token tk_implementation
%token tk_label
%token tk_const
%token tk_type
%token tk_real
%token tk_word
%token tk_true
%token tk_false
%token tk_string
%token tk_packed
%token tk_array
%token tk_record
%token tk_end
%token tk_case
%token tk_otherwise
%token tk_of
%token tk_set
%token tk_var
%token tk_forward
%token tk_external
%token tk_function
%token tk_procedure
%token tk_file
%token tk_goto
%token tk_if
%token tk_then
%token tk_else
%token tk_repeat
%token tk_until
%token tk_while
%token tk_do
%token tk_for
%token tk_to
%token tk_downto
%token tk_with
%token tk_nil
%token tk_read
%token tk_readln
%token tk_write
%token tk_writeln
%token tk_in
%token tk_or
%token tk_div
%token tk_mod
%token tk_and
%token tk_not
%token comparison_op
%token assignment_op
%token range_op

%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable: 4996 6385 6011 4267 4244 4013 4312 4005 6387 26451)

extern FILE *yyin;
extern int yylex(void);
extern int linea;
int yyerror(const char *s);
%}

%union YYSTYPE {
    char *cadena;
    int numero;
}

%%

s: program | regularunit;

program: programheading ';' optionalprogramuseclause block
;


label: digitsequence
    ;

quotedstringconstant:comilla stringcharacters comilla
    ;

stringcharacters: stringcharacter
    | stringcharacters stringcharacter
    ;

functionidentifier: identifier
    ;

procedureidentifier: identifier
    | tk_read
    | tk_readln
    | tk_write
    | tk_writeln
    ;

typeidentifier: identifier
    ;

structuredtypeidentifier: identifier
    ;

pointertypeidentifier: identifier
    ;

stringcharacter: anychar
    |comilla comilla
    ;

quotedcharacterconstant: comilla stringcharacter comilla
    ;

constantdeclaration: identifier '=' constant ';'
    ;

constant: identifier
    | '+' constantidentifier
    | '-' constantidentifier
    | signednumber
    | quotedstringconstant
    | quotedcharacterconstant
    ;

block: statementpart
    | procedureandfunctiondeclarationpart block
    | variabledeclarationpart block
    | typedeclarationpart block
    | constantdeclarationpart block
    | labeldeclarationpart
    ;

labeldeclarationpart: tk_label labels ';'
    ;

labels: label
    | label ',' labels
    ;

constantdeclarationpart: tk_const constantdeclarations
    ;

constantdeclarations: constantdeclaration
    | constantdeclaration constantdeclarations
    ;

typedeclarationpart: tk_type typedeclarations
    ;

typedeclarations: typedeclaration
    | typedeclaration typedeclarations
    ;

variabledeclarationpart: tk_var variabledeclarations
    ;

variabledeclarations: variabledeclaration
    | variabledeclaration variabledeclarations
    ;

procedureandfunctiondeclarationpart: proceduredeclaration
    |functiondeclaration 
    |procedureandfunctiondeclarationpart functiondeclaration
    |procedureandfunctiondeclarationpart proceduredeclaration 
;


statementpart: compoundstatement
    ;

typedeclaration: identifier '=' type ';'
    ;

type: simpletype
    | structuredtype
    | pointertype
    ;

simpletype: ordinaltype
    | realtype
    | stringtype
    ;

realtype: realtypeidentifier
    ;

realtypeidentifier: tk_real
    ;

ordinaltype: subrangetype
    | enumeratedtype
    | ordinaltypeidentifier
    ;

stringtype: tk_string '[' sizeattribute ']'
    | stringtypeidentifier
    ;

stringtypeidentifier: identifier
    ;


sizeattribute: unsignednumber
    ;

enumeratedtype: '(' identifierlist ')'
    ;

subrangetype: constant range_op constant
    ;

structuredtype: arraytype
    | settype
    | filetype
    | recordtype
    | tk_packed arraytype
    | tk_packed settype
    | tk_packed filetype
    | tk_packed recordtype
    | structuredtypeidentifier
    ;

arraytype: tk_array '[' indextypes ']' tk_of type
    ;

indextypes: indextype
    | indextype indextypes
    ;

indextype: ordinaltype
    ;

recordtype: tk_record tk_end
    | tk_record fieldlist tk_end
    ;

fieldlist: fixedpart
    | fixedpart ';' variantpart
    | fixedpart ';' variantpart ';'
    | variantpart
    | variantpart ';'
    ;

fixedpart: fielddeclarations
    ;

fielddeclarations: fielddeclaration
    | fielddeclaration ';' fielddeclarations
    ;

fielddeclaration: identifierlist ':' type
    ;

variantpart: tk_case tagfieldtype tk_of variants
    | tk_case identifier ':' tagfieldtype tk_of variants
    ;

variants: variant
    | variant ';' variants
    ;

variant: constants ':' '(' ')'
    | constants ':' '(' fieldlist ')'
    ;

tagfieldtype: ordinaltypeidentifier
    ;

settype: tk_set tk_of ordinaltype
    ;

filetype: tk_file
    | tk_file tk_of type
    ;

pointertype: '^' basetype
    | pointertypeidentifier
    ;

basetype: typeidentifier
    ;

variabledeclaration: identifierlist ':' type ';'
    ;

variablereference: variableidentifier
    | variableidentifier qualifiers
    ;

identifierlist:
    identifier
    | identifier ',' identifierlist
    ;

qualifiers : qualifier
    | qualifier qualifiers
    ;

variableidentifier: identifier
    ;

qualifier: index
    | fielddesignator
    | filebuffersymbol
    | pointerobjectsymbol
    ;

index : '[' expressions']'
    ;

expressions: expression
    | expression ',' expressions
    ;

fielddesignator: '.' identifier
    ;

filebuffersymbol: '^'
    ;

pointerobjectsymbol: '^'
    ;

factor: '@' variablereference
    | variablereference
    | unsignedconstant
    | functioncall
    | setconstructor
    | '(' expression ')'
    | tk_not factor
    ;

unsignedconstant: unsignednumber
    | quotedstringconstant
    | tk_nil
    | constantidentifier
    ;

term: factor
    | factor '*' term
    | factor '/' term
    | factor tk_div term
    | factor tk_mod term
    | factor tk_and term
    ;

simpleexpression: '+' unsignedexpression
    | '-' unsignedexpression
    | unsignedexpression
    ;

unsignedexpression: term '+' unsignedexpression
    | term '-' unsignedexpression
    | term tk_or unsignedexpression
    | term
    ;

expression: simpleexpression comparison_op simpleexpression
    | simpleexpression '=' simpleexpression
    | simpleexpression tk_in simpleexpression
    | simpleexpression '>' simpleexpression
    | simpleexpression '<' simpleexpression
    | simpleexpression
    ;

functioncall: functionidentifier
    | functionidentifier actualparameterlist
    ;

actualparameterlist: '(' actualparametergroup ')'
    ;

actualparametergroup: actualparameter
    | actualparametergroup ',' actualparameter
    ;

actualparameter: expression 
    | variablereference
    | procedureidentifier
    | functionidentifier
    | quotedstringconstant
    ;

setconstructor: '[' membergroups ']'
    | '[' ']'
    ;

membergroups: membergroup
    | membergroup ',' membergroups
    ;
membergroup: expression
    | expression range_op expression
    ;

statement: label range_op simplestatement
    | label range_op structuredstatement
    | label range_op
    | simplestatement
    | structuredstatement
    |
    ;

simplestatement: assignmentstatement
    | procedurestatement
    | gotostatement
    ;

assignmentstatement: variablereference assignment_op expression
    | functionidentifier assignment_op expression;

procedurestatement: procedureidentifier
    | procedureidentifier actualparameterlist
    ;

gotostatement: tk_goto label
    ;

structuredstatement: compoundstatement
    | conditionalstatement
    | repetitivestatement
    | withstatement
    ;

compoundstatement: tk_begin statements tk_end;

statements : statement
           | statements ';' statement
           ;

conditionalstatement: ifstatement
    | casestatement
    ;

ifstatement: tk_if expression tk_then statement
    | tk_if expression tk_then statement tk_else statement
    ;

casestatement: tk_case expression tk_of cases tk_end
    | tk_case expression tk_of cases otherwiseclause tk_end 
    | tk_case expression tk_of cases ';' tk_end 
    | tk_case expression tk_of cases otherwiseclause ';' tk_end
    ;

cases: case ',' cases
    | case
    ;

case: constants ':' statement;

constants: constant ',' constants
    | constant
    ;

otherwiseclause: ';' tk_otherwise statement
    ;

repetitivestatement: repeatstatement
    | whilestatement
    | forstatement
    ;

repeatstatement: tk_repeat statements tk_until expression
    ;

whilestatement: tk_while expression tk_do statement
    ;

forstatement: tk_for controlvariable assignment_op initialvalue tk_to finalvalue tk_do statement
    | tk_for controlvariable assignment_op initialvalue tk_downto finalvalue tk_do statement
    ;

controlvariable: variableidentifier
    ;

initialvalue: expression
    ;

finalvalue:expression
    ;

withstatement: tk_with recordvariablereferences tk_do statement
    ;

recordvariablereferences: recordvariablereference
    | recordvariablereference ',' recordvariablereferences
    ;

recordvariablereference: variablereference
    ;

proceduredeclaration: procedureheading ';' procedurebody ';' 
;

procedurebody: block
  | tk_forward
  | tk_external
;

procedureheading: tk_procedure identifier optionalformalparameterlist
;

optionalformalparameterlist: formalparameterlist
  |
;

functiondeclaration: functionheading ';' functionbody ';'
;

functionbody: block
  | tk_forward
  | tk_external
;

functionheading: tk_function identifier optionalformalparameterlist ':' resulttype 
;

resulttype: ordinaltypeidentifier 
  | realtypeidentifier 
  | pointertypeidentifier /*CHECAR ESTA AL FINAL*/
;

formalparameter: parameterdeclaration
  | procedureheading
  | functionheading
;

parameterdeclaration: tk_var identifierlist ':' typeidentifier 
  | identifierlist ':' typeidentifier
;

formalparameters: formalparameter ';' formalparameters 
  | formalparameter
;

formalparameterlist: '(' formalparameters ')'
;

optionalprogramuseclause: usesclause ';' 
  |
;

programheading: tk_program identifier optionalprogramheadingparameters
;

optionalprogramheadingparameters: '(' programparameters ')' 
  |
;

programparameters: identifierlist
;

usesclause: tk_uses identifierlist
;

regularunit: unitheading ';' interfacepart implementationpart tk_end '.'
;

unitheading: tk_unit identifier
;

interfacepart: tk_interface optionalunituseclause optionalunitconstantdeclarationpart optionalunittypedeclarationpart optionalunitvariabledeclarationpart optionalunitprocedureandfunctiondeclarationpart
;

implementationpart: tk_implementation optionalunitconstantdeclarationpart optionalunittypedeclarationpart optionalunitvariabledeclarationpart optionalunitprocedureandfunctiondeclarationpart
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

int yyerror(const char *s) 
{
   char mensaje[100];

   if ( !strcmp( s, "parse error" ) )
      strcpy( mensaje, "Error de sintaxis" );
   else
      strcpy( mensaje, s );

   printf("Error en linea %d: %s\n", linea, mensaje);
   return 1;

}

int main(int argc, char* argv[]) {
	if ( argc > 1 ){
        printf("Archivo: %s\n", argv[1]);
        yyin = fopen( argv[1], "r" );
    }
            
    else{
        printf("Archivo: stdin\n");
        yyin = stdin;
    }

    yyparse();
	return 0;
}
