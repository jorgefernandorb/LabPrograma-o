#include <stdio.h>

int main(void) {
  int q=0, m=0;
  for(int i=1; m<91; i++){
    m=4*i;
    q=m*m;
    
    if(m>=15 && m<=90){
      printf("%d.\n", q);
    }
    
  }
  return 0;
}