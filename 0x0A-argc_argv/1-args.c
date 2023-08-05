#include "main.h"
#include <stdio.h>

/**
 * main- prints the number of arguments aside from program name.
 * @argc: number of argument.
 * @argv: arrays of string argument.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
