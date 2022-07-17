#include <stdio.h>
 
int main() {
    int X[10], i, V;
    scanf("%d", &V);
    X[0] = V;
    for(i=1;i<10;i++)
    {
        X[i] = X[i-1]*2;
    }
    for(i=0;i<10;i++)
    {
        printf("X[%d] = %d\n", i,  X[i]);
    }
    return 0;
}