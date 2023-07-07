#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two integers.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: always 0 on success and 1 if any error.
 */

int main (int argc, char **argv)
{
	int result, num1, num2;

	if(argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;

		printf("%d\n", result);
	}
	return (0);
}
