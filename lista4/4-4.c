#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n[4], *pn=NULL;
  float f[4], *pf=NULL;
  char c[4], *pc=NULL;
  pn = n;
  pf = f;
  pc = c;
  for(int i=0;i<4;i++){
    printf("Digite um número inteiro.\n");
    scanf("%d", &n[i]);
  }
  for(int i=0;i<4;i++){
    printf("Digite um número real.\n");
    scanf("%f", &f[i]);
  }
  getchar();
  for(int i=0;i<4;i++){
    printf("Digite um caractere.\n");
    c[i] = getchar();
    getchar();
  }
  for(int i=0; i<4; i++){
    printf("Vetor de número inteiro\n");
    printf("conteudo:%d e o endereço:%p\n", *pn, pn);
    pn++;
  }
  for(int i=0; i<4; i++){
    printf("Vetor de número real\n");
    printf("conteudo:%.2f e o endereço:%p\n", *pf, pf);
    pf++;
  }
    for(int i=0; i<4; i++){
    printf("Vetor de número inteiro\n");
    printf("conteudo:%c e o endereço:%p\n", *pc, pc);
    pc++;
  }
  
  return 0;
}