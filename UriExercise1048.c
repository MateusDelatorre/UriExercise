
//  UriExercise1048.c

//  Created by Mateus Delatorre on 19/09/19.
//  Copyright © 2019 Mateus Delatorre. All rights reserved.


#include <stdio.h>

void fun(double salario, double * novo_salario, double * percentagem, double * reajuste){
    if (salario <= 400.00)
    {
        *novo_salario = salario + (*reajuste = salario * (*percentagem = 0.15));
    }else if (salario <= 800.00)
    {
        *novo_salario = salario + (*reajuste = salario * (*percentagem = 0.12));
    }else if (salario <= 1200.00)
    {
        *novo_salario = salario + (*reajuste = salario * (*percentagem = 0.10));
    }else if (salario <= 2000.00)
    {
        *novo_salario = salario + (*reajuste = salario * (*percentagem = 0.07));
    }else
    {
        *novo_salario = salario + (*reajuste = salario * (*percentagem = 0.04));
    }
}

int main(){
    double salario, novo_salario, percentagem, reajuste;
    scanf("%lf", &salario);
    fun(salario, &novo_salario, &percentagem, &reajuste);
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %c \n", novo_salario, reajuste, (percentagem * 100), '%');
    return 0;
}