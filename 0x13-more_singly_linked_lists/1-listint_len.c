#include "lists.h"

/**
 * listint_len - number of element in a
 * linked listint_t list shoul return.
 * @h: parameter of pointer to the head of
 * the listint_t list.
 * Return: return number of element in listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

