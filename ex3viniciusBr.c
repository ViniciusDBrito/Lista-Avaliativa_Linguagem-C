#include <stdio.h>

float FranquiaFinal(float seguro);
float taxaTipo(float valorC, int tipo);
float taxaRegiao(float valorC, int regiao);

int main()
{
    float valorC;
    int tipo, regiao;

    printf("\nInforme o valor do seu veiculo: \n");
    scanf("%f", &valorC);

    printf("\nInforme o tipo do seu veiculo (1-pequeno; 2-médio; 3-grande): \n");
    scanf("%d", &tipo);

    printf("\nInforme qual a sua região (1-Norte ou Nordeste; 2-Sul e Centro-Oeste; 3-Sudesde(exceto SP e RJ); 4-São Paulo; 5-Rio de Janeiro): \n");
    scanf("%d", &regiao);

    float taxaT, taxaR, calculoFranq, seguro;
    taxaT = taxaTipo(valorC, tipo);
    taxaR = taxaRegiao(valorC,regiao);

    seguro = taxaT + taxaR;
    calculoFranq = FranquiaFinal(seguro);

    printf("\nO valor do seguro do seu veículo é : R$ %4.f\n",seguro);
    printf("O valor da franquia do seu veículo é: R$ %4.2f\n", calculoFranq); 

    return 0;
}

float taxaTipo (float valorC, int tipo)
{
    float tipoTaxa; float valorTipo;
    switch (tipo)
    {
    case 1:
        tipoTaxa = 0.08;
        break;

    case 2:
        tipoTaxa = 0.12;
        break;  

    case 3:
        tipoTaxa = 0.10;
        break;      
    
    default:
        break;
    }

    valorTipo = tipoTaxa * valorC;
    return (valorTipo);
}

float taxaRegiao(float valorC, int regiao)
{
    float regiaoTaxa; float valorRegiao;
    switch (regiao)
    {
    case 1:
       regiaoTaxa = 0.03;
       break;

    case 2:
       regiaoTaxa = 0.05;
       break;

    case 3:
       regiaoTaxa = 0.08;
       break;

    case 4:
       regiaoTaxa = 0.10;
       break;

    case 5:
       regiaoTaxa = 0.15;
       break;
    
    default:
        break;
    }

    valorRegiao = regiaoTaxa * valorC;
    return (valorRegiao);
}

float FranquiaFinal(float seguro)
{
    float calculoFranquia;
    if (seguro < 300){
        calculoFranquia = 400;
    }
    else if ((seguro > 300) && (seguro < 500)){
        calculoFranquia = 600;
    }
    else if (seguro > 500)
    {
        calculoFranquia = 800;
    }
    return (calculoFranquia);
}    
    
