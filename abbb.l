%{

%}

%%

^a.*b{3,} { printf("Language of the input string: %s matching for Grammar: a.*b{3,}",yytext); }

^a.*b|a.*ab* { printf("Language of the input string: %s matching for Grammar: a.*b|a.*ab*",yytext); }

%%
