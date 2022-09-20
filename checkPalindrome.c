#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverseAnArray(char *array, int n)
{
    char *result = (char *)malloc(n * sizeof(char));
    for (int i = n - 1; i >= 0; i--)
    {
        result[n - 1 - i] = array[i];
    }
    return result;
}

int main()
{
    char name[50];
    printf("Enter a string : ");
    gets(name);
    printf("%s\n", reverseAnArray(name, strlen(name)));
    if (!strcmp(reverseAnArray(name, strlen(name)), name))
    {
        printf("The given string is a palindrome . ");
    }
    else
    {
        printf("The given string is not a palindrome . ");
    }
    return 0;
}