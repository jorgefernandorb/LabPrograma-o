#include <stdio.h>

int main(void) {
  int a, b, n, cont=0;
  printf("Digite um número inteiro.\n");
  scanf("%d", &n);
  if(n%2==0 && n<0){
    printf("Nenhum valor valido digitado.\n");
  }
  else{
    while(!(n%2==0 && n<0)){
      if(cont==0){
        a=n;
        b=n;
      }
      if(n<a){
        a=n;
      }
      if(n>b){
        b=n;
      }
      printf("Digite um número inteiro\n");
      scanf("%d", &n);
      cont++;
    }
    printf("O produto do maior numero digitado pelo menor é: %d\n", a*b);
  }
  return 0;
}