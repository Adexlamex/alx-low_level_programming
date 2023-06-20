#include "main.h"

/**
 * _islower - prints the characteristic
 *	of the letter.
 * c - an integer declared.
 * Return: always 0.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

	{
		return (1);
	}
	else
		return (0);
}
