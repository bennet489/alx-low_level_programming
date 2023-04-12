#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints no of coins to make change
 * @argc: the no of args passed to the func
 * @argv: an aray of the cmd-line arguments passed to the func
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int cent_vals[] = {25, 10, 5, 2, 1};
	int cents, number_of_cents, balance, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	number_of_cents = 0;
	balance = cents;
	for (i = 0; i < 5; ++i)
	{
		number_of_cents += balance / cent_vals[i];
		if ((balance % cent_vals[i]) == 0)
			break;
		balance %= cent_vals[i];
	}
	printf("%d\n", number_of_cents);
	return (0);
}
