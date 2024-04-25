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

%code requires {
    #include <stdlib.h>
}

%%

identifier-list:
    identifier
    | identifier ',' identifier-list
    ;

variable-declaration: identifier-list ':' type ';'
    ;

variable-reference: variable-identifier qualifiers
    ;

qualifiers : qualifier
    | qualifier qualifiers
    ;

variable-identifier: identifier
    ;

qualifier: index
    | field-designator
    | file-buffer-symbol
    | pointer-object-symbol
    ;

index : '[' expressions']'
    ;

expresions: expression
    | expression ',' expressions
    ;

field-designator: '.' identifier
    ;

file-buffer-symbol: '^'
    ;

pointer-object-symbol: '^'
    ;

factor: '@' variable-reference
    | variable-reference
    | unsigned-constant
    | function-call
    | set-constructor
    | '(' expression ')'
    | 'not' factor
    ;

unsigned-constant: unsigned-number
    | quoted-string-constant
    | 'nil'
    | constant-identifier
    ;

term: factor
    | factor '*' term
    | factor '/' term
    | factor 'div' term
    | factor 'mod' term
    | factor 'and' term
    ;

simple-expression: sign unsigned-expression
    | unsigned-expression
    ;

unsigned-expression: term '+' unsigned-expression
    | term '-' unsigned-expression
    | term 'or' unsigned-expression
    | term
    ;

expression: simple-expression '-' simple-expression
    | simple-expression '<' simple-expression
    | simple-expression '>' simple-expression
    | simple-expression '<=' simple-expression
    | simple-expression '>=' simple-expression
    | simple-expression '<>' simple-expression
    | simple-expression 'in' simple-expression
    ;

function-call: function-identifier
    | function-identifier actual-parameter-list
    ;

actual-parameter-list: '(' actual-parameter-group ')'
    ;

actual-parameter-group: actual-parameter
    | actual-parameter-group ','
    ;

actual-parameter: expression 
    | variable-reference
    | procedure-identifier
    | function-identifier
    ;

set-constructor: '[' member-groups ']'
    ;

member-groups: member-group
    | member-groups ','
    ;

member-group: expression
    | expression '..' expression
    ;

statement: label '..' simple-statement
    | label '..' structured-statement
    | label '..'
    | simple-statement
    | structured-statement
    |
    ;

simple-statement: assignment-statement
    | procedure-statement
    | goto-statement
    ;

assignment-statement: variable-reference ':=' expression;
    | function-identifier ':=' expression;

procedure-statement: procedure-identifier
    | procedure-identifier actual-parameter-list
    ;

goto-statement: goto label
    ;

structured-statement: compound-statement
    | conditional-statement
    | repetitive-statement
    | with-statement
    ;

compound-statement: 'begin' statements 'end';

statements: statement
    |statements ';'
    ;

conditional-statement: if-statement
    | case-statement
    ;

if-statement: 'if' expression 'then' statement
    | 'if' expression 'then' statement 'else' statement
    ;

case-statement: 'case' expression 'of' cases 'end'
    | 'case' expression 'of' cases otherwise-clause 'end' 
    | 'case' expression 'of' cases ';' 'end' 
    | 'case' expression 'of' cases otherwise-clause ';' 'end'
    ;

cases: cases ','
    | case
    ;

otherwise-clause: ';' 'otherwise' statement
    ;

repetitive-statement: repeat-statement
    | while-statement
    | for-statement
    ;

repeat-statement: 'repeat' statements 'until' expression
    ;

while-statement: 'while' expression 'do' statement
    ;

for-statement: 'for' control-variable ':=' initial-value 'to' final-value 'do' statement
    | 'for' control-variable ':=' initial-value 'downto' final-value 'do' statement
    ;

control-variable: variable-identifier
    ;

initial-value: expression
    ;

final-value:expression
    ;

with-statement: 'with' record-variable-references 'do' statement
    ;

record-variable-references: record-variable-reference
    | record-variable-references ','
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
