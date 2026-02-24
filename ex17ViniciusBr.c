#include <stdio.h>

float conclusaoDiv2(int num1, int num2, int num3, int num4);
float conclusaoDiv3(int num1, int num2, int num3, int num4);

int main()
{
    int num1, num2, num3, num4;

    printf("\nInforme um valor para um número 1:\n");
    scanf("%d", &num1);

    printf("\nInforme um valor para um número 2\n");
    scanf("%d", &num2);

    printf("\nInforme um valor para um número 3\n");
    scanf("%d", &num3);

    printf("\nInforme um valor para um número 4\n");
    scanf("%d", &num4);

    float concDiv2; float concDiv3;
    concDiv2 = conclusaoDiv2(num1, num2, num3, num4);
    concDiv3 = conclusaoDiv3(num1, num2, num3, num4);

    return 0;
}

float conclusaoDiv2(int num1, int num2, int num3, int num4)
{
    float resto1; float resto2; float resto3; float resto4;

    resto1 = (num1 % 2);
    if (resto1 == 0){
        printf("\nPortanto, o número 1 (%d) é divisível por 2", num1);
    }
    else{
        printf("\nPortanto, o número 1 (%d) não é divisível por 2", num1);   
    }

    resto2 = (num2 % 2);
    if (resto2 == 0){
        printf("\nPortanto, o número 2 (%d) é divisível por 2", num2);
    }
    else{
        printf("\nPortanto, o número 2 (%d) não é divisível por 2", num2);   
    }

    resto3 = (num3 % 2);
    if (resto3 == 0){
        printf("\nPortanto, o número 3 (%d) é divisível por 2", num3);
    }
    else{
        printf("\nPortanto, o número 3 (%d) não é divisível por 2", num3);   
    }

    resto4 = (num4 % 2);
    if (resto4 == 0){
        printf("\nPortanto, o número 4 (%d) é divisível por 2", num4);
    }
    else{
        printf("\nPortanto, o número 4 (%d) não é divisível por 2", num4);   
    }

    return 0;
}

float conclusaoDiv3(int num1, int num2, int num3, int num4)
{
    float resto1; float resto2; float resto3; float resto4;

    resto1 = (num1 % 3);
    if (resto1 == 0){
        printf("\n\nPortanto, o número 1 (%d) é divisível por 3", num1);
    }
    else{
        printf("\n\nPortanto, o número 1 (%d) não é divisível por 3", num1);   
    }

    resto2 = (num2 % 3);
    if (resto2 == 0){
        printf("\nPortanto, o número 2 (%d) é divisível por 3", num2);
    }
    else{
        printf("\nPortanto, o número 2 (%d) não é divisível por 3", num2);   
    }

    resto3 = (num3 % 3);
    if (resto3 == 0){
        printf("\nPortanto, o número 3 (%d) é divisível por 3", num3);
    }
    else{
        printf("\nPortanto, o número 3 (%d) não é divisível por 3", num3);   
    }

    resto4 = (num4 % 3);
    if (resto4 == 0){
        printf("\nPortanto, o número 4 (%d) é divisível por 3", num4);
    }
    else{
        printf("\nPortanto, o número 4 (%d) não é divisível por 3", num4);   
    }

    return 0;
}