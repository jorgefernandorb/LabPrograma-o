#include <stdio.h>

int main(void) {
  float a, b, c;
  printf("Digite dois números.\n");
  scanf("%f", &a);
  scanf("%f", &b);
  while(b==0){
    printf("Divisor invalido, digite outro valor.\n");
    scanf("%f", &b);
  }
  printf("O resultado da divisão do 1° pelo 2° é: %.2f\n", a/b);
  return 0;
}