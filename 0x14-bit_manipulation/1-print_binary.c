#include "main.h"

/**
 * print_binary - print binary function num
 * @n: print bin int
 * Code by - yusifhuseini
 * Description: print 0 or 1
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
