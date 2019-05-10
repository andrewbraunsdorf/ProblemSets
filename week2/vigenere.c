#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int shift(char c);

int main(int argc, string argv[])
{
    if (argc != 2 )
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    int key = atoi(argv[1]);

    if (key != 0)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    else
    {
        // int key = shift(argv[1][0]);
        // printf("%i\n", key);
        printf("Success\n");
        return 0;
    }
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

}

// int shift(char c)
// {
//     string code = get_string("Plaintext: ");
//     int key = atoi(argv[1]);
//     for (int line = 0; line < strlen(code); line++)
//     {
//         if isupper(code[line])
//         {
//             printf("%c", ((((code[line] + key) - 65) % 26) + 65));
//         }
//         else if islower(code[line])
//         {
//             printf("%c", ((((code[line] + key) - 97) % 26) + 97));
//         }
//         else
//         {
//             printf("%c", code[line]);
//         }
//     }
// }