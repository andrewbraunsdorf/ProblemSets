#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

//ci = (pi + k) % 26



int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Type ./caesar key\n");
        return 1;
    }
    int key = atoi(argv[1]);;

    if (key <= 0)
    {
        printf("Type ./caesar key\n");
        return 1;
    }

    printf("hello, %s\n", argv[1]);
    return 0;
}