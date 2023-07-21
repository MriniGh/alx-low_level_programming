#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		_putchar('0' + abs(n / 10));
		_putchar('0' + abs(n % 10));
		_putchar(',');
		_putchar(' ');

		if (n < 98)
			n++;
		else
			n--;
	}
	_putchar('0' + abs(n / 10));
	_putchar('0' + abs(n % 10));
	_putchar('\n');
}
