#include "main.h"

/**
 * _isalpha - function checks whether a character is an alphabet or not
 *
 * @c: the c character in ASCII code
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);

}
