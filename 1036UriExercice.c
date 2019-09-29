#include <stdio.h>
#include <math.h>

int bhaskara(double numberA, double numberB, double numberC, double * delta, double * root1, double * root2){
    *delta = pow(numberB, 2) -(4*numberA*numberC);
    if(*delta < 0)return -1;
    if(2*numberA == 0) return -1;
    *root1 = ((-numberB) + sqrt(*delta))/(2*numberA);
    *root2 = ((-numberB) - sqrt(*delta))/(2*numberA);
    return 0;
}

int main(){
    double numberA, numberB, numberC, delta, root1, root2;
    scanf("%lf %lf %lf", &numberA, &numberB, &numberC);
    if(bhaskara(numberA, numberB, numberC, &delta, &root1, &root2) == -1)
        printf("Impossivel calcular\n");
    else{
        printf("R1 = %0.5lf\n", root1);
        printf("R2 = %0.5lf\n", root2);
    }
    return 0;
}
