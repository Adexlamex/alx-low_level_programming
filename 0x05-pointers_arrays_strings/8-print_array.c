#include "main.h"

/**
 * print_array - prints elements of arrays.
 * @a: the pointed string a.
 * @n: the integer.
 *
 * Return: always 0.
 */

void print_array(int *a, int n)
{
	int index = 0, len = 0, n;

	while (str[index++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		_putchar(str[index]);

	_putchar('\n');
}
