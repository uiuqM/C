#include<stdio.h>

int main (void){
    float gl, hdl;
    char mh;
    printf("=========================\n");
    printf("Medidor de glicemia e HDL\n");
    printf("=========================\n");
    printf("Digite H para homem e M para mulher: ");
    scanf("%c", &mh);
    printf("Agora digite o seu indice de glicemia em [mg/dl]: ");
    scanf("%f", &gl);
    printf("Qual seu HDL digite-o em [mg/dl]: ");
    scanf("%f", &hdl);
    if(gl <= 110.0){
        printf("O indice de glicemia esta normal!\n");
    }
    else{
        printf("O indice de glicemia esta alto\n");
    }
    if(mh =='M'){
        if(hdl <= 80 && hdl >= 35){
            printf("Seu HDL esta normal!");
        }
        else{
            if(hdl > 80){
                printf("Seu HDL esta alto");
            }
            else{
                printf("Seu HLD esta baixo");
            }
        }
    }
    else{
        if(hdl <= 65 && hdl >= 35){
            printf("Seu HDL esta normal!");
        }
        else{
            if(hdl > 65){
                printf("Seu HDL esta alto");
            }
            else{
                printf("Seu HLD esta baixo");
            }
        }
    }

    return 0;
}