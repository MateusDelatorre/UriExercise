#include <stdio.h>

void main() {
    int quantidade_de_casos, quantidad_de_num, count;
    scanf(" %d", &quantidade_de_casos);
    count = 0;
    while (count < quantidade_de_casos)
    {
        scanf(" %d", &quantidad_de_num);
        if (!(quantidad_de_num % 2))
        {
            printf("%d\n", 0);
        }else
        {
            printf("%d\n", 1);
        }
        count++;
    }
}