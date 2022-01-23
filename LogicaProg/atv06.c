#include <stdio.h>
#include <string.h>
int main() {
 //1- Qual a funcionalidade da linha a seguir? R: atribuir a um ponteiro um arquivo chamado ex1_arq1.txt, em modo de leitura.
 FILE *arq = fopen("ex1_arq1.txt", "r");
 char buffer[120];
 char *token;
 // 2- Qual a funcionalidade da linha a seguir? R: atribuir uma busca de char e um contador.
 char busca[] = "lorem";
 int contagem = 0;
//3- Qual a funcionalidade do laço de repetição a seguir? R: fazer a leitura do arquivo até o seu fim.
 while(1) {
 fgets(buffer, 120, arq);
 if(feof(arq)) {
 break;
 }
 // 4- Qual a funcionalidade da linha a seguir? R: Tirar as pontuações presentes no arquivo.
 token = strtok(buffer, " .,!?");
 //5- Qual a funcionalidade do laço de repetição a seguir? R: atribuida as vezes em que "lorem" é lida no aruivo.
 while(token != NULL) {
 // se igual cont++
 if(strcmp(token, busca) == 0) {
 contagem++;
 }
 token = strtok(NULL, " .,!?");
 }
 }
//6- Qual a saída do código? R: Mostra quantas vezes "lorem" foi lida no arquivo.
 printf("ocorrencias de %s: %d\n", busca, contagem);
 fclose(arq);
 return 0;
}