#include<stdio.h>
#include<stdlib.h>

//Enchaminha paciente de acordo suas enfermidades
int main (void){
    float temp;
    char fda, d;
    printf("Digite a temperatura do paciente: ");
    scanf("%f", &temp);
    printf("Paciente com falta de ar?[S/N]: ");
    scanf(" %c", &fda);
    printf("Paciente desacordado? [S/N]: ");
    scanf(" %c", &d);
    system("cls");
    if(temp> 37.5){                         //Usando temperatura como base
        if(fda == 'S'){
            printf("Paciente deve fazer exame de sangue e urina e tomografia");
        }
        else{
            if(d == 'N'){
                printf("Paciente deve fazer exame de sangue e urina");
            }
            else{                                                       //desacordado
                printf("Paciente encamninhado para emergencia!");
            }
        }
    }
    else{
        if(temp>= 35 && temp<=37.5){                    //clinico geral
            if(fda == 'S'){
                printf("Paciente deve ir ao clinico geral e fazer tomografia");
            }
            else{
                if(d =='N'){
                    printf("Paciente deve ser encaminhado ao clinico geral");
                }
                else{                                       //desacordado
                    printf("Paciente encaminhado a emergencia!");
                }
            }

        }
        else{                      //desacordado
            printf("Paciente encminhado para emergencia!");
        }
    }
    return 0;
}