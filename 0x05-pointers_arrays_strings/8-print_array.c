#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * add a new line
 * @a: print array
 * @n: number of elements to print
 * return - void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
		printf("\n");
}
