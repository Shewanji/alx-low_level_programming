#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to check the bit in
 * @index: the index of the bit to check (starting from 0)
 *
 * Return: the value of the bit at the given index (0 or 1), or -1 if an
 *         error occurred (e.g. if the index is out of range)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}

