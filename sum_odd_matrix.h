/* Sum odd numbers on a matrix, cols and rows. */

#include <stdio.h>
#include <math.h>
#define w 3

int main() {
int m[w][w], i,j,imp=0, lin1=0, lin2=0, lin3=0,col1=0, col2=0, col3=0;
for(i=0; i<w; i++){
    for(j=0; j<w; j++){
       m[i][j]= 1 + rand()%20;
       if(m[i][j]%2!=0){
           imp= m[i][j] + imp;
       }
       printf("%d ", m[i][j]);
    }
    col1= m[i][0] + col1;
    col2= m[i][1] + col2;
    col3= m[i][2] + col3;
    printf("\n");
}
for(i=0; i<w; i++){
    lin1= m[0][i] + lin1;
    lin2= m[1][i] + lin2;
    lin3= m[2][i] + lin3;
}
printf("\n Simp=%d | Scol1=%d | Scol2=%d | Scol3=%d | Slin1=%d | Slin2=%d | Slin3=%d", imp, col1,col2, col3, lin1, lin2, lin3);
    return 0;
}
