#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program determines the 1st digit of a given number.
 *
 * Return: 0 on success
 */
int main(void)
{
	int a;

	for (a = 0; a < 10 ; a++)
	{
		putchar('0' + a);
	}
	putchar('\n');
	return (0);
}
