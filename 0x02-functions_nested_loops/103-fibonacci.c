#include <stdio.h>

/**
 * main - function that shows the start of program execution
 *
 * Return: always zero
 */

int main(void)
{
	long int n1 = 1, n2 = 2, fn = 0, sum = 0;

	while (n1 <= 4000000)
	{
		if (n1 % 2 == 0)
		{
			sum += n1;
		}

		fn = n1 + n2;
		n1 = n2;
		n2 = fn;
	}

	printf("%ld\n", sum);

	return (0);
}
