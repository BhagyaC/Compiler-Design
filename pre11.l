%{
#include<stdio.h>
#include"y.tab.h"
%}
%%
[0-9]+ {yylval=atoi(yytext);return ID;}
\n {return NL;}
. {return yytext[0];}
%%

int yywrap(){
	return 1;
}
