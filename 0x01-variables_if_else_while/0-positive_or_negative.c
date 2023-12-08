#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    int n;

    // Seed the random number generator using the current time
    srand(time(0));

    // Generate a random number and store it in variable n
    n = rand() - RAND_MAX / 2;

    // Check the value of n
    if (n > 0)
        printf("%d is positive\n", n);
    else if (n < 0)
        printf("%d is negative\n", n);
    else
        printf("%d is zero\n", n);

    // Return 0 to indicate successful completion
    return (0);
}
