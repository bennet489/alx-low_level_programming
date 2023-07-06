#include "main.h"

/**
 * get_endianness - endianness function int check
 * Code by - yusifhuseini
 * Return: value 0 or 1
 */

int get_endianness(void)
{
	int j = 1;
	char *ptr = (char *)&j;

	if (*ptr == 1)
		return (1);

	return (0);
}
