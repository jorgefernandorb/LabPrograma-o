#include <stdio.h>

int main(void) {
  float pi=4, cont=3;
  printf("Pi=%f\n", pi);
  for(int i=2; i<100; i++){    
    if(i%2==0){
      pi=pi-(4/cont);
    }
    else{
      pi=pi+(4/cont);
    }
    printf("Pi=%f\n", pi);
    cont=cont+2;
  }
  return 0;
}