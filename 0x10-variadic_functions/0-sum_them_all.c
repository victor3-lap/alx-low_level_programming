#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum all parameters
 * @n: the number parameter passed
 * @...: variadic function parameter
 * Return: return the parameter
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list agr;
	unsigned int i,	sum = 0;


	va_start(agr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(agr, int);

	va_end(agr);

	return (sum);

}
