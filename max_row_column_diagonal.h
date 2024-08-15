/*Take a size and interval to your matrix, for exemple:
  Input:
  10
  100
  ------
  Output:
  
  84  87  78  16  94  36  87  93  50  22 
 63  28  91  60  64  27  41  27  73  37 
 12  69  68  30  83  31  63  24  68  36 
 30   3  23  59  70  68  94  57  12  43 
 30  74  22  20  85  38  99  25  16  71 
 14  27  92  81  57  74  63  71  97  82 
  6  26  85  28  37   6  47  30  14  58 
 25  96  83  46  15  68  35  65  44  51 
 88   9  77  79  89  85   4  52  55 100 
 33  61  77  69  40  13  27  87  95  40 

Vetor linha:
94 | 91 | 83 | 94 | 99 | 97 | 85 | 96 | 100 | 95 | 
Vetor coluna:
88 | 96 | 92 | 81 | 94 | 85 | 99 | 93 | 97 | 100 | 
Diagonal: 85
*/

#include <stdio.h>
#include <math.h>


int main() {
int i, j, a, max,w,r;
scanf("%d",&w); scanf("%d", &r); int m[w][w];
for(i=0; i<w; i++){
    for(j=0; j<w; j++){
        m[i][j]=1 + rand()%r;
        printf("%3d ", m[i][j]);}
    printf("\n");}
int l[w];
for(a=0; a<w; a++){
    for(j=0; j<w; j++){
         max=m[a][j];
        for(i=0; i<w; i++){
         if(m[a][i]>max){
             max= m[a][i];}}}
     l[a]=max;}
    printf("\n"); printf("Vetor linha:\n");
    for(i=0; i<w; i++){
          printf("%d | ", l[i]);}
int c[w];
for(a=0; a<w; a++){
    for(j=0; j<w; j++){
         max=m[j][a];
        for(i=0; i<w; i++){
         if(m[i][a]>max){
             max= m[i][a];}}}
     c[a]=max;}
    printf("\n");  printf("Vetor coluna:\n");
    for(i=0; i<w; i++){
          printf("%d | ", c[i]);} i=0; a= m[0][0];
    while(i<w){a=(a>=m[i][i])? a:m[i][i]; i++;}
     printf("\nDiagonal: %d", a);
                     return 0;}
