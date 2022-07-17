#include<stdio.h>
#include "TStaticList.h"

int main(){
  TStaticList* lists[3] = {
    TStaticList_create(), 
    TStaticList_create(), 
    TStaticList_create()
  };
  TStaticList* ResultConcat = TStaticList_create();
  //Seu codigo aqui...
  int aux;
  char op = 'a';
  int data;
  while(op !='q')
  {
    switch (op)
    {
    case ('i'):
      TStaticList_insert_end(lists[data], aux);
      break;
    case ('p'):
      TStaticList_print(lists[data]);
      break;
    case('r'):
      TStaticList_delete_element(lists[data], aux);
      break;
    case('c'):
      ResultConcat = TStaticList_concatenate(lists[aux], lists[data]);
      TStaticList_print(ResultConcat);
      break;
    }
    scanf("%c %d %d", &op, &aux, &data);
  }
  return 0;
  //a
}