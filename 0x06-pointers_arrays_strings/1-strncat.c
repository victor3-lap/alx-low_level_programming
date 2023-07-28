#include "main.h"

/**
 * _strncat- a function that concatenates two strings.
 * @dest: first string to append to.
 * @src: the string to append to the other string.
 * @n: number of characters in thesecond string that can be append to
 * the first string.
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *new;
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while ((src[j] != '\0') && (j < n))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	new = dest;
	return (new);
}

