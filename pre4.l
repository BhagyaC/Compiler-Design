%{
#include<stdio.h>

int count=1;
%}

%%
[\n]+ {count++;}
(.)* ;

%%



int main(){

yyin=fopen("out.c","r");
yylex();
printf("count is=%d",count);


return 0;

}
int yywrap(){
return 1;
}
