#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		c = 'a';

		for (; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
