#include "lists.h"
/**
 * sum_listint - Returns the sum of all the
 * data (n) of a listint_t list.
 * @head: A pointer to the head of the list.
 * Return: The sum of all the data in the list,
 * or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}