#include <stdio.h>

int main(void) {
  int f;
  for(int i=1; i<=10; i++){
    if(i%2!=0){
      f=1;
       for(int j=i;j>=1;j--){
         f=f*j;
       }
      printf("O fatorial de %d é %d.\n", i, f);
    }
  }
  return 0;
}