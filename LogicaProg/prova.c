#include<stdio.h>
#include<stdlib.h>

int main (void){
    float preco, estoque = 0, porcentagem, prodcaro = 0;
    int qtd, tipo, m = 0, l = 0, p = 0, prod, loja, estoquemenor = 0;

    for (loja = 1; loja <= 5; loja++ ){
        system("cls");
        printf("loja %d\n", loja);
        printf("Digite o preco do produto: ");
        scanf("%f", &preco);
        do{
            if(prodcaro < preco){
                prodcaro = preco;
            }
            printf("Agora a quantidade do mesmo: ");
            scanf("%d", &qtd);
            estoque = (float) estoque+(preco*qtd);
            printf("Tipo de produto\n");
            printf("1- mercearia\n");
            printf("2- limpeza\n");
            printf("3- perecivel\n");
            scanf("%d", &tipo);
            if(tipo == 1){
                m += qtd;
            }else{
                if(tipo == 2){
                    l += qtd;
                }
                else{
                    p +=qtd;
                }
            }
            system("cls");
            printf("Digite o preco do produto: ");
            scanf("%f", &preco);
        }while (preco != -1.0);
        if (estoque < 10000,0){
            estoquemenor++;
        }
        system("cls");
        prod = m+l+p;
        printf("A loja tem R$%.2f de estoque\n", estoque);
        porcentagem = (float) (m*100)/prod;
        printf("%.2f eh a porcentagem de produtos de mercearia\n", porcentagem);
        porcentagem = (float) (l*100)/prod;
        printf("%.2f eh a porcentagem de produtos de limpeza\n", porcentagem);
        porcentagem = (float) (p*100)/prod;
        printf("%.2f eh a porcentagem de produtos pereciveis\n", porcentagem);
        preco = 0, qtd = 0, estoque = 0, p = 0, l =0, m = 0;
        system ("pause");
    }
    system("cls");
    printf("O preco lido para produto mais caro foi: R$%.2f\n", prodcaro);
    printf("%d Lojas tiveram estoque menor que R$10000,00", estoquemenor);
    return 0;
}