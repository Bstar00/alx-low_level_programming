#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: print int
 * Return: Always 0.
 */
void print_diagonal(int n)
{
    int i;
    int b;

    if (n > 0)
    {
        for (i = 0; i < n; i++)
        {
            for (b = 0; b < i; b++)
            {
                _putchar(' '); // Print spaces before the backslash
            }
            _putchar(92); // Print the backslash character
            _putchar('\n'); // Move to the next line
        }
    }
    else
    {
        _putchar('\n'); // If n is not greater than 0, just print a newline
    }
}
