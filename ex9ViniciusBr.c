#include <stdio.h>

float conclusaoMes(int mes);

int main()
{
    int mes;

    printf("\nInforme um número inteiro entre 1 e 12 para o mês: \n");
    scanf("%d", &mes);

    float concMes;
    concMes= conclusaoMes(mes);

    return 0;
}

float conclusaoMes(int mes)
{
    if ((mes >=1) && (mes <=12)){
        switch (mes)
            {
            case 1:
                printf("\nPortanto, o mês representado é Janeiro.\n");
                break;

            case 2:
                printf("\nPortanto, o mês representado é Fevereiro.\n");
                break;

            case 3:
                printf("\nPortanto, o mês representado é Março.\n");
                break;

            case 4:
                printf("\nPortanto, o mês representado é Abril.\n");
                break;

            case 5:
                printf("\nPortanto, o mês representado é Maio.\n");
                break;

            case 6:
                printf("\nPortanto, o mês representado é Junho.\n");
                break;

            case 7:
                printf("\nPortanto, o mês representado é Julho.\n");
                break;

            case 8:
                printf("\nPortanto, o mês representado é Agosto.\n");
                break;

            case 9:
                printf("\nPortanto, o mês representado é Setembro.\n");
                break;

            case 10:
                printf("\nPortanto, o mês representado é Outubro.\n");
                break;

            case 11:
                printf("\nPortanto, o mês representado é Novembro.\n");
                break;

            case 12:
                printf("\nPortanto, o mês representado é Dezembro.\n");
                break;
            
            default:
                break; 
            }
    }
    
    else{
        printf("\nErro! O número foi inserido incorretamente.\n");
    }

    return 0;
}
