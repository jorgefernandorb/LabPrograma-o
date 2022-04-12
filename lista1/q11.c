#include <stdio.h>

int main(void) {
  float c, r, d;
  printf("Digite a cotaÃ§Ã£o do real em dolares e em seguida quantos R$ deseja converter.\n");
  scanf("%f", &c);
  scanf("%f", &r);
  d=c*r;

  printf("O total em dolar Ã©: $%.2f .\n", d);
  return 0;
}
