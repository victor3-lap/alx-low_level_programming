#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that searches for an integer
 * @array: the array
 * @cmp: pointer to the function
 * @size: the number of elements in the array
 * Return: return the index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{

		if (cmp(array[i]) == 1)
			return (1);


	}
	return (-1);
}

