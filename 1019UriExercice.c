#include <stdio.h>
int main(){
    int tempoEmSegundos, hora, x, m, segundos;
    scanf("%d", &tempoEmSegundos);
    hora = tempoEmSegundos/3600;
    x = tempoEmSegundos%3600;
    m = x/60;
    segundos = x%60;
    printf("%d:%d:%d\n", hora, m, segundos);
    return 0;
}
