#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    int i, letras = 0;

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    for (i = 0; nome[i] != '\0'; i++) {
        if (nome[i] != ' ' && nome[i] != '\n') {
            letras++;
        }
    }

    printf("Total de letras (sem espacos): %d\n", letras);

    return 0;
}
