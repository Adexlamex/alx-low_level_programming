#include <stdio.h>

/**
 * main - the program prints every arguments it receives.
 * @argc: the argument count.
 * @argv: the argument vector.
 *
 * Return: always 0.
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
