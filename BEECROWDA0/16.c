#include<stdio.h>

int main ()
{
    int i, j;
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
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            if(i>j && i< 12 -j -1)
            {
                soma+=M[i][j];
            }
        }
    }
    if(O == 'M')
    {
        soma = soma/30.0;
    }
    printf("%.1lf\n", soma);
    return 0;
}