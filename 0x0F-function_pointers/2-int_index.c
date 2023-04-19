#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - this searches for an integer
 * @array: the array to be searched
 * @size: size of the array
 * @cmp: function to compare
 *
 * Return: return integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if cmp(array[i]);

				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
