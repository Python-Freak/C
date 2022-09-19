#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n = 10;
    // TRIANGULAR STAR
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n\n\n");

    // REVERSE TRIANGULAR STAR
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n\n\n");

    // MIXED TRIANGULAR PATTERN
    for (int i = 0; i <= n; i++)
    {
        if (i <= n / 2)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        
        else
        {
            for (int j = 0; j <= n - i ; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    printf("\n\n\n\n");

    return 0;
}