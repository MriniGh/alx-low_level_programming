#include "main.h"
/**
 * print_alphabet-writes alphabet
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */
void  print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
