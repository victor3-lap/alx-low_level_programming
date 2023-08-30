#include "lists.h"
/**
 *add_nodeint - function that adds a new node at the beginning of a list
 *@n: The integer value to be stored in the new node
 *@head: A pointer to a pointer to the head of the list
 *Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Declaring the new_node */
	listint_t *new_node;


	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL); /* Return NULL if memory allocation fails */

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = *head; /* Set the next pointer to the current head */

	 /* Update the head to point to the new node */
	*head = new_node;

	return (new_node);

}
