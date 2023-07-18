#include "main.h"
/**
 * print_alphabet_x10-writes alphabet 10 times
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	char a;
	int i;

	i = 0;

	while (i <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
		i++;
	}
}
