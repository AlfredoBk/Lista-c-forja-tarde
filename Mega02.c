#include <stdio.h>

int main() {
    float dolar, cotacao, real;

    printf("Digite o valor em dólares: ");
    scanf("%f", &dolar);

    printf("Digite a cotação atual do dólar: ");
    scanf("%f", &cotacao);

    real = dolar * cotacao;

    printf("Valor em reais: R$ %.2f\n", real);

    return 0;
}
