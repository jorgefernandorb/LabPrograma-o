#include <stdio.h>

int main(void) {
  int nd;
  float diaria = 50.25, vLiquido, vBruto, impRenda;  
  printf("Digite o numero de dias trabalhado\n");
  scanf("%d", &nd);  
  if(nd<=10){
    vBruto = nd * diaria;
  }
  else if(nd>10 && nd<=20){
    vBruto = nd * diaria * 1.2;
  }
  else{
    vBruto = nd * diaria * 1.3;
  }
  vLiquido = vBruto * 0.9;
  printf("O valor liquido a receber é: R$%.2f\n", vLiquido);
  return 0;
}