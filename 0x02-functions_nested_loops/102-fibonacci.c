#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 always.
 */
int main(void)
{
    int count;
    unsigned long fib1 = 0, fib2 = 1, sum;

    for (count = 0; count < 50; count++)
    {
        sum = fib1 + fib2;

        // Print the current Fibonacci number
        printf("%lu", sum);

        // Update Fibonacci numbers for the next iteration
        fib1 = fib2;
        fib2 = sum;

        // Print a comma and space unless it's the last number
        if (count < 49)
            printf(", ");
        else
            printf("\n");
    }

    return (0);
}
