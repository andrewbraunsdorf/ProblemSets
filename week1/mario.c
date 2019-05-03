#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        // //Use this if they dont want the below code
        // printf("Enter a number between 1 and 8\n");
        // height = get_int();
        height = get_int("Enter a number between 1 and 8\n");
    }
    while (height < 1 || height > 8);
    // while (height < 1 && height > 8);
    // while (height >= 1 && height <= 8);

    // int spaces = height - 1;
    // for loop base, which just iterates through and adds new line at end
    for (int line = 0; line < height; line++)
    {
        // spaces is equal to the number entered minus the line #, only when spaces is greater than 0
        for (int spaces = height - line - 1; spaces > 0; spaces--)
        {
            printf(" ");
            // printf("#");
        }
        // each line, hashes prints one more after it iterates through the spaces.
        for (int hashes = -1; hashes < line; hashes ++)
        {
            printf("#");
            // spaces--;
            // printf(" ");
        }
        // adds new line to each line
        printf("\n");
    }
}

