#include <stdio.h>

int main(void) {
  int j= 150, p=110, cont=1;
  while(j!=p){
    j=j+2;
    p=p+3;
    cont++;
  }
  printf("Depois de %d que José e Pedro terão a mesma altura.\n", cont);
  return 0;
}