#include <stdio.h>

int main(void) {
  int m=1;
  for(int i=0; i<7; i++){
    printf("%d\n", m);
    m=m*3;
  }
  return 0;
}