//0002	Ivysaur	Grass Poison	405	60	62	63	80	80	60
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float base, altura, area;

    printf("Digite a base do triangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);
    area = base * altura / 2.0;

    printf("A area do triangulo é: %.2f \n", area);

    system("pauese");
    return 0;
}