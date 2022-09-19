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
                ->  IT IS NOT POSSIBLE TO DEREFERENCE A VOID POINTER WITHOUT TYPECASTING IT.
                ->  POINTER ARITHMETIC IS NOT ALLOWED IN C STANDARDS WITH VOID POINTERS.

                    SYNTAX : void* ptr;

            2. NULL POINTERS :
                ->  IT IS A POINTER WHICH HAS A VALUE RESERVED FOR INDICATING THAT THE POINTER OR REFERENCE DOES
                    NOT REFER TO ANY VALID OBJECT
                ->  A NULL POINTER IS GARUNTEED TO COMPARE UNEQUAL TO ANY POINTER THAT POINTS TO A VALID OBJECT.
                ->  DEREFERENCING A NULL POINTER IS UNDEFINED BEHAVIOUR IN C LANGUAGE.

                    SYNTAX : int* ptr = NULL;

            3. DANGLING POINTERS :
                ->  A POINTER POINTING TO FREED MEMORY LOCATION ( WHOSE CONTENT HAS BEEN DELETED )
                ->  CAUSES OF DANGLING POINTERS : 
                        1. DEALLOCATION OF MEMORY.
                                WHEN MEMORY IS DEALLOCATED , THE POINTER KEEPS POINTING TO THE FREED SPACE.

                        2. RETURNING LOCAL VARIABLE ON FUNCTION CALL.
                                EXAMPLE : 
                                    int* func(){
                                        int a = 34;
                                        return &a;
                                    }
                                    int main(){
                                        int* ptr = func(); <- points to invalid location (out of scope)
                                        return 0;
                                    }

                        3. VARIABLE GOING OUT OF SCOPE.
                                EXAMPLE : 
                                    int main(){
                                        int* ptr;
                                        {
                                            int i = 69;
                                            ptr = &i;
                                        }
                                        // {} represent a scope
                                        // now ptr is a dangling pointer
                                        return 0;
                                    }
                ->  DANGLING POINTERS CAN INTRODUCE NASTY BUGS TO YOUR PROGRAMS.
                ->  DANGLING POINTER BUGS FREQUENTLY BECOME SECURITY HOLES.
                ->  WE CAN AVOID ISSUES CAUSED BY DANGLING POINTERS BY INITIALIZING POINTERS TO NULL.
                ->  ASSIGNING NULL MEANS THAT THE POINTER IS NOW A NULL POINTER.

            4. WILD POINTERS : 
                ->  UNINITIALISED POINTERS ARE KNOWN AS WILD POINTERS.
                ->  THESE POINTERS POINT TO SOME ARBITARY LOCATION IN MEMORY AND MAY CAUSE CRASH.
                ->  DEREFERENCING WILD POINTERS CAN CAUSE NASTY BUGS.
                ->  IT IS SUGGESTED TO ALWAYS INITIALIZE UNUSED POINTERS TO NULL.
                  
*/

int main(int argc, char const *argv[])
{
    int x = 13;
    int* ptrX = &x;
    printf("%p", ptrX);
    return 0;
}