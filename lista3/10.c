#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void) {
  int m [5][5];
  int n, cont=0;
  for(int i=0; i<5; i++){
    printf("[");
    for(int j=0; j<5; j++){
      m[i][j]=rand()%100;
      printf("%d ", m[i][j]);
    }
    printf("]\n");
  }
  printf("Digite um número\n");
  scanf("%d", &n);
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      if(n==m[i][j]) cont++;
    }
  }
  printf("O número digitado aparece %d vezes na matriz.\n", cont);
  return 0;
}