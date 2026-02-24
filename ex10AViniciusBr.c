#include <stdio.h>

float conclusaoFinalP(float valorI);

int main()
{
    char nome[30];
    float valorI;

    printf("\nInforme o nome do produto: \n");
    gets(nome);

    printf("\nInforme o valor de compra desse produto:\n");
    scanf("%f", &valorI);

    float concValor;
    concValor= conclusaoFinalP(valorI);

    printf("\nPortanto, para alcançar o lucro ideal sobre o %s, o preço total final será: R$%4.2f\n",nome, concValor);

    return 0;
}

float conclusaoFinalP(float valorI)
{
    float concV;
    {
        if (valorI < 10){
            concV = valorI * 1.7;
        }
        else if ((valorI >= 10) && (valorI < 30)){
            concV = valorI * 1.5;
        }
        else if ((valorI >= 30) && (valorI < 50)){
            concV = valorI * 1.4;
        }
        else if (valorI >= 50){
            concV = valorI * 1.3;
        }
    }
    return (concV);
}