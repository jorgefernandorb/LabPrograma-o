#include <stdio.h>

int main(void) {
  char c[50], d[50], *pc=NULL, *pd=NULL;
  pc = c;
  pd = d;
  printf("Digite uma string\n");
  scanf("%s", c);
  getchar();
  while(*pc!='\0'){
    *pd = *pc;
    pc++;
    pd++;
  }
  printf("A string é %s.\n", d);
  return 0;
}