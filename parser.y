%token <cadena> identifier 
%token quotedstringconstant
%token unsignedinteger
%token quotedcharacterconstant
%token digitsequence 
%token unsignednumber 
%token <cadena> ordinaltypereservedwords
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
%token tk_assign
%token tk_close
%token tk_reset
%token sign

%{
#include <stdio.h>
#include <string>
#include <unordered_map> 
#include <vector> 
#pragma warning(disable: 4996 6385 6011 4267 4244 4013 4312 4005 6387 26451)

extern FILE *yyin;
extern int yylex(void);
extern int linea;
int yyerror(const char *s);
using namespace std;

struct identificador
{
    string id;
    char *ambito;
    int linea_definicion;
    char *tipo;
    vector <int> lineas;
};

unordered_map<string, identificador> tabla_simbolos;
char *current_ambito;
char *current_tipo;
vector<int> current_identifiers;
vector<identificador> pending_identifiers;

void insertar_simbolo(char *id_key, char *tipo, int linea){
    string key = id_key + string(current_ambito); 
    if (tabla_simbolos.find(key) != tabla_simbolos.end())
    {
        string id_key_string = id_key;
        string error = "El identificador " + id_key_string + " ya ha sido declarado en el mismo ambito";
        yyerror(error.c_str());
        return;
    }

    struct identificador id;
    id.ambito = current_ambito;
    id.linea_definicion = linea;
    id.tipo = tipo;
    id.id = id_key;
    tabla_simbolos[key] = id;
}

void resolve_pending_identifiers(){
    for (int i = 0; i < pending_identifiers.size(); i++)
    {
        string key = pending_identifiers[i].id + current_ambito;
        identificador id = pending_identifiers[i];
        id.ambito = current_ambito;
        if (tabla_simbolos.find(key) != tabla_simbolos.end())
        {
            string id_key_string = pending_identifiers[i].id;
            string error = "El identificador " + id_key_string + " ya ha sido declarado en el mismo ambito";
            yyerror(error.c_str());
            return;
        }
        tabla_simbolos[key] = id;
    }
    pending_identifiers.clear();
}

void update_tipo(){
    for (int i = 0; i < current_identifiers.size(); i++)
    {
        pending_identifiers[current_identifiers[i]].tipo = current_tipo;
    }
    current_identifiers.clear();
}

char * concatenar_ambito(char *nuevo_ambito)
{
    char *ambito = (char *)malloc(strlen(current_ambito) + strlen(nuevo_ambito) + 2);
    strcpy(ambito, current_ambito);
    strcat(ambito, ".");
    strcat(ambito, nuevo_ambito);
    return ambito;
}

void quitar_ambito_anterior(){
    if(strchr(current_ambito, '.') == NULL){
        return;
    }
    char *p = strrchr(current_ambito, '.');
    int size = p - current_ambito;
    char *ambito = (char *)malloc(size + 1);
    strncpy(ambito, current_ambito, size);
    ambito[size] = '\0';
    current_ambito = ambito;
}
%}

%union YYSTYPE {
    char *cadena;
    int numero;
}

%output = "parser.tab.cpp"

%left '=' comparison_op '<' '>' tk_in
%left '+' '-' tk_or
%left '*' '/' tk_div tk_mod tk_and
%left '@' tk_not

%%

s: program | regularunit;

program: programheading ';' optionalprogramuseclause block
;


label: digitsequence
    ;

procedureidentifier: tk_read
    | tk_readln
    | tk_write
    | tk_writeln
    | tk_assign
    | tk_close
    | tk_reset
    ;

typeidentifier: type
;


constantdeclaration: identifier '=' constant ';' {insertar_simbolo($1, current_tipo, linea);}
    | identifier '=' identifier ';' {insertar_simbolo($1, current_tipo, linea);}
    ;

constant: '+' identifier {current_tipo = "LONGINT"}
    | '-' identifier {current_tipo = "LONGINT"}
    | sign unsignednumber {current_tipo = "LONGINT"}
    | sign unsignedinteger {current_tipo = "LONGINT"}
    | sign digitsequence {current_tipo = "INTEGER"}
    | quotedstringconstant {current_tipo = "WORD"}
    | quotedcharacterconstant {current_tipo = "CHAR"}
    | digitsequence {current_tipo = "INTEGER"}
    ;

block: optionallabeldeclarationpart optionalconstantdeclarationpart optionaltypedeclarationpart optionalvariabledeclarationpart optionalprocedureandfunctiondeclarationpart optionalstatementpart
;

labeldeclarationpart: tk_label labels ';'
    ;

