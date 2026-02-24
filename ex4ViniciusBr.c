#include <stdio.h>

float indicieAumento(int txAumento, float salAtual);

int main()
{
    float salAtual, salFinal; 
    int cod, txAumento;

    printf("\nInforme o seu código de funcionánio: \n");
    scanf("%d", &cod);

    printf("\nInforme o seu salário atual: \n");
    scanf("%f", &salAtual);

    printf("\nClassifique o seu salário atual (1- entre 0 e 400; 2-entre 400,01 e 700; 3- entre 700,01 e 1000; 4- entre 1000,01 e 1800; 5- entre 1800,01 e 2500; 6- acima de 2500): \n");
    scanf("%d", &txAumento);

    float aumento;
    aumento = indicieAumento(txAumento, salAtual);
    
    salFinal = salAtual + aumento;

    printf("\nO número do funcionário é : %d\n",cod);
    printf("O seu salário atual é: R$ %4.2f\n", salAtual);
    printf("O indicie de seu aumento salarial é: R$%4.2f\n",aumento);
    printf("O salario corrigido é: R$ %4.2f\n", salFinal);

    return 0;
}

float indicieAumento(int txAumento, float salAtual)
{
    float aumentoTx; float valorAum;

    switch (txAumento)
    {
    case 1:
        aumentoTx = 0.15;
        break;  

    case 2:
        aumentoTx = 0.12;
        break;    

    case 3:
        aumentoTx = 0.10;
        break;  

    case 4:
        aumentoTx = 0.07;
        break;   

    case 5:
        aumentoTx = 0.04;
        break;   

    case 6:
        aumentoTx = 0.00;
        break;   

    default:
        break;
    }

    valorAum = aumentoTx * salAtual;
    return (valorAum);
}
