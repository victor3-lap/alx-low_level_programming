#include "lists.h"

/**
 * add_node - Add a new node at the beginning of a linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: The address of the new element (new node), or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i, count = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	new_node->len = count;
	new_node->next = *head;
	*head = new_node;

	return (*head);

}
