#include <stdio.h>

int main(void) {
  float c, f;
  printf("Digite a temperatura em Celsius\n");
  scanf("%f", &c);
  f = c * 1.8 + 32;
  printf("A temperatura em Fahrenheit é: %.2f\n", f);
  return 0;
}