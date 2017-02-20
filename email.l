%{

%}

%%
([a-zA-Z0-9]+@(gmail)|(ymail)|(outlook).com) {printf("Valid E-mail address: %s",yytext);}
. {printf("Invalid Email.");}
%%
