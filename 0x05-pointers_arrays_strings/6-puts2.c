#include "main.h"

/**
 * puts2 - prints 1 of 2 char of a string
 * add a new line
 * @str: string to print the chars from
 * return - void
 */
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