labels: label
    | label ',' labels
    ;

optionallabeldeclarationpart: labeldeclarationpart 
  |
;

constantdeclarationpart: tk_const constantdeclarations
    ;

constantdeclarations: constantdeclaration
    | constantdeclaration constantdeclarations
    ;

optionalconstantdeclarationpart: constantdeclarationpart
  |
;

typedeclarationpart: tk_type typedeclarations
    ;

typedeclarations: typedeclaration
    | typedeclaration typedeclarations
    ;

optionaltypedeclarationpart: typedeclarationpart
  |
;

variabledeclarationpart: tk_var variabledeclarations
    ;
;

variabledeclarations: variabledeclaration
    | variabledeclaration variabledeclarations
;

variabledeclaration: identifierlist ':' type ';' {resolve_pending_identifiers();}
    | identifierlist ':' identifier ';' {resolve_pending_identifiers();}
    ;


identifierlist:
    identifier {
            identificador temp;
            temp.id = $1;
            temp.linea_definicion = linea;
            pending_identifiers.push_back(temp);
            current_identifiers.push_back(pending_identifiers.size() - 1);
    }
    | identifier ',' identifierlist {
        identificador temp;
        temp.id = $1;
        temp.linea_definicion = linea;
        pending_identifiers.push_back(temp);
        current_identifiers.push_back(pending_identifiers.size() - 1);
    }
    ;

optionalvariabledeclarationpart: variabledeclarationpart
  |
;

procedureandfunctiondeclarationpart: procedureandfunction
  | procedureandfunction procedureandfunctiondeclarationpart
;

procedureandfunction: proceduredeclaration
  | functiondeclaration
;

optionalprocedureandfunctiondeclarationpart: procedureandfunctiondeclarationpart
  |
;

statementpart: compoundstatement
    ;

optionalstatementpart: statementpart
  |
;

typedeclaration: identifier '=' type ';' {insertar_simbolo($1, "type", linea);}
    | identifier '=' identifier ';' {insertar_simbolo($1, "type", linea);}
    ;
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

realtypeidentifier: tk_real {current_tipo = "REAL";}
;

ordinaltypeidentifier: ordinaltypereservedwords {current_tipo = $1;update_tipo();}
;

ordinaltype: subrangetype
    | enumeratedtype
    | ordinaltypeidentifier
    ;

stringtype: tk_string '[' sizeattribute ']'
;

sizeattribute: unsignedinteger
    ;

enumeratedtype: '(' identifierlist ')'
    ;

subrangetype: constant range_op constant
  | identifier range_op identifier
;

structuredtype: arraytype {current_tipo = "ARRAY";}
    | settype {current_tipo = "SET";}
    | filetype {current_tipo = "FILE";}
    | recordtype {current_tipo = "RECORD";}
    | tk_packed arraytype
    | tk_packed settype
    | tk_packed filetype
    | tk_packed recordtype
    ;

arraytype: tk_array '[' indextypes ']' tk_of type {current_tipo = "ARRAY"; update_tipo();}
    | tk_array '[' indextypes ']' tk_of identifier {current_tipo = "ARRAY"; update_tipo();}
    | tk_array '[' ranges ']' tk_of type {current_tipo = "ARRAY"; update_tipo();}
    | tk_array '[' ranges ']' tk_of identifier {current_tipo = "ARRAY"; update_tipo();}
    ;

ranges: subrangetype
    | subrangetype ',' ranges
    ;

indextypes: indextype
    | indextype ',' indextypes
    ;

indextype: ordinaltype
    ;

recordtype: tk_record tk_end
    | tk_record fieldlist tk_end
    ;

fieldlist: fixedpart
    | fixedpart ';'
    | fixedpart ';' variantpart
    | fixedpart ';' variantpart ';'
    | variantpart
    | variantpart ';'
    ;

fixedpart: fielddeclarations
    ;

fielddeclarations: fielddeclaration
    | fielddeclarations ';' fielddeclaration
    ;

fielddeclaration: identifierlist ':' type
    | identifierlist ':' identifier
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

constants: constant
  | constant ',' constants
  | identifier
  | identifier ',' constants
;

tagfieldtype: ordinaltypeidentifier
    | identifier
    ;

settype: tk_set tk_of ordinaltype
    ;

filetype: tk_file
    | tk_file tk_of type
    | tk_file tk_of identifier
    ;

pointertype: '^' basetype {current_tipo = "POINTER";}
    ;

basetype: typeidentifier
    ;

variablereference: identifier qualifiers
    ;

qualifiers : qualifier
    | qualifier qualifiers
    ;

