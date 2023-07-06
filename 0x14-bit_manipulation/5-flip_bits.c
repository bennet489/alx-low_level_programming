#include "main.h"

/**
 * flip_bits - return flip bit num
 * @n: first int num
 * @m: second int num
 * Code by - yusifhuseini
 * Return: value bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_count = 0;
	unsigned long int mask = n ^ m;

	while (mask != 0)
	{
		bit_count += mask & 1;
		mask >>= 1;
	}

	return (bit_count);
}
