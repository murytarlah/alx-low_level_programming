#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: int
 * Return: factorial of a given number
 */

int factorial(int n)
{
	return n * factorial(n - 1);
}
