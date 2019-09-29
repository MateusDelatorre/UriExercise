#include <stdio.h>
int main(){
    double radio, pi, R3;
    scanf("%lf", &radio);
    pi = 3.14159;
    R3 = radio*radio*radio;
    printf("VOLUME = %.3lf\n", (((4.0/3.0)*pi)*R3));
}
