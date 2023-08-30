#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a
 * given position in a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index at which to insert the new node, starting at 0.
 * @n: The integer value to be stored in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *new_node, *temp;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0 || *head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	for (count = 1; count < idx; count++)
	{
		temp = temp->next;
	}

	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
