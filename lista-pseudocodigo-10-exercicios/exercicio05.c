#include <stdio.h>

int main() {
    float salarioAntigo, reajuste, novoSalario;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salarioAntigo);

    if (salarioAntigo < 2500) {
        reajuste = salarioAntigo * 0.10;
    } else {
        reajuste = salarioAntigo * 0.06;
    }

    novoSalario = salarioAntigo + reajuste;

    printf("Salario antigo: R$ %.2f\n", salarioAntigo);
    printf("Valor do reajuste: R$ %.2f\n", reajuste);
    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}
