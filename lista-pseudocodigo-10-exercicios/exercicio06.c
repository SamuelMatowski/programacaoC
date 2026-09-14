#include <stdio.h>

int main() {
    float distancia, litros, consumoMedio;

    printf("Digite a distancia percorrida (km): ");
    scanf("%f", &distancia);
    printf("Digite os litros de combustivel consumidos: ");
    scanf("%f", &litros);

    consumoMedio = distancia / litros;
    printf("Consumo medio: %.2f km/l\n", consumoMedio);

    if (consumoMedio >= 12) {
        printf("Eficiente\n");
    } else {
        printf("Baixa eficiencia\n");
    }

    return 0;
}
