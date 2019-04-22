%{
#include<stdio.h>
%}

%%
[a-z]+ { if(yyleng==4) printf("valid");
	else printf("invalid");}

(.*) {printf("invalid");}
%%

int main(){
yylex();
}
