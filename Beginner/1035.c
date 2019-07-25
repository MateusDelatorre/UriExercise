#include <stdio.h>

int isPar(int a){
    if((a%2) == 0){
        return 1;
    }else{
        return 0;
    }
}

int condicao(int a, int b, int c, int d){
    if(b > c){
        if(d > a){
            if((c + d)>(a + b)){
                if(c > 0){
                    if(d > 0){
                        if(isPar(a)){
                            return 1;
                        }else return 0;
                    }else return 0;
                }else return 0;
            }else return 0;
        }else return 0;
    }else return 0;
}

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(condicao(a, b, c, d))
        printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");
    return 0;
}
