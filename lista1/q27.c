#include <stdio.h>
#include <math.h>

int main(void) {
  float a, b, c, ma, mg;
  printf("Digite três numeros reais\n");
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  ma= (a+b+c)/3;
  mg= pow(a*b*c,1.0/3.0);
  printf("A media aritimética é: %.2f\n", ma);
  printf("A media geomética é: %.2f\n", mg);
  return 0;
}