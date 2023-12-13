#include "search_algos.h"

/**
 * linear_search - locate a value in an array
 * @array: the input of the array
 * @size: array size
 * @value: the value we are seeking for
 * Return: Exit always
 */

int linear_search(int *array, size_t size, int value)
{
	int j;

	if (array == NULL)
		return (-1);

	for (j = 0; j < (int)size; j++)
{
		printf("Value checked array[%u] = [%d]\n", j, array[j]);
		if (value == array[j])
			return (j);
}
	return (-1);
}
