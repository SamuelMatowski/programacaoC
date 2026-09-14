#include <stdio.h>

int main() {
    int n1, n2, soma;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);

    soma = n1 + n2;
    printf("Soma: %d\n", soma);

    if (soma > 20) {
        printf("A soma e maior que 20\n");
    } else if (soma == 20) {
        printf("A soma e igual a 20\n");
    } else {
        printf("A soma e menor que 20\n");
    }

    return 0;
}
