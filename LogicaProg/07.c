#include<stdio.h>

int main(void){
    int media = 0, idade, i;
    for (i=1;i<=3;i++){
        scanf("%d", &idade);
        media += idade;
        if(idade >=18){
            printf("Maior\n");
        }
        else{
            printf("Menor\n");
        }
    }
    printf("%d", media/3);
    return 0;
}