#include <stdio.h>

int main() {
    unsigned int i = 2;
    for (i; i < 101; i+= 2)
    {
        printf("%d\n", i);
    }
    return 0;
}