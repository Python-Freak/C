#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
POINTERS are used to reference the adderess of a specific data;

int x = 13;
int* ptrX = &x;
// NOW ptrX has the address of variable x ;

// %p is the format specifier for pointers , by default it is in hexadecimal.


*/

int main(int argc, char const *argv[])
{
    int x = 13;
    int* ptrX = &x;
    printf("%p", ptrX);
    return 0;
}