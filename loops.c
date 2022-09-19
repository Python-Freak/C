#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    // FOR LOOP
    for (int i = 0; i < 12; i++)
    {
        printf("%d \n", i);
    }
    printf("\n\n\n");



    // WHILE LOOP
    int i = 0;
    while (i < 12)
    {
        printf("%d \n", i);
        i++;
    }
    printf("\n\n\n");


    
    // DO WHILE
    i = 0;
    do
    {   
        // FIRST LOOP WILL ALWAYS RUN
        printf("%d \n", i);
        i++;
    } while (i<12);
    
    
    
    return 0;
}