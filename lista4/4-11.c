#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int main(void) {
  int l[TAM], c[TAM], m[TAM][TAM];
  
  for(int i=0;i<TAM;i++) l[i]=rand()%10;
  for(int i=0;i<TAM;i++) c[i]=rand()%10;
  for(int i=0;i<TAM;i++){
    for(int j=0;j<TAM;j++) m[i][j]=0;
  }
  
  printf("Vetor linha:\n");
  printf("[");
  for(int i=0; i<TAM; i++) printf("%d ", l[i]);
  printf("]");
  printf("\n");
  printf("Vetor coluna\n");
  printf("[");
  for(int i=0; i<TAM; i++) printf("%d ", c[i]);
  printf("]");
  printf("\n");
  
  for(int i=0;i<TAM;i++) m[l[i]][c[i]]++;
  printf("Matriz gerada.\n");
  for(int i=0; i<TAM; i++){
    printf("[");
    for(int j=0; j<TAM; j++){
      printf("%d ", m[i][j]);
    }
    printf("]\n");
  }
  return 0;
  }