#include <stdio.h>
int main(){
    double a, b, c, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
    double pi = 3.14159;
    scanf("%lf %lf %lf", &a, &b, &c);
    TRIANGULO = (a*c)/2;
    CIRCULO = (c*c)*pi;
    TRAPEZIO = ((a+b)/2)*c;
    QUADRADO = b*b;
    RETANGULO = a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO);
}
