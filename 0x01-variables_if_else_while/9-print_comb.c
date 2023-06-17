#include <stdio.h>

/**
 * main - prints combinations of
 *	single digits.
 * Return: always 0.
*/

int main(void)
{
	int num;
	for (num = 0; num < 10; num++)
	{	
		putchar((num % 10) + '0');

		if (num == 9)
		continue;
		
		putchar(',');
		putchar(' ');
	}
	putchar(,);
	return (0);
}
