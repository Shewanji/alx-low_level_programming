#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: a pointer to the string
 *
 * Return: tthe length of the string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node -function that adds a new node at the beginning of a list_t list
 * @head: a pointer to the head of the list_t list
 * @str: the string to be inserted into the new element
 *
 * Return: a pointer to the newly created node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
