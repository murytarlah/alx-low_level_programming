#include <stdio.h>

/**
 * main - Prints numbers between 0 to 100 with commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	while (i < 58)
	{
		while (e < 58)
		{
			if (i != e && i < e)
			{
				putchar(i);
				putchar(e);	
				if (i == 56 && e == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			e++;
		}
		e = 48;
		i++;
	}
	putchar('\n');
	return (0);
}
