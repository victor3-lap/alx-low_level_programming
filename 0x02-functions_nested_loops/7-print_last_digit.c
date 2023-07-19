#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int lastnum;

	lastnum = n % 10;
	if (lastnum < 0)
	{
		lastnum *= -1;
	}
	_putchar(lastnum + '0');

	return (lastnum);
}
