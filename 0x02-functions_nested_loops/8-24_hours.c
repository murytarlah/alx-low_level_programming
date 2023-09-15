#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * return: 0
 */

void jack_bauer(void)
{
	int h1 = 0;
	int h2 = 0;
	int m1 = 0;
	int m2 = 0;
	int a = 9;

	while (h1 <= 2)
	{
		h2 = 0;
		if(h1 == 2 )
		{
			a = 3;
		};

		while (h2 <= a)
		{
			m1 = 0;
			while (m1 <= 5)
			{
				m2 = 0;
				while (m2 <= 9)
				{
					_putchar('0' + h1);
					_putchar('0' + h2);
					_putchar(':');
					_putchar('0' + m1);
					_putchar('0' + m2);
					_putchar('\n');
					m2++;
				}
				m1++;
			}
			h2++;
		}
		h1++;
	}
}