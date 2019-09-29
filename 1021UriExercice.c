#include <stdio.h>
int main(){
    double valorQuebrado;
    int valorInteiro, valor100, valor50, valor20, valor10, valor5, valor2, valor1;
    int moeda100, moeda50, moeda25, moeda10, moeda5, moeda1;
    scanf("%lf", &valorQuebrado);
    valorInteiro = (int) valorQuebrado;
    valor100 = valorInteiro/100;
    valor50 = (valorInteiro%100)/50;
    valor20 = (valorInteiro%100%50)/20;
    valor10 = (valorInteiro%100%50%20)/10;
    valor5 = (valorInteiro%100%50%20%10)/5;
    valor2 = (valorInteiro%100%50%20%10%5)/2;
    moeda100 = (valorInteiro%100%50%20%10%5%2)/1;
    valorInteiro = (int)(((double)valorQuebrado-valorInteiro)*100);
    moeda50 = (valorInteiro%100)/50;
    moeda25 = (valorInteiro%100%50)/25;
    moeda10 = (valorInteiro%100%50%25)/10;
    moeda5 = (valorInteiro%100%50%25%10)/5;
    moeda1 = (valorInteiro%100%50%25%10%5)/1;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n", valor100, valor50);
	printf("%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n", valor20, valor10);
	printf("%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n",valor5, valor2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n", moeda100, moeda50);
	printf("%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n", moeda25, moeda10);
	printf("%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", moeda5, moeda1);
	return 0;
}
