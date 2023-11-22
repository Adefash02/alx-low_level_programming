#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 * @head: parameter for pointer to address of the
 * head of the listint_t list.
 * @n: parameter of the integer for the new node to
 * contain.
 * Return: return number of node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}

