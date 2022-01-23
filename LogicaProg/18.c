#include<stdio.h>
#include<stdlib.h>

int main (void){
    float mTemp=0, mPluv=0, temp, pluv;
    int i, aux = 1;
    char r;

    do{
        printf("Digite a %d temperatura:", aux);
        scanf("%f", &temp);
        mTemp += temp;
        aux++;
        printf("\nDeseja entrar com mais dados[S/N]?");
        scanf(" %c", &r);
    }while(r == 'S');
    mTemp = mTemp/aux;
    system("cls");
    for (i=1; i<=12; i++){
        printf("Digite o indice pluviometrico do mes %d: ", i);
        scanf("%f", &pluv);
        mPluv += pluv;
    }
    mPluv = mPluv/12;
    printf("A media anual de temperatura corresponde a:%.2f, e a pluviometrica a: %.2f", mTemp, mPluv);

    return 0;
}