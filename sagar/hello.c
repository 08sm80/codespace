#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int name = get_string("What is your name? ");
    printf("hello, %i \n", name);
}