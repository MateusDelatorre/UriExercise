#include <stdio.h>
int main(){
    int first_input, second_input, third_input;
    scanf("%d %d %d",&first_input, &second_input, &third_input);
    if(first_input < second_input && first_input < third_input){
        printf("%d\n", first_input);
        if(second_input < third_input){
            printf("%d\n", second_input);
            printf("%d\n", third_input);
        }else{
            printf("%d\n", third_input);
            printf("%d\n", second_input);
        }
    }else if(second_input < first_input && second_input <             third_input){
        printf("%d\n", second_input);
        if(first_input < third_input){
            printf("%d\n", first_input);
            printf("%d\n", third_input);
        }else{
            printf("%d\n", third_input);
            printf("%d\n", first_input);
        }
    }else{
        printf("%d\n", third_input);
        if(second_input < first_input){
            printf("%d\n", second_input);
            printf("%d\n", first_input);
        }else{
            printf("%d\n", first_input);
            printf("%d\n", second_input);
        }
    }
    printf("\n%d\n%d\n%d\n", first_input, second_input, third_input);
    return 0;
 }
