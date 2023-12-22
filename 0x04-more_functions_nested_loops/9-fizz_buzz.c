#include <stdio.h>

/**
 * main -  main entry point
 *
 * Description: Prints numbers from 1 to 100 with "Fizz" for multiples of 3,
 *              "Buzz" for multiples of 5, and "FizzBuzz" for multiples of both.
 *
 * Return: 0 (success)
 */
int main(void)
{
    int p = 100;  // Set the range up to 100

    // Iterate through numbers from 1 to 100
    for (int i = 1; i <= p; ++i) {
        // Use ternary operator to conditionally print "Fizz", "Buzz", or the number
        printf("%s%s%s%s%i ", (i % 3 == 0) ? "Fizz" : "", (i % 5 == 0) ? "Buzz" : "",
               (i % 3 != 0 && i % 5 != 0) ? "" : " ", (i % 3 != 0 && i % 5 != 0) ? "" : " ", i);
    }

    printf("\n");  // Print newline at the end

    return 0;  // Return success
}
