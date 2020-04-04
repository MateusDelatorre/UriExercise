#include <stdio.h>

void main() {
    int first_number, count;
    scanf("%d", &first_number);
    if (!(first_number % 2))
    {
        first_number++;
    }
    printf("%d\n", first_number);
    for (count = 0; count < 5; count++)
    {
        first_number += 2;
        printf("%d\n", first_number);
    }
}