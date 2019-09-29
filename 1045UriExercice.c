#include <stdio.h>
#include <math.h>

void maiorEntreDoisDouble(double * a, double * b){
    if(*a < *b){
        *a = *a + *b;
        *b = *a - *b;
        *a = *a - *b;
    }
}

void maiorentreTresDouble(double * a, double * b, double * c){
    if(*a < *b){
        maiorEntreDoisDouble(a, b);
    }
    if(*a < *c){
        maiorEntreDoisDouble(a, c);
    }
    if(*b < *c){
        maiorEntreDoisDouble(b, c);
    }
}

int decidirOquePrintar(double a, double b, double c){
    if(a >= (b+c)){
        printf("NAO FORMA TRIANGULO\n");

    }else{
        if((a * a) == ((b * b) + (c * c))){
            printf("TRIANGULO RETANGULO\n");

        }else if((a * a) > ((b * b) + (c * c))){
            printf("TRIANGULO OBTUSANGULO\n");

        }else if((a * a) < ((b * b) + (c * c))){
            printf("TRIANGULO ACUTANGULO\n");
         }
        if((a == b) && (b == c)){
            printf("TRIANGULO EQUILATERO\n");
        }else if((a == b) || (b == c) || (a == c)){
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}

int main(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    maiorentreTresDouble(&a, &b, &c);
    printf("#lf")
    decidirOquePrintar(a, b, c);
    return 0;
 }
