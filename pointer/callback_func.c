#include <stdlib.h>  
#include <stdio.h>
 
// 回调函数
void populateArray(int *array, size_t arraySize, int (*getNextValue)(void)){
    for (size_t i=0; i<arraySize; i++){
        array[i] = getNextValue();

    }
}
 
// 获取随机值
int getNextRandomValue(void){
    return rand();
}
 
int main(void){
    int array[10];
    populateArray(array, 10, getNextRandomValue);
    for(int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
