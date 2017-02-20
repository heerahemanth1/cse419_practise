%{

%}
%%
[a-zA-Z] {printf("Character found: %s\n",yytext);}
[0-9] {printf("Numeric found: %d\n",atoi(yytext));}
%%