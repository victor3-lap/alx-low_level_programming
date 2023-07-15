#include <stdio.h>
/**
 * main - Entry point
 * Disciption: 'Print alphabets'
 * Return: always 0 (Success)
*/
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
