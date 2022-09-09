#include <stdio.h>

/**
 * main - Prints the sizeof many var types
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{	
	char a;
	int b;
	long int c;
	long long int d;
	float e;




	printf("Size of char: %d bytes(s)\n" , sizeof(a));

	printf("Size of an int: %d bytes(s)\n" , sizeof(b));

	printf("Size of long int: %d bytes(s)\n" , sizeof(c));

	printf("Size oflong long int: %d bytes(s)\n" , sizeof(d));

	printf("Size of float: %d bytes(s)\n" , sizeof(e));



	return (0);

}
