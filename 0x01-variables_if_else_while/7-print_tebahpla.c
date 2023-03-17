#include <stdio.h>

/**
 * main - main function is the starting point for program execution
 *
 * Return: always zero
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
