#include <stdio.h>

int main(void) {
  int nHora;
  float sLiquido, sBruto, vHora, desconto;
  printf("Digite as seguintes informações.\n");
  printf("Valor da hora aula: R$");
  scanf("%f", &vHora);
  printf("Quantidade de horas trabalhadas no mês: ");
  scanf("%d", &nHora);
  printf("Percentual de desconto do INSS: ");
  scanf("%f", &desconto);
  sBruto = nHora * vHora;
  sLiquido = sBruto * (1-desconto/100);
  printf("O salario bruto é: R$%.2f\n", sBruto);
  printf("O salario liquido é: R$%.2f\n", sLiquido);  
  return 0;
}