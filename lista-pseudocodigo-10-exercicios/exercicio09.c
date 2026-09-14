#include <stdio.h>

int main() {
    float consumo, tarifa, valorTotal;

    printf("Digite o consumo mensal de energia (kWh): ");
    scanf("%f", &consumo);

    if (consumo <= 100) {
        tarifa = 0.60;
    } else if (consumo <= 200) {
        tarifa = 0.75;
    } else {
        tarifa = 0.90;
    }

    valorTotal = consumo * tarifa;

    printf("Valor total da conta: R$ %.2f\n", valorTotal);

    return 0;
}
