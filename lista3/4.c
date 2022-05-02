#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[100], str2[100];
  int cont=0;
  printf("Digite uma palavra.\n");
  gets(str1);
  printf("Digite outra palavra.\n");
  gets(str2);
  !(strcmp(str1,str2)) ? printf("Iguais.\n"):printf("Diferentes.\n");
  while(str1[cont]==str2[cont]) cont++;
  cont==strlen(str1) ? printf("Iguais.\n"):printf("Diferentes.\n");
  return 0;
}