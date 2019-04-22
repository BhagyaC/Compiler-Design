%{
#include<stdio.h>
%}

%%

aa(a|b)*bb {printf("valid");}
(1)*(2)*(3)* {printf("valid");}
(.*) {printf("invalid");}

%%

int main(){
yylex();
}
