%token identifier anychar sign signednumber digitsequence constantidentifier unsignedinteger unsignednumber

%{
#include <stdio.h>
#pragma warning(disable: 4996 6385 6011 4267 4244 4013 4312 4005 6387 26451)

extern FILE *yyin;
extern int yylex(void);
int yyerror(const char *s);
%}

%union YYSTYPE {
    char *cadena;
    int numero;
}

%%

program: programheading ";" optionalprogramuseclause block
;


label: digitsequence
    ;

quotedstringconstant:"'" stringcharacter "'"
    ;

functionidentifier: identifier
    ;

procedureidentifier: identifier
    ;

typeidentifier: identifier
    ;

structuredtypeidentifier: identifier
    ;

pointertypeidentifier: identifier
    ;

stringcharacter: anychar
    |"'" "'"
    ;

quotedcharacterconstant: "'" stringcharacter "'"
    ;

constantdeclaration: identifier "=" constant ";"
    ;

constant: identifier
    | sign constantidentifier
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

labeldeclarationpart: "label" labels ";"
    ;

labels: label
    | label "," labels
    ;

constantdeclarationpart: "const" constantdeclarations
    ;

constantdeclarations: constantdeclaration
    | constantdeclaration constantdeclarations
    ;

typedeclarationpart: "type" typedeclarations
    ;

typedeclarations: typedeclaration
    | typedeclaration typedeclarations
    ;

variabledeclarationpart: "var" variabledeclarations
    ;

variabledeclarations: variabledeclaration
    | variabledeclaration variabledeclarations
    ;

procedureandfunctiondeclarationpart: proceduredeclaration
    |functiondeclaration 
    |procedureandfunctiondeclarationpart functiondeclaration
    |procedureandfunctiondeclarationpart proceduredeclaration ;


statementpart: compoundstatement
    ;

typedeclaration: identifier "=" type ";"
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

realtypeidentifier: "real"
    ;

ordinaltype: subrangetype
    | enumeratedtype
    | ordinaltypeidentifier
    ;

ordinaltypeidentifier: "integer"
    | "longint"
    | "char"
    | "boolean"
    ;

stringtype: "string" "[" sizeattribute "]"
    | stringtypeidentifier
    ;

stringtypeidentifier: identifier
    ;


sizeattribute: unsignedinteger
    ;

enumeratedtype: "(" identifierlist ")"
    ;

subrangetype: constant ".." constant
    ;

structuredtype: arraytype
    | settype
    | filetype
    | recordtype
    | "packed" arraytype
    | "packed" settype
    | "packed" filetype
    | "packed" recordtype
    | structuredtypeidentifier
    ;

arraytype: "array" "[" indextypes "]" "of" type
    ;

indextypes: indextype
    | indextype indextypes
    ;

indextype: ordinaltype
    ;

recordtype: "record" "end"
    | "record" fieldlist "end"
    ;

fieldlist: fixedpart
    | fixedpart ";" variantpart
    | fixedpart ";" variantpart ";"
    | variantpart
    | variantpart ";"
    ;

fixedpart: fielddeclarations
    ;

fielddeclarations: fielddeclaration
    | fielddeclaration ";" fielddeclarations
    ;

fielddeclaration: identifierlist ":" type
    ;

variantpart: "case" tagfieldtype "of" variants
    | "case" identifier ":" tagfieldtype "of" variants
    ;

variants: variant
    | variant ";" variants
    ;

variant: constants ":" "(" ")"
    | constants ":" "(" fieldlist ")"
    ;

constants: constant
    | constant "," constants
    ;

tagfieldtype: ordinaltypeidentifier
    ;

settype: "set" "of" ordinaltype
    ;

filetype: "file"
    | "file" "of" type
    ;

pointertype: "^" basetype
    | pointertypeidentifier
    ;

basetype: typeidentifier
    ;

variabledeclaration: identifierlist ":" type ";"
    ;

variablereference: variableidentifier
    | variableidentifier qualifiers
    ;



identifierlist:
    identifier
    | identifier "," identifierlist
    ;

variabledeclaration: identifierlist ":" type ";"
    ;

variablereference: variableidentifier qualifiers
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

index : "[" expressions"]"
    ;

expressions: expression
    | expression "," expressions
    ;

fielddesignator: "." identifier
    ;

filebuffersymbol: "^"
    ;

pointerobjectsymbol: "^"
    ;

factor: "@" variablereference
    | variablereference
    | unsignedconstant
    | functioncall
    | setconstructor
    | "(" expression ")"
    | "not" factor
    ;

unsignedconstant: unsignednumber
    | quotedstringconstant
    | "nil"
    | constantidentifier
    ;

term: factor
    | factor "*" term
    | factor "/" term
    | factor "div" term
    | factor "mod" term
    | factor "and" term
    ;

simpleexpression: sign unsignedexpression
    | unsignedexpression
    ;

