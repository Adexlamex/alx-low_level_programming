#include "main.h"

/**
 * print_line - draws a straight line.
 * @n:is the number of times _ is printed.
 * _ - character printed.
 * Return: always 0.
 */

void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar('_');
	}
	else 
		_putchar('\n');
	return (0);
}
