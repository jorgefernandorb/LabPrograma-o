#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
  
int main(void) {
  int vet[100];
  int vets[100], vetb[100];
  int n1, n2, s, b;
  printf("Digite um intervalo númerico.\n");
  scanf("%d", &n1);
  scanf("%d", &n2);
  for(int i=0; i<100; i++) vet[i]=n1+(rand()%n2);
  for(int i=0; i<100; i++) vets[i]=vet[i];
  for(int i=0; i<100; i++) vetb[i]=vet[i];
  // exibe o vetor gerado
  printf("Vetor gerado.\n");
  for(int i=0; i<100; i++) printf("%d ", vet[i]);
  printf("\n");
  // metodo da seleção
  for(int i=0;i<99;i++){
    for(int j=i+1;j<100;j++){
      if(vets[j]<vets[i]){
        s=vets[i];
        vets[i]=vets[j];
        vets[j]=s;
      }
    }
  }
  // exibe o vetor ordenado por select
  printf("Vetor ordenado seleção.\n");
  for(int i=0; i<100; i++) printf("%d ", vets[i]);
  printf("\n");
  // metodo da bolha
  for(int i=0;i<100;i++){
    for(int j=0;j<99-i;j++){
      if(vetb[j]>vetb[j+1]){
        b=vetb[j];
        vetb[j]=vetb[j+1];
        vetb[j+1]=b;
      }
    }
  }
  // exibe o vetor ordenado por bolha
  printf("Vetor ordenado bolha.\n");
  for(int i=0; i<100; i++) printf("%d ", vetb[i]);
  printf("\n");
  return 0;
}