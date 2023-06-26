#include "main.h"

/**
 * swap_int - swaps values of integers.
 * @a: the first pointed integer.
 * @b: the second pointed integer.
 *
 * Return: always nothing.
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;

	*b = c;
}
