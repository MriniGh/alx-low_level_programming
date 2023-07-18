#include "main.h"
/**
 * print_sign - checks the sign of an integer and prints a sign
 * @n: The integer to check
 *
 * Return: 1 greater than zero, 0 n is zero,-1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
