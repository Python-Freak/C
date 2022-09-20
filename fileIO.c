#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*

FILE * ptr = NULL;          // INITIAL DECLARATION.

MODES OF FILE IO:
    1. "r": -   OPENS AN EXISTING FILE FOR READING

    2. "w": -   OPENS AN FILE FOR WRITING, 
            -   IF IT DOES NOT EXISTS IT WILL CREATE A NEW FILE

    3. "a": -   OPENS AN FILE FOR APPENDING,
            -   IF IT DOES NOT EXISTS IT WILL CREATE A NEW FILE

    4. "r+": -   READING + WRITING

    5. "w+": -   READING + WRITING,
             -   IT FIRST TRUNCATES THE FILE TO ZERO LENGTHIF IT EXISTS,
                 CREATES A FILE IF IT DOESNT EXISTS

    6. "a+": -   READING AND WRITING,
             -   IT CREATES THE FILE IF IT DOES NOT EXISTS,
             -   THE READING WILL START FROM THE BEGINNING BUT
                 WRITING CAN ONLY BE APPENDED TO FILE.

FILE IO FUNCTIONS : 
    1.  OPENING A FILE : 
        ->  stdio.h CONTAINS A FUNCTION CALLED fopen() FOR OPENING FILES.
        ->  SYNTAX :    
                ptr = fopen("name" , "mode");

    2.  CLOSING A FILE : 
        ->  ANY FILE THAT HAS BEEN OPENED WITH FOPEN, NEEDS TO BE CLOSED
        ->  CLOSING A FILE CAN BE ACCOMPISHED BY fclose()
        ->  SYNTAX : 
                fclose(fptr);

    3.  READING A FILE : 
        ->  IN ORDER TO READ A FILE WE USE fscanf 
        ->  THIS IS THE FILE VERSION OF scanf 
        ->  fscanf EXPECTS A FILE POINTER IN ADDITION TO OTHER ARGUMENTS
            THAT scanf EXPECTS.
        ->  WE HAVE TO OPEN A FILE IN READ MODE TO USE fscanf
        ->  SYNTAX : 
                fscanf(fileptr, "%s", string);

    4.  WRITING TO A FILE : 
        ->  IN ORDER TO WRITE TO A FILE WE CAN USE fprintf()
        ->  THIS FUNCTION IS THE FILE VERSION OF printf
        ->  fprintf EXPECTS A FILE POINTER IN ADDITON TO THE
            OTHER ARGUMENTS WHICH PRINTF EXPECTS.
        ->  WE HAVE TO OPEN A FILE IN WRITE MODE IN ORDER TO USE THIS FUNCTION.
        ->  SYNTAX :    
                fprintf(fptr, "%s", string);

    5.  fputc()
    6.  fputs()
    7.  fgetc()
    8.  fgets()
*/



int main() {
    //CODE HERE
    
    return 0;
}