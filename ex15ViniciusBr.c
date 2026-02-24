#include <stdio.h>

float conclusaoIdadeM(int idadeA);
float conclusaoIdadeD(int idadeA);

int main()
{
    int idadeA;

    printf("\nQual sua idade atual em anos?\n");
    scanf("%d", &idadeA);

    float concIdadeM; float concIdadeD;
    concIdadeM = conclusaoIdadeM(idadeA);
    concIdadeD = conclusaoIdadeD(idadeA);

    printf("\nPortanto, diante da sua idade atual em anos, você possui %4.2f meses de vida.",concIdadeM);
    printf("\nPortanto, diante da sua idade atual em anos, você possui %4.2f dias de vida.\n",concIdadeD);

    return 0;
}

float conclusaoIdadeM(int idadeA)
{
    float concIM;
    concIM = idadeA * 12;
    return(concIM);
}

float conclusaoIdadeD(int idadeA)
{
    float concID;
    concID = idadeA * 365;
    return(concID);
}