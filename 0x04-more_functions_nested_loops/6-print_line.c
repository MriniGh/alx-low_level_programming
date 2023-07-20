#include "main.h"

/**
 * print_line- Prints the numbers from 0 to 14, ten times.
  * @n: The number of times to print the underscore '_'.
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
