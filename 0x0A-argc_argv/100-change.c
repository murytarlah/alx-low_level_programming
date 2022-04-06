#include "main.h"

/**
 * main - prints the minimum no of coins to make a change.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * @calculate_quarters: return number of quarters coin.
 * @calculate_dimes: gets the number of dimes coin.
 * @calculate_nickels: gets the number of nickels coin.
 * @calculate_pennies: gets the number of pennies coin.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int coins = 0, cents = argv[1];

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents == 0)
	{
		printf("%i\n", coins);
	}
	else
	{

		int quarters = calculate_quarters(cents);

		cents -= quarters * 25;

		int dimes = calculate_dimes(cents);

		cents = cents - dimes * 10;

		int nickels = calculate_nickels(cents);

		cents = cents - nickels * 5;

		int pennies = calculate_pennies(cents);

		cents = cents - pennies * 1;

		coins += quarters + dimes + nickels + pennies;

	}
	printf("%i\n", coins);
	return (0);
}


int calculate_quarters(int cents)
{
	int count = 0;

	while (cents >= 25)
	{
		cents = cents - 25;
		count++;
	}
	return (count);
}

int calculate_dimes(int cents)
{
	int count = 0;

	while (cents >= 10)
	{
		cents = cents - 10;
		count++;
	}
	return (count);
}

int calculate_nickels(int cents)
{
	int count = 0;

	while (cents >= 5)
	{
		cents = cents - 5;
		count++;
	}
	return (count);
}

int calculate_pennies(int cents)
{
	int count = 0;

	while (cents >= 1)
	{
		cents = cents - 1;
		count++;
	}
	return (count);
}
