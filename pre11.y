%{
#include<stdio.h>
#include<stdlib.h>
%}
%token ID NL
%left '+' '-'
%left '*' '/'
%start exp
%%

exp: exp '+' exp {printf("+");} |exp '-' exp {printf("-");} |exp '*' exp {printf("*");} | exp '/' exp {printf("/");} | ID {printf("%d",$1);}
;
%%
int yyerror(char * msg){
}
int main(){

printf("enter the expression\n");
yyparse();
return 0;

}
