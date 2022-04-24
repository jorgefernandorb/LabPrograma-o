#include <stdio.h>

int main(void) {
  int a, b, c, s=0;
  printf("Digite dois numeros\n");
  scanf("%d", &a);
  scanf("%d", &b);
  
  if(a>b){
    c=a;
    a=b;
    b=c;
  }
  
  while(a<=b){
    if(a%2==0){
      s=s+a;
    }
    a++;
  }
  
  printf("Somatorio dos números pares no intervalo fornecido %d\n", s);
  return 0;
}