//0009	Blastoise	Water 530	79	83	100	85	105	78
//Mega Blastoise0009	Blastoise Mega Blastoise	Water 630	79	103	120	135	115	78
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float media;
    int n1, n2;

    printf("Digite a sua primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &n2);
    media = (n1 +n2) / 2;

    if(n1 >= 7){
printf("Sua nota é %.2f. Você Aprovou", media);
    }else{
printf("Sua nota é %.2f. Você Reprovou", media);
    }
    
    

    system("pauese");
    return 0;
}