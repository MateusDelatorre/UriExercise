#include <stdio.h>

int conta(int a, int b){
    int c = 0;
    for(int i = 0;a != b; a++){
            if(a > 24){
                a = 0;
            }
        c += 1;
    }
    return c;
}

int main(){
    int time_start, time_end;//variables to hold time start and time end off game
    scanf("%d %d", &time_start, &time_end);//function to recieve the time from user
    int time_passed = 0;
    time_passed = conta(time_start, time_end);
    printf("%d times", time_passed);
    return 0;
}
