#include "search_algos.h"
/**
 * linear_search: Write a function that searches for a value in an array of integers
 * @array: array list
 * @size: size of the array
 * @value: value of the array
 * Return: index where user looks for
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);

	for (; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	} return (-1);
}
