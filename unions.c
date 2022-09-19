#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
STRUCT :    ->  EACH MEMBER HAS ITS OWN STORAGE LOCATION,
            ->  ALL MEMBERS CAN BE HANDLED AT ONCE,
            ->  Syntax :    typedef struct <name> {
                                #data
                            } <alias_name>;

UNION :     ->  MEMBERS USE SINGLE SHARED MEMORY LOCATION,
            ->  ONLY ONE MEMORY LOCATION OF THE SIZE OF LARGEST 
                MEMBER IS ALLOCATED PER INSTANCE OF UNION,
            ->  UNION CANNOT HANDLE ALL MEMBERS AT ONCE
            ->  Syntax :    typedef union <name> {
                                #data
                            } <alias_name>;


EXAMPLE: 
            -> typedef struct student{
                int id; 4 bytes
                char name[20]; 1*20 bytes
            } Student; // MEMORY ALLOCATED : 4+20 = 24 bytes;
            both id and name can be allocated per student.

            -> typedef union student{
                int id; 4 bytes
                char name[20]; 1*20 bytes
            } Student; // MEMORY ALLOCATED: 20 bytes; 
            only one of id or name can be allocated per student.
*/

int main(int argc, char const *argv[])
{

    return 0;
}