#include <stdio.h>
int main(){
    char nome;
    double A, B, C;
    scanf("%s %lf %lf", &nome, &A, &B);
    C = (0.15*B)+A;
    printf("TOTAL = %.2lf\n", C);
    return 0;
}

