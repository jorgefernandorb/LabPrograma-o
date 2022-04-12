#include <stdio.h>

int main(void) {
  float v, a, c, l;
  printf("Digite a altura, comprimento e largura da caixa.\n");
  scanf("%f", &a);
  scanf("%f", &c);
  scanf("%f", &l);
  v=a*c*l;
  printf("O volume da caixa é: %.2f .\n", v);
  return 0;
}