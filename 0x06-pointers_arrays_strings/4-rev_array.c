#include "main.h"

/**
 * reverse_array- a function that reverses the content of an array of integers.
 * @a: the array to work on.
 * @n: the size of the array.
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int num;
	int new;

	num = 0;
	n -= 1;
	while (num < n)
	{
		new = a[num];
		a[num++] = a[n];
		a[n--] = new;
	}
}
