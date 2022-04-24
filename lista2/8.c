#include <stdio.h>

int main(void) {
  int p;
  float valor, entrada;
  printf("Digite o valor da mercadoria.\n");
  scanf("%f", &valor);
  p=valor/3;
  entrada=valor-(p*2);
  printf("A entrada é: R$:%.2f e as prestações: R$:%d.00", entrada, p);
  return 0;
}