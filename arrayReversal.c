#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int swapInts(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int reverseArray(int* array, int len){
    for (int i = 0; i <= len/2; i++)
    {
        swapInts(&array[i], &array[len-i-1]);
    }
    return 0;
}

void printArr(int* ptr, int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d\t", ptr[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    // int* array = (int*)malloc(20*sizeof(int));
    int array[20] = {1, 2, 3, 4, 5};
    reverseArray(array, 5);
    printArr(array, 5);
    return 0;
}