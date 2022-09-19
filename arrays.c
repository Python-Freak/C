#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void printArr(int *arr, int n)
{
    printf("[");
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
        {

            printf(" %d,", arr[i]);
        }
        else
        {
            printf(" %d ", arr[i]);
        }
    }
    printf("]");
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int *ptr = malloc(100 * sizeof(int));
    ptr[1] = 2;
    ptr[0] = 3;
    printArr(ptr, 2);
    return 0;
}