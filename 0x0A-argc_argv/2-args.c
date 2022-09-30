#include <stdio.h>
#include <stdlib.h>

/**
* main - prints all the arguments a program recieves.
* @argc: number of arguments
* @argv: array of arguments
* Return: always (0) success
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}