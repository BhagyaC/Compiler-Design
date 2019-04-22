%{
#include<stdio.h>
#include"y.tab.h"
%}

%%
do {return DO;}
while {return WHILE;}
[a-zA-Z]+ {yylval=atoi(yytext);return ID; printf("id returnec");}
[0-9] {return num;}
">=" {return GE;}
"<=" {return LE;}
"!=" {return NE;}
"==" {return E;}

\n {return NL;}
. {return yytext[0];}
%%

int yywrap(){
return 1;
}
