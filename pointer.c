#include <stdio.h>

int main(){
  int var = 20;
  int *pt = &var;

  printf("address of var variable: %p\n",&var);
  printf("address stored in pt variable: %p\n",pt);
  printf("value of *pt variable: %d\n",*pt);
  printf("address of pt variablea: %p\n",&pt);
  return 0;
}
