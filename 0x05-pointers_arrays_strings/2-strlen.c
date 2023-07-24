#include "main.h"

/**
 * _strlen-returns the length of a string.
 * @s: string whom length is to be determined
 *
 * Return: Length oof string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		++len;
	}
	return (len);
}
