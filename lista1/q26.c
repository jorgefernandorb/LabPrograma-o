#include <stdio.h>
#include <math.h>

int main(void) {
  float d;
  int ax, ay, bx, by;
  printf("Digite a coordenada x do ponto a\n");
  scanf("%d", &ax);
  printf("Digite a coordenada y do ponto a\n");
  scanf("%d", &ay);
  printf("Digite a coordenada x do ponto b\n");
  scanf("%d", &bx);
  printf("Digite a coordenada y do ponto b\n");
  scanf("%d", &by);
  d= sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay));
  printf("A distancia entre o ponto a e b é: %.2f\n", d);
  return 0;
}