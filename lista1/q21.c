#include <stdio.h>

int main(void) {
  int a, b;
  printf("Digite dois números\n");
  scanf("%d", &a);
  scanf("%d", &b);
  printf("O número %d %s de %d\n", a, (a%b ? "não é multiplo":"é multiplo"), b);
  return 0;
}