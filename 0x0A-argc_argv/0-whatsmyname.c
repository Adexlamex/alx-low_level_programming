#include <stdio.h>

/**
 * main - main environment.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: always 0.
 */

int main(int argc, char **argv)
{
	int r;

	for (r = 0; r < argc; r++)
	{
		printf("%s\n", argv[r]);
	}
	return (0);
}
