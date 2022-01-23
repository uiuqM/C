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
       printf("Paciente deve fazer exame de sangue e urina ");
    }
    else{
        if(temp>= 35 && temp<=37.5){                    //clinico geral
            printf("Paciente deve ir ao clInico geral ");
        }
        else{                      //desacordado
            printf("Paciente encaminhado para emergencia!");
        }
    }
    if(fda == 'S'){
        printf(" e ir a realizar a tomografia");
    }
    if (d == 'S'){
        printf(" Paciente encaminhado a emergencia");
    }
    return 0;
}