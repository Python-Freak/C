#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
STORAGE CLASS:  DEFINES THE FOLLOWING ATTRIBUTE OF A VARIABLE IN C
                1. SCOPE: WHERE WILL IT BE AVAILABLE
                2. DEFAULT INITIAL VALUE
                3. LIFETIME: LIFE OF THAT VARIBLE

TYPES OF STORAGE CLASSES :
    -> AUTOMATIC VARIABLES
            -> SCOPE : LOCAL TO THE FUNCTION WHERE IT IS DEFINED.
            -> DEFAULT INITIAL VALUE : GARBAGE VALUES.
            -> LIFETIME : TILL THE END OF THE FUNCTION.
            -> SYNTAX : {int mihir;} and {auto int mihir;} are the same.

    -> EXTERNAL VARIABLES
            -> SCOPE : GLOBAL TO THE PROGRAM THEY ARE DEFINED IN.
            -> DEFAULT INITIAL VALUE : 0.
            -> LIFETIME : LIFETIME OF THE PROGRAM.
            -> SYNTAX : {int mihir;} when written outside any function.
            # IT IS RECOMMENDED TO MINIMISE THE USE OF UNNECESSARY GLOBAL VARIABLES.

            -> EXTERN KEYWORD : 
                    EXTERN KEYWORD TELLS THE COMPILER THAT THE GIVEN VARIABLE IS DECLARED SOMEWHERE ELSE.
                    USING EXTERN WILL NOT ALLOCATE SPACE FOR THAT VARIABLE.
                    YOU CAN ALSO USE DECLARATION FORM ANOTHER FILE IF IT IS INCLUDED IN YOUR PROGRAM.

                    -> DECLARATION :
                        ->  TELLING THE COMPILER ABOUT THE VARIABLE, NO SPACE RESERVED.
                    
                    -> DEFINITION : 
                        ->  DECLARATION + SPACE RESERVATION

    
    -> STATIC VARIABLES
            -> SCOPE : LOCAL TO THE BLOCK THEY ARE DEFINED IN.
            -> DEFAULT INITIAL VALUE : 0.
            -> LIFETIME : AVAILABLE THROUGHOUT THE PROGRAM.
            -> SYNTAX : {static int mihir;} inside a function.
            # IT IS RECOMMENDED TO MINIMISE THE USE OF UNNECESSARY STATIC VARIABLES.
       

    -> REGISTER VARIABLES [CPU REGISTER, USED FOR VARIABLES WHICH ARE FREQUENTLY USED]
            -> SCOPE : LOCAL TO THE FUNCTION WHERE IT IS DEFINED.
            -> DEFAULT INITIAL VALUE : GARBAGE VALUE
            -> LIFETIME : TILL THE END OF FUNCTION BLOCK.
            -> SYNTAX :
            # REGISTER VARIABLES REQUEST THE COMPILER TO STORE THE VALUE IN CPU REGISTER INSTEAD OF MEMORY FOR FASTER ACCESSS.

*/

int main(int argc, char const *argv[])
{

    return 0;
}