#include <stdio.h>

int main(void) {
  int m, n, a, b, c, cont;
  printf("Digite dois numeros.\n");
  scanf("%d", &a);
  scanf("%d", &b);
  if(a>b){
    c=a;
    a=b;
    b=c;
  }
  cont=a;
  do{
    if(cont%4==0){
      printf("%d.\n", cont*cont);
    } 
    cont++;
  } while(cont<=b);
  return 0;
}