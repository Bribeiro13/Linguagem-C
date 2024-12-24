#include <stdio.h>
#include <stdlib.h>

//PROTÓTIPO:
void funcao(float preco, float porcentagem, float *preco_reajustado, float *reajuste_reais);
//FUNÇÃO:
void funcao(float preco, float porcentagem, float *preco_reajustado, float *reajuste_reais){
    *reajuste_reais = preco * (porcentagem / 100);
    *preco_reajustado = preco + *reajuste_reais;
}

int main()
{
    float preco, porcentagem, preco_reajustado, reajuste_reais;
    int i;

    for(i = 0; i < 100; i++){
        printf("DIGITE O PRECO DO PRODUTO: ");
        scanf("%f", &preco);

        printf("DIGITE A PORCENTAGEM DO REAJUSTE A SER FEITO %d: ", i + 1);
        scanf("%f", &porcentagem);

        funcao(preco, porcentagem, &preco_reajustado, &reajuste_reais);

        printf("MERCADORIA %d: \n", i + 1);
        printf("- REAJUSTE EM REAIS: R$ %.2f\n", reajuste_reais);
        printf("- PRECO REAJUSTADO: R$ %.2f\n", preco_reajustado);
    }



    return 0;
}
