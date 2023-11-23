#include "lists.h"
/**
 * free_listint - function that frees a linked list
 * @head: parameter pointer to the first node of list
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}

