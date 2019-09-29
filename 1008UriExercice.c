#include <stdio.h>
int main(){
    //Começo Declaração de variaveis;
    int employeeNumber, workedHours;
    float salaryPerHour;
    //Fim declaração de variaveis;
    scanf("%d %d %f", &employeeNumber, &workedHours, &salaryPerHour);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", employeeNumber, workedHours*salaryPerHour);
}
