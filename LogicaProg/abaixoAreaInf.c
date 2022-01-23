#include<stdio.h>

int main(){
    double M[12][12], soma=0;
    char O;
    int i, j;
    scanf("%c", &O);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf", &M[i][j]);
        }
    }
    for(i=7;i<12;i++){
        for(j=11-i+1;j<=i-1;j--){
                soma += M[i][j];
        }
    }
    if(O =='M'){
        soma = soma/30.0;
    }
    printf("%.1lf\n", soma);
    return 0;
}