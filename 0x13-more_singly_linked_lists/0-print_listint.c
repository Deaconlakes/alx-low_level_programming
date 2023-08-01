#include"lists.h"
/**
  *print_listint-function that prints the contents of the list
  *@h:pinter to the header file
  *
  *Return: number of nodes
**/
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
/**		if (!h->n)
			continue;
		else**/
		printf("%d\n", h->n);
	h = h->next;
	n++;
	}

	return (n);
}
