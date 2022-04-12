#include <stdio.h>

int main(void) {
  int n;
  printf("Digite um numero real\n");
  scanf("%d", &n);
  printf("O triplo é: %d, o quadrado é: %d e o seu meio é: %d\n", n*3, n*n, n/2);
  return 0;
}