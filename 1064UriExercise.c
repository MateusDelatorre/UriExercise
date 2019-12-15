#include <stdio.h>

void main() {
    unsigned int i = 0, valores = 0;
    float num = 0, media = 0;
    for ( i = 0; i < 6; i++)
    {
        scanf("%f", &num);
        if (num > 0)
        {
            valores++;
            media += num;
        }
        
    }
    printf("%d valores positivos\n%0.1f\n", valores, (media /(float)valores));
    
}