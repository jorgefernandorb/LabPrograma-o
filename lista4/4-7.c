#include <stdio.h>

int main(void) {
  char c[50], d[50], *pc=NULL, *pd=NULL;
  pc = c;
  pd = d;
  printf("Digite uma string\n");
  scanf("%s", c);
  getchar();
  printf("Digite outra string\n");
  scanf("%s", d);
  getchar();
  while(*pc!='\0'){
    pc++;
  }
  while(*pd!='\0'){
    *pc=*pd;
    pc++;
    pd++;
  }
  printf("A string é %s.\n", c);
  return 0;
}