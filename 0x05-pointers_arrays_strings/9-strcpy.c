#include "main.h"
#include "main.h"

/**
 * _strcpy - Copies a string from source to destination.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination string (dest).
 */
char *_strcpy(char *dest, const char *src)
{
    int i;

    // Ensure neither src nor dest is NULL
    if (!dest || !src)
        return NULL;

    // Copy each character from src to dest
    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    // Add the null terminator to the destination string
    dest[i] = '\0';

    return dest;
}
