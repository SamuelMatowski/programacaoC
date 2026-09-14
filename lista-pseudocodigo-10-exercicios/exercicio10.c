#include <stdio.h>

int main() {
    float n1, n2, n3, frequencia, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite o percentual de frequencia: ");
    scanf("%f", &frequencia);

    media = (n1 + n2 + n3) / 3;
    printf("Media: %.2f\n", media);

    if (media >= 7 && frequencia >= 75) {
        printf("Aprovado\n");
    } else if (media >= 5 && media <= 6.9 && frequencia >= 75) {
        printf("Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
