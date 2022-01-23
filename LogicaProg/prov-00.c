#include<stdio.h>

int main (void){
    int idade, atl = 1, i = 0, r, Maior, menor;
    float fc, mno, Mmno, fcM = 0;
    while(atl <= 10){
        scanf("%d", &idade);
        do{
            printf("Media de nivel de oxigenio: \n");
            scanf("%f", &mno);
            Mmno += mno;
            i ++;
        }while(mno != -1.0);
        Mmno = Mmno/i;
        for (i = 0; i < 8; i++){
            printf("frequencia cardiaca: \n");
            scanf("%f", &fc);
            if (fc > fcM){
                fcM = fc;
            }
        }
        if (Mmno < 96){
            r = atl;
        }
        if (idade > 25){ 
            Maior++;
        }
        if (idade < 16){
            menor++;
        }
        atl++;
    }
    Maior *= 10;
    menor *= 10;
    printf("Atletas com media oxigenio menor que 96: %d\n", r);
    printf("Percentual de atletas com mais de 25 anos: %d por cento\n", Maior);
    printf("Percentual de atletas com menos de 16 anos: %d por cento", menor);
    return 0;
}