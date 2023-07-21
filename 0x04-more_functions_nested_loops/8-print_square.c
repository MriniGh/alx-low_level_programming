#include "main.h"

/**
 * print_square - Prints a square of '#' characters of a given size.
 * @size: The size of the square to be printed.
 *
 * If size is 0 or less, the function prints only a new line.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
