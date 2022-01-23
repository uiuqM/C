#include<stdio.h>

int main (void){
    int idade, aux = 0, func, prctfc =0;
    float fc, mdp, Mmdp, mfc  = 0;
    for (func = 1; func <= 30; func++){
        scanf("%d", &idade);
        scanf("%f", &mdp);
        do{
            Mmdp +=mdp;
            scanf("%f", &mdp);
            aux++;
        }while(mdp != -1.0);
        Mmdp = Mmdp/aux;
        for (aux = 0;aux < 6; aux++ ){
            scanf("%f", &fc);
            if (fc > mfc){
                mfc = fc;
            }
        }
        if (mfc > 105.0){
            prctfc +=1;
        }
        printf("Media de peso: %.2f\n", Mmdp);
        printf("Maior freq card: %.2f", mfc);
    }
    return 0;
}