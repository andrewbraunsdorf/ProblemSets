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
    if (cents >= 10)
    {
        dimes = ((cents - (quarters * 25)) / 10);
    }

    coins = (quarters + dimes);

    printf("%i\n", cents);
    printf("%i\n", coins);
}

