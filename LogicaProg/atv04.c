#include<stdio.h>

int main (){
    int trans();
    int l, c;
    scanf("%d %d", &l, &c);
    int matriz[l][c];
    int matrizT[c][l];
    for(int i=0; i<l; i++)
        for(int j=0; j<c; j++)
            scanf("%d", &matriz[i][j]);
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
    for(int i=0;i<l;i++)
        for(int j=0;j<c; j++)
            matrizT[j][i] = matriz[i][j];
    for(int i=0; i<c; i++){
        for(int j=0; j<l; j++)
            printf("%d ", matrizT[i][j]);
        printf("\n");
    }
    return 0;
}