#include "main.h"

/**
 * main - main block
 * Description: prints the first 50 fibonnaci numbers
 * Return:  0
 */
int main(void)
{
	int a = 1, b = 2, d = 0, c = 2;

	printf("%d, %d, ", a, b);

	while (c < 50)
	{
		d = a + b;
		printf("%d, ", d);
		a = b;
		b = d;
		c++;
	}
	printf("\n");
	return (0);
}
