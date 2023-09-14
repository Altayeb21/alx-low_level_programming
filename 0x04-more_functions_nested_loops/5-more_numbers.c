#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers,
 *	from 0 to 14, followed by a new line.
 *	can only use _putchar three times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		putchar('1' + i);
		putchar('2' + i);
		putchar('3' + i);
		putchar('4' + i);
		putchar('5' + i);
		putchar('6' + i);
		putchar('7' + i);
		putchar('8' + i);
		putchar('9' + i);
		putchar('\n');
	}
}
