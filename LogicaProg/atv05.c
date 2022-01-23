#include<stdio.h>

int main(){
    int maiorVet();
    int n;
    scanf("%d", &n);
    int vet[n], i, maior;
    for(i=0;i<10;i++){
        scanf("%d", &vet[i]);
    }
    printf("%d", maiorVet(10, vet, 0));
    return 0;
}

int maiorVet(int n, int *vet, int indice){
    if(n==0) return vet[indice];
    else{
        if (vet[n-1]> vet[indice]) return maiorVet(n-1, vet, n-1);
        else return maiorVet(n-1, vet, indice);
    }
}