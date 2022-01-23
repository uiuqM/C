#include <stdio.h>

int main (void){
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade >= 18 && idade <= 70){
        printf("Com a idade de %d eh anos obrigatorio o voto!", idade);
    }
    else{
        if(idade < 16 || idade>=70){
            printf("Com a idade de %d anos nao se pode exercer o voto!", idade);
        }
        else{
            printf("Com a idade de %d anos eh opcional o voto!", idade);
    }
    }
    
    return 0;
}