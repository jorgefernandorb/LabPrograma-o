#include <stdio.h>

int main(void) {
  int cont = 0;
  char c[50], d, *pc=NULL;
  pc = c;
  printf("Digite uma string\n");
  scanf("%s", c);
  getchar();
  printf("Digite um caractere\n");
  d = getchar();
  getchar();  
  while(*pc!='\0'){
    if(d==*pc) cont++;
    pc++;
  }
  printf("Possui %d vezes o caractere na string.\n", cont);
  return 0;
}