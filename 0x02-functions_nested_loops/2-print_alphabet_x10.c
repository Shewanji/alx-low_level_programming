#include "main.h"

/**
 * print_alphabet_x10 - function prints 10x alphabets
 *
 * _putchar: writes the character to stdout
 *
 * Return: always 0 when successful
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}
