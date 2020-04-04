#include <stdio.h>

int main() {
    int num, guard;
    scanf("%d", &num);
    int i = 1;
    for (;i < num; i++)
    {
        guard = i % num;
        if (guard > 0)
        {
            printf("%d\n", i);
        }
        //printf("guard %d", guard);
    }
    return 0;
}