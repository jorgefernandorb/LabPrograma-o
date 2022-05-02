#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
  
int main(void) {
  int vet[3];
  float ma=0, mg=1;
  for(int i=0; i<3; i++) vet[i]=rand()%20;
  for(int i=0; i<3; i++){
    ma=ma+vet[i];
    mg=mg*vet[i];
  }
  ma = ((float) ma/3.0);
  mg = ((float) pow(mg,1.0/3.0));
  for(int i=0; i<3; i++) printf("%d ", vet[i]);
  printf("\n");
  printf("Media Aritimética = %.2f\n", ma);
  printf("Media Geomética = %.2f\n", mg);
  return 0;
}