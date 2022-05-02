#include <stdio.h>
#include <string.h>

int main(void) {
  char str[100];
  int cont=0;
  printf("Digite uma palavra.\n");
  scanf("%s", str);
  getchar();
  while(str[cont]!='\0') cont++;
  printf("Possui %d caracteres.\n", cont);
  return 0;
}