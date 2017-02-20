%{

%}

%%

("http://""www."?[a-zA-Z.]+".com"|".net"|".org"|".me"|".aspx") { printf("Valid URL: %s",yytext); }
("https://""www."?[a-zA-Z.]+".com"|".net"|".org"|".me"|".aspx") { printf("Valid URL: %s",yytext); }
. ; //{ printf("Do enter valid url with protocol."); }

%%
