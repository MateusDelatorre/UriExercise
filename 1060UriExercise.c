#include <stdio.h>

void main() {
    unsigned int i = 0, valores = 0;
    double num;
    for ( i = 0; i < 6; i++)
    {
        scanf("%lf", &num);
        if (num > 0)
        {
            valores++;
        }
        
    }
    printf("%d valores positivos\n", valores);
}