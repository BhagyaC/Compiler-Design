%{
#include<stdio.h>
#include<stdlib.h>
%}
%token ID NUMBER NL
%left '+' '-'
%left '*' '/'

%%
stmt: exp NL {printf("valid expression\n"); exit(0);}
;
exp: exp '+' exp | exp '-' exp | exp '*' exp | exp '/' exp | '(' exp ')' | ID | NUMBER
;
%%
int yyerror(char *msg)
{
 printf("%s\n",msg);
 exit(0);
}
main()
{
 printf("enter the expression: \n");
 yyparse();
}
