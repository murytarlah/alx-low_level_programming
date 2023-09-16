#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: the argument to print it's time table
 *
 * Return:void
 */


/**
 * n_times_table - prints n times table
 * @n: the argument to print it's time table
 *
 * Return:void
 */

void n_times_table(int n)
{
	int a = 0, b, rep;

	while (a <= n)
	{
		b = 0;
		while (b <= n)
		{
			rep = a * b;
			if (b == 0)
			{
				_putchar('0' + rep);
			}
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
			b++;
		}
		_putchar('\n');
		a++;
	}
}

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return;
	}
	else{		
		n_times_table(n);
	}
}
