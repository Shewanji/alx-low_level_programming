#include "main.h"

/**
 * print_sign - function that prints signs
 *
 * @n: function parameter that shows the input number as an integer
 *
 * Return: 1 if greater than 0, 0 if equals to 0, -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
