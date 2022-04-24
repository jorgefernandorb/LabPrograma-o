#include <stdio.h>

int main(void) {
  int n;
  printf("Digite um número.\n");
  scanf("%d", &n);
  printf("Tabuada soma\n");
  for(int i=1; i<=10; i++){
    printf("%d + %d = %d\n", i, n, n+i);
  }
  printf("Tabuada subtração\n");
  for(int i=1; i<10; i++){
    printf("%d - %d = %d\n", n+i, n, (n+i)-n);
  }
  printf("Tabuada multiplicação\n");
  for(int i=1; i<10; i++){
    printf("%d * %d = %d\n", n, i, n*i);
  }
  printf("Tabuada divisão\n");
  for(int i=1; i<=10; i++){
    printf("%d / %d = %d\n", n*i, n, i*n/n);
  }
  return 0;
}