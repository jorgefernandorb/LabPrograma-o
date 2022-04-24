#include <stdio.h>
void limpar (void){
  char c;
  while ((c=getchar()!='\n' && c!=EOF));
}
int main(void) {
  unsigned char x, y, x1, x2, x3, x4, x5, x6, x7, x8;
  printf("Digite dois valores númericos.\n");
  x=getchar();
  limpar();
  y=getchar();
  limpar();
  x1=(y-1)|(x>>7);
  x2=(y-2)|((x>>6)&1);
  x3=(y-3)|((x>>5)&1);
  x4=(y-4)|((x>>4)&1);
  x5=(y+1)|((x>>3)&1);
  x6=(y+2)|((x>>2)&1);
  x7=(y+3)|((x>>1)&1);
  x8=(y+4)|(x&1);
  printf("X=%d\n", x);
  printf("Y=%d\n", y);
  printf("%d\n", x1);
  printf("%d\n", x2);
  printf("%d\n", x3);
  printf("%d\n", x4);
  printf("%d\n", x5);
  printf("%d\n", x6);
  printf("%d\n", x7);
  printf("%d\n", x8);
  return 0;
}