#include <stdio.h>

int main(void) {
  int n, m, cont=0;
  printf("Digite um número\n");
  scanf("%d", &n);
  do{
    if(n%10==7){
      cont++;
    }
    n=n/10;
  }while(n>1);
  printf("Possui %d algarismo 7.\n", cont);
  return 0;
}