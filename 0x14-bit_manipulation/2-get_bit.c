#include "main.h"

/**
 * get_bit - get function value index
 * @n: chec int bit index
 * @index: int index 0
 * Code by - yusifhuseini
 * Return: value index or NULL
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
		return (-1);
	return (n >> index & 1);
}
