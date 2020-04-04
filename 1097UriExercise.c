#include <stdio.h>

void main() {
    int i, j = 7, count;
    for ( i = 1; i < 10; i+= 2, j += 5)
    {
        for (count = 0; count < 3; count++, j--)
        {
            printf("I=%d J=%d\n", i, j);
        }
    }
}