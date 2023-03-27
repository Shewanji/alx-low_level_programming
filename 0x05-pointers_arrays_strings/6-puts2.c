#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 *
 * @str: input string
 */

void puts2(char *str)
{
	int i = 0;
	int t = 0;

	while (str[t] != '\0')
	{
		t++;
	}

	t -= 1;

	for (i = 0; i <= t; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
