%token identifier anychar sign signed-number digit-sequence constant-identifier

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

label: digit-sequence
    ;

quoted-string-constant:"'" string-character "'"
    ;

string-character: anychar
    |"'" "'"
    ;

quoted-character-constant: "'" string-character "'"
    ;

constant-declaration: identifier '=' constant ';'
    ;

constant: identifier
    | sign constant-identifier
    | signed-number
    | quoted-string
    | quoted-char
    ;

block: statement-part
    | procedure-and-function-declaration-part block
    | variable-declaration-part block
    | type-declaration-part block
    | constant-declaration-part block
    | label-declaration-part
    ;

label-declaration-part: 'label' labels ';'
    ;

labels: label
    | label ',' labels
    ;

constant-declaration-part: 'const' constant-declarations
    ;

constant-declarations: constant-declaration
    | constant-declaration constant-declarations
    ;

type-declaration-part: 'type' type-declarations
    ;

type-declarations: type-declaration
    | type-declaration type-declarations
    ;

variable-declaration-part: 'var' variable-declarations
    ;

variable-declarations: variable-declaration
    | variable-declaration variable-declarations
    ;

procedure-and-function-declaration-part: procedure-declaration
    |function-declaration 
    |procedure-and-function-declaration-part function declaration
    |procedure-and function declaration-part procedure-declaration ;


statement-part: compound-statement
    ;

type-declaration: identifier '=' type ';'
    ;

type: simple-type
    | structured-type
    | pointer-type
    ;

simple-type: ordinal-type
    | real-type
    | string-type
    ;

real-type: real-type-identifier
    ;

ordinal-type: subrange-type
    | enumerated-type
    | ordinal-type-identifier
    ;

string-type: 'string' '[' size-attribute ']'
    | string-type-identifier
    ;

size-attribute: unsigned-integer
    ;

enumerated-type: '(' identifier-list ')'
    ;

subrange-type: constant '..' constant
    ;

structured-type: array-type
    | set-type
    | file-type
    | record-type
    | 'packed' array-type
    | 'packed' set-type
    | 'packed' file-type
    | 'packed' record-type
    | structured-type-identifier
    ;

array-type: 'array' '[' index-types ']' 'of' type
    ;

index-types: index-type
    | index-type index-types
    ;

index-type: ordinal-type
    ;

record-type: 'record' 'end'
    | 'record' field-list 'end'
    ;

field-list: fixed-part
    | fixed-part ';' variant-part
    | fixed-part ';' variant-part ';'
    | variant-part
    | variant-part ';'
    ;

fixed-part: field-declarations
    ;

field-declarations: field-declaration
    | field-declaration ';' field-declarations
    ;

field-declaration: identifier-list ':' type
    ;

variant-part: 'case' tag-field-type 'of' variants
    | 'case' identifier ':' tag-field-type 'of' variants
    ;

variants: variant
    | variant ';' variants
    ;

variant: constants ':' '(' ')'
    | constants ':' '(' field-list ')'
    ;

constants: constant
    | constant ',' constants
    ;

tag-field-type: ordinal-type-identifier
    ;

set-type: 'set' 'of' ordinal-type
    ;

file-type: 'file'
    | 'file' 'of' type
    ;

pointer-type: '^' base-type
    | pointer-type-identifier
    ;

base-type: type-identifier
    ;

variable-declaration: identifier-list ':' type ';'
    ;

variable-reference: variable-identifier
    | variable-identifier qualifiers
    ;



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

gotostatement: goto label
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
