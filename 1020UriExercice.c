#include <stdio.h>
int main(){
    int totalDias, anos, x, meses, dias;
    scanf("%d", &totalDias);
    anos = totalDias/365;
    x = totalDias%365;
    meses = x/30;
    dias = x%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);
    return 0;
}
