/* Given and tape with zeros and ones, we have to decode it to find a word, for exemple:
Input:
{               "0     0",
                "00   0 ",
                "00    0",
                "00   00",
                "00    0 ",
                "0000   ",
                "00 0  0",
                " 0 000 "
 };
 ---------
 Output:
 | 10000010 |
65
| 11000100 |
98
| 11000010 |
97
| 11000110 |
99
| 11000010 |
97
| 11110000 |
120
| 11010010 |
105
| 01011100 |
46
Abacaxi.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#define w 10*10
int main() {
  char p[w];
  int a,i,j,n;
 char t[w][8]={ "0     0",
                "00   0 ",
                "00    0",
                "00   00",
                "00    0 ",
                "0000   ",
                "00 0  0",
                " 0 000 "
 };
   for(j=0;j<8;j++){
   a=strlen(t);
   int v[a];
    n=0;
   printf("\n| ");
   for(i=0;i<8;i++){
       v[i]=(t[j][i]=='0')? 1:0;
       n+=v[i]*pow(2,a-i-1);
       printf("%d", v[i]);
   }
    printf(" |");
   printf("\n%d", n);
   p[j]= ' ' + n -32;}
   printf("\n");
   puts(p);
    return 0;
}
