#include<stdio.h>

void ordena(int vet[10]){
    int i =0, aux, j;
    
    for(i=1;i<10;i++){
        aux = vet[i];
        for(j = i; (j>0) && (aux <vet[j-1]); j--){
            vet[j] = vet[j-1];
            vet[j-1] = aux;
        }
    }

    for(i=0;i<10;i++){
        printf("%d ", vet[i]);
    }
}

int main(void){
    int n[10], i=0;
    for (i=0;i<10;i++){
        scanf("%d", &n[i]);
    }
    ordena(n);
    return 0;
}