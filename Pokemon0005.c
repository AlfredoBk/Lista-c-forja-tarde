//0005	Charmeleon	Fire 405	58	64	58	80	65	80
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float n1, n2, n3, media;

    printf("Digite uma altura para uma pessoa: ");
    scanf("%f", &n1);
    printf("Digite uma altura para outra pessoa: ");
    scanf("%f", &n2);
    printf("Digite uma altura para a ultima pessoa: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;
    printf("A media das altura de três pessoas é: %.2f \n", media);
    
    

    system("pauese");
    return 0;
}