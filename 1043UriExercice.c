#include <stdio.h>
#include <math.h>

int isTriangulo(double ladoA1, double ladoB1, double ladoC1){
    double abs1, abs2, abs3;
    abs1 = labs((ladoB1 - ladoC1));
    abs2 = labs((ladoA1 - ladoC1));
    abs3 = labs((ladoA1 - ladoB1));
    if(ladoA1 > abs1 && ladoA1 < (ladoB1 + ladoC1) && ladoB1 > abs2 && ladoB1 < (ladoA1 + ladoC1) && ladoC1 > abs3 && ladoC1 < (ladoA1 + ladoB1)){
        return 1;
    } else return 0;
}

int main(){
    double ladoA, ladoB, ladoC;
    scanf("%lf %lf %lf", &ladoA, &ladoB, &ladoC);
    if(isTriangulo(ladoA, ladoB, ladoC)){
        printf("Perimetro = %0.1lf\n", (ladoA + ladoB + ladoC));
    }else printf("Area = %0.1lf\n", (((ladoA + ladoB) * ladoC) / 2));
    return 0;
 }

