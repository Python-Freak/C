#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int fibonacci(int index){
    if (index == 1){
        return 0;
    }
    else if (index == 2){
        return 1;
    }
    else{
        return fibonacci(index-1) + fibonacci(index-2);
    }
}

int main(int argc, char const *argv[])
{
    int index;
    printf("Enter the index of fibo series : ");
    scanf("%d", &index);
    printf("The fibo number at index %d is %d \n" , index, fibonacci(index));
    return 0;
}