#include <stdio.h>

int main(void) {
  int n, f;
  printf("Digite um numero inteiro positivo.\n");
  scanf("%d", &n);
  f=1;
  while(n>0){
    f=f*n;
    n--;
  }
  printf("O fatorial do numero é: %d.\n", f);
  return 0;
}