#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name : char to be printed
 * @f : function pointer
 * Return: return 0
 */

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return;
	f(name)
}
