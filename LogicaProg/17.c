#include<stdio.h>

int main (void){
    int itens;
    float preco, compra, valorcaixa;
    char ca = 'N';
    valorcaixa = 0;
    while (ca == 'N'){
    compra = 0;
    itens =0;
    scanf("%f", &preco);
    do{
        compra += preco;
        scanf("%f", &preco);
        itens++;
    } while (preco != -1.0);
    printf("foram comprados %d itens valor da compra eh: R$%.2f\n", itens, compra);
    valorcaixa +=compra;
    printf("Deseja fechar o caixa[S/N]?");
    scanf(" %c", &ca);
    }
    printf("%.2f", valorcaixa);
    return 0;
}