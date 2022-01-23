#include <stdio.h>
#include <stdlib.h>

void inicializa_matriz(char mat[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            mat[i][j]=' ';
}

void ler_jogada1(char mat[3][3],int l, int c)
{
    //testar se a posicao l e c é igual a ' '
    if(mat[l][c] == ' ')
        mat[l][c] = 'X';
    else
        printf("Faca outra jogada!");
    //coloca a marca X na posicao l e c
    //leitura de uma nova posicao
}

void ler_jogada2(char mat[3][3],int l, int c)
{
    //testar se a posicao l e c é igual a ' '
    if(mat[l][c] == ' '){
        mat[l][c] = 'O';
    }
    else{
        printf("Faca outra jogada!");
    }
    //coloca a marca 0 na posicao l e c
    //leitura de uma nova posicao
}

void mostrar_tabuleiro(char mat[3][3])
{
    int i,x;
    x=0;
    system("cls");
    printf("      0       1       2      ");
    while(x<3){ 
        i=0;
        printf("\n%d",x);
        while(i<3){
            //if(i==1)
            printf("   | %c |",mat[x][i]);
            //else
              //  printf(" %c ",mat[x][i]);
            i++;
        }
        printf("\n");
        if(x<2)
            printf("___________________________");
         x++;
    }
}
int verifica_linha(char mat[3][3])
{
    //verifica todas as linhas
    int qtdX, qtdO, j, i;
    for(i=0;i<3;i++){
        qtdX = 0;
        qtdO = 0;
        for(j=0;j<3;j++){
            if (mat[i][j] == 'X'){
                qtdX+=1;
            }
            if (mat[i][j] == 'O'){
                qtdO+=1;
            }
        }
        if(qtdX == 3){
            printf("\nJogador 1 ganhou!\n");
            return 1;
        }
        if(qtdO == 3){
            printf("\nJogador 2 ganhou!\n");
            return 1;
        }
    }
    return 0;
    //se todas forem iguais a X -> jogador 1 ganhou 
    //return 1
    //se todas forem iguais a 0 -> joador 2 ganhou
    //return 1
    //return 0
}
int verifica_coluna(char mat[3][3])
{
    //verifica todas as colunas
    int qtdX, qtdO, j, i;
    for(i=0;i<3;i++){
        qtdX = 0;
        qtdO = 0;
        for(j=0;j<3;j++){
            if (mat[j][i] == 'X'){
                qtdX+=1;
            }
            if (mat[j][i] == 'O'){
                qtdO+=1;
            }
        }
        if(qtdX == 3){
            printf("\nJogador 1 ganhou!\n");
            return 1;
        }
        if(qtdO == 3){
            printf("\nJogador 2 ganhou!\n");
            return 1;
        }
    }
    return 0;
    //se todas forem iguais a X -> jogador 1 ganhou 
    //return 1
    //se todas forem iguais a 0 -> joador 2 ganhou
    //return 1
    //return 0
}

int verifica_diagonal(char mat[3][3])
{
    //verifica diagonal principal e secundaria
    int qtdX, qtdO, j, i;
    qtdX = 0;
    qtdO = 0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                if(mat[i][j] == 'X'){
                    qtdX +=1;
                }
                if(mat[i][j] == 'O'){
                    qtdO +=1;
                }
            }
        }
    }
    if(qtdX == 3){
        printf("\nJogador 1 ganhou!\n");
        return 1;
    }
    if(qtdO == 3){
        printf("\nJogador 2 ganhou!\n");
        return 1;
    }
    qtdX = 0;
    qtdO = 0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i+j == 2){
                if(mat[i][j] == 'X'){
                    qtdX +=1;
                }
                if(mat[i][j] == 'O'){
                    qtdO +=1;
                }
            }
        }
    }
    if(qtdX == 3){
        printf("\nJogador 1 ganhou!\n");
        return 1;
    }
    if(qtdO == 3){
        printf("\nJogador 2 ganhou!\n");
        return 1;
    }
    return 0;
    //se todas forem iguais a X -> jogador 1 ganhou 
    //return 1
    //se todas forem iguais a 0 -> joador 2 ganhou
    //return 1
    //return 0
}

int main() {
    char mat[3][3];
    int i,j,cont=0,flag1=0,flag2=0,flag3=0; 
    inicializa_matriz(mat);
    mostrar_tabuleiro(mat);

    while(cont<9 && flag1==0 && flag2==0 && flag3==0){
        printf("Jogador 1 (X) informe a L e C \n");
        scanf("%d %d",&i,&j);
        ler_jogada1(mat,i,j);
        mostrar_tabuleiro(mat);
        flag1=verifica_linha(mat);
        flag2=verifica_coluna(mat);
        flag3=verifica_diagonal(mat);
        cont++;
        if(cont<9 && flag1==0 && flag2==0 && flag3==0){
            printf("Jogador 2 (O) informe a L e C \n");
             scanf("%d %d",&i,&j);
            ler_jogada2(mat,i,j);
            mostrar_tabuleiro(mat);
            flag1=verifica_linha(mat);
            flag2=verifica_coluna(mat);
            flag3=verifica_diagonal(mat);
            cont++;
        }
    }
    if(cont==9){
        printf("Deu velha - jogo empatado");
    }
 
    return 0;
}