#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
int main(void) {
  int vet[TAM], vetf[TAM], cont;
  
  for(int i=0;i<TAM;i++){
    vet[i]=rand()%10;
  }
  
  for(int i=0; i<TAM; i++) printf("%d ", vet[i]); 
  
  for(int i=0;i<TAM;i++){
    cont=0;
    for(int j=0;j<TAM;j++){
      if(vet[j]==i) cont++;
    }
    vetf[i]=cont;
  }
  
  printf("\n");
  for(int i=0; i<TAM; i++) printf("%d ", vetf[i]);
  return 0;
  }