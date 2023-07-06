#include "main.h"

/**
 * clear_bit - sets function value bit to index 0
 * @n: bit pointer
 * @index: start index 0
 * Code by - yusifhuseini
 * Return: value 1 on sucess, or -1 if fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
