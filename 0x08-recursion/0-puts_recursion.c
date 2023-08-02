#include "main.h"
/**
 * _puts_recursion - prints string,
 * followed by a new line
 * @s : char to be used in the function
 * Return - return 0
 */
void _puts_recursion(char *s)
{
	if (*s == "\0")

		_putchar('\n');

	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}


}

