#include "main.h"

/**
 * _isupper - checks for uppercase
 *	letters in the input.
 * @c: the integer written.
 *
 * Return: always 0.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		
		return(1);

	else
		return(0);
}
