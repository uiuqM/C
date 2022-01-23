#include<stdio.h>
#include<stdlib.h>

int main (void){
    int turma [3][10], rft = 0, i, j, k=0, falta[30], consAluno, consulta, consTurma, maiorMedia = 0, auxM, notaZero=0, ps =0;
    char nomesAlunos[30][30];
    float notas[30][3],  media[30], mediaGeral = 0.0;

    for (i=0; i < 30; i++){                                   //Matriz com a relação de nomes;
        scanf("%s", nomesAlunos[i]);
    }
    for (i=0; i<3;i++){
        for(j=0;j<10;j++){
            turma[i][j] = k;                                       //preenchendo as turmas apenas com valores de indices relativos aos nomes;
            k++;
        }
    }
    for (i=0; i < 30; i++){
        for (j =0; j< 3;j++){
            printf("Digite a nota %d de %s\n", j+1, nomesAlunos[i]);
            scanf("%f", &notas[i] [j]);                                         //matriz pertencente as notas total de tres leituras para cada aluno;
        }
        system("cls");
    }
    for (i = 0;i<30; i++){
        printf("Digite a quantidade de faltas de %s\n", nomesAlunos[i]);
        scanf("%d", &falta[i]);                                                  //vetor com as faltas de cada aluno;
        system("cls");
    }
    for (i=0; i < 30; i++){
            media[i] = 0;                                                       //Zerando o vetor de medias;
    }
    for (i=0; i < 30; i++){
        for (j =0; j< 3;j++){
            media[i] = media[i]+notas[i] [j];                                        //Somando as notas ao vetor de medias;
        }
    }
    for (i=0; i < 30; i++){
            media[i] = media[i]/3;                                                   //Calculando as medias do vetor;
    }
    do{
    printf("\nConsula por turma ou aluno\n");
    printf("[1] Consulta por aluno\n");
    printf("[2] Consulta por turma\n");
    printf("[-1] Sair\n");
    scanf("%d", &consulta);
    if(consulta == 1){
        system("cls");
        printf("Digite o numero do aluno: ");
        scanf("%d", &consAluno);
        consAluno = consAluno-1;
        system("cls");
        printf("Turma: ");
        for(i=0;i<3;i++){
            for(j=0;j<10;j++){
                if(turma[i][j] == consAluno){
                    printf("%d\n", turma[0][i]+1);
                }
            }
        }
        printf("Nome: %s\n", nomesAlunos[consAluno]);
        printf("Notas: ");
        for (i =0;i<3;i++){
            printf("%.2f ", notas[consAluno] [i]);
        }
        printf("\nMedia final: ");
        printf("%.2f\n", media[consAluno]);
        printf("Faltas: ");
        printf("%d", falta[consAluno]);
        if(media[consAluno] >= 7.0 && falta[consAluno]<= 10){
            printf("\nAluno aprovado");
        }
        else{
            if(media[consAluno] >  5.0 && falta[consAluno] <=10){
                printf("\nFara prova substituitiva");
        }
            else{
                if(falta[consAluno] > 10){
                    printf("\nAluno reprovado por falta");
                }
                else{
                    printf("\nAluno reprovado por nota");
                }
        }
    }
    }
    else{
        if(consulta==2){
        printf("Digite o numero da turma: ");
        scanf("%d", &consTurma);
        printf("\nA turma %d tem 2 alunos.\n", consTurma);
        consTurma = consTurma-1;
        switch (consTurma){
        case 0:
            for(i=0;i<10;i++){
                auxM = turma[0][i];
                if(media[auxM] > 8){
                    maiorMedia++;
                }
                for(j=0;j<3;j++){
                    if(notas[auxM][j] == 0){
                        notaZero+=1;
                   }
                }
                if((media[auxM] <  7.0 && media[auxM] > 5.0) && falta[consAluno] <=10){
                    ps++;
                }
                mediaGeral = mediaGeral+media[auxM];
            }
            mediaGeral = mediaGeral/10.0;
            printf("Houveram %d notas zero na turma.", notaZero);
            printf("\n%d alunos farao prova substituitiva.", ps);
            printf("\n%d alunos tiveram media final acima de 8", maiorMedia);
            printf("\nMedia geral da turma: %.2f", mediaGeral);
            break;
        case 1:
            for(i=0;i<10;i++){
                auxM = turma[1][i];
                if(media[auxM] > 8){
                    maiorMedia++;
                }
                for(j=0;j<3;j++){
                    if(notas[auxM][j] == 0){
                        notaZero+=1;
                   }
                }
                if((media[auxM] <  7.0 && media[auxM] > 5.0) && falta[consAluno] <=10){
                    ps++;
                }
                mediaGeral = mediaGeral+media[auxM];
            }
            mediaGeral = mediaGeral/10.0;
            printf("Houveram %d notas zero na turma.", notaZero);
            printf("\n%d alunos farao prova substituitiva.", ps);
            printf("\n%d alunos tiveram media final acima de 8", maiorMedia);
            printf("\nMedia geral da turma: %.2f", mediaGeral);
            break;
        case 2:
            for(i=0;i<10;i++){
                auxM = turma[2][i];
                if(media[auxM] > 8){
                    maiorMedia++;
                }
                for(j=0;j<3;j++){
                    if(notas[auxM][j] == 0){
                        notaZero+= 1;
                   }
                }
                if((media[auxM] <  7.0 && media[auxM] > 5.0) && falta[consAluno] <=10){
                    ps++;
                }
                mediaGeral = mediaGeral+media[auxM];
            }
            mediaGeral = mediaGeral/10.0;
            printf("Houveram %d notas zero na turma.", notaZero);
            printf("\n%d alunos farao prova substituitiva.", ps);
            printf("\n%d alunos tiveram media final acima de 8", maiorMedia);
            printf("\nMedia geral da turma: %.2f", mediaGeral);
            break;
    }
    }
    } 
    }while (consulta!= -1);
    return 0;
}