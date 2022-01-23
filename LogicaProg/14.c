#include<stdio.h>

int main (void){
    int idade, cont = 0;
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
        printf("Continuar?");
        scanf(" %c", &op);
    }while(op != 'N');
    printf("Foram digitadas %d idades", cont);
    return 0;
}