#include <stdio.h>
/**
 * main - Entry point of a function
 *
 * Description: prints single digit numbers starting from 0
 * Return: returns 0 at the end (success)
 */
int main(void)
{	int i, j;
	for (i = 0; i <= 9; i++)
		for (j = 1; j <= 9; j++)
	{	if (j > i)
		{	putchar(i + '0');
			putchar(j + '0');
			if (i != 8)
			{	putchar(',');
				putchar(' ');
			}		
		}
	}
	putchar('\n');
	return (0);
}
