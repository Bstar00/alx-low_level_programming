#include <stdio.h>
#include <stdlib.h>

/**
* main - program that multiplies two numbers.
* @argc: this is the argument count
* @argv: this is the argument vector
* Return: 0;
*/
int main(int argc, char **argv)
{
	int num, mul;

	mul = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (num = 1; num < argc; num++)
	{
		mul = mul * atoi(argv[num]);
	}
	printf("%d\n", num);
	return (0);
}
