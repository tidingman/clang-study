#include <stdio.h>

int main(){
  int ints[10]={0};
  printf("%p\n",ints);
  for(int i=0;i<10;i++){
    printf("%d\n",ints[i]); 
  }
  return 0;
}
