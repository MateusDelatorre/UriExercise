#include <stdio.h>
#include <string.h>

void main() {
    char palavra1[100], palavra2[100], palavra3[100];
    
    scanf("%s %s %s", palavra1, palavra2, palavra3);
    if (!(strcmp(palavra1, "vertebrado"))){

        if (!(strcmp(palavra2, "ave"))){

            if (!(strcmp(palavra3, "carnivoro"))){

                printf("aguia\n");

            }else if (!(strcmp(palavra3, "onivoro"))){
                
                printf("pomba\n");

            }

        }else if (!(strcmp(palavra2, "mamifero"))){

            if (!(strcmp(palavra3, "herbivoro"))){

                printf("vaca\n");

            }else if (!(strcmp(palavra3, "onivoro"))){
                
                printf("homem\n");

            }
        
        }

    }else if (!(strcmp(palavra1, "invertebrado"))){

        if (!(strcmp(palavra2, "inseto"))){

            if (!(strcmp(palavra3, "hematofago"))){

                printf("pulga\n");

            }else if (!(strcmp(palavra3, "herbivoro"))){
                
                printf("lagarta\n");

            }

        }else if (!(strcmp(palavra2, "anelideo"))){

            if (!(strcmp(palavra3, "hematofago"))){

                printf("sanguessuga\n");

            }else if (!(strcmp(palavra3, "onivoro"))){
                
                printf("minhoca\n");

            }
        
        }

    }

    //printf("%s %s %s", palavra1, palavra2, palavra3);
}