#include <stdio.h>

float conclusaoPagamento(float ValorEt, int Codigo);

int main()
{
    float ValorEt;
    int Codigo;

    printf("\nInforme o valor de etiqueta total:\n");
    scanf("%f", &ValorEt);

    printf("\nQual a condição de pagamento? (1- À vista em dinheiro/cheque; 2- À vista no cartão de crédito; 3- Em 2 vezes; 4- Em 3 vezes)\n");
    scanf("%d", &Codigo);

    float concPagamento;
    concPagamento = conclusaoPagamento(ValorEt, Codigo );

    printf("Portanto, o valor correto a pagar pela compra é: R$%4.2f\n",concPagamento);

    return 0;
}

float conclusaoPagamento(float ValorEt, int Codigo)
{
    float concP;
    switch (Codigo)
    {
    case 1:
        concP = ValorEt * 0.9;
        break;

    case 2:
        concP = ValorEt * 0.95;
        break;

    case 3:
        concP = ValorEt;
        break;

    case 4:
        concP = ValorEt * 1.1;
        break;
    
    default:
        break;
    }
    return(concP);
}
