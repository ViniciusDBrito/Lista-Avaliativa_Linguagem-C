#include <stdio.h>

void conclusaoPalin(int Dig1, int Dig2, int Dig4, int Dig5, int num);

int main()
{
    int num, Dig1, Dig2, Dig4, Dig5;

    printf("\nInforme um número qualquer com 5 dígitos:\n");
    scanf("%d", &num);

    Dig1 = (num / 10000);
    Dig2 = (num / 1000) % 10;
    Dig4 = (num / 10) % 10;
    Dig5 = (num % 10);

    conclusaoPalin(Dig1, Dig2, Dig4, Dig5, num);

    return 0;
}

void conclusaoPalin(int Dig1, int Dig2, int Dig4, int Dig5, int num)
{
    if ((Dig1 == Dig5) && (Dig2 == Dig4)){
        printf("\nEste número (%d) é palíndromo!\n", num);
    }
    else{
        printf("\nEste número (%d) não é palíndromo!\n", num);
    }
}