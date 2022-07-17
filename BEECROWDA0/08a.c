#include<stdio.h>

int main()
{
    int x, par[5], impar[5], i, aux = 0, auxb= 0, j;

    for(i=0;i<15;i++)
    {
        scanf("%d", &x);

        if(x%2 == 0)
        {
            par[aux] = x;
            aux++;
            if(aux == 5)
            {
                for(j=0;j<aux;j++)
                {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                aux=0;
            }
        }
        else
        {
            impar[auxb] = x;
            auxb++;
            if(auxb == 5)
            {
                for(j=0;j<auxb;j++)
                {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                auxb=0;
            }
        }
    }
    return 0;
}
            