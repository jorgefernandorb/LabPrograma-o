#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[100], str2[50];
  int cont;
  printf("Digite uma palavra.\n");
  gets(str1);
  printf("Digite outra palavra.\n");
  gets(str2);
  strcat(str1, str2);
  printf("%s.\n", str1);
  cont=strlen(str1);
  for(int i=0; i<=strlen(str2);i++) str1[cont+i]=str2[i];
  printf("%s.\n", str1);
  return 0;
}