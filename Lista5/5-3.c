#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
void mmv (int *a, int *b);
int main(int argc, char *argv[]) {
  int x[atoi(argv[1])], v[2], *p=NULL, *q=NULL, aux=0, cont=0;
  p=x;
  q=v;
  while(*(p+cont)!='\0') cont++;
  printf("%d\n", cont);
  srand(time(NULL));
  for(int i=0;i<atoi(argv[1]);i++) x[i]=rand()%10;  
  
  for(int i=0; i<atoi(argv[1]); i++) printf("%d ", x[i]);
  printf("\n");
  //mmv (p, q);
  printf("O menor é %d e seu endereço é %p.\n", *q, q);
  printf("O maior é %d e seu endereço é %p.\n", *(q+1), q+1);
  return 0;
}
void mmv (int *a, int *b){
  int cont=0, mn=0, ma=0;
  while(*(a+cont)!='\0') cont++;
  printf("%d\n", cont);
  for(int i=1;i<cont;i++) if(*(a+mn)>*(a+i)) mn=i;
  for(int i=1;i<cont;i++) if(*(a+ma)<*(a+i)) ma=i;
  *b=*(a+mn);
  *(b+1)=*(a+ma);
}