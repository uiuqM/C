#include<stdio.h>

int main (void){
    float temp;
    char r;
    printf("Digite a temperatura do paciente: ");
    scanf("%f", &temp);
    printf("Paciente com falta de ar? [S/N]: ");
    scanf(" %c", &r);
    switch (r) {
    case 'S':
        if(temp>37.5){
            printf("Paciente deve fazer exame de sangue e urina\n");
            printf("Paciente deve passar para fazer tomografia.");
        }
        else{
            if(temp<=37.5 && temp >= 35){
                printf("Paciente deve passar no clInico geral e fazer tomografia");
            }
            else{
                printf("Paciente encaminhado para emergencia");
            }
        }
        break;
    case 'N':
        if(temp>37.5){
            printf("Paciente deve fazer exame de sangue e urina\n");
        }
        else{
            if(temp<=37.5 && temp >= 35){
                printf("Paciente deve passar no clInico geral");
            }
            else{
                printf("Paciente encaminhado para emergencia");
            }
        }
        break;
    default:
        printf("entrada invalida!");
        break;
    }
    return 0;
}