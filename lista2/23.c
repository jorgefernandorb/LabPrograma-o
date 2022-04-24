#include <stdio.h>

int main(void) {
  int a=3, b;
  printf("A=%d\n", a);
  printf("Pre-incremento\n");
  printf("b=--a\n");
  b=--a;
  printf("b=%d e a=%d\n", b, a);
  printf("Pos-incremento\n");
  printf("b=a--\n");
  b=a--;
  printf("b=%d e a=%d\n", b, a);
  return 0;
}