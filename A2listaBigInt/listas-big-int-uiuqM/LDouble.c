#include "LDouble.h"
#include <stdlib.h>
#include <stdio.h>

struct no{
  int info;
  struct no *prox, *ant;
};

struct no* TNo_createnfill(int info){
  struct no* novo = (struct no*) malloc(sizeof(struct no));
  if(novo){
    novo->info = info;
    novo->prox = NULL;
    novo->ant = NULL;
  }
  return novo;
}
struct double_linked{
  struct no *inicio;
  struct no *fim;
};

TDList* TDList_create(){
  TDList* nova = (TDList*) malloc(sizeof(TDList));
  if(nova){
    nova->inicio = NULL;
    nova->fim = NULL;
  }
  return nova;
}

void TDList_print(TDList* list){
  if(list){
    struct no* aux = list->fim;
    while(aux){
      printf("%d", aux->info);
      aux = aux->ant;
    }
    puts("");
  }
}
int insert_node(TDList* list, int value){
	TNo* new_node=TNo_createnfill(value);

	if(list->inicio==NULL){
		list->inicio=new_node;
		list->fim=new_node;
	}else{
		new_node->ant=list->fim;
		list->fim->prox=new_node;
		list->fim=new_node;
	} return 1;
}

TDList* TDList_generate(char* charNum){
  //transformando o vetor de char para int.
	TDList* new_list= TDList_create();
	unsigned int i=0, size=strlen(charNum)-1;
	while(i<size)
		insert_node(new_list, charNum[i++]-48);
	return new_list;
}

TDList* TDList_sum(TDList* l1, TDList* l2){
	TDList* sum=TDList_create();
	int resto=0;

	TNo* aux1=l1->fim;
	TNo* aux2=l2->fim;
	while(aux1!=NULL || aux2!=NULL){

		if(aux1!=NULL && aux2!=NULL){
			insert_node(sum, resto+(aux1->info+aux2->info)%10);
			resto=(resto+aux1->info+aux2->info)/10;
			aux1=aux1->ant;
			aux2=aux2->ant;
		}else{
			if(aux1!=NULL){
				insert_node(sum, resto+(aux1->info)%10);
				resto=(resto+aux1->info)/10;
				aux1=aux1->ant;
			}else{
				insert_node(sum, resto+(aux2->info)%10);
				resto=(resto+aux2->info)/10;
				aux2=aux2->ant;
			}
		}
	}
	if(resto>0)
		insert_node(sum, resto);
	return sum;
}