#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: input string
 *
 * Return: reversed string
 */

void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	int j;
	char rev;

	if (!s)
	{
		return;
	}

	while (s[length])
	{
		length++;
	}

	j = length - 1;

	while (i < j)
	{
		rev = s[i];
		s[i] = s[j];
		s[j] = rev;
		i++;
		j--;
	}
}
