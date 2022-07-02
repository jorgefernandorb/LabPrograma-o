#include <stdio.h>
struct Prof{
  char nome[100];
  char titulacao[100];
  char formacao[100];
};
struct Disc{
  char nome[100];
  struct Prof prof;
};
int main(void) {
  printf("Hello World\n");
  return 0;
}