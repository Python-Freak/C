#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    // A STRING IS A ARRAY OF CHARACTERS ENDING WITH \0
    // STRING IS NOT A DATA TYPE
    char str[2];
    printf("Enter your name : ");
    gets(str);
    printf("Your name is : ");
    puts(str);
    return 0;
}