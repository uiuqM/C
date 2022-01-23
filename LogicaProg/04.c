#include<stdio.h>

int main(void){
    float v, p, rf;
    int t;
    printf("=====================\n");
    printf("Bem vindo ao banco vc\n");
    printf("=====================\n");
    printf("|1||Poupanca\n");
    printf("|2||Renda Fixa\n");
    printf("=================================================\n");
    printf("Digite a opcao de escolha para seu investimento: \n");
    scanf("%d", &t);
    printf("Agora digite o valor que deseja investir: ");
    scanf("%f", &v);
    if(t == 1){
        p = v*0.04;
        printf("O valor do deposito %.2f rende mensalmente %.2f na poupanca!\n", v, p);
        p = p+v;
        printf("Resultando em %.2f", p);
    }
    else{
        rf = v*0.25;
        printf("O valor do deposito de %.2f rende mensalmente %.2f na renda fixa!\n", v, rf);
        p = p+rf;
        printf("Resultando em %.2f", p);
    }
    return 0;
}