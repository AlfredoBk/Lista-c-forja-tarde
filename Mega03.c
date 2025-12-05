#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 12) {
        printf("crianca\n");
    } else if (idade >= 13 && idade <= 17) {
        printf("adolescente\n");
    } else if (idade >= 18 && idade <= 59) {
        printf("adulto\n");
    } else if (idade >= 60) {
        printf("idoso\n");
    } else {
        printf("Idade invalida!\n");
    }

    return 0;
}
