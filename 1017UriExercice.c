#include <stdio.h>
int main(){
    int horasViajadas, kmRodados;
    double litrosGastos;
    scanf("%d %d", &horasViajadas, &kmRodados);
    litrosGastos = (double)(horasViajadas*kmRodados)/12;
    printf("%.3lf\n", litrosGastos);
	return 0;
}

