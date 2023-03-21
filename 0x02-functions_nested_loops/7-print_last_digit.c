#include "main.h"

/**
 * print_last_digit - fnction that prints the last digit of a number
 *
 * @i: input number as an integer
 *
 * Return: the value of the last digit
 */

int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (i < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
