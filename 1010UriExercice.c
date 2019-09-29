#include <stdio.h>
int main(){
    int productCode1, numberOfUnits1, productCode2, numberOfUnits2;
    float unitValue1, unitValue2, valorTotal;
    scanf("%d %d %f", &productCode1, &numberOfUnits1, &unitValue1);
    scanf("%d %d %f", &productCode2, &numberOfUnits2, &unitValue2);
    valorTotal = (float)(numberOfUnits1*unitValue1)+(numberOfUnits2*unitValue2);
    printf("VALOR A PAGAR: R$ %.2f\n", valorTotal);
}

