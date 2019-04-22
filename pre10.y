%{
#include<stdio.h>
#include<stdlib.h>
%}

%token ID num DO WHILE NL GE LE NE E
%left '+' '-' '*' '/'
%start st
%%

st: DO '{'exp ';' '}' WHILE '(' cont ')' ';'   NL {printf("valid");exit(0);}
;
cont: exp '>' exp | exp GE exp | exp '<' exp | exp LE exp | exp NE exp | exp E exp
;
exp: exp '=' exp | exp '+' exp | exp '-' exp | exp '*' exp | exp '/' exp | ID | num
;

%%

int yyerror(char * msg){
printf("%s",msg);
}

int main(){
printf("enter the  expression");
yyparse();
return 0;
}
