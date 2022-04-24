#include <stdio.h>

int main(void) {
  int n;
  printf("Digite um numero de 1 a 7 ou digite 0 para finalizar.\n");
  scanf("%d", &n);
  if(n==0){
      printf("Finalizado.\n");
    }
  while(n!=0){
    if(n==1){
      printf("Domingo.\n");
    }
    else if(n==2){
      printf("Segunda.\n");
    }
    else if(n==3){
      printf("Terça.\n");
    }
    else if(n==4){
      printf("Quarta\n");
    }
    else if(n==5){
      printf("Quinta\n");
    }
    else if(n==6){
      printf("Sexta\n");
    }
    else if(n==7){
      printf("Sabado\n");
    }
    else{
      printf("Número invalido\n");
    }

    printf("Digite um numero de 1 a 7 ou digite 0 para finalizar.\n");
    scanf("%d", &n);
    
  }
  if(n==0){
    printf("Finalizado.\n");
  }
  return 0;
}