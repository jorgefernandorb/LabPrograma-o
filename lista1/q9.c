#include <stdio.h>

int main(void) {
  int n, a, s;
  printf("Digite um numero inteiro\n");
  scanf("%d",&n);
  a=n-1;
  s=n+1;
  printf("O antecessor é: %d e seu sucessor é: %d\n", a, s);
  return 0;
}