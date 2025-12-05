//0056	Mankey	Fighting 305	40	80	35	35	45	70
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int n1;

    printf("Digite um numero: ");
    scanf("%d", &n1);
   

    printf("O quadrado do némero digitado é: %d \n", n1 * n1);

    system("pauese");
    return 0;
}