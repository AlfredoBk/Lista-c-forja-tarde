// Charmander	Fire309	39	52	43	60	50	65
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float n1, acre;

    printf("Digite o valor do produto para aplicar o acréscimo: ");
    scanf("%f", &n1);

    acre = n1 * 0.15;
    printf("O acréscimo foi aplicado, o valor do produto sera de: %.2f \n", acre);

    system("pauese");
    return 0;
}