#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// NOTES IN UNIONS.

typedef struct Employee
{
    char name [20];
    long emp_id;
    int salary;
} Employee ;


int main(int argc, char const *argv[])
{
    Employee x;
    x.emp_id = 7957899876;
    strcpy(x.name, "Mihir");
    x.salary = 2400000;
    return 0;
}