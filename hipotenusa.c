#include <stdio.h>
#include <math.h>

int main(void) {
  float hipotenusa, cateto1, cateto2;
  printf("Valor do cateto 1: ");
  scanf("%f", &cateto1);
  printf("Valor do cateto 2: ");
  scanf("%f", &cateto2);
  hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
  printf("Valor da hipotenusa é: %.2f", hipotenusa); 
}