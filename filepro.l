%{
 #include<stdio.h>
 int count=1;
%}

%%
static|void|int|float|continue|break|public|char|if|else|for|while|do|goto|enum|register|return|extern|case|switch|signed|sizeof|volatile|default|const|auto|union|typedef {printf("Keyword found: %s, on line: %d\n",yytext,count);}

\n {count++;}

[\a\b\f\r\t\v\'\"\?\\] ;//{printf("Special Character found\n");}

[a-z]+".h" {printf("Header File found: %s, on line: %d\n",yytext,count);}

==|\+\+|\-\-|&&|\|\||<=|>= {printf("Operator found: %s, on line: %d\n",yytext,count);}

[+\-*^/|=!&<>] {printf("Operator found: %s, on line: %d\n",yytext,count);}

%[^csdf] {printf("Operator found: %s, on line: %d\n",yytext,count);}

. ;
%%

int main() {
 char fname[100];
 printf("\nEnter the absolute path of the C-File: ");
 scanf("%s",&fname);
 yyin = fopen(fname,"r");
 yylex();
}
