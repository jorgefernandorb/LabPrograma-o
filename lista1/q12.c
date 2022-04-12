#include <stdio.h>

int main(void) {
  int a, b, s, p, d, q, r;
  printf("Digite dois numeros inteiros\n");
  scanf("%d", &a);
  scanf("%d", &b);
  s=a+b;
  p=a*b;
  d=a-b;
  q=a/b;
  r=a%b;
  printf("A soma dos números é: %d;\na diferença é: %d;\no produto é: %d;\no quociente é: %d\ne o resto é: %d.\n", s, d, p, q, r);
  return 0;
}