#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: The string to find the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int len = 0;

    // Iterate through the string until the null terminator is encountered
    while (*(s + len) != '\0')
        len++;

    return (len);  // Return the length of the string
}
