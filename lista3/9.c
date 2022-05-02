#include <stdio.h>

int main(void) {
  int m [3][3];

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      printf("Digite um número.\n");
      scanf("%d", &m[i][j]);
    }
  }
  printf("\n");
  for(int i=0;i<3;i++) printf("%d ", m[i][i]);
  return 0;
}