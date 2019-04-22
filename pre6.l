%{
#include<stdio.h>
#include<string.h>
int count=0;
%}
word [a-z]+
%%
{word} {if(strcmp(yytext,"goto")==0)count++;}
. {};
%%

int main(){
yyin=fopen("nai.txt","r+");
yylex();
printf("%d",count);
}

