#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//PROTÓTIPO:
void funcao(float numero, int *horas, int *minutos, int *segundos);
//FUNÇÃO:
void funcao(float numero, int *horas, int *minutos, int *segundos){
    float fracionaria;

    fracionaria = modff(numero, (float *)horas);

    *horas = (int)numero;

    *minutos = (int)(fracionaria * 60);
    *segundos = (int)((fracionaria * 60 - *minutos) * 60);
}

int main()
{
    float numero;
    int horas, minutos, segundos, i;
    float fracionaria;

    for(i = 0; i < 50; i++){
        printf("DIGITE O TEMPO(HORAS): ");
        scanf("%f", &numero);

        funcao(numero, &horas, &minutos, &segundos);

        printf("T (%.2f HORAS) = %d HORA(S) + %d MINUTO(S) + %d SEGUNDO(S)\n", numero, horas, minutos, segundos);
    }

    return 0;
}
