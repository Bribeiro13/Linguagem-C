#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  float raio, area, comprimento;
  printf("Digite o raio do círculo: ");
  scanf("%f", &raio);
  area = 3.14 * pow(raio, 2);
  printf("A área do círculo é: %.2f\n", area);
  comprimento = 2 * 3.14 * raio;
  printf("O comprimento do círculo é: %.2f", comprimento);
  return 0;
}