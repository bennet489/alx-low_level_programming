#include "main.h"

/**
 * set_bit -  sets function bit index 1
 * @n: bin str bit
 * @index: set value index to 0
 * Code by - yusifhuseini
 * Return: value 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
		return (-1);
	*n |= (1 << index);

	return (1);
}
