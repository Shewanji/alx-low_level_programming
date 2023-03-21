#include "main.h"
#include <stdio.h>


/**
 * print_to_98 - function that prints all natural numbers from n to 98
 *
 * @n: natural number
 *
 * Return: empty return
 */

void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d, ", i);
		}
		printf("%d", 98);
	}
	else if (n < 0)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d, ", i);
		}
		printf("%d", 98);
	}
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d, ", i);
		}
		printf("%d", 98);
	}
	else if (n == 98)
	{
		printf("%d", 98);
	}
	printf("\n");
}

