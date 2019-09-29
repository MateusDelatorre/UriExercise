#include <stdio.h>
#include <math.h>
void swap(double *a, double *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void arrange(double * a, double * b, double * c){
    if(*a<*b){
        swap(a, b);
    }
    if(*a<*c){
        swap(a, c);
    }
    if(*b<*c){
        swap(b, c);
    }
}
/*
int triangulo(char vx[], double a, double b, double c){
    if(a >= (b+c)){
        char letra[100] = "NAO FORMA TRIANGULO";
        vx = letra;
        return 1;
    }
}
*/
int main(){
    double a, b, c;
    //char v[100] = "Oi";
    scanf("%lf %lf %lf", &a, &b, &c);
    arrange(&a, &b, &c);
    if(a>=(b+c)){
        printf("NAO FORMA TRIANGULO\n");
    }
    if(pow(a, 2) == (pow(b, 2)+pow(c, 2))){
        printf("TRIANGULO RETANGULO\n");
    }
    if(pow(a, 2) > (pow(b, 2) + pow(c, 2))){
        printf("TRIANGULO OBTUSANGULO\n %d", pow(b, 2));
    }
    if(pow(a, 2) < (pow(b, 2)+pow(c, 2))){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a == b && a == c && b == c){
        printf("TRIANGULO EQUILATERO\n");
    }
    if(a == b && a != c || a == c && a != b || b == c && b != a){
        printf("TRIANGULO ISOSCELES\n");
    }
 }

