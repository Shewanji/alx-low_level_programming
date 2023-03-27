#include "main.h"

/**
 * swap_int -  function that swaps the values of two integers
 *
 * @a: one of the values to be swapped
 *
 * @b: one of the values to be swapped
 *
 * Return: 0
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
