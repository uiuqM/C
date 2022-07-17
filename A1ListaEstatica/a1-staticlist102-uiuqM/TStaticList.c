#include "TStaticList.h"
#include <stdlib.h>
#include <stdio.h>
#define MAX 5

struct static_list{
  int qty;
  int data[MAX];
};
//Headers for auxiliary functions
_Bool TStaticList_is_full(TStaticList*);
_Bool TStaticList_is_empty(TStaticList*);

TStaticList* TStaticList_create(){
  TStaticList* novo = malloc(sizeof(TStaticList));
  if(novo!=NULL){
    novo->qty = 0;
  }
  return novo;
}

_Bool TStaticList_insert_end(TStaticList* lista, int dado){
  //return TStaticList_insert_at(lista, dado, lista->qty);
  if (TStaticList_is_full(lista))
    return false;
  lista->data[lista->qty] = dado;
  lista->qty++;
  puts("success");
  return true;
}

/*_Bool TStaticList_insert_begin(TStaticList* lista, int dado){
  return TStaticList_insert_at(lista, dado, 0);
  /*if (TStaticList_is_full(lista))
    return false;
  //Copiar os dados para abrir espaço
  for(int i=lista->qty; i>0; i--)
    lista->data[i] = lista->data[i-1];

  lista->data[0] = dado;
  lista->qty++;
  return true;
}*/

/*_Bool TStaticList_insert_at(TStaticList* lista, int dado, int pos){
  if (TStaticList_is_full(lista) || pos<0 || pos>lista->qty)
    return (puts("fail"));
  //Copiar os dados para abrir espaço
  for(int i=lista->qty; i>pos; i--)
    lista->data[i] = lista->data[i-1];

  lista->data[pos] = dado;
  lista->qty++;
  return (puts("success"));
}*/

void TStaticList_print(TStaticList* lista){
  for(int i=0; i<lista->qty; i++)
    printf("%d, ", lista->data[i]);
  putchar('\n');
}

_Bool TStaticList_delete_end(TStaticList* lista, int* valor){
  return TStaticList_delete_at(lista, valor, lista->qty-1);
}

_Bool TStaticList_delete_begin(TStaticList* lista, int* valor){
  return TStaticList_delete_at(lista, valor, 0);
}

_Bool TStaticList_delete_at(TStaticList* lista, int* valor, int pos){
  if (TStaticList_is_empty(lista) || pos<0 || pos>=lista->qty)
    return false;
  *valor = lista->data[pos];
  //Copiar os dados
  for(int i=pos; i < lista->qty-1; i++)
    lista->data[i] = lista->data[i+1];
  lista->qty--;
  return true;  
}
_Bool TStaticList_is_full(TStaticList* lista){
  return (lista->qty == MAX);
}

_Bool TStaticList_is_empty(TStaticList* lista){
  return (lista->qty == 0);
}
//--------------------------------------------------------------------------------//
/*void TStaticList_operation(char op, int valor, TStaticList* lista)
{
  switch (op)
  { 
    case('p'):
      TStaticList_print(lista);
      break;
    case ('i'):
      TStaticList_insert_end(lista, valor);
      break;
    case ('r'):
      //TStaticList_delete_at(lista, valor, pos);
      break;
    case ('c'):
      //TStaticList_concatenate(lista1, lista2);
      break;
  }
}*/
TStaticList* TStaticList_concatenate(TStaticList* lista1, TStaticList* lista2)
{
  TStaticList* lista = NULL;
  if((lista1->qty + lista2->qty) <= MAX )
  {
    lista = TStaticList_create();
    for(int i=0;i < lista1->qty;i++)
    {
      //TStaticList_insert_end(lista, lista1->data[i]);
      if (TStaticList_is_full(lista))
        return false;
      lista->data[lista->qty] = lista1->data[i];
      lista->qty++;
    }
    for(int i=0;i < lista2->qty;i++)
    {
      //TStaticList_insert_end(lista, lista2->data[i]);
      if (TStaticList_is_full(lista))
        return false;
      lista->data[lista->qty] = lista2->data[i];
      lista->qty++;
    }
  return(lista);
  }
  else
  {
    puts("not possible!");
  }
}

/*TStaticList_search(TStaticList* lista, int* valor)
{
  int temp ;
  for(int i=0;i<lista->qty;i++)
  {
    if(valor == lista->data)
      TStaticList_delete_at(lista, &temp, valor);
  }
}*/
_Bool TStaticList_delete_element(TStaticList* lista, int valor)
{
  int i=0, k=0;
  if (TStaticList_is_empty(lista))
    return false;
  while(i<lista->qty && lista->data[i] != valor)
    i++;
  if(i >= lista->qty)
  {
    puts("not found");
    return false;
  }

  //*valor = lista->data[pos];
  //Copiar os dados
  for(k=i; k < lista->qty-1; k++)
    lista->data[k] = lista->data[k+1];
  lista->qty--;
  return true;
  //a  
}