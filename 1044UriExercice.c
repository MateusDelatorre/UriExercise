#include <stdio.h>
int areMultiples(int a, int b){
    double a2, b2;
    a2 = (double) a;
    b2 = (double) b;
    if((a2/b2) == (a/b) || (b2/a2) == (b/a))
        return 1;
    else
        return 0;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(areMultiples(a, b))
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");
    return 0;
 }
