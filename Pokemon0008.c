//Wartortle	Water 405	59	63	80	65	80	58
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int n1;

    printf("Digite um numero é eu dou o dobro: ");
    scanf("%d", &n1);
    printf("O dobro do numero é: %d", n1 * 2);
    
    

    system("pauese");
    return 0;
}