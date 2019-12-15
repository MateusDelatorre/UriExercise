#include <stdio.h>

void main() {
    unsigned int i = 0, valores = 0;
    int num;
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        if (!(num % 2))
        {
            valores++;
        }
        //printf("%d num\n", (num%2));
    }
    printf("%d valores pares\n", valores);
}