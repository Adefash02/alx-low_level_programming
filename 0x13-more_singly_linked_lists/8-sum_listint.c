#include "lists.h"
/**
 * sum_listint - sum up all the data of a list
 * @head: parameter for pointer to the list
 * Return: return sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
