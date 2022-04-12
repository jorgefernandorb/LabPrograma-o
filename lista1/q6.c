int main(void) {
  float a, p;
  char s;
  printf("Digite o m para masculino e f para feminino\n");
  scanf("%c", &s);
  printf("Digite a altura\n");
  scanf("%f", &a);
  if (s=='f'){
    p = 62.1*a-44.7;
  }
  else{
    p = 72.7*a-58;
  }
  printf("O peso ideal é: %.2f\n",p);
  return 0;
}