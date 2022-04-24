#include <stdio.h>

int main(void) {
  int n, m, a, b, c, d, e;
  printf("Digite um numero de 5 digitos\n");
  scanf("%d", &n);
  a=n/10000;
  b=(n%10000)/1000;
  c=((n%10000)%1000)/100;
  d=(((n%10000)%1000)%100)/10;
  e=(((n%10000)%1000)%100)%10;
  m=e*10000+d*1000+c*100+b*10+a;
  printf("%d\n", m);
  if(m==n){
    printf("É um palindromo\n");
  }
  else{
    printf("Não é um palindromo\n");
  }
  return 0;
}