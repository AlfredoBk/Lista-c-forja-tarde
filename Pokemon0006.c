//0006	Charizard	Fire Flying	534	78	84	78	109	85	100
//Mega Charizard X0006	Charizard Mega Charizard X	Fire Dragon	634	78	130	111	130	85	100
//Mega Charizard Y0006	Charizard Mega Charizard Y	Fire Flying	634	78	104	78	159	115	100
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");
    char nome[50], cidade[50];

    printf("Digite o seu nome: ");
    fgets(nome, 50, stdin);
    printf("Digite a sua cidade: ");
    fgets(cidade, 50, stdin);
    printf("O seu nome é: %sé sua cidade é: %s", nome, cidade);
    

    system("pauese");
    return 0;
}