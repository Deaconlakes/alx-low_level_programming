#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data
 * of a doubly linked list
 * @head: pointer to head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int i;

	i = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			i += head->n;
			head = head->next;
		}
	}

	return (i);
}
