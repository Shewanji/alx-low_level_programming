#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the memory allocated for a list_t list
 * @head: pointer to the first node of the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
