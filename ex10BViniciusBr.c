#include <stdio.h>

int main()
{
    int data, dia, mes, ano;

    printf("\nInforme uma data qualquer (no formato ddmmaaaa):\n");
    scanf("%d", &data);

    dia = (data / 1000000);
    mes = (data / 10000) % 100;
    ano = (data % 10000);

    if ((data < 100000000) && ((dia <= 31) && (mes <= 12))){
        
        printf("\nA data é válida! Portanto, a data será: %d/%d/%d\n",dia, mes, ano);
    }
    else{

        printf("\nA data não é válida!\n");
    }

    return 0;
}