%{

%}

%%

([a-zA-Z0-9]+@(gmail)|(yahoo)|(ymail)|(outlook)|(hotmail)|(protonmail).com) {
    printf("Valid Email: %s",yytext);
}

(http://)|(https://)?(www.)?[a-zA-Z.]+.(com)|(net)|(aspx)|(me)|(org)[a-zA-Z/]* {
    printf("Valid URL: %s",yytext);
}

. { printf("Sorry. This is neither an e-mail nor an url.); }

%%