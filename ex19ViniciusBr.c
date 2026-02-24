#include <stdio.h>

float conclusaoNumero(int num);

int main()
{
    int num;

    printf("\nInforme um número qualquer de 4 dígitos:\n");
    scanf("%d", &num);

    float concnumero;
    concnumero = conclusaoNumero(num);

    return 0;
}

float conclusaoNumero(int num)
{
    int met1, met2, soma, soma2;
    met1 = (num / 100);
    met2 = (num % 100);
    soma = (met1 + met2);
    soma2 = (soma * soma);

    if (soma2 == num){
        printf("\nSim, este número possui essa mesma característica.\n");
    }
    else{
        printf("\nNão, este número não possui essa mesma característica.\n");
    }
    
    return 0;
}
