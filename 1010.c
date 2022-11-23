#include <stdio.h>
 
int main() {
    
    int idP1;
    int idP2;
    int qtdP1;
    int qtdP2;

    double valP1;
    double valP2;

    scanf("%d%d%lf", &idP1, &qtdP1, &valP1);
    scanf("%d%d%lf", &idP2, &qtdP2, &valP2);
  
    printf("VALOR A PAGAR: R$ %.2lf\n", qtdP1 * valP1 + qtdP2 * valP2);

 
    return 0;
}