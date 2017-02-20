%{

%}

%%

[a-zA-Z]{5,7} { printf("\rWord: %s of length: %d in interval: (5,7)\n",yytext,yyleng); }

[a-zA-Z]{4,8} { printf("\rWord: %s of length: %d in interval: (4,8)\n",yytext,yyleng); }

%%
