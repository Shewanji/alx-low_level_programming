#include "main.h"

/**
 * get_endianness - checks the endianness of the current machine
 *
 * Return: 0 if the machine is big endian, 1 if the machine is little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

    /* If the first byte of i is non-zero, the machine is little endian */
	if (*c)
		return (1);
	else
		return (0);
}

