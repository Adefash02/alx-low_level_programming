#include "lists.h"

/**
 * print_listint - should prints all elements of listint_t of list
 * @h: parameter for a pointer to a head  of list_t list
 * Return: return number of node in list_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}

