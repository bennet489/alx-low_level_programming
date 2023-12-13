#include "search_algos.h"

/**
 * interpolation_search - locates a value in an array
 * @array: the array to be located
 * @size: the array's size
 * @value: the value to be located
 * Return: the number index
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, l, h;
	double mid;

	if (array == NULL)
		return (-1);

	l = 0;
	h = size - 1;

	while (size)
	{
		mid = (double)(h - l) / (array[h] - array[l]) * (value - array[l]);
		pos = (size_t)(l + mid);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			l = pos + 1;
		else
			h = pos - 1;

		if (l == h)
			break;
	}

	return (-1);
}
