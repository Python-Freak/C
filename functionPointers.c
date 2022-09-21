#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
FUNCTION POINTERS:  
    ->  WE CAN HAVE POINTERS POINTING TO FUNCTIONS AS WELL.
    ->  FUNCTION POINTERS ARE USEFUL TO IMPLEMENT CALLBACK FUNCTIONS.
    ->  COMPILER TAKES ONE OR MORE SOURCE FILES AND CONVERT THEM T0 NATIVE CODE.
    ->  FUNCTIONS POINTERS ARE USED TO PASS A FUNCTION TO A FUNCTION.
    ->  THIS PASSED FUNCTION CAN BE CALLED AGAIN.
    ->  THIS PROVIDES PROGRAMMER TO WRITE LESS CODE TO DO MORE STUFF.
    ->  SYNTAX :   int(*p)(int, int); p = func1; 
*/

int add(int a, int b){
    return a+b;
}

int main(int argc, char* argv[]) {
    //CODE HERE
    int (*p) (int , int);
    p = &add;
    printf("The sum of 55 and 47 is %d \n", (*p)(55,47));
    return 0;
}