#include <stdio.h>

int main(void) {
  int a, b, c, *p, *q;
  printf("Digite dois números, respectivamente A e B.\n");
  scanf("%d%d", &a, &b);
  p=&a;
  q=&b;
  c=*p;
  *p=*q;
  *q=c;
  printf("A=%d e B=%d\n", a, b);
  return 0;
}