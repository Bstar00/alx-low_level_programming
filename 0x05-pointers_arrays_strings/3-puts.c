#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints a string followed by a newline.
 * @str: The string to be printed.
 *
 * Description: This function prints each character of the string
 * followed by a newline character.
 */
void _puts(char *str)
{
    int i = 0;

    // Iterate through the string until the null terminator is encountered
    while (*(str + i) != '\0')
    {
        putchar(*(str + i));  // Print each character
        i++;
    }

    putchar('\n');  // Print a newline character at the end
}
