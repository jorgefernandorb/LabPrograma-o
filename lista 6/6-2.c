#include <stdio.h>

struct Estoque{
  char nomePeca[100];
  int id;
  float preco;
  int nPedido;
};

int main(){
    struct Estoque p1;

    puts("Entre com o nome da peça: ");
    scanf("%s", p1.nomePeca);

    puts("Entre com o id da peça: ");
    scanf("%d",&p1.id);

    puts("Entre com o preço da peça: ");
    scanf("%f",&p1.preco);
  
    puts("Entre com o numero do pedido: ");
    scanf("%d",&p1.nPedido);

    return 0;
}