/*Write a phrase and joy!*/

#include <stdio.h>
#include <string.h>
#define w 100
int main() {char s[w];
int i=0, n,a;
fgets(s,w,stdin);
n=strlen(s);
while(i<n){
if(*(s+i+1)==' ' || *(s+1+i)=='\0')
{a=i;
while(i>=0 && *(s+i)!=' ')
{printf("%c",*(s+i)); i--;}
 i=a; printf("\n");i++;}
           else i++;}
    return 0;
}
