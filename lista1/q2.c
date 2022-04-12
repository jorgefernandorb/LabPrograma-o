#include <stdio.h>

int main(void) {
  int n;
  printf("Digite um número\n");
  scanf("%d", &n);
  printf("O numero no formato octal %o e no formato em hexa %x\n",n , n );
  return 0;
}