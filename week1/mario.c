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
    while (height < 0 || height > 8);

    // int spaces = height - 1;
    for (int i = 0; i < height; i++)
    {
        for (int spaces = height - i; spaces > 0; spaces--)
        {
            printf (" ");
            // printf("#");
        }
        for (int hashes = -1; hashes < i; hashes ++)
        {
            printf ("#");
            // spaces--;
            // printf(" ");
        }
        printf("\n");
    }

}



    // int height = get_int("Enter a number between 1 and 8\n");
    // while( height >= 9 && height < 0)
    //     {
    //     height = get_int("Enter a number between 1 and 8\n");
    // //     if( height > 0 && height < 9) {
    // //     printf("%i > 0 and %i < 9\n", height, height);
    // // }
    // // else {
    // //     height = get_int("Enter a number between 1 and 8\n");
    // // }
    // }

// prompt user for height
//if height < 1 or height > 8 prompt user for height
// height
// height -1
// height -2
