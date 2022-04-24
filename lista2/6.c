#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void limpar (void){
  char ch;
  while ((ch=getchar()!='\n' && ch!=EOF));
}

int main(void) {
  float paulo=0, renata=0, branco=0, nulo=0, total=0;
  int voto, v;
  char c;
  do{
    printf("Sistema de votação:\n");
    printf("5 - Paulo;\n");
    printf("7 - Renata;\n");
    printf("0 - Branco;\n");
    printf("Outros n° positivos - Nulo;\n");
    printf("N° negativo - para encerrar.\n");
    scanf("%d", &v);
    limpar();
    printf("Confirma seu voto?\n");

    if(v==5){
      printf("5 - Paulo;\n");
    }
    else if(v==7){
      printf("7 - Renata;\n");
    }
    else if(v==0){
      printf("0 - Branco;\n");
    }
    else if(v<0){
      printf("Encerrar.\n");
    }
    else{
      printf("Nulo.\n");
    }

    do{
      printf("(s) - Sim\n");
      printf("(n) - Não\n");
      c=getchar();
      limpar();
      if(c=='s'){
        break;
      }
      else if (c=='n'){
        break;
      }
      else{
        printf("Valor invalido!\n");
      }
    }while(1);
    if(c == 's'){
      voto = v;
      if(voto == 5){
        total++;
        paulo++;
      }
      else if(voto == 7){
        total++;
        renata++;
      }else if(voto == 0){
        total++;
        branco++;
      }
      else if(voto<0){
        printf("Votação encerrada!!!\n");
        break;
      }
      else{
        total++;
        nulo++;
      }
    }
    
  }while(voto>=0);
  
  printf("Apuração de votos!\n");
  printf("Total de votos %0.1f.\n", total);
  printf("Paulo obteve %0.1f %%.\n", paulo*100.0/total);
  printf("Renata obteve %0.1f %%.\n", renata*100.0/total);
  printf("Branco obteve %0.1f %%.\n", branco*100.0/total);
  printf("Nulo obteve %0.1f %%.\n", nulo*100.0/total);
  if(paulo>renata){
    printf("Paulo venceu!!!\n");
  }
  else if(renata>paulo){
    printf("Renata venceu!!!\n");
  }
  else{
    printf("Empate!!!\n");
  }
  return 0;
}