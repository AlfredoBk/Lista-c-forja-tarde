#include <stdio.h>

int main() {
    float nota;

    printf("Digite uma nota de 0 a 10: ");
    scanf("%f", &nota);

    if (nota < 0 || nota > 10) {
        printf("Erro: nota invalida!\n");
    } else {
        printf("Nota valida: %.1f\n", nota);
    }

    return 0;
}
