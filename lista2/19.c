#include <stdio.h>

int main(void) {
  float a, b, c, s=0;
  printf("Digite um intervalo númerico\n");
  scanf("%f", &a);
  scanf("%f", &b);
  
  if(a>b){
    c=a;
    a=b;
    b=c;
  }
  c=b-a+1;
  for(int i=0;i<c;i++){
    s=s+a+i;
  }
  printf("Somatorio %.2f e quantidade de números %.2f.\n", s, c);
  printf("A media aritmetica é: %.2f\n", s/c);
  return 0;
}