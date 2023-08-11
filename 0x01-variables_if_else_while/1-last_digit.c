#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks if number is positive or negative
 * Return: 0 (success)
 */
int main(void)
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;

    int digit; // Declare the variable at the beginning of the block
    digit = n % 10;

    printf("Last digit of %d is %d ", n, digit);
    if (digit > 5)
        printf("and is greater than 5");
    else if (digit == 0)
        printf("and is 0");
    else
        printf("and is less than 6 and not 0");

    return (0);
}

