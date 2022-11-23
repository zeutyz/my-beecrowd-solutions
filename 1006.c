#include <stdio.h>

int main() {

    double a;
    double b;
    double c;

    scanf("%lf%lf%lf", &a, &b, &c);

    printf("MEDIA = %.1lf\n", (a * 2 + b * 3 + c * 5) / 10 );
    return 0;
}