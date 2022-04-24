#include <stdio.h>

int main(void) {
  unsigned long long int s=0, t=1;
  for(int i=0; i<64;i++){
    s=s+t;
    t=t*2;
  }
  printf("Possui %llu grãos de trigo\n", s);
  return 0;
}