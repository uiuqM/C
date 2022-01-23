#include<stdio.h>
#include<stdlib.h>

int main (void){
    char nomes[3][2][30];
    float notas[3][2][3], medias[3][2];
    int i, j, k, faltas[3][2], consulta, consAluno, consTurma, mediaMaior = 0;
    for(i=0;i < 3; i++){
        for(j=0;j <2; j++){
            scanf("%s", nomes[i][j]);
        }
    }
    for(i=0;i < 3; i++){
        printf("Turma %d\n", i+1);
        for(j=0;j <2; j++){
            printf("Aluno %d: ", j+1);
            printf("%s\n", nomes[i][j]);
        }
    }
    for(i=0;i < 3; i++){
        printf("\nTurma %d\n", i+1);
        for(j=0;j < 2; j++){
            printf("Aluno: %s\n", nomes[i][j]);
            for(k=0;k < 3;k++){
                //printf("nota %d: ", k+1);
                scanf("%f", &notas[i][j][k]);
            }
        }
    }
    for(i=0;i < 3;i++){
        for(j=0;j<2;j++){
            medias[i][j] = 0;
        }
    }
    for(i=0;i < 3;i++){
        printf("\nTurma %d\n", i+1);
        for(j=0;i < 2;j++){
            printf("Aluno: %s\n", nomes[i][j]);
            for(k=0;k < 3;k++){
                printf("nota %d: %.2f", k+1, notas[i][j][k]);
            }
        }
    }
    /*for(i=0;i < 3;i++){
        for(j=0;j<2;j++){
            medias[i][j] = medias[i][j]/3;
        }
    }*/
    /*for(i=0;i < 3;i++){
        printf("Turma %d", i+1);
        for(j=0;j<2;j++){
            printf("Aluno: %s", nomes[i][j]);
            //printf("%.2f", medias[i][j]);
        }
    }
    for(i=0;i < 3;i++){
        for(j=0;j<2;j++){
            scanf("%d", &faltas[i][j]);
        }
    }*/
    /*do
    {
        printf("\nConsula por turma ou aluno\n");
        printf("[1] Consulta por aluno\n");
        printf("[2] Consulta por turma\n");
        printf("[-1] Sair\n");
        scanf("%d", &consulta);
        if(consulta == 1){
            system("cls");
            printf("Digite o numero do aluno: ");
            scanf("%d", &consAluno);
            printf("\nAgora o numero de seu turma: ");
            scanf("%d", &consTurma);
            consAluno = consAluno-1;
            consTurma--;
            printf("%s", nomes[consTurma][consAluno]);
            printf("\n");
            for(i=0;i<3;i++){
                printf("%.2f ", notas[consTurma][consTurma][i]);
            }
            printf("\n");
            printf("%.2f", medias[consTurma][consAluno]);
            printf("%d", faltas[consTurma][consAluno]);
            if(medias[consTurma][consAluno] >= 7.0 && faltas[consTurma][consAluno]<= 10){
            printf("\nAluno aprovado");
            }
            else{
            if(medias[consTurma][consAluno] >  5.0 && faltas[consTurma][consAluno] <=10){
                printf("\nFara prova substituitiva");
            }
            else{
                if(faltas[consTurma][consAluno] > 10){
                    printf("\nAluno reprovado por falta");
                }
                else{
                    printf("\nAluno reprovado por nota");
                }
            }
        }   
        }
        else{
            if(consTurma == 2){
                printf("Digite o numero da turma: ");
                scanf("%d", consTurma);
                for(i=0;i<2;i++){
                    printf("%s\n", nomes[consTurma][i]);
                    if(medias[consTurma][i]>8){
                        mediaMaior +=1;
                    }
                }
            }
        }
    }while(consulta!= -1);*/
    
    ///printf("%s", nomes[0][1]);
    return 0;
}