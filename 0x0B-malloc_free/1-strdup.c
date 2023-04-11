#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int len, i;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	new_str = (char *) malloc((len + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}

	new_str[len] = '\0';
	return (new_str);
}
