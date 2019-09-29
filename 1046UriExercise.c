//
// Created by Mateus on 8/9/2019.
//

#include <stdio.h>

void horaPassada(int horaDoComeco, int horaDoFinal, int * duracaoDoJogo){
    *duracaoDoJogo = horaDoFinal - horaDoComeco;
    if(*duracaoDoJogo <= 0) *duracaoDoJogo += 24;
}

int main(){
    int horaDoComeco, horaDoFinal;
    int duracaoDoJogo = 0;
    scanf("%d %d", &horaDoComeco, &horaDoFinal);
    horaPassada(horaDoComeco, horaDoFinal, &duracaoDoJogo);
    printf("O JOGO DUROU %d HORA(S)\n", duracaoDoJogo);
}
