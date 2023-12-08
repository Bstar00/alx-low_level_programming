#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    int n;   // Declare variable to store a random number
    int L;   // Declare variable to store the last digit of the random number
    char str[] = "Last digit of";  // Declare a string

    srand(time(0));  // Seed the random number generator with the current time
    n = rand() - RAND_MAX / 2;  // Generate a random number and store it in 'n'
    L = n % 10;  // Calculate the last digit of 'n'

    // Check conditions and print information based on the last digit
    if (L > 5)
        printf("%s %d is %d and is greater than 5\n", str, n, L);
    else if (L == 0)
        printf("%s %d is %d and is 0\n", str, n, L);
    else if (L < 6)
        printf("%s %d is %d and is less than 6 and not 0\n", str, n, L);

    return (0);  // Return 0 to indicate successful completion
}
