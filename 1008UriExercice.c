#include <stdio.h>
int main(){
    //Come�o Declara��o de variaveis;
    int employeeNumber, workedHours;
    float salaryPerHour;
    //Fim declara��o de variaveis;
    scanf("%d %d %f", &employeeNumber, &workedHours, &salaryPerHour);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", employeeNumber, workedHours*salaryPerHour);
}
