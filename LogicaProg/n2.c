#include<stdio.h>

int main (void){
    char nome[30];
    float nota1, nota2, nota3, media;
    int falta = 0, rft = 0;

    scanf("%s", nome);
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);
    scanf("%d", &falta);

    media = (nota1+nota2+nota3)/3;

    printf ("%s\n", nome);
    if(media >= 7.0 && falta<= 10){
        printf("Aluno aprovado");
    }
    else{
        if(media >  5.0 && falta <=10){
            printf("Fara prova substituitiva");
        }
        else{
            if(falta > 10){
                printf("Aluno reprovado por falta");
            }
            else{
                printf("Aluno reprovado por nota");
            }
        }
    }
    return 0;
}