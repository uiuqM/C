#include<stdio.h>

//Calcular salario baseado em horas trabalhadas, extras e salario minimo.
int main(void){
    float Vht, Sm, Vhe, Sb, Sf; 
    int Ht, He;
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &Sm);
    printf("Digite as horas trabalhadas: ");
    scanf("%d", &Ht);
    printf("Digite as horas extras trabalhadas: ");
    scanf("%d", &He);
    Vht = ((float)1/8)*Sm;
    Vhe = ((float)1/4)*Sm;
    Sb = (float)Ht*Vht;
    Vhe = (float)Vhe*He;
    Sf = Sb+Vhe;
    printf("O valor do salario final eh: %.2f", Sf);
    return 0;
}