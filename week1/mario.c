#include <cs50.h>
#include <stdio.h>



int main(void)
{
    int height;
    do
    {
        height = get_int("Enter a number between 1 and 8\n");
    }
    while (height < 0 || height > 8);



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