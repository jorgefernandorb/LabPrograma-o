#include <stdio.h>

int main(void) {
  int a=1, b=1, f;
  printf("%d.\n", a);
  printf("%d.\n", b);
  
  for(int i=0; i<18; i++){
    f=a+b;
    printf("%d.\n", f);
    a=b;
    b=f;
  }
  
  return 0;
}