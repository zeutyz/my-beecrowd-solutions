#include <stdio.h>

int main() {

    float n1, n2, n3, n4;

    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);

    double media = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;

    printf("Media: %.1f\n", media);

    if (media >= 7) {
        printf("Aluno aprovado.\n");
    }
    else if (media >= 5 && media <= 6.9) {
        printf("Aluno em exame.\n");
        scanf("%f", &n4);
        printf("Nota do exame: %.1f\n", n4);

        media = (media + n4) / 2;

        if (media >= 5) {
            printf("Aluno aprovado.\nMedia final: %.1f\n", media);
        }
    }
    else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}