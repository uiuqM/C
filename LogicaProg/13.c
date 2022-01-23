#include<stdio.h>

int main (void){
    int idade = 0, media = 0, cont =0;
    char op;

    do{
        cont +=1;
        scanf("%d", &idade);
        if (idade >= 18){
            printf("Maior de idade\n");
        }
        else{
            printf("Menor de idade\n");
        }
        media +=idade;
        printf("Continuar?[S/N]");
        scanf(" %c", &op);
    } while (op != 'N');
    media/=cont;
    printf("Media = %d", media);
    

    return 0;
}