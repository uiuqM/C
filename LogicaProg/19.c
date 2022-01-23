#include<stdio.h>

int main (void){
    int idade[50], i, media=0, menor_media=0, menor_idade=0, mais_velho;
    for (i = 0; i < 50; i++){                                             //Laço para ler as idades
        scanf("%d", &idade[i]);
        media += idade[i];
    }
    media = media/50;                                                    //media das idades
    mais_velho = idade[0];
    for (i = 0; i < 50; i++){
        if (idade[i] < media){                                            //menores que a media
            menor_media++;
        }
        if(idade[i] < 18){                                               //menores de idade
            menor_idade++;
        }
        if (mais_velho < idade[i]){                                            //mais velho
            mais_velho = idade[i];
        }
    }
    menor_idade = (menor_idade*100)/50;
    printf("A media das idades corresponde a: %d\n", media);
    printf("%d por cento são menores de idade\n", menor_idade);
    printf("A idade do mais velho eh: %d", mais_velho);
    return 0;
}