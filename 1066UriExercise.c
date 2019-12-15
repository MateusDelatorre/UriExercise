#include <stdio.h>

void main() {
    unsigned int i, par, impar, positivo, negativo;
    i = par = impar = positivo= negativo = 0;
    int num;
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        if (!(num % 2))
        {
            par++;
        }else
        {
            impar++;
        }
        
        if (num > 0)
        {
            positivo++;
        }else if (num < 0)
        {
            negativo++;
        }
        //printf("%d num\n", (num%2));
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, positivo, negativo);
}