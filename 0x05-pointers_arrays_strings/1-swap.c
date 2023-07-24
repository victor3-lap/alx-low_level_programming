#include "main.h"
/**
 * swap_ - function that swaps the values of two integers.
 * @a: value to be swapped
 * @b: second value to be swapped'
 * Return: return nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	 c = *a;
	*a = *b;
	*b = c;

}
