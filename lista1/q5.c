int main(void) {
  float n;
  printf("Digite o valor da conta\n");
  scanf("%f", &n);
  printf("O valor a ser pago é: R$%.2f\n", n+n*0.1);
  return 0;
}