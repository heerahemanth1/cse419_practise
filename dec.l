%{
%}

%%
^[0-9]+(\.[0-9][0-9]?)?$ {printf("Valid Decimal Number: %s",yytext);}
. ;
%%
