#include "main.h"
#include <limits.h>
/**
 * print_last_digit - prints and returns the last digit of a number
 * @n: The number
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
	{
		last_digit = 8;
	}
	else
	{
		last_digit = n % 10;
		if (last_digit < 0)
			last_digit *= -1;
		_putchar(last_digit + '0');
	}
	return (last_digit);
}
