#include<stdio.h>

int main(void){
    int n, m;
    char op;
    
    scanf("%d", &m);
    printf("Deseja continuar [S/N]?");
    scanf(" %c", &op);
    while (op != 'N'){
        scanf("%d", &n);
        if (n>m)
        {
            m = n;
        }
        printf("Deseja continuar [S/N]?");
        scanf(" %c", &op);
    }
    printf("%d", m);
    return 0;
}