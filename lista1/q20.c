#include <stdio.h>

int main(void) {
  int n;
  printf("Digite um número\n");
  scanf("%d", &n);
  printf("O número é %s\n", (n%2 ? "impar":"par"));
  return 0;
}