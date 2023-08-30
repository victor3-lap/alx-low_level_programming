#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * @h: A pointer to the head of the list.
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{

	size_t count;

	for (count = 0; h != NULL; count++)

		h = h->next;

	return (count);
}
