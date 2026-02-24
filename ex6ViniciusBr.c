#include <stdio.h>

float NumFinal(float num);

int main()
{
    float num;

    printf("\nInforme um número aleatório: \n");
    scanf("%f", &num);

    float nFinal;
    nFinal = NumFinal(num);

    printf("\nPortanto o número será: %4.2f\n",nFinal);

    return 0;
}

float NumFinal(float num)
{
    float conclusaoN;

    if (num > 20){
       conclusaoN = (num / 2);
    }
    else if (num <= 20){
        conclusaoN = num;
    }
    
    return (conclusaoN);
}
