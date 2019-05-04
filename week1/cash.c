#include <cs50.h>
#include <math.h>
#include <stdio.h>

float dollarAmount;
int coins;
int quarters;
int dimes;
int nickels;
int pennies;

int main(void)
{
    do
    {
        dollarAmount = get_float("Change: ");
    }
    while (dollarAmount <= 0);

    int cents = round(dollarAmount * 100);

    quarters = (cents / 25);


    coins = (quarters);

    printf("%i\n", cents);
    printf("%i\n", coins);
}

