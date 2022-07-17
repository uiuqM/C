#include<stdio.h>
#include "LDouble.h"

int main(){
  char buffer[4097];
  fgets(buffer, 4096, stdin);
  TDList* num1 = TDList_generate(buffer);
  fgets(buffer, 4096, stdin);
  TDList* num2 = TDList_generate(buffer);
  TDList* sum = TDList_sum(num1, num2);
  TDList_print(sum);
  return 0;
}