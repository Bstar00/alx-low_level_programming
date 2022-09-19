#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_rev - function to prints a string in reverse order
* @s: string to reverse
* Return: nothing
*/

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		puthcar(*(s + len));
	putchar(10);
}
