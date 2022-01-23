#include<stdio.h>
#include<stdio.h>

int main(){
    int casosTeste, i;
    scanf("%d", &casosTeste);
    char palavra[casosTeste][50];

    for(i=0; i<casosTeste;i++){
        scanf("%s", &palavra[i]);
    }
    
    return 0;
}