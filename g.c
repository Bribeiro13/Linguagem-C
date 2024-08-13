#include <stdio.h>

int main(void){
  float ganho_horas, horas_trabalhadas,inss, imposto_renda, sindicato, bruto, liquido;
  printf("Digite seu ganho por hora: ");
  scanf("%f", &ganho_horas);
  printf("Digite suas horas trabalhadas: ");
  scanf("%f", &horas_trabalhadas);
  bruto = ganho_horas * horas_trabalhadas;
  printf("Seu salário bruto é de: %f\n", bruto);
  inss = bruto * 0.08;
  printf("Seu desconto do INSS é de: %f\n", inss);
  imposto_renda = bruto * 0.11;
  printf("Seu desconto do imposto de renda é de: %f\n" , imposto_renda);
  sindicato = bruto * 0.05;
  printf("Seu desconto do sindicato é de: %f\n", sindicato);
  liquido = bruto - inss - imposto_renda - sindicato;
  printf("Seu salário líquido é de: %f\n", liquido);
  
}