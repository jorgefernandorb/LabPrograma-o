#include <stdio.h>

int main(void) {
  float pi=3.14159, r;
  printf("Digite o raio da circunferencia\n");
  scanf("%f", &r);
  printf("Diametro da circunferencia: %.2f\n", 2*r);
  printf("O valor da circunferencia: %.2f\n", 2*pi*r);
  printf("A area da circunferencia: %.2f\n", pi*r*r);
  return 0;
}