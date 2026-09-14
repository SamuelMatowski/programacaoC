#include <stdio.h>

int main() {
    float valor, desconto, valorFinal;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);

    if (valor >= 300) {
        desconto = valor * 0.12;
    } else {
        desconto = valor * 0.05;
    }

    valorFinal = valor - desconto;

    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}
