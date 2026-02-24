#include <stdio.h>

float conclusaoCodigo(int cod1, int cod2, int cod3);
float conclusaoIdade(int id1, int id2, int id3);
float conclusaoSexo(int sex1, int sex2, int sex3);
float conclusaoSalario(float sal1, float sal2, float sal3);

int main()
{
    int cod1, cod2, cod3;
    int id1, id2, id3;
    int sex1 , sex2, sex3;
    float sal1, sal2, sal3;
    char nome1[30];
    char nome2[30];
    char nome3[30];

    printf("\nQual o nome do funcionário 1?\n");
    scanf("%s", &nome1);
    
    printf("Informe o código de funcionário do mesmo:\n");
    scanf("%d", &cod1);

    printf("Informe a idade do mesmo:\n");
    scanf("%d", &id1);

    printf("Informe o sexo do mesmo (1-Masculino ou 2-Feminino):\n");
    scanf("%d", &sex1);

    printf("Informe o salário do mesmo:\n");
    scanf("%f", &sal1);

    printf("\nQual o nome do funcionário 2?\n");
    scanf("%s", &nome2);

    printf("Informe o código de funcionário do mesmo:\n");
    scanf("%d", &cod2);

    printf("Informe a idade do mesmo:\n");
    scanf("%d", &id2);

    printf("Informe o sexo do mesmo (1-Masculino ou 2-Feminino):\n");
    scanf("%d", &sex2);

    printf("Informe o salário do mesmo:\n");
    scanf("%f", &sal2);

    printf("\nQual o nome do funcionário 3?\n");
    scanf("%s", &nome3);

    printf("Informe o código de funcionário do mesmo:\n");
    scanf("%d", &cod3);

    printf("Informe a idade do mesmo:\n");
    scanf("%d", &id3);

    printf("Informe o sexo do mesmo (1-Masculino ou 2-Feminino):\n");
    scanf("%d", &sex3);

    printf("Informe o salário do mesmo:\n");
    scanf("%f", &sal3);

    int concCd; int concID; int concSX; int concSL;
    concCd = conclusaoCodigo(cod1, cod2, cod3);
    concID = conclusaoIdade(id1, id2, id3);
    concSX = conclusaoSexo(sex1, sex2, sex3);
    concSL = conclusaoSalario(sal1, sal2, sal3);

    printf("\nO número de funcionários que possuem código inferior a 100 é: %d", concCd);
    printf("\nO número de funcionários que possuem idade superior a 60 anos é: %d", concID);
    printf("\nO número de funcionários que são do sexo feminino é: %d", concSX);
    printf("\nO número de funcionários que possuem  um salário entre R$ 1000,00 e R$ 2000,00 reais é: %d\n", concSL);

    return 0;
}

float conclusaoCodigo(int cod1, int cod2, int cod3)
{
    float VLcod1; float VLcod2; float VLcod3; float VLcod;
    {
        if (cod1 < 100){
            VLcod1 = 1;
        }
        else{
            VLcod1 = 0;
        }
    }

    {
        if (cod2 < 100){
            VLcod2 = 1;
        }
        else{
            VLcod2 = 0;
        }
    }
    
    {
        if (cod3 < 100){
            VLcod3 = 1;
        }
        else{
            VLcod3 = 0;
        }
    }
    VLcod = VLcod1 + VLcod2 + VLcod3;
    return (VLcod);
}

float conclusaoIdade(int id1, int id2, int id3)
{
    float VLid1; float VLid2; float VLid3; float VLid;
    {
        if (id1 > 60){
            VLid1 = 1;
        }
        else{
            VLid1 = 0;
        }
    }

    {
        if (id2 > 60){
            VLid2 = 1;
        }
        else{
            VLid2 = 0;
        }
    }
    
    {
        if (id3 > 60){
            VLid3 = 1;
        }
        else{
            VLid3 = 0;
        }
    }
    VLid = VLid1 + VLid2 + VLid3;
    return (VLid);
}

float conclusaoSexo(int sex1, int sex2, int sex3)
{
    float VLsx1; float VLsx2; float VLsx3; float VLsx;
    
    switch (sex1)
        {
        case 2:
            VLsx1 = 1;
            break;

        case 1:
            VLsx1 = 0;
            break;
        
        default:
            break;
        }

    switch (sex2)
        {
        case 2:
            VLsx2 = 1;
            break;

        case 1:
            VLsx2 = 0;
            break;
        
        default:
            break;
        }

    switch (sex3)
        {
        case 2:
            VLsx3 = 1;
            break;

        case 1:
            VLsx3 = 0;
            break;
        
        default:
            break;
        }
    VLsx = VLsx1 + VLsx2 + VLsx3;
    return (VLsx);
}

float conclusaoSalario(float sal1, float sal2, float sal3)
{
    float VLsl1; float VLsl2; float VLsl3; float VLsl;
    {
        if ((sal1 >= 1000) && (sal1 <= 2000)){
            VLsl1 = 1;
        }
        else{
            VLsl1 = 0;
        }
    }

    {
        if ((sal2 >= 1000) && (sal2 <= 2000)){
            VLsl2 = 1;
        }
        else{
            VLsl2 = 0;
        }
    }
    
    {
        if ((sal3 >= 1000) && (sal3 <= 2000)){
            VLsl3 = 1;
        }
        else{
            VLsl3 = 0;
        }
    }
    VLsl = VLsl1 + VLsl2 + VLsl3;
    return (VLsl);
}