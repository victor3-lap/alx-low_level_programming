#include "main.h"

/**
 * _strncpy- a function that copies a string.
 * @dest: string to copy to .
 * @src: string to be copied.
 * @n: number of characters to be copied.
 * Return: copied string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *new;
	int j;

	j = 0;
	while ((src[j] != '\0') && (j < n))
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;														}
	new = dest;
	return (new);
}
