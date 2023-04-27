#include<stdio.h>

/**
 * print_intro - Prints a message before main
 */
void print_intro(void) __attribute__((constructor));

/**
 * print_intro - implementation of print_intro
 */
void print_intro(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
