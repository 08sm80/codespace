#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("What is the value of X? ");
    int y = get_int("What is the value of Y? ");

    if (x < y)
    {
        printf("X is less than Y \n");
    }
    else if (x > y)
    {
        printf("X is greater than Y \n");
    }
    else (x == y)
    {
        printf("There must be a Z somewhere we don't know yet \n");
    }
}