#include<stdio.h>

int main (void){
    float n, n1, r, m;
    int p;
    printf("Digite dois numeros: ");
    scanf("%f %f", &n, &n1);
    printf("\nAgora escolha uma das opcoes:\n\n");
    printf("================================\n");
    printf("           1-Soma               \n");
    printf("  2-Subtrai o maior pelo menor  \n");
    printf("3-Divide o primeiro pelo segundo\n");
    printf("================================\n");
    scanf("%d", &p);
    if(p == 1){
        r = n1+n;
        printf("A soma entre %.2f e %.2f eh = %.2f", n, n1, r);
    }
    else {
        if(p == 2){
            m = n-n1;
            if(m < 0){
                r = n1-n;
                printf("A subtracao entre %.2f e %.2f eh = %.2f", n1, n, r);
            }
            else{
                r = n-n1;
                printf("A subtracao entre %.2f e %.2f eh = %.2f", n, n1, r);
            }
        }
        else{
            r = n/n1;
            printf("A divisao entre %.2f e %.2f eh = %.2f", n, n1, r);
        }
    }
    return 0;
}