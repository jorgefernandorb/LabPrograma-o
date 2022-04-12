#include <stdio.h>

int main(void) {
  float n;
  printf("Digite um numero real\n");
  scanf("%f", &n);
  printf("O número digitado com uma casa decimal é: %.1f\n", n);
  return 0;
}