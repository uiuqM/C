#include<stdio.h>

int main ()
{
    int i, j, aux=11;
    double M[12][12], soma=0.0;
    char O;

    scanf("%c", &O);

    for(i=0;i<12;i++)
    {
        for (j=0;j<12;j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<aux;j++)
        {
            soma+=M[i][j];
        }
        aux--;
    }
    if(O == 'M')
    {
        soma = soma/30.0;
    }
    printf("%.1lf\n", soma);
    return 0;
}