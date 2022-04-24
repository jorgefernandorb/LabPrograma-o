#include <stdio.h>

int main(void) {
  int st=0, sc=0;
  for(int i=0;i<=200;i++){
    if(i<=100){
      if(i%3==0){
        st=st+i;
      }
    }
    else{
      if(i%5==0){
        sc=sc+i;
      }
    }
  }
  printf("Somatorio do número divisiveis por 3 de 0-100 é: %d\n", st);
  printf("Somatorio do número divisiveis por 5 de 101-200 é: %d\n", sc);
  return 0;
}