#include<stdio.h>

int main (void){
    int n, m, i;

    scanf("%d", &m);
    for (i = 0;i < 9; i++){
        scanf("%d", &n);
        if(n>m){
            m = n;
        }
    }
    printf("%d", m);
    return(0);
}