#include <stdio.h>
void avarage(double score1, double score2, double score3, double score4, double * media){
    *media = ((score1*2)+(score2*3)+(score3*4)+(score4*1))/10;
}

int main(){
    double score1, score2, score3, score4, media;
    scanf("%lf %lf %lf %lf", &score1, &score2, &score3, &score4);
    avarage(score1, score2, score3, score4, &media);
    printf("Media: %0.1lf\n", media);
    if(media >= 7.0){
        printf("Aluno aprovado.\n");
    }else if(media < 7.0 && media >= 5.0){
        double score5;
        printf("Aluno em exame.\n");
        scanf("%lf", &score5);
        printf("Nota do exame: %0.1lf\n", score5);
        media = (media + score5)/2;
        if(media >= 5.0)
            printf("Aluno aprovado.\n");
        else if(media < 5.0)
            printf("Aluno reprovado.\n");
        printf("Media final: %0.1lf\n", media);
    }else if(media < 5.0){
        printf("Aluno reprovado.\n");
    }
    return 0;
}
