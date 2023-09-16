#include "main.h"

/**
 * main - main block
 * Description: prints the first 50 fibonnaci numbers
 * Return:  0
 */
int main(void)
{
	unsigned long a = 0, b = 1, c = 0, sum = 0;

	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;

		if (c % 2 == 0 )
		{
			sum += c;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
