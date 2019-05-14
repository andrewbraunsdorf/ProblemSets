#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int shift(char c);
string key;

int main(int argc, string argv[])
{
    key = argv[1];
    if (argc != 2 || argv[1] == NULL)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    else
    {
        for (int i = 0; i < strlen(key); i++)
        {
            if (isalpha(key[i]) == false)
            {
                printf("Usage: ./vigenere keyword\n");
                return 1;
            }
        }
    }

    string code = get_string("Plaintext: ");
    int keyLength = strlen(key);
    int length = strlen(code);
    int cypherLength = 0;
    printf("ciphertext: ");

    for (int line = 0; line < length; line++)
    {
        if (isalpha(code[line]))
        {
            int magic = cypherLength % keyLength;
            int result = shift(key[magic]);

            if isupper(code[line])
            {
                printf("%c", (((code[line] + result - 65) % 26) + 65));
            }
            else if islower(code[line])
            {
                printf("%c", (((code[line] + result - 97) % 26) + 97));
            }
            cypherLength++;
            // printf("%i\n", magic);
            // printf("%i\n", result);
            // printf("%i\n", cypherLength);
        }
        // need to make this an else if
        else
        {
            printf("%c", code[line]);
        }

    }
    printf("\n");
}

int shift(char c)
{
    if (c > 96)
    {
        return (c - 'a');
    }
    else
    {
        return (c - 'A');
    }
    // printf("char c = %c\n", c);
}