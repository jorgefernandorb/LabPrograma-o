#include <stdio.h>

struct Aluno{
    float n1;
    float n2;
    float media;
};
float media (float a, float b);
int main(){
    struct Aluno a[3];

    for(int i=0;i<3;i++){
      puts("Entre com a nota 1: ");
      scanf("%f",&a[i].n1);
      puts("Entre com a nota 2: ");
      scanf("%f",&a[i].n2);
    }
    for(int i=0;i<3;i++) a[i].media=media(a[i].n1 , a[i].n2);
    for(int i=0;i<3;i++) printf("Media do %d° aluno é: %.2f.\n", i, a[i].media);
    return 0;
}
float media (float a, float b){
  return(a+b)/2;
}