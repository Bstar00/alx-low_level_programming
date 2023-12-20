#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a straight line of underscores
 * @n: length of the line
 * Return: returns nothing
 */
void print_line(int n)
{
    while (n-- > 0)
    {
        putchar('_');
    }
    putchar('\n');
}
