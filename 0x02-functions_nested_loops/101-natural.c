#include <stdio.h>

/**
 * main - function is the starting point of program execution
 *
 * Return: always zero
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;

	for (i = 0 ; i < 1024 ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
		printf("%d\n", sum);
		return (0);
}
