//
// Created by Mateus on 8/9/2019.
//
#include <stdio.h>
void calcularTempoDeJogo(int horaDoComeco, int minutoDoComeco, int horaDoFinal, int minutoDoFinal, int * horaDeJogo, int * minutoDeJogo){
    *horaDeJogo = horaDoFinal - horaDoComeco;
    *minutoDeJogo = minutoDoFinal - minutoDoComeco;
    if(*minutoDeJogo < 0) *minutoDeJogo += 60;

    if(minutoDoComeco > minutoDoFinal){
        if(*horaDeJogo <= 0) *horaDeJogo += 24;
        (*horaDeJogo)--;
    }else if(*horaDeJogo == 0 && minutoDoFinal > minutoDoComeco) {
        ;
    }else{
        if(*horaDeJogo <= 0) *horaDeJogo += 24;
    }
}

int main(){
    int horadoComeco, minutoDoComeco, horaDoFinal, minutoDoFinal;
    int horaDeJogo = 0;
    int minutoDeJogo = 0;
    scanf("%d %d %d %d", &horadoComeco, &minutoDoComeco, &horaDoFinal, &minutoDoFinal);

    calcularTempoDeJogo(horadoComeco, minutoDoComeco, horaDoFinal, minutoDoFinal, &horaDeJogo, &minutoDeJogo);

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaDeJogo, minutoDeJogo);
    return 0;
}
