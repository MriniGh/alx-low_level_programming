#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line.
 */
void print_most_numbers(void)
{
	int i;
	char digit;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			i++;
		digit = i + '0';
		_putchar(digit);
	}
	_putchar('\n');
}
