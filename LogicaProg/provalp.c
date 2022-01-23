#include<stdio.h>

int main (void){
    char turmas [3] [10] [5];
    int turma, alunos, info;
    char nome[30];

    for (turma=0; turma < 3; turma++){
        printf("Insira as informacoes da turma %d\n", turma+1);
        for(alunos=0; alunos < 10; alunos++ ){
            printf("Digite as informacoes do aluno %d\n", alunos+1);
            for (info=0; info < 5;info++){
                printf("Digite a %d info: \n", info+1);
                scanf("%c", &turmas[turma] [alunos] [info]);
            }
        }
    }
    return 0;
}