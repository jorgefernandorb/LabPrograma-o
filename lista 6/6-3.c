#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Dados {
  float *p;
  float media;
  int tam;
};
int main(void) {
  struct Dados d1;
  printf("Digite o tamanho do vetor\n");
  scanf("%d", &d1.tam);
  
  d1.p=(float*)malloc(d1.tam*sizeof(float));
  
  srand(time(NULL));
  for(int i=0;i<d1.tam;i++) d1.p[i]=rand()%10;

  for(int i=0; i<d1.tam; i++) printf("%.2f ", d1.p[i]);
  printf("\n");

  d1.media=0;
  for(int i=0;i<d1.tam;i++) d1.media=d1.media+d1.p[i];

  d1.media=d1.media/d1.tam;

  printf("A media é: %.2f\n", d1.media);
  
  return 0;
}