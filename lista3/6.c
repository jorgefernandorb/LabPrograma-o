#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[50], str2[50];
  int cont;
  printf("Digite uma palavra.\n");
  gets(str1);
  cont=strlen(str1);
  for(int i=1; i<=cont;i++) str2[i-1] = str1[cont-i];
  printf("%s.\n", str2);
  return 0;
}