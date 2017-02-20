%{
 #include<stdio.h>
 int cint=0;
 int cfloat=0;
%}

%%

^"int " { cint++; }
[\n\t ]+"int " { cint++; }
^"float " { cfloat++; }
[\n\t ]+"float " { cfloat++; }
. ;

%%

int main() {
 yylex();
 printf("No. of int variables: %d\n",cint);
 printf("No. of float variables: %d\n",cfloat);
}
