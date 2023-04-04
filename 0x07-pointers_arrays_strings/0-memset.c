#include "main.h"

/**
 * _memset - ironnou
 * @s: the pointer to char params
 * @b: the data to change
 * @n: the index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

