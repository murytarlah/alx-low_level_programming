#include "main.h"

/**
 * main - main block
 * Description: prints the first 50 fibonnaci numbers
 * Return:  0
 */
int main(void)
{
	int count = 0;
	unsigned long a = 0, b = 1, c = 0;

	while (count < 50)
	{
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;
		if (count < 49)
		{
			printf(", ");
		}
		count++;
	}
	printf("\n");
	return (0);
}
