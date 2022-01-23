#include<stdio.h>

int main (void){
    float a, b, c;
    printf("=================\n");
    printf("Calcula triangulo\n");
    printf("=================\n");
    printf("Digite a medida dos lados do seu triangulo: ");
    scanf("%f %f %f", &a, &b, &c);
    if((a < b+c) && (b < a+c) && (c < a+b)){
        if(a == b && a == c){
            printf("O tringulo eh equilatero!");
        }
        else{
            if(a != b && a != c){
                printf("O triangulo eh escaleno!");
            }
            else{
                printf("O triangulo eh isosceles!");
            }
        }
    }
    else{
        printf("Digite medidas validas para um triangulo!");
    }
    return 0;
}