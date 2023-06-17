#include <stdio.h>

/**
 * main - prints number in base
 *	16 in lower case.
 * Return: always 0.
*/

int main(void)
{
	char num;

	for (num = 0; num <= 'f'; num++)
	{
		putchar(num + '0x');
	}

	putchar('\n);
	return (0);
}
