#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints all numbers from 0 to 9
 * Return: returns nothing
 */
void print_numbers(void)
{
    int n;

    for (n = '0'; n <= '9'; n++)
    {
        putchar(n);
    }
    putchar('\n');
}
