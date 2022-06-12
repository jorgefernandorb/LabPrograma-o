#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int main(int argc, char *argv[]) {
  int x[atoi(argv[1])], *p=NULL, aux=0;
  p=x;
  srand(time(NULL));
  for(int i=0;i<atoi(argv[1]);i++) x[i]=rand()%10;  
  
  for(int i=0; i<atoi(argv[1]); i++) printf("%d ", x[i]);
  printf("\n");
  for(int i=1;i<atoi(argv[1]);i++){
    if(*(p+aux)>*(p+i)) aux=i;
  }
  printf("O menor é %d e seu endereço é %p.\n", *(p+aux), p+aux);
  return 0;
  }