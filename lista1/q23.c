#include <stdio.h>

int main(void) {
  int a, b, c, n, m;
  printf("Digite um numero de 3 digitos\n");
  scanf("%d", &n);
  a= n/100;
  b= (n%100)/10;
  c= (n%100)%10;
  m= a+(b*10)+(c*100);
  printf("O novo número é: %d\n", m);
  return 0;
}