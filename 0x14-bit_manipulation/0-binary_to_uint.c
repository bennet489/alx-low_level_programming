#include "main.h"

/**
 * binary_to_uint - binary to unsigned int function
 * @b: str binary converted.
 * Code by - yusifhuseini
 * Return: num value or 0 NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		value <<= 1;

		if (b[i] == '1')
		{
			value += 1;
		}
		i++;
	}
	return (value);
}
