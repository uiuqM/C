#include<stdio.h>
#include<stdlib.h>

int main(void){
    char nomes[3][10][30];
    float notas[3][10][3], medias[3][10], mediaTurma=0;
    int i, j, k, faltas[3][10], consulta, consAluno, consTurma, mediaMaior=0, notaZero = 0, subs =0;

    for(i=0;i < 3; i++){
        for(j=0;j <10; j++){
            scanf("%s", nomes[i][j]);                               //Break();
        }
    }

    for(i=0;i<3;i++){
        printf("Turma %d\n", i+1);
        for(j=0;j<10;j++){
            printf("Digite as notas de %s\n", nomes[i][j]);
            for(k=0;k<3;k++){
                printf("Nota %d: ", k+1);
                scanf("%f", &notas[i][j][k]);
            }
        }
    }

    for(i=0;i < 3; i++){
        for(j=0;j <10; j++){
            medias[i][j] = 0;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<10;j++){
            for(k=0;k<3;k++){
                medias[i][j]= medias[i][j]+notas[i][j][k];
            }
        }
    }

    for(i=0;i < 3; i++){
        for(j=0;j <10; j++){
            medias[i][j] = medias[i][j]/3;
        }
    }

    for(i=0;i < 3; i++){
        for(j=0;j <10; j++){
            printf("\nDigite as faltas de %s: ", nomes[i][j]);
            scanf("%d", &faltas[i][j]);
        }
    }

    do
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
            printf("\nAgora o numero de sua turma: ");
            scanf("%d", &consTurma);
            consAluno = consAluno-1;
            consTurma--;
            printf("%s\n", nomes[consTurma][consAluno]);
            printf("NOTAS: ");
            for(i=0;i<3;i++){
                printf("%.2f ", notas[consTurma][consAluno][i]);
            }
            printf("\n");
            printf("MEDIA: %.2f\n", medias[consTurma][consAluno]);
            printf("FALTAS: %d", faltas[consTurma][consAluno]);
            if(faltas[consTurma][consAluno] > 10){
                printf("\nAluno reprovado por falta.");
            }
            else{
                if(medias[consTurma][consAluno]>=7){
                    printf("\nAluno aprovado");
                }
                else{
                    if(medias[consTurma][consAluno]>5){
                        printf("\nAluno fara prova substituitiva");
                    }
                    else{
                        printf("\nAluno reprovado por nota");
                    }
                }
            }

        }
        else{
            if(consulta == 2){
                printf("Digite o numero da turma: ");
                scanf("%d", &consTurma);
                consTurma--;
                //Matriz menor que 10;
                for(i=0;i<10;i++){
                    if(medias[consTurma][i]>8){
                        mediaMaior++;                                              
                    }
                    if(faltas[consTurma][i] < 10 && (medias[consTurma][i]<=7 && medias[consTurma][i]>5)){
                        subs++;           
                    }
                    mediaTurma += medias[consTurma][i];
                }
                for(i=0;i<3;i++){
                    for(j=0;j<10;j++){
                        for(k=0;k<3;k++){
                            if(notas[i][j][k] == 0){
                                notaZero++;                                       //Zero na nota.
                            }
                        }
                    }
                }
                mediaTurma = mediaTurma/10;
                printf("\n%d alunos farao substituitiva", subs);
                printf("\n%d notas maiores que 8", mediaMaior);
                printf("\n%d notas zero na turma", notaZero);
                printf("\n%.2f eh a media geral da turma\n", mediaTurma);
            }
        }
    }while(consulta != -1);
    return 0;
}