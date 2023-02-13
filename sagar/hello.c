#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string fname = get_string("What is your first name? ");
    string lname = get_string("What is your last name? ");
    printf("hello, %s %s \n", fname, lname);
}