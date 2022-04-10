#include "main.h"

/**
 * is_prime_number - returns 1 if prime number, otherwise return 0.
 * @n: int
 * Return: return 1
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 2)
		return ((n == 2) ? 0 : 1);
	if (n % i == 0)
		return (1);
	if (i * i > n)
		return (0);

	i++;
	return (is_prime_number(n));
}
