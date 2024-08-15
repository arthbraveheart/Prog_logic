/* Write a phrase and joy! */

#include <stdio.h>
#include <string.h>
#define w 100
int main() {
char s[w],q[w];
int i=0,n;

fgets(s,w,stdin);
n=strlen(s);
while(i<n){
    sprintf(&q[i],"%c",*(s+n-1-i));
    if(*(q+i)==' '){printf("\n");}
    else{printf("%c", *(q+i));} i++;}
    return 0;
}
