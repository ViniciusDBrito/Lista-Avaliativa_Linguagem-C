#include <stdio.h>

float conclusaoDolar(float valorR);
float conclusaoEuro(float valorR);

int main()
{
    float valorR;

    printf("\nInforme a quantidade de dinheiro em reais que você possui:\n");
    scanf("%f", &valorR);

    float concDolar; float concEuro;
    concDolar = conclusaoDolar(valorR);
    concEuro = conclusaoEuro(valorR);

    printf("\nPortanto, diante do valor atual em reais, você possui %4.2f dólares e %4.2f euros.\n",concDolar, concEuro);

    return 0;
}

float conclusaoDolar(float valorR)
{
    float concD;
    concD = (valorR * 0.20);

    return(concD);
}

float conclusaoEuro(float valorR)
{
    float concE;
    concE = (valorR * 0.18);

    return(concE);
}