qualifier: index
    | fielddesignator
    | '^'
    ;

index : '[' expressions']'
    ;

expressions: expression
    | expression ',' expressions
    ;

fielddesignator: '.' identifier
    ;

factor: '@' variablereference
    | '@' identifier
    | unsignedconstant
    | functioncall
    | setconstructor
    | '(' expression ')'
    | tk_not factor
    ;

unsignedconstant: unsignednumber
    | tk_nil
    | digitsequence
    ;

term: factor
    | factor '*' term
    | factor '/' term
    | factor tk_div term
    | factor tk_mod term
    | factor tk_and term
    | identifier '*' term
    | identifier '/' term
    | identifier tk_div term
    | identifier tk_mod term
    | identifier tk_and term
    | quotedstringconstant '*' term
    | quotedstringconstant '/' term
    | quotedstringconstant tk_div term
    | quotedstringconstant tk_mod term
    | quotedstringconstant tk_and term
    | variablereference '*' term
    | variablereference '/' term
    | variablereference tk_div term
    | variablereference tk_mod term
    | variablereference tk_and term
    | identifier
    | quotedstringconstant
    | quotedcharacterconstant
    ;

simpleexpression: unsignedexpression 
    |sign unsignedexpression
    ;

unsignedexpression: term sign unsignedexpression
    | term tk_or unsignedexpression
    | term
    | identifier sign unsignedexpression
    | identifier tk_or unsignedexpression
    ;

expression: simpleexpression comparison_op simpleexpression
    | simpleexpression '=' simpleexpression
    | simpleexpression tk_in simpleexpression
    | simpleexpression '>' simpleexpression
    | simpleexpression '<' simpleexpression
    | simpleexpression
    ; 

functioncall: identifier actualparameterlist;

actualparameterlist: '(' actualparametergroup ')'
    ;

actualparametergroup: actualparameter
    | actualparametergroup ',' actualparameter
    |
    ;

actualparameter: expression 
    | variablereference
    | procedureidentifier
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
    | identifier assignment_op expression
    | identifier assignment_op tk_false
    | identifier assignment_op tk_true
    ;

procedurestatement: procedureidentifier
    | procedureidentifier actualparameterlist
    | identifier actualparameterlist
    ;

gotostatement: tk_goto label
    ;

structuredstatement: compoundstatement
    | conditionalstatement
    | repetitivestatement
    | withstatement
    ;

compoundstatement: tk_begin statements tk_end
    | tk_begin statements tk_end '.' 
    ;

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

forstatement: tk_for identifier assignment_op initialvalue tk_to finalvalue tk_do statements
    | tk_for identifier assignment_op initialvalue tk_downto finalvalue tk_do statements
    | tk_for identifier assignment_op initialvalue tk_to identifier tk_do statements
    | tk_for identifier assignment_op initialvalue tk_downto identifier tk_do statements
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
    | identifier
    ;

proceduredeclaration: procedureheading ';' procedurebody ';' 
| procedureheading ';' procedurebody
;

procedurebody: block
  | tk_forward
  | tk_external
;

procedureheading: tk_procedure identifier optionalformalparameterlist {quitar_ambito_anterior(); insertar_simbolo($2, "PROCEDURE", linea); current_ambito = concatenar_ambito($2); resolve_pending_identifiers();}
;

optionalformalparameterlist: formalparameterlist
    | '('')'
    |
    ;

functiondeclaration: functionheading ';' functionbody ';'
;

functionbody: block
  | tk_forward
  | tk_external
;

functionheading: tk_function identifier optionalformalparameterlist ':' resulttype {quitar_ambito_anterior(); insertar_simbolo($2, "FUNCTION", linea); current_ambito = concatenar_ambito($2);}
;

resulttype: ordinaltypeidentifier 
  | realtypeidentifier 
  | identifier
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

programheading: tk_program identifier optionalprogramheadingparameters { current_ambito=$2; insertar_simbolo($2, "PROGRAM", linea);}
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

    printf("Tabla de simbolos\n");
    printf("Identificador |\tAmbito |\tLinea de definicion |\tTipo |\tLineas de uso\n");
    
    for (auto it = tabla_simbolos.begin(); it != tabla_simbolos.end(); ++it)
    {
        printf("%s\t", it->second.id.c_str());
        printf("%s\t", it->second.ambito);
        printf("%d\t", it->second.linea_definicion);
        printf("%s\t", it->second.tipo);
        for (int i = 0; i < it->second.lineas.size(); i++)
        {
            printf("%d,", it->second.lineas[i]);
        }
        printf("\n");
    }

	return 0;
}
