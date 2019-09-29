#include <stdio.h>

double processOrder(double ordeNumber, double ordeQuantity){
    if (ordeNumber == 1){
        return (4*ordeQuantity);
    }else if(ordeNumber == 2){
        return (4.5*ordeQuantity);
    }else if (ordeNumber == 3){
        return (5*ordeQuantity);
    }else if(ordeNumber == 4){
        return (2*ordeQuantity);
    }else if(ordeNumber == 5){
        return (1.5*ordeQuantity);
    }else
        return 0;
}

int main(){
    double ordeNumber, ordeQuantity, price;
    scanf("%lf %lf", &ordeNumber, &ordeQuantity);
    price = 0;
    price = processOrder(ordeNumber, ordeQuantity);
    printf("Total: R$ %0.2lf\n", price);
    return 0;
}
