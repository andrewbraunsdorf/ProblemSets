#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int shift(char c);
string key;

int main(int argc, string argv[])
{

    if (argc != 2 || argv[1] == NULL)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    key = (argv[1]);



    for (int i = 0; i < strlen(key); i++)
    {
        if (isalpha(key[i]) == false)
        {
            printf("Usage: ./vigenere keyword\n");
            return 1;
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
            int magic = cypherLength % length;
            int result = shift(key[magic]);
            if isupper(code[line])
            {
                printf("%c", ((((code[line] + result) - 65) % 26) + 65));
            }
            else if islower(code[line])
            {
                printf("%c", ((((code[line] + result) - 97) % 26) + 97));
            }
            cypherLength++;
        }
        // need to make this an else if
        else
        {
            // printf("%c", code[line]);
        }

    }
    printf("\n");
}



// int key = shift(argv[1][0]);
// printf("%i\n", key);





// if (argc != 2)
// {
//     key = shift(argv[1][0]);
//     for (int character = 0; character < strlen(key); character++)
//     {
//     printf("%i\n", key);
//     // printf("Success\n");
//     return 0;
//     }
// }

// if (isalpha(argv[1]))
// {
//     printf("Usage: ./vigenere keyword\n");
//     return 1;
// }
// else
// {
//     printf("Else\n");
//     return 0;
// }



int shift(char c)
{
    // printf("char c = %c\n", c);
    if (c >= 96)
    {
        return (c - 'a');
    }
    else
    {
        return (c - 'A');
    }
}

// for (int character = 0; character < strlen(cypher); character++)
// {
//     if isupper(code[line])
//     {
//         printf("%c", ((((code[line] + cypher[character]) - 65) % 26) + 65));
//     }
//     else if islower(code[line])
//     {
//         printf("%c", ((((code[line] + cypher[character]) - 97) % 26) + 97));
//     }
//     else
//     {
//         printf("%c", code[line]);
//     }
// }