#include <stdio.h>

/**
 * main - function that prints its name
 * @argc: command line arguement
 * @argv: array of command
 * Return: 0 success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
