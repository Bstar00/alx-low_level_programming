#include <stdio.h>

/**
 * main - Entry point of function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    char ch;  // Declare a variable to store characters

    // Loop through the lowercase alphabet from 'a' to 'z'
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);  // Print the current character
    }

    putchar('\n');  // Print a newline character to move to the next line
    return (0);    // Return 0 to indicate successful completion
}
