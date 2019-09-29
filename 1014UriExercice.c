#include <stdio.h>
int main(){
    int kmRodados;
    float litrosAbastecidos;
    scanf("%d %f", &kmRodados, &litrosAbastecidos);
    printf("%.3f km/l\n", kmRodados/litrosAbastecidos);
	return 0;
}
