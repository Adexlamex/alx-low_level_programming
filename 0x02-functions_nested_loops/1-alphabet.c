#include "main.h"

/**
 * main - Prints alphabets in
 *	small letters.
 * Return: always 0.
*/

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	char alp;
	for (alp = 'a'; alp < 'z'; alp++)
	{
		_putchar(alp);
	}

	_putchar('\n');
	return (0);
}
