#include <stdio.h>

int main(void) {
  int n, mod, quad, aux=1, cont=0;
  printf("Digite um número inteiro\n");
  scanf("%d", &n);
  quad = n * n;
  //macete para calcular a raiz quadrada de um numero
 while(aux<=quad){
    quad=quad-aux;
    aux = aux+2;
    cont++;
  }
  mod = cont;
  printf("Seu valor absoluto é: %d\n", mod);
  return 0;
}