#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a = 345;
    int digit = 1;
    int revA = 0;
    while (a > 0){
        revA = revA*10 + (a%10);
        a /= 10;
    }
    printf("%d", revA);
    return 0;
}