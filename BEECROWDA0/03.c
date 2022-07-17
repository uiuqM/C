#include<stdio.h>

int main()
{
    int N[20], i, j, temp=0, aux = 19;

    for(i=0;i<20;i++)
    {
        scanf("%d", &N[i]);
    }
    for(i=0;i<10;i++)
    {
        temp = N[i];
        N[i] = N[aux];
        N[aux] = temp;
        aux--;
    }
    for(i=0;i<20;i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}