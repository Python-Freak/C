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

->  TYPES OF POINTERS : 
            1. VOID POINTERS :
                ->  IT IS A POINTER THAT HAS NO DATA TYPE ASSOCIATED TO IT.
                ->  IT CAN BE EASILY TYPECASTED TO ANY OTHER POINTER TYPE.
                ->  
            2. NULL POINTERS :
            3. DANGLING POINTERS : 
            4. WILD POINTERS : 
*/

int main(int argc, char const *argv[])
{
    int x = 13;
    int* ptrX = &x;
    printf("%p", ptrX);
    return 0;
}