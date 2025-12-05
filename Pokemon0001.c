//0001	Bulbasaur	Grass Poison	318	45	49	49	65	65	45
#include <stdio.h>

#include <stdlib.h>

int main()
{

    float n1, respostaHoraMinutos;

    printf("Digite as horas que você quer transformas para minutos: ");
    scanf("%f", &n1);

    respostaHoraMinutos = 60 * n1;
    printf("As hora transformadas en minutos deu como resultado: %.2f Minutos\n", respostaHoraMinutos);

    system("pause");

    return 0;
}