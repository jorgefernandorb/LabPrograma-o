int main(void) {
  int h, m, s, ts;
  printf("Digite as horas, minutos e segundo respectivamente\n");
  scanf("%d", &h);
  scanf("%d", &m);
  scanf("%d", &s);
  ts= s + h*360 + m*60;
  printf("O total de segundos é: %d\n", ts);
  return 0;
}