#include "main.h"

/**
 * _sqrt_recursion -returns the natural square root of a number.
 * @n: int
 * Return: natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if ((i * i) < n)
	{
		i++;
		return (_sqrt_recursion(n));
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
		return (-1);
}
