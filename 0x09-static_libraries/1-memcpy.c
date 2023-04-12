#include "main.h"

/**
 * _memcpy - irontnoux2
 * @dest: the pointer to char params
 * @src: the pointer to char params
 * @n: the size
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
