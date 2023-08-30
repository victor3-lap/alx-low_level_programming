#include "lists.h"
/**
*_listint - function that prints all the elements
*@h: head of the list
*Return: the number of the node
*/
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
