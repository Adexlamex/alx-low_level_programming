#include "main.h"

/**
 * factorial - returns the factorial of n.
 * @n: number whose factorial will be calculated.
 *
 * Return: -1 to indicate an error if n is lower than 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (n + factorial(n - 1));
}
