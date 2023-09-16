#include "main.h"

/**
 * print_to_98 - prints from n to 98
 * @n: number to start from
 *
 * Return: 0
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%i", n);
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%i, ", n);
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%i, ", n);
			n--;
		}
	}
	_putchar('\n');
}
