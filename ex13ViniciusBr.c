#include <stdio.h>

float conclusaoPremios(float horasEx, float horasAu);

int main()
{
    char nome[30];
    float horasEx, horasAu;

    printf("\nQual o seu nome? \n");
    scanf("%s", &nome);

    printf("\nInforme o número todas de horas extras que possui:\n");
    scanf("%f", &horasEx);

    printf("\nInforme o número todas de horas de ausência que possui:\n");
    scanf("%f", &horasAu);

    float concPremios;
    concPremios = conclusaoPremios(horasEx, horasAu);

    printf("\nNome do funcionário: %s.\n",nome);
    printf("O valor do prêmio a ser recebido é: R$%4.2f.\n",concPremios);

    return 0;
}

float conclusaoPremios(float horasEx, float horasAu)
{
    float concP; float horastot;
    horastot = (horasEx - ((2 * horasAu) / 3));
    {
        if (horastot < 600){
            concP = 100;
        }
        else if ((horastot >= 600) && (horastot < 1200)){
            concP = 200;
        }
        else if ((horastot >= 1200) && (horastot < 1800)){
            concP = 300;
        }
        else if ((horastot >= 1800) && (horastot < 2400)){
            concP = 400;
        }
        else if (horastot >= 2400){
            concP = 500;
        }
        else{
            printf("\nErro! Algo de errado nas informações. \n");
        }
    }
    return(concP);
}
