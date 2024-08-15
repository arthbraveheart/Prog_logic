#include <stdio.h>
int conta(float vetor[], int tamanho){ 
    int cont=0;
    for(int i=0; i<tamanho; i++){
        
        cont+= ((int)vetor[i]%2!=0 && vetor[i]>=0)? 1:0;
    }
    return cont;
}
void preencher(float vetor[], int tamanho){
     for(int i=0; i<tamanho; i++ ){
         scanf("%f", &vetor[i]);
     }
    }
float soma(float vetor[], int tamanho, int seg_valor){
      int somar=0;
      for(int i=0; i<tamanho; i++){
      
      somar += (vetor[i]>=0 || (int)vetor[i]== seg_valor)? 1:0;
      }
      return somar;
}
int main(){ float v[10];

preencher( v, 10);
printf("%i | %f", conta(v,10), soma(v,10, 66));

return 0;
    
}
