#include <stdio.h>

/**
 * main - function that shows the starting point of a program
 *
 * Return: always zero
 */

int main(void)
{
	int first = 1, second = 2, next, i;

	printf("%d, %d, ", first, second);

	for (i = 3; i <= 98; i++)
	{
		next = first + second;
		printf("%d", next);

		if (i != 98)
		{
			printf(", ");
		}

		first = second;
		second = next;
	}

	printf("\n");

	return (0);
}
