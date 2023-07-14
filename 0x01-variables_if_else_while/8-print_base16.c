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
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar('0' + i);
		}
		else
		{
			putchar('a' + (i - 10));
		}
	}
	putchar('\n');
	return (0);
}
