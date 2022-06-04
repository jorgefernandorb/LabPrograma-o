#include <stdio.h>

int main(void) {
  int a, b, *p;
  printf("Digite um numero\n");
  scanf("%d", &a);
  p=&a;
  while(1){
    printf("Digite um numero ou -1 para sair\n");
    scanf("%d", &b);
    if(b==-1){
      break;
    }
    if(b<*p){
      //a=b;
      *p=b;
    }
  }
  printf("%d\n", *p);
  return 0;
}