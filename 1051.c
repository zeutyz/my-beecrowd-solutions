#include <stdio.h>

int main() {

    float renda;
    float imposto;

    scanf("%f", &renda);

    if (renda <= 2000.00) {
        printf("Isento\n");
        return 0;
    }
    else if (renda >= 2000.01 && renda <= 3000) {

        imposto = (renda - 2000) * 0.08;

    }
    else if (renda >= 3000.01 && renda <= 4500) {

        imposto = 1000 * 0.08;
        imposto += (renda - 3000) * 0.18;
    }
    else if (renda > 4500) {

        imposto = 1000 * 0.08;
        imposto += 1500 * 0.18;
        imposto += (renda - 4500) * 0.28;

    }

    printf("R$ %.2f\n", imposto);

    return 0;
}