int main(void) {
  int a, b, c;
  printf("Digite dois numeros inteiros.\n");
  printf("A: ");
  scanf("%d", &a);
  printf("B: ");
  scanf("%d", &b);
  c=a;
  a=b;
  b=c;
  printf("O novo valor de A é: %d e B é: %d.\n", a, b);
  return 0;
}