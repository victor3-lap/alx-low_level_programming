#include "main.h"
/**
 * _print_rev_recursion - print string
 * @s: string to be print
 * Return - Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_purchar(*s);
		_print_rev_recursion(s + 1);
	}
	else
	_putchar('\n');
}
