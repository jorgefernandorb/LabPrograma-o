#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir (unsigned char n){
  for (int i=7;i>=0;i--){
    if((n>>i)&1){
      printf("1 ");
    }
    else{
      printf("0 ");
    }
  }
  printf("\n");
}
unsigned char ocupar ( unsigned char a, int b){
  //printf("%c e %d\n", a, b);
  int cont = 0, x= 128;
  for(int i = 7; i>=0; i--){
   // printf("%d\n", i);
    if(!((a>>i)&1)){
      cont++;
      //printf("%d\n", cont);
      if(cont==b){
        a=a|x;
      }
    }
    //printf("%d\n", x);
    x=x/2;
  }
  return a;
}
unsigned char liberar (unsigned char a, int b){
  int x = 128;
  for(int i = 1; i<=b; i++){
    if(i == b){
      a = a^x;
    }
    x = x/2;
  }
  return a;
}

int main(void) {
  int cont = 0, aux = 0, op;
  unsigned char a = 0;
  
  do{
    printf("\nOcupação de armarios.\n");
    imprimir(a);
    printf("Escolha uma opção:\n");
    printf("1- Ocupar Armário.\n");
    printf("2- Liberar Armário.\n");
    printf("3- Sair.\n");
    scanf("%d", &op);
    
    if(op == 3){
      break;
    }
    else if(op == 1 && cont<8){
      aux = 1 + (rand()%(8-cont));
      a = ocupar(a, aux);
      cont++;
    }
    else if(op == 2 ){
      printf("Digite qual armário deseja desocupar.\n");
      scanf("%d", &aux);
      if(aux>=1 && aux<=8){
        if(a>>(8-aux)&1){
          a = liberar(a, aux);
          cont--;
        }
        else{
          printf("Armário não está ocupado.\n");
        }
      }
      else{
        printf("Armário inexistente.\n");
      }
    }
    else{
      printf("Opção invalida!\n");
    }
  }while(1); 
  
  imprimir (a);
  return 0;
}
