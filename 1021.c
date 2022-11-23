#include <stdio.h>

int main() {

    double valor;
    
    int decValor;
    int intValor;

    // notas
    int n100;
    int n50;
    int n20;
    int n10;
    int n5;
    int n2;

    //moedas
    int m1;
    int m05;
    int m025;
    int m010;
    int m005;
    int m001;

    scanf("%lf", &valor);

    intValor = valor * 100;
    decValor = intValor % 100;
    intValor /= 100;

    // separacao de cedulas
    n100 = intValor / 100;
    n50 = (intValor % 100) / 50;
    n20 = ((intValor % 100) % 50) / 20;
    n10 = (((intValor % 100) % 50) % 20) / 10;
    n5 = ((((intValor % 100) % 50) % 20) % 10) / 5;
    n2 = (((((intValor % 100) % 50) % 20) % 10) % 5) / 2;
    m1 = (((((intValor % 100) % 50) % 20) % 10) % 5) % 2; // calculo da moeda de 1

    printf("NOTAS:\n"
        "%d nota(s) de R$ 100.00\n"
        "%d nota(s) de R$ 50.00\n"
        "%d nota(s) de R$ 20.00\n"
        "%d nota(s) de R$ 10.00\n"
        "%d nota(s) de R$ 5.00\n"
        "%d nota(s) de R$ 2.00\n",
        n100, n50, n20, n10, n5, n2);
        

    // separacao de moedas
    m05 = (decValor % 100) / 50;
    m025 = ((decValor % 100) % 50) / 25;
    m010 = (((decValor % 100) % 50) % 25) / 10;
    m005 = ((((decValor % 100) % 50) % 25) % 10) / 5;
    m001 = ((((decValor % 100) % 50) % 20) % 10) % 5;

    printf("MOEDAS:\n"
        "%d moeda(s) de R$ 1.00\n"
        "%d moeda(s) de R$ 0.50\n"
        "%d moeda(s) de R$ 0.25\n"
        "%d moeda(s) de R$ 0.10\n"
        "%d moeda(s) de R$ 0.05\n"
        "%d moeda(s) de R$ 0.01\n",
        m1, m05, m025, m010, m005, m001);
 
    return 0;
}