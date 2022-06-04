#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int main(void) {
  int l[TAM], c[TAM], m[10][10];
  
  for(int i=0;i<TAM;i++) l[i]=rand()%10;
  for(int i=0;i<TAM;i++){
    if     (l[i]>=0 && l[i]<=3) c[i]=l[i];
    else if(l[i]>3 && l[i]<=5)  c[i]=l[i]-1;
    else if(l[i]>5 && l[i]<=7)  c[i]=l[i]+1;
    else if(l[i]>7 && l[i]<=9)  c[i]=l[i]-2;
    else                        c[i]=9;
  }
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++) m[i][j]=0;
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
  for(int i=0; i<10; i++){
    printf("[");
    for(int j=0; j<10; j++){
      printf("%d ", m[i][j]);
    }
    printf("]\n");
  }
  return 0;
  }