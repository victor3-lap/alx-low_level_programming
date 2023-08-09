#include "main.h"
/**
 * create_array - function that creates an array of chars.
 * @size: size of the unsigned int
 * @c: character to be used
 * Return: Returns a pointer to the array,
 * or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);




}