unsignedexpression: term "+" unsignedexpression
    | term "-" unsignedexpression
    | term "or" unsignedexpression
    | term
    ;

expression: simpleexpression "-" simpleexpression
    | simpleexpression "<" simpleexpression
    | simpleexpression ">" simpleexpression
    | simpleexpression "<=" simpleexpression
    | simpleexpression ">=" simpleexpression
    | simpleexpression "<>" simpleexpression
    | simpleexpression "in" simpleexpression
    | simpleexpression
    ;

functioncall: functionidentifier
    | functionidentifier actualparameterlist
    ;

actualparameterlist: "(" actualparametergroup ")"
    ;

actualparametergroup: actualparameter
    | actualparametergroup ","
    ;

actualparameter: expression 
    | variablereference
    | procedureidentifier
    | functionidentifier
    ;

setconstructor: "[" membergroups "]"
    ;

membergroups: membergroup
    | membergroups ","
    ;
membergroup: expression
    | expression ".." expression
    ;

statement: label ".." simplestatement
    | label ".." structuredstatement
    | label ".."
    | simplestatement
    | structuredstatement
    |
    ;

simplestatement: assignmentstatement
    | procedurestatement
    | gotostatement
    ;

assignmentstatement: variablereference ":=" expression;
    | functionidentifier ":=" expression;

procedurestatement: procedureidentifier
    | procedureidentifier actualparameterlist
    ;

gotostatement: "goto" label
    ;

structuredstatement: compoundstatement
    | conditionalstatement
    | repetitivestatement
    | withstatement
    ;

compoundstatement: "begin" statements "end";

statements: statement
    |statements ";"
    ;

conditionalstatement: ifstatement
    | casestatement
    ;

ifstatement: "if" expression "then" statement
    | "if" expression "then" statement "else" statement
    ;

casestatement: "case" expression "of" cases "end"
    | "case" expression "of" cases otherwiseclause "end" 
    | "case" expression "of" cases ";" "end" 
    | "case" expression "of" cases otherwiseclause ";" "end"
    ;

cases: cases ","
    | case
    ;

case: constants ":" statement;

constants: constants constant
    | constant
    ;

otherwiseclause: ";" "otherwise" statement
    ;

repetitivestatement: repeatstatement
    | whilestatement
    | forstatement
    ;

repeatstatement: "repeat" statements "until" expression
    ;

whilestatement: "while" expression "do" statement
    ;

forstatement: "for" controlvariable ":=" initialvalue "to" finalvalue "do" statement
    | "for" controlvariable ":=" initialvalue "downto" finalvalue "do" statement
    ;

controlvariable: variableidentifier
    ;

initialvalue: expression
    ;

finalvalue:expression
    ;

withstatement: "with" recordvariablereferences "do" statement
    ;

recordvariablereferences: recordvariablereference
    | recordvariablereferences ","
    ;

recordvariablereference: variablereference
    ;

proceduredeclaration: procedureheading ";" procedurebody ";" 
;

procedurebody: block
  | "forward"
  | "external"
;

procedureheading: "procedure" identifier optionalformalparameterlist
;

optionalformalparameterlist: formalparameterlist
  |
;

functiondeclaration: functionheading ";" functionbody ";"
;

functionbody: block
  | "forward"
  | "external"
;

functionheading: "function" identifier optionalformalparameterlist ":" resulttype 
;

resulttype: ordinaltypeidentifier 
  | realtypeidentifier 
  | pointertypeidentifier /*CHECAR ESTA AL FINAL*/
;

formalparameter: parameterdeclaration
  | procedureheading
  | functionheading
;

parameterdeclaration: "var" identifierlist ":" typeidentifier 
  | identifierlist ":" typeidentifier
;

formalparameters: formalparameter ";" formalparameters 
  | formalparameter
;

formalparameterlist: "(" formalparameters ")"
;

optionalprogramuseclause: usesclause ";" 
  |
;

programheading: "program" identifier optionalprogramheadingparameters
;

optionalprogramheadingparameters: "(" programparameters ")" 
  |
;

programparameters: identifierlist
;

usesclause: "uses" identifierlist
;

regularunit: unitheading ";" interfacepart implementationpart "end" "."
;

unitheading: "unit" identifier
;

interfacepart: "interface" optionalunituseclause optionalunitconstantdeclarationpart optionalunittypedeclarationpart optionalunitvariabledeclarationpart optionalunitprocedureandfunctiondeclarationpart
;

implementationpart: "implementation" optionalunitconstantdeclarationpart optionalunittypedeclarationpart optionalunitvariabledeclarationpart optionalunitprocedureandfunctiondeclarationpart
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
   printf("Error %s\n", s);
   return 0;
}

int main(int argc, char* argv[])
{
	if ( argc > 0 ){
      yyin = fopen( argv[0], "r" );
    }
            
    else
            yyin = stdin;

    yyparse();
	return 0;
}
