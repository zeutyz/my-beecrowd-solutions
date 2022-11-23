#include <stdio.h>

int main() {

    int distanciaPercorrida;
    double litrosGastos;

    scanf("%d%lf", &distanciaPercorrida, &litrosGastos);
    printf("%.3lf km/l\n", distanciaPercorrida / litrosGastos);

 
    return 0;
}