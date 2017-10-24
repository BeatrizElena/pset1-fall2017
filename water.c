#include <cs50.h>
#include <stdio.h>

int main(void) {
    printf("How many minutes do you spend showering?");
    int m = get_int();
    printf("Bottles: %i\n", m * 12);
}