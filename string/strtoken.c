#include <string.h>
#include <stdio.h>
 
int main () {
   char str[] = "hello world string token !!!";
   const char *sep = " ";
   char *token;
   char *lasts;
   
   token = strtok_r(str,sep,&lasts);
   while(token!=NULL){
    printf("token=%s\n",token);
    printf("lasts=%s\n",lasts);
    token=strtok_r(NULL,sep,&lasts);
   }

   return(0);
}
