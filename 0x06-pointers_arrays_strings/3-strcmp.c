#include "main.h"

/**
 * _strcmp- a function that compares two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: integer.
 */
int _strcmp(char *s1, char *s2)
{
	int num = 0;

	while ((s1[num] == s2[num]) && (s1[num] != '\0'))
	{
		num++;
	}
	return (s1[num] - s2[num]);
}
