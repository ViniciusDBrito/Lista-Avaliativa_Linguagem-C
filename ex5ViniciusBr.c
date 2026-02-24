#include <stdio.h>

float calcTempoH(int HoraI, int HoraF, int MinI, int MinF);
float calcTempoM(int MinI,int MinF, int HoraI, int HoraF);

int main()
{
    int HoraI, HoraF, MinI, MinF;

    printf("\nInforme a hora (apenas) de inicio do jogo: \n");
    scanf("%d", &HoraI);

    printf("\nInforme o minuto (apenas) de inicio do jogo: \n");
    scanf("%d", &MinI);

    printf("\nInforme a hora (apenas) do final do jogo: \n");
    scanf("%d", &HoraF);

    printf("\nInforme o minuto (apenas) do final do jogo: \n");
    scanf("%d", &MinF);

    float calcH; float calcM;
    calcH = calcTempoH(HoraI, HoraF, MinI, MinF);
    calcM = calcTempoM(MinI, MinF, HoraI, HoraF);

    printf("\nA duração do jogo foi de %4.1f horas e %4.1f minutos\n", calcH, calcM);

    return 0;
}

float calcTempoH(int HoraI, int HoraF, int MinI, int MinF)
{
    float tempTotal;

    if (tempTotal > 24) {
        printf("\nA duração do jogo excedeu a duração maxima!");
    }
    else if ((HoraI > HoraF) && (MinF > MinI)){
        tempTotal = (24 - HoraI + HoraF);
    }
    else if ((HoraI > HoraF) && (MinF < MinI)){
        tempTotal = ((24 - HoraI + HoraF) - 1);
    }
    else if ((HoraI < HoraF) && (MinF > MinI)){
        tempTotal = (HoraF - HoraI);
    }
    else if ((HoraI < HoraF) && (MinF < MinI)){
        tempTotal = ((HoraF - HoraI) - 1);
    }
   return (tempTotal);
}

float calcTempoM(int MinI,int MinF, int HoraI, int HoraF)  
{
    float tempTot;

    if (MinI > MinF){
        tempTot = (60 - MinI + MinF);
    }
    else if (MinI < MinF)
    {
        tempTot = (MinF - MinI);
    }
    
    return (tempTot); 
}