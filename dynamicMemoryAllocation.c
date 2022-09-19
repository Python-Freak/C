#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*

MEMORY ALLOCATION IN C PROGRAM (PREFERENCE): 
    1. CODE


    2. STATIC/GLOBAL VARIABLES
        ->  DATA SEGMENT : (INITIALISED SEGMENT)
        ->  BSS SEGMENT (BLOCK STARTED BY SYMBOL) : (ONLY DECLARED BUT NOT INITIALISED)
    
    
    3. STACK (FIRST IN LAST OUT)
        ->  GROWS WHEN PROGRAM MOVES FORWARD
            1. STACK FRAME : LIST OF ALL STORAGE/VARIABLE OF A FUNCTION.
            EXAMPLE : array.c {
                a stack of stack frames is created like this : 
                3.  printf()
                2.  printArr()
                1.  main()
            }
            # A STACK FRAME IS PAUSED FROM EXECUTION TILL ALL THE ABOVE STACK FRAMES HAVE BEEN EXECUTED.
        ->  A LOT OF LIMITATIONS ON THE STACK


    4. HEAP
        ->  USED WHEN WE USE DYNAMIC MEMORY ALLOCATION.
        ->  CAN BE USED FLEXIBLY BY THE PROGRAMMER AS PER HIS NEEDS.
        ->  WE CAN CREATE A POINTER POINTING TO THE MEMORY LOCATION IN HEAP
        ->  THE MEMORY ALLOCATED IN HEAP WILL NOT BE CLEARED AUTOMATICALLY IN CASE WE OVERWRITE THE POINTER.   


    # STACK AND HEAP GENERALLY GROW IN OPPOSITE DIRECTION , WHEN THEY MEET THE STACK OVERFLOW ERROR OCCURS.
            ---------------
            | 1.   HEAP   |
            | 2.          |
            | 3.          |
            | 4.          |
            --------------- ---->>>> STACK OVERFLOW
            | 4.   STACK  |
            | 3.          |
            | 2.          |
            | 1.          |
            ---------------

STATIC MEMORY ALLOCATION : 
    ->  ALLOCATION OF MEMORY BEFORE EXECUTION OF THE PROGRAM
    ->  NO MEMORY REUSABILITY AS MEMORY CANT BE FREED
    ->  LESS EFFICIENT

DYNAMIC MEMORY ALLOCATION : 
    ->  ALLOCATION OF MEMORY AT THE TIME OF RUNNING OF PROGRAM , FROM THE HEAP SECTION OF THE MEMORY
    ->  MEMORY REUSABILITY AS MEMORY CAN BE FREED WHEN NOT REQUIRED
    ->  MORE EFFICIENT

FUNCTIONS USED IN DYNAMIC MEMORY ALLOCATION : 
    1. MALLOC : MEMORY ALLOCATION
            -> SYNTAX : ptr = (type*) malloc(size_bytes);
            -> RESERVES A BLOCK OF MEMORY WITH GIVEN AMOUNT OF BYTES
            -> RETURN VALUE BY DEFAULT IS A VOID POINTER , THEREFORE IT NEEDS TO BE TYPECASTED
            -> IF SPACE IS INSUFFICIENT , ALLOCATION WILL RETURN NULL POINTER
            -> ALL VALUES ARE INITIALISED TO GARBAGE VALULES

    2. CALLOC : CONTINOUS MEMORY ALLOCATION
            -> SYNTAX : (type*) calloc(n , size_bytes); # n = number of values to be stored
            -> RESERVES N BLOCK OF MEMORY WITH GIVEN AMOUNT OF BYTES
            -> RETURN VALUE IS A VOID POINTER TO THE ALLOCATED SPACE , THEREFORE IT NEEDS TO BE TYPECASTED
            -> IF SPACE IS INSUFFICIENT , ALLOCATION WILL RETURN NULL POINTER
            -> ALL VALUES ARE INITIALISED TO 0

    3. FREE : FREEING UP MEMORY IN HEAP
            -> SYNTAX : free(ptr);

    4. REALLOC : REALLOCATION
            -> SYNTAX : (type*) realloc(ptr, new_size_bytes);
            -> IF THE DYNAMICALLY ALLOCATED MEMORY IS INSUFFICIENT WE CAN CHANGE THE SIZE OF PREVIOUSLY ALLOCATED MEMORY USING REALLOC

*/
int main(int argc, char const *argv[])
{
    int* mArr = (int*)malloc(10*sizeof(int));
    int* cArr = (int*)calloc(10, sizeof(int));
    cArr = (int*)realloc(cArr, 12*sizeof(int));
    free(cArr);
    free(mArr);
    return 0;
}