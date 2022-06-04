#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a, b, c, *p, *q, *r;
  printf("Digite dois números\n");
  scanf("%d%d", &a, &b);
  p=&a;
  q=&b;
  r=&c;
  *r = *p + *q;
  printf("conteudo:%d e o endereço:%p\n", *r, r);
  printf("conteudo:%d e o endereço:%p\n", c, &c);
  return 0;
}