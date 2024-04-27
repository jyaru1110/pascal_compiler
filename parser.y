%token identifier

%{
#include <stdio.h>
#pragma warning(disable: 4996 6385 6011 4267 4244 4013 4312 4005 6387 26451)

extern int columna;
extern FILE *yyin;

extern int yylex(void);
extern int yyerror(char *s);

%}

%union YYSTYPE {
    char *cadena;
    int numero;
}

%%

identifierlist:
    identifier
    | identifier ',' identifierlist
    ;

variabledeclaration: identifierlist ':' type ';'
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
    | 'not' factor
    ;

unsignedconstant: unsignednumber
    | quotedstringconstant
    | 'nil'
    | constantidentifier
    ;

term: factor
    | factor '*' term
    | factor '/' term
    | factor 'div' term
    | factor 'mod' term
    | factor 'and' term
    ;

simpleexpression: sign unsignedexpression
    | unsignedexpression
    ;

unsignedexpression: term '+' unsignedexpression
    | term '' unsignedexpression
    | term 'or' unsignedexpression
    | term
    ;

expression: simpleexpression '' simpleexpression
    | simpleexpression '<' simpleexpression
    | simpleexpression '>' simpleexpression
    | simpleexpression '<=' simpleexpression
    | simpleexpression '>=' simpleexpression
    | simpleexpression '<>' simpleexpression
    | simpleexpression 'in' simpleexpression
    ;

functioncall: functionidentifier
    | functionidentifier actualparameterlist
    ;

actualparameterlist: '(' actualparametergroup ')'
    ;

actualparametergroup: actualparameter
    | actualparametergroup ','
    ;

actualparameter: expression 
    | variablereference
    | procedureidentifier
    | functionidentifier
    ;

setconstructor: '[' membergroups ']'
    ;

membergroups: membergroup
    | membergroups ','
    ;

membergroup: expression
    | expression '..' expression
    ;

statement: label '..' simplestatement
    | label '..' structuredstatement
    | label '..'
    | simplestatement
    | structuredstatement
    |
    ;

simplestatement: assignmentstatement
    | procedurestatement
    | gotostatement
    ;

assignmentstatement: variablereference ':=' expression;
    | functionidentifier ':=' expression;

procedurestatement: procedureidentifier
    | procedureidentifier actualparameterlist
    ;

gotostatement: 'goto' label
    ;

structuredstatement: compoundstatement
    | conditionalstatement
    | repetitivestatement
    | withstatement
    ;

compoundstatement: 'begin' statements 'end';

statements: statement
    |statements ';'
    ;

conditionalstatement: ifstatement
    | casestatement
    ;

ifstatement: 'if' expression 'then' statement
    | 'if' expression 'then' statement 'else' statement
    ;

casestatement: 'case' expression 'of' cases 'end'
    | 'case' expression 'of' cases otherwiseclause 'end' 
    | 'case' expression 'of' cases ';' 'end' 
    | 'case' expression 'of' cases otherwiseclause ';' 'end'
    ;

cases: cases ','
    | case
    ;

case: constants ':' statement;

constants: constants constant
    | constant
    ;

otherwiseclause: ';' 'otherwise' statement
    ;

repetitivestatement: repeatstatement
    | whilestatement
    | forstatement
    ;

repeatstatement: 'repeat' statements 'until' expression
    ;

whilestatement: 'while' expression 'do' statement
    ;

forstatement: 'for' controlvariable ':=' initialvalue 'to' finalvalue 'do' statement
    | 'for' controlvariable ':=' initialvalue 'downto' finalvalue 'do' statement
    ;

controlvariable: variableidentifier
    ;

initialvalue: expression
    ;

finalvalue:expression
    ;

withstatement: 'with' recordvariablereferences 'do' statement
    ;

recordvariablereferences: recordvariablereference
    | recordvariablereferences ','
    ;

%%

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
