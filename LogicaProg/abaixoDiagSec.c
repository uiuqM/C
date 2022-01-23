#include<stdio.h>

int main(){
    double M[12][12], soma=0;
    char O;
    int i, j, diag = 11;
    scanf("%c", &O);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf", &M[i][j]);
        }
    }
    for(i=1;i<12;i++){
        for(j=1;j<12;j++){
            if (j>=diag){
                soma += M[i][j];
            }
        }
        diag--;
    }
    if(O =='M'){
        soma = soma/66.0;
    }
    printf("%.1lf\n", soma);
    return 0;
}