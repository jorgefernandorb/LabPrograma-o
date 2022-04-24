#include <stdio.h>

int main(void) {
  int a, b, c, cont=0;
  printf("Digite um intervalo númerico\n");
  scanf("%d", &a);
  scanf("%d", &b);
  if(a>b){
    c=a;
    a=b;
    c=a;
  }
  while(a<=b){
    if(a%3==0){
      cont++;
    }
    a++;
  }
  printf("Possui %d números divisiveis por 3 no intervalo mencionado.\n", cont);
  return 0;
}