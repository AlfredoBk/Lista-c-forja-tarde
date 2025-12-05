//0143	Snorlax	Normal 540	160	110	65	65	110	30
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int n1, n2, n3;
    printf("\n  QUE É MAIOR");
    printf("\n========================");
    printf("\nDigite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    scanf("%d", &n2);
    printf("Deixa a preguiça, é o ultimo número: ");
    scanf("%d", &n3);

    if (n1 > n2 & n1 > n3)
    {
        printf("O numero 1 é maior");
    }
    else if (n1 == n2 & n1 == n3 & n3 == n2)
    {
        printf("É o mesmo numero");
    }else if(n2 > n1 & n2 > n3){
        printf("O numero 2 é maior");
    }
    else
    {
        printf("A O numero 3 é maior");
    }

    system("pauese");
    return 0;
}