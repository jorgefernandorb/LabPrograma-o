#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int main(void) {
  int vet[TAM], *p=NULL, aux;
  p=vet;
  for(int i=0;i<TAM;i++){
    vet[i]=rand()%10;
  }
  for(int i=0; i<TAM; i++) printf("%d ", vet[i]);
  
  for(int i=0;i<TAM;i++){
    for(int j=0;j<TAM-i;j++){
      if(*(p+j)>*(p+j+1)){
        aux = *(p+j);
        *(p+j) = *(p+j+1);
        *(p+j+1) = aux;
      }
    }
  }
  printf("\n");
  for(int i=0; i<TAM; i++) printf("%d ", vet[i]);
  return 0;
  }