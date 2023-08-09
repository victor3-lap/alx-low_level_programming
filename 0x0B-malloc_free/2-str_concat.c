#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{

	int s1len = 0;
	int s2len = 0;
	char *str;
	int i;

	if (s1 == NULL)
		s1 = '';
	if (s2 == NULL)
		s2 = '';

	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;
	str = (char *)malloc(sizeof(char) * (s1len + s2len) + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (i = 0; s2[i] != '\0'; i++)
		str[s1len + i] = s2[i];

	return (str);
}

