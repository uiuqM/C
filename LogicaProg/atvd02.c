#include<stdio.h>

float totalGasto(){
    float gasto;
    printf("Digite o total gasto pelo cliente\n");
    scanf("%f", &gasto);
    return gasto;
}
void imprimeOpcao(){
    printf("\n1-A vista com 10 por cento de desconto\n");
    printf("2-Em duas vezes (preco da etiqueta)\n");
    printf("3-De 3 ate 10 vezes com 3 por cento de juros ao mes (somente para compras acima de 100 reais)\n");
}
int solicitaOpcao(float gasto){
    int op;
    scanf("%d", &op);
    if (op == 3 && gasto < 100.0){
        printf("Opcao somente para compras acima de 100 reais\n");
        while(op == 3){
            printf("Selecione outra opcao: ");
            scanf("%d", &op);
        }
    }
    return op;
}
void calc(int opcao, float gasto){
    float juros=0.0;
    int i, parc;
    switch(opcao){
        case 1:
            gasto = gasto*0.9;
            printf("%.2f", gasto);
        break;
        case 2:
            printf("%.2f", gasto);
        break;
        case 3:
            printf("Em quantas parcelas: \n");
            scanf("%d", &parc);
            for (i=0;i<parc;i++){
                juros = gasto*0.03;
                gasto += juros;
            }
            printf("Total : %.2f", gasto);
        break;
    }
}
int main(){
    float gasto;
    int opcao;
    gasto = totalGasto();
    imprimeOpcao();
    opcao = solicitaOpcao(gasto);
    calc(opcao, gasto);
    return 0;
}