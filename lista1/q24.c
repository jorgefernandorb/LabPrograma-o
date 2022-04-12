#include <stdio.h>

int main(void) {
  long unsigned int a, n, x;
  printf("x*2^n, digite o x e o n.\n");
  scanf("%lu", &x);
  scanf("%lu", &n);
  a= x<<n;
  printf("O resultado é: %lu\n", a);
  return 0;
}