#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //asked user for name
    string name = get_string("What is your name?\n");
    printf("Hello %s\n", name);
}