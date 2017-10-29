#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main (void)
{
    float change_input = 0;
    int change;
    int quarters = 0, nickels = 0, dimes = 0, pennies = 0;
    int coins = 0;

    do
    {
        printf("What is the change amount?\n");
        change_input = get_float();
    }
    while (change_input < 0);

    change = round(change_input * 100);
    if (change >= 25)
    {
        quarters = change / 25;
        change = change - (quarters * 25);
        printf("quarters: %d, change: %d\n", quarters, change);
    }
    if (change >= 10)
    {
        dimes = change / 10;
        change = change - (dimes * 10);
        printf("dimes: %d, change: %d\n", dimes, change);
    }
    if (change >= 5)
    {
        nickels = change / 5;
        change = change - (nickels * 5);
        printf("nickels: %d, change: %d\n", nickels, change);
    }
    if (change >= 1)
    {
        pennies = change;
        printf("pennies: %d\n", pennies);
    }
    coins = quarters + dimes + nickels + pennies;
    printf("The greedy cashier will handout %d coins.\n", coins);
}