#include <stdio.h>

/**
 * main - Prints numbers between 0 to 1000 with commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e, j;

	i = 48;
	e = 48;
    j = 48;

	while (i < 58)
	{
		while (e < 58)
		{
            while (j < 58)
            {
                if (i != e && i != j && e != j && i < e && e < j)
                {
                    putchar(i);
                    putchar(e);
                    putchar(j);
                    if (e == 56 && i == 55 && j == 57)
                    {
                        break;
                    }
                    putchar(',');
                    putchar(' ');
                }
                j++;
            }
            j = 48;
			e++;
		}
		e = 48;
		i++;
	}
	putchar('\n');
	return (0);
}
