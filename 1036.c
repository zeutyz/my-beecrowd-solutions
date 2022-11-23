#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c;
    float r1, r2;
    float delta;

    scanf("%f%f%f", &a, &b, &c);

    delta = (b * b) - (4 * a * c);

    if (delta < 0 || 2 * a == 0){
        printf("Impossivel calcular\n");
        return 0;
    }

    delta = pow(delta, 0.5);
    r1 = (-b + delta) / (2 * a);
    r2 = ( -b - delta) / (2 * a);
 
    printf("R1 = %.5f\nR2 = %.5f\n", r1, r2);

    return 0;
}