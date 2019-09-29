#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c, maiorab, maior_ab_c;
    scanf("%d %d %d", &a, &b, &c);
    maiorab = (a+b+abs(a-b))/2;
    maior_ab_c = (maiorab+c+abs(maiorab-c))/2;
    printf("%d eh o maior\n", maior_ab_c);
}
