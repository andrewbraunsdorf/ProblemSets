#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Type ./caesar key\n");
    }
    int key = atoi(argv[1]);;

    if (key <= 0)
    {
        printf("Type ./caesar key\n");
    }

    string code = get_string("Plaintext: ");
    printf("ciphertext: ");

    for (int line = 0; line < strlen(code); line++)
    {
        if isupper(code[line])
        {
            printf("%c", ((((code[line] + key) - 65) % 26) + 65));
        }
        else if islower(code[line])
        {
            printf("%c", ((((code[line] + key) - 97) % 26) + 97));
        }
        else
        {
            printf("%c", code[line]);
        }
    }
    printf("\n");
    // printf("hello, %s\n", code);
    // argv[1]
    return 0;
}