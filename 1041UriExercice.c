#include <stdio.h>
enum quadrant {Origem, Q1, Q4, EixoX, Q2, Q3, EixoY};

char determineQuadrant(double pointX, double pointY){
    enum quadrant day;
    char quadrant1[10];
    if(pointX == 0 && pointY == 0){
        quadrant1 = day[0];
        return quadrant1;
    }
    if(pointX > 0){
        if(pointY > 0){
            quadrant1 = 'Q1';
            return quadrant1;
        }else if(pointY < 0){
            quadrant1 = 'Q4';
            return quadrant1;
        }else if(pointY == 0){
            quadrant1 = 'Eixo X';
            return quadrant1;
        }
    }else if(pointX < 0){
        if(pointY > 0){
            quadrant1 = 'Q2';
            return quadrant1;
        }else if(pointY < 0){
            quadrant1 = 'Q3';
            return quadrant1;
        }else if(pointY == 0){
            quadrant1 = 'Eixo X';
            return quadrant1;
        }
    }else{
        quadrant1 = 'Eixo Y';
        return quadrant1;
    }
}
int main(){
    double pointX, pointY;
    scanf("%lf %lf",&pointX, &pointY);
    char quadrant2[10];
    quadrant2[] = determineQuadrant(pointX, pointY);
    printf("%s\n", quadrant2);
}
