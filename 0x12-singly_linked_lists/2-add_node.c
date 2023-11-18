#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - To add a new node at the end
 * of the list_t lists.
 * @head: linked list head
 * @str: string parameter
 * Return: address of the head linked list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node, *reccent_node;
	int s;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (s = 0; str[s]; s++)
		;

	new_node->len = n;
	new_node->next = NULL;
	reccent_node = *head;

	if (reccent_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (reccent_node->next != NULL)
			reccent_node = reccent_node->next;
		reccent_node->next = new_node;
	}
	return (*head);
}


