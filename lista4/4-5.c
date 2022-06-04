#include <stdio.h>

int main(void) {
  int cont = 0;
  char c[50], *pc=NULL;
  pc = c;
  printf("Digite uma string\n");
  scanf("%s", c);
  while(*pc!='\0'){
    cont++;
    pc++;
  }
  printf("A string possui %d caracteres.\n", cont);
  return 0;
}