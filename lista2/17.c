#include <stdio.h>

int main(void) {
  for(int i=10; i<=100; i=i+10){
    printf("A temperatura em Celsius: %d°C e em Fahrenheit: %.2f°F\n", i, i*1.8+32.0);
  }
  return 0;
}