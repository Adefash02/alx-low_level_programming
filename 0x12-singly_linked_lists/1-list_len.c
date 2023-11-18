#include "lists.h"

/**
 * list_len - length of list
 * @h: parameter for the first node
 * Rerurn: the number of nodes in the nodes
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	if (h == NULL)
		return (0);
	for (n = 1; h->next != NULL; n++)
		h = h->next;
	return (n);
}

