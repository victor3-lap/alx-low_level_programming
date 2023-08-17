#include "3-calc.h"

/**
 * op_add- adds two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: addition of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- subtract two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: subraction of @b from @a.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- multiplies two integers.
 * @a: first interger
 * @b: second integer.
 * Return: multiplication of @a and @b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- divides two integer.
 * @a: numerator.
 * @b: denominator.
 * Return: division if @b is not 0.
 */
int op_div(int a, int b)
{
	int numerator = a;
	int denominator = b;

	if (denominator == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (numerator / denominator);
}

/**
 * op_mod- finds the remainder.
 * @a: quotient.
 * @b: divisor.
 * Return: remainder if @b is not 0.
 */
int op_mod(int a, int b)
{
	int quotient = a;
	int divisor = b;

	if (divisor == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (quotient % divisor);
}
