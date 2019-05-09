#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

//ci = (pi + k) % 26

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("missing command-line argument\n");
        return 1;
    }
    printf("hello, %s\n", argv[1]);
    return 0;
}