#include <stdio.h>

/**
 * Main - program that prints the number of arguments.
 * @argc: argument count.
 * @argcv: argument vector.
 *
 * Return: number of arguments.
 */

int main(int argc, char **argv)
{
	if (argc)
	{
		printf("%d\n", argc - 1);
		(void)argv;
	}
	return (0);
}
