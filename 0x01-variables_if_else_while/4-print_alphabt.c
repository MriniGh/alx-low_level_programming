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
	char letter;

	for (letter = 'a'; letter <= 'z' ; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			letter++;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
