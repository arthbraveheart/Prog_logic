#include <stdio.h>
int pdx(int n);
int main() {
int a;
printf("Write a natural number: ");
scanf("%d", &a);
printf("%d \n", a);
pdx(a);
    return 0;
}
int pdx(int n){
  n=(n%2==0)? (n/2):3*n+1;
  printf("%d ", n);
  return pdx(n);
  
}
