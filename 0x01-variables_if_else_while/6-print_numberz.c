#include <stdio.h>

/**
 * main - main function is the starting point for program execution
 *
 * Return: always zero
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
