#include<stdio.h>
#define n 1000
int main()
{
    int x[n], i, menor, pos = 0, num;

    scanf("%d", &num);

    for(i=0;i<num;i++)
    {
        scanf("%d", &x[i]);
    }
    menor = x[0];
    
    for(i=0;i<num;i++)
    {
        if(menor>x[i])
        {
            menor = x[i];
            pos = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);
    return 0;
}