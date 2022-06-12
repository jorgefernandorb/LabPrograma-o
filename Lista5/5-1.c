#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if(argc==4){
    if((strcmp(argv[3], "s"))==0){
      printf("%d + %d = %d\n", atoi(argv[1]), atoi(argv[2]), atoi(argv[1])+atoi(argv[2]));
    }
    else if((strcmp(argv[3], "m"))==0){
      printf("%d * %d = %d\n", atoi(argv[1]), atoi(argv[2]), atoi(argv[1])*atoi(argv[2]));
    }
    else printf("Argumento invalido %s\n", argv[3]);
  }
  else{
    printf("Uso: \n\t%s qtdLin qtdCol\n\n",argv[0]);
    exit(1);
  }
  getchar();
  return 0;
}