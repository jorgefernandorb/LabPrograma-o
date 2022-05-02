#include <stdio.h>
#include <string.h>

int main(void) {
  char c, str[30];
  int a=0;
  printf("Digite uma palavra.\n");
  scanf("%s", str);
  getchar();
  printf("Digite uma letra.\n");
  c=getchar();
  getchar();
  for(int i=0;i<strlen(str);i++){
    if(c==str[i]){
      a=1;
      break;
    }
  }
  if(a==0){
    printf("Não possui a letra\n");
  }
  else{
    printf("Possui a letra\n");
  }
  return 0;
}