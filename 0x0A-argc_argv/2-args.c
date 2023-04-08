#include <stdio.h>

/**
 * main - function that prints all arguments it receives
 * @argc: command line arguement
 * @argv: an array
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);

}
