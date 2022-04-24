#include <stdio.h>

int main(void) {
  unsigned long int a;
  int b=0, cont;
  for(int i=1; i<=256; i++){
    cont=1;
    a=i;
    b=0;
    do{
      b=b+a%2*cont;
      a=a/2;
      cont=cont*10;
    }while(a>=1);
    printf("Decimal=%d, binario=%u, octal=%o e hexadecimal=%x\n", i, b, i, i);
  }
  return 0;
}