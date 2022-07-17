#include<stdio.h>

int main()
{
    int i, j;
    double M[12][12], soma = 0;
    char O;

    scanf("%c", &O);
    for(i=0; i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%f", &M[i][j]);
        }
    }
    for(i=1; i<11;i++)
    {
        for(j=7;j<11;j++)
        {
            if(i+j>=12)
            {
                soma += M[i][j];
            }
            if(i<5 && j>i)
            {
                soma += M[i][j];
            }
        }
    }
    if(O == 'M'){
        soma = soma/30.0;
    }
    printf("%.1lf\n", soma);
    return 0;
}