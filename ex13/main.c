#include <stdio.h>
#include <stdlib.h>

//PROTÓTIPO:
void funcao(int numero, int *horas, int *minutos, int *segundos);
//FUNÇÃO:
void funcao(int numero, int *horas, int *minutos, int *segundos){
    *horas = numero / 3600;
    *minutos = (numero % 3600) / 60;
    *segundos = numero % 60;
}

int main()
{
    int numero, horas, minutos, segundos;
    int i;

    for(i = 0; i < 100; i++){
        printf("DIGITE OS SEGUNDOS: ");
        scanf("%i", &numero);

        funcao(numero, &horas, &minutos, &segundos);

        printf("TEMPO: %d SEGUNDOS = %d HORA(S) + %d MINUTO(S) + %d SEGUNDO(S) \n", numero, horas, minutos, segundos);
    }
    return 0;
}
