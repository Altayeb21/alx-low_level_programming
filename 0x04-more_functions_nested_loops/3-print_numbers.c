#include "main.h"

/**
 * print_numbers - print 0-9
 * only using _putchar twice
 *
 * return: Always 0 (Success)
 */

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	for (num >= 0 && num <= 9)
	}
	_putchar('\n');
}
