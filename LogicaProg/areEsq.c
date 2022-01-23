#include <stdio.h>
 
int main() {
    double M[12][12], soma=0;
    char O;
    int i, j;
    scanf("%c", &O);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf", &M[i][j]);
        }
    }
    for(i=1;i<11;i++){
        if(i<=5){
            for(j=0;j<i;j++){
                soma += M[i][j];
            }
        }
        else{
            for(j=0;j<11-i;j++){
                soma+=M[i][j];
            }
        }
    }
    if(O =='M'){
        soma = soma/30.0;
    }
    printf("%.1lf\n", soma);
    return 0;
}