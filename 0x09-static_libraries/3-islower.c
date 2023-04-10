#include "main.h"

/**
 * _islower - function checks whether a character is lowercase alphabet
 *
 * @c: the c character in ASCII
 *
 * Return: 1 if c is lowercase, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
