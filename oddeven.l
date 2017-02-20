%{
#include<stdio.h>
int a;
%}

%%
[0-9]+ {a=atoi(yytext);if(a%2==0){printf("%d is even.\n",a);}else{printf("%d is odd.\n",a);}}
%%
