// 0246	Larvitar	Rock Ground	300	50	64	50	45	50	41
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int n1, n2;
    printf("\n  QUE É MAIS PESADO");
    printf("\n========================");
    printf("\nDigite O psso da peSsoa 1: ");
    scanf("%d", &n1);
    printf("Digite O peso da pessoa 1: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("A pessoa 1 é mais pesada");
    }
    else if (n1 == n2)
    {
        printf("Tem o mesmo peso");
    }
    else
    {
        printf("A pessoa 2 é mais pesada");
    }

    system("pauese");
    return 0;
}