#include <stdio.h>

int main(void) {
  for(int i=1; i<=500; i++){
    for(int j=i-1;j>0;j--){
      for(int l=i-1;l>0;l--){
        if((i*i)==(j*j)+(l*l)){
          printf("Cateto1=%d, cateto2=%d e hipotenusa=%d\n", l, j, i);
        }
      }
    }
  }
  return 0;
}