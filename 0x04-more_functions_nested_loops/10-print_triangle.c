#include "main.h"

/**
 * print_triangle - prints triangle.
 * @size: size of the triangle.
 */

void print_triangle(int size)
{
	int l, b;

	if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			for (b = size - l; b > 0; b--)
				_putchar(' ');

			for (b = 0; b < l; b++)
				_putchar('#');

			if (l == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
