#include<stdio.h>

int main ()
{
    int i, j, la = 1;
    double M[12][12], soma = 0;
    char O;

    scanf("%c", &O);
    for(i=0; i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }
    for(i=11; i>7;i--)
    {
        for(j=la;j<i;j++)
        {
            /*if(i == j)
            {
                break;
            }*/
            soma += M[i][j];
        }
        la+=1;
    }
    if(O == 'M')
    {
        soma = soma/30.0;
    }
    printf("%.1lf", soma);
    return 0;
}