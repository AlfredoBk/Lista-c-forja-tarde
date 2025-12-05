//0003	Venusaur	Grass Poison	525	80	82	83	100	100	80
//0003	Venusaur Mega Venusaur	Grass Poison	625	80	100	123	122	120	80
#include <stdio.h>

#include <stdlib.h>

int main()
{

    float n1, metrosPorSegundo;

    printf("Digite qualque velocidade em Km/h: ");
    scanf("%f", &n1);

    metrosPorSegundo = n1 / 3.6;
    printf("Km/h foi tranformado corretamente a m/s dando como resultado : %.2f m/2\n", metrosPorSegundo);

    system("pause");

    return 0;
}