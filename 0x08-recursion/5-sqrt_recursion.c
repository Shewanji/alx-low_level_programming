#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: parameter function
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root
 * @n: number
 * @i: iterative parameter
 * Return: number
 *
 */

int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
