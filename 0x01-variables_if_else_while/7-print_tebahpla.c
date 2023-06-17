#include <stdio.h>

/**
 * main - prints the alphabet
 *	in reverse.
 * Return: always 0.
*/

int main(void)
{
	char al;

	for (al = 'z'; al > 'a'; al--)
	{
		putchar(al);
	}

	putchar('\n');
	return (0);
}
