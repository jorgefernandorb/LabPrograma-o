#include <stdio.h>

int main(void) {
  int h, m, s, t;
  printf("Digite o tempo total em segundos\n");
  scanf("%d", &t);
  h= t/3600;
  m= (t%3600)/60;
  s= (t%3600)%60;
  printf("São %d:%d:%d\n", h, m, s);
  return 0;
}