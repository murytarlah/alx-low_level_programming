#include "main.h"

/**
 * n_times_table - generates the n times table when n is between 0 and 15
 * @n: the argument to print it's time table
 *
 * Return:void
 */
void n_times_table(int n)
{
	int a, b,  rep;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			rep = a * b;
			if (b == 0)
				_putchar('0' + rep);
			
			else if (rep < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + rep);
			}
			else if (rep < 100)
			{
				_putchar(' ');
				_putchar('0' + rep / 10);
				_putchar('0' + rep % 10);
			}
			else
			{	
				_putchar('0' + rep / 100);
				_putchar('0' + (rep - 100) / 10);
				_putchar('0' + rep % 10);
			}

			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

/**
 * print_times_table - prints n times table
 * @n: the argument to print it's time table
 *
 * Return:void
 */
void print_times_table(int n)
{
	if (n > 0 && n	 <= 15)
	{
		n_times_table(n);
	}
}
