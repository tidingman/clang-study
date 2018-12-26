#include <stdio.h>

int max(int,int);

int main(){
 int a=6;
 int b=8;

 printf("max value is : %d\n",max(a,b));
 return 0;
}

int max(int num1,int num2){
 if(num1>num2){
  return num1;
 }else{
  return num2; 
 }
}



