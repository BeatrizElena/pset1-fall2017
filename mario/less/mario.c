/*  1. Prompt by using CS50 library fx: get_int()
    2. Validate that User Input is bw 0-23 by using a do-while loop
    3. Draw the half pyramid.*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h = 0;

    do
    {
        printf("Height (1-23): ");
        h = get_int();
        if (h == 0)
        {
            exit(0);
        }
    }
    while (h < 1 || h > 23);

    int max = h + 1;
    // outer loop to iterate through rows, printing a new line on each iteration
    for (int i = 2; i <= max; i++)
    {
        int blanks = max - i;
        // loop to output spaces for each row
        for (int j = 0; j < blanks; j++)
        {
            printf(" ");
        }
        // loop to output hashes for each row
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }

}