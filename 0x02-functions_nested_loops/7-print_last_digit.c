#include "main.h"

/**
 * print_last_digit - prints the last digit
 *	of a number.
 * @n: the number
 * last_digit: the digit printed.
 * Return: always 0.
*/

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ld *= -1;
	}

	_putchar(ld + '0');
	return (ld);
}
