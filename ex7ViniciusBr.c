#include <stdio.h>

float concluirOrdem(float a, float b, float c, int i);

int main()
{
    float a, b, c;
    int i;

    printf("\nEscolha um número inteiro e positivo entre 1 e 3:\n");
    scanf("%d", &i);

    printf("\nInforme um valor aleatório para 'a':\n");
    scanf("%f", &a);

    printf("\nInforme um valor aleatório para 'b':\n");
    scanf("%f", &b);

    printf("\nInforme um valor aleatório para 'c':\n");
    scanf("%f", &c);

    float concOrdem;
    concOrdem = concluirOrdem(a, b, c, i);

    return 0;
}

float concluirOrdem(float a, float b, float c, int i)
{
    switch (i)
    {
    case 1:
        if ((a > b) && (a > c)){ 
            if (b > c)
            {
                printf("\nA ordem crescente é C < B < A\n\n");
            }
            else{
                printf("\nA ordem crescente é B < C < A\n\n");
            }
        }    

        if ((b > a) && (b > c)){ 
            if (a > c)
            {
                printf("\nA ordem crescente é C < A < B\n\n");
            }
            else{
                printf("\nA ordem crescente é A < C < B\n\n");
            }
        }    

        if ((c > a) && (c > b)){ 
            if (a > b)
            {
                printf("\nA ordem crescente é B < A < C\n\n");
            }
            else{
                printf("\nA ordem crescente é A < B < C\n\n");
            }
        }    
        break;

    case 2:
        if ((a > b) && (a > c)){ 
            if (b > c)
            {
                printf("\nA ordem decrescente é A > B > C\n\n");
            }
            else{
                printf("\nA ordem decrescente é A > C > B\n\n");
            }
        }    

        if ((b > a) && (b > c)){ 
            if (a > c)
            {
                printf("\nA ordem decrescente é B > A > C\n\n");
            }
            else{
                printf("\nA ordem decrescente é B > C > A\n\n");
            }
        }    

        if ((c > a) && (c > b)){ 
            if (a > b)
            {
                printf("\nA ordem decrescente é C > A > B\n\n");
            }
            else{
                printf("\nA ordem decrescente é C > B > A\n\n");
            }
        }    
     break;

     case 3:
        if ((a > b) && (a > c)){ 
            {
                printf("\nA ordem é B < A > C\n\n");
            }
        } 

        if ((b > a) && (b > c)){ 
            {
                printf("\nA ordem é A < B > C\n\n");
            }
        } 

        if ((c > a) && (c > b)){ 
            {
                printf("\nA ordem é A < C > B\n\n");
            }
        } 
     break;      

    default:
        break;
    }

    return 0;
}
