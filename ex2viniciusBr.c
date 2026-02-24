#include <stdio.h>

void final(float num1, float num2);

int main()
{
    float num1, num2;

    printf("\nInforme o valor de um número 1: \n");
    scanf("%f", &num1);

    printf("Informe o valor de um outro número 2: \n");
    scanf("%f", &num2);

    final(num1, num2);
    return 0;
}

void final(float num1, float num2)
{
    float aux;
    if (num1 > num2){
       aux = num1;
       num1 = num2;
       num2 = aux;

       printf("\nEntão o valor do número 1 será: %4.2f \n",num1);
       printf("\nE então o valor do número 2 será: %4.2f \n",num2);
    }
    else{
       printf("\nEntão o valor do número 1 será: %4.2f \n",num1);
       printf("\nE então o valor do número 2 será: %4.2f \n",num2);
    }
}