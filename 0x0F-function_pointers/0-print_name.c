#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - the function that prints a name
 * @name: the name to print
 * @f: This is pointer to a function to use to print name
 *
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
