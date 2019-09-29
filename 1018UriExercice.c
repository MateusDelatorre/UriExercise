#include <stdio.h>
int main(){
    int valorInteiro, valor100, valor50, valor20, valor10, valor5, valor2, valor1;
    scanf("%d", &valorInteiro);
    valor100 = valorInteiro/100;
    valor50 = (valorInteiro%100)/50;
    valor20 = (valorInteiro%100%50)/20;
    valor10 = (valorInteiro%100%50%20)/10;
    valor5 = (valorInteiro%100%50%20%10)/5;
    valor2 = (valorInteiro%100%50%20%10%5)/2;
    valor1 = (valorInteiro%100%50%20%10%5%2)/1;
    printf("%d\n", valorInteiro);
    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n", valor100, valor50);
	printf("%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n", valor20, valor10);
	printf("%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n",valor5, valor2);
	printf("%d nota(s) de R$ 1,00\n", valor1);
	return 0;
}


