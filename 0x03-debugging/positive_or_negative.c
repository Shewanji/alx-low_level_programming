#include "main.h"

/**
 * positive_or_negative - function shows whether number is positive or negative
 *
 * @i: the input number
 *
 * Return: empty return
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i >= 0)
		printf("%d is positive\n", i);
}
