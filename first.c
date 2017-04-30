#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
 int n;
 printf("Enter the number of productions: ");
 scanf("%d",&n);
 char pro[n][20],nt[n];
 int top=0;
 int i=0,j=0,flag;
 while(i<n) {
  flag=0;
  scanf("%s",pro[i]);
  for(j=0;j<top;j++) {
   if(nt[j]==pro[i][0]){flag=1;}
  }
  if(flag==0) {
   nt[top]=pro[i][0];
   top++;
  }
  i++;
 }
 int m;
 for(i=0;i<top;i++) {
  for(j=0;j<n;j++) {
   if(nt[i]==pro[j][0]) {
    int ln=strlen(pro[j]);
    int k=0;
    while(k<ln) {
     if(pro[j][k]==':')break;
     k++;
    }
    flag=0;
    for(m=0;m<top;m++) {
     if(pro[j][k+1]==nt[m]) {
      flag=1;
      break;
     }
    }
    if(flag==0) {
     printf("First of %c: %c\n",nt[i],pro[j][k+1]);
    } else {
     printf("First of %c: first(%c)\n",nt[i],pro[j][k+1]);
    }
   }
  }
 }
}
