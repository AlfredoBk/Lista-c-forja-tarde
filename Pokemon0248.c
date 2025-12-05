//0248	Tyranitar	Rock Dark	600	100	134	110	95	100	61
//Mega Tyranitar0248	Tyranitar Mega Tyranitar	Rock Dark	700	100	164	150	95	120	71
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");
    int n1;

    printf("Digite o radio da circunferencia: ");
    scanf("%d", &n1);
   
   
    printf("A sua area é : %.2f\n",(3.14 * 2) * n1);
    
    

    system("pauese");
    return 0;
}