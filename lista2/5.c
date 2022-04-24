#include <stdio.h>

int main(void) {
  int a, b, c, n;
  printf("Digite um número diferente de zero ou digite zero para finalizar.\n");
  scanf("%d", &n);
  if(n==0){
    printf("Finalizado.\n");
  }
  else{
    for(int i=0;n!=0;i++){
      if(i==0){
        a=n;
        b=n;
      }
      else{
        if(n<a){
          a=n;
        }
        if(n>b){
          b=n;
        }
      }
      printf("Digite um número diferente de zero ou digite zero para finalizar.\n");
      scanf("%d", &n);
      if(n==0){
        printf("O maior valor digitado é: %d.\n", b);
        printf("O menor valor digitado é: %d.\n", a);
        printf("Finalizado.\n");
      }
    }
  }
  return 0;
}