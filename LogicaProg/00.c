#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float peso1, peso2, peso3, media;
  char nome1[30], nome2[30], nome3[30];
  int idade1, idade2, idade3;

  printf("Digite o nome da primeira pessoa: ");
  scanf("%s", nome1);
  printf("Agora digite a idade seguida do peso de %s: ", nome1);
  scanf("%d %f", &idade1, &peso1);
  system("cls");
  printf("Digite o nome da segunda pessoa: ");
  scanf("%s", nome2);
  printf("Digite a idade seguida do peso de %s: ", nome2);
  scanf("%d, %f", &idade2, &peso2);
  system("cls");
  printf("Agora digite o nome da terceira pessoa: ");
  scanf("%s", nome3);
  printf("Agora digite a idade e o peso de %s", nome3);
  scanf("%d, %f", &idade3, &peso3);
  system("cls");
  printf("Os nomes digitados foram: %s, %s e %s\n", nome1, nome2, nome3);
  printf("A média de idade corresponde a: %d\n", (idade1+idade2+idade3)/3);
  media = (peso1+peso2+peso3)/3;
  if(media > 55){
    printf("A média dos pesos é superior a 55kg, sendo %.2f", media);
  }
  printf("\n");
  return 0;
